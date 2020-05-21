#pragma once

////
//
//      STM32F4 USB_OTG_HS peripherals
//
////

////
//
//      USB on the go high speed
//
////

struct stm32f405_otg_hs_device_t
{
    volatile uint32_t OTG_HS_DCFG;         // [read-write] OTG_HS device configuration register
    volatile uint32_t OTG_HS_DCTL;         // OTG_HS device control register
    volatile uint32_t OTG_HS_DSTS;         // [read-only] OTG_HS device status register
    reserved_t<0x1> _0x10;
    volatile uint32_t OTG_HS_DIEPMSK;      // [read-write] OTG_HS device IN endpoint common interrupt mask register
    volatile uint32_t OTG_HS_DOEPMSK;      // [read-write] OTG_HS device OUT endpoint common interrupt mask register
    volatile uint32_t OTG_HS_DAINT;        // [read-only] OTG_HS device all endpoints interrupt register
    volatile uint32_t OTG_HS_DAINTMSK;     // [read-write] OTG_HS all endpoints interrupt mask register
    reserved_t<0x2> _0x28;
    volatile uint32_t OTG_HS_DVBUSDIS;     // [read-write] OTG_HS device VBUS discharge time register
    volatile uint32_t OTG_HS_DVBUSPULSE;   // [read-write] OTG_HS device VBUS pulsing time register
    volatile uint32_t OTG_HS_DTHRCTL;      // [read-write] OTG_HS Device threshold control register
    volatile uint32_t OTG_HS_DIEPEMPMSK;   // [read-write] OTG_HS device IN endpoint FIFO empty interrupt mask register
    volatile uint32_t OTG_HS_DEACHINT;     // [read-write] OTG_HS device each endpoint interrupt register
    volatile uint32_t OTG_HS_DEACHINTMSK;  // [read-write] OTG_HS device each endpoint interrupt register mask
    reserved_t<0x1> _0x44;
    volatile uint32_t OTG_HS_DIEPEACHMSK1; // [read-write] OTG_HS device each in endpoint-1 interrupt register
    reserved_t<0xf> _0x84;
    volatile uint32_t OTG_HS_DOEPEACHMSK1; // [read-write] OTG_HS device each OUT endpoint-1 interrupt register
    reserved_t<0x1e> _0x100;
    volatile uint32_t OTG_HS_DIEPCTL0;     // OTG device endpoint-0 control register
    reserved_t<0x1> _0x108;
    volatile uint32_t OTG_HS_DIEPINT0;     // OTG device endpoint-0 interrupt register
    reserved_t<0x1> _0x110;
    volatile uint32_t OTG_HS_DIEPTSIZ0;    // [read-write] OTG_HS device IN endpoint 0 transfer size register
    volatile uint32_t OTG_HS_DIEPDMA1;     // [read-write] OTG_HS device endpoint-1 DMA address register
    volatile uint32_t OTG_HS_DTXFSTS0;     // [read-only] OTG_HS device IN endpoint transmit FIFO status register
    reserved_t<0x1> _0x120;
    volatile uint32_t OTG_HS_DIEPCTL1;     // OTG device endpoint-1 control register
    reserved_t<0x1> _0x128;
    volatile uint32_t OTG_HS_DIEPINT1;     // OTG device endpoint-1 interrupt register
    reserved_t<0x1> _0x130;
    volatile uint32_t OTG_HS_DIEPTSIZ1;    // [read-write] OTG_HS device endpoint transfer size register
    volatile uint32_t OTG_HS_DIEPDMA2;     // [read-write] OTG_HS device endpoint-2 DMA address register
    volatile uint32_t OTG_HS_DTXFSTS1;     // [read-only] OTG_HS device IN endpoint transmit FIFO status register
    reserved_t<0x1> _0x140;
    volatile uint32_t OTG_HS_DIEPCTL2;     // OTG device endpoint-2 control register
    reserved_t<0x1> _0x148;
    volatile uint32_t OTG_HS_DIEPINT2;     // OTG device endpoint-2 interrupt register
    reserved_t<0x1> _0x150;
    volatile uint32_t OTG_HS_DIEPTSIZ2;    // [read-write] OTG_HS device endpoint transfer size register
    volatile uint32_t OTG_HS_DIEPDMA3;     // [read-write] OTG_HS device endpoint-3 DMA address register
    volatile uint32_t OTG_HS_DTXFSTS2;     // [read-only] OTG_HS device IN endpoint transmit FIFO status register
    reserved_t<0x1> _0x160;
    volatile uint32_t OTG_HS_DIEPCTL3;     // OTG device endpoint-3 control register
    reserved_t<0x1> _0x168;
    volatile uint32_t OTG_HS_DIEPINT3;     // OTG device endpoint-3 interrupt register
    reserved_t<0x1> _0x170;
    volatile uint32_t OTG_HS_DIEPTSIZ3;    // [read-write] OTG_HS device endpoint transfer size register
    volatile uint32_t OTG_HS_DIEPDMA4;     // [read-write] OTG_HS device endpoint-4 DMA address register
    volatile uint32_t OTG_HS_DTXFSTS3;     // [read-only] OTG_HS device IN endpoint transmit FIFO status register
    reserved_t<0x1> _0x180;
    volatile uint32_t OTG_HS_DIEPCTL4;     // OTG device endpoint-4 control register
    reserved_t<0x1> _0x188;
    volatile uint32_t OTG_HS_DIEPINT4;     // OTG device endpoint-4 interrupt register
    reserved_t<0x1> _0x190;
    volatile uint32_t OTG_HS_DIEPTSIZ4;    // [read-write] OTG_HS device endpoint transfer size register
    volatile uint32_t OTG_HS_DIEPDMA5;     // [read-write] OTG_HS device endpoint-5 DMA address register
    volatile uint32_t OTG_HS_DTXFSTS4;     // [read-only] OTG_HS device IN endpoint transmit FIFO status register
    reserved_t<0x1> _0x1a0;
    volatile uint32_t OTG_HS_DIEPCTL5;     // OTG device endpoint-5 control register
    reserved_t<0x1> _0x1a8;
    volatile uint32_t OTG_HS_DIEPINT5;     // OTG device endpoint-5 interrupt register
    reserved_t<0x1> _0x1b0;
    volatile uint32_t OTG_HS_DIEPTSIZ5;    // [read-write] OTG_HS device endpoint transfer size register
    reserved_t<0x1> _0x1b8;
    volatile uint32_t OTG_HS_DTXFSTS5;     // [read-only] OTG_HS device IN endpoint transmit FIFO status register
    reserved_t<0x1> _0x1c0;
    volatile uint32_t OTG_HS_DIEPCTL6;     // OTG device endpoint-6 control register
    reserved_t<0x1> _0x1c8;
    volatile uint32_t OTG_HS_DIEPINT6;     // OTG device endpoint-6 interrupt register
    reserved_t<0x5> _0x1e0;
    volatile uint32_t OTG_HS_DIEPCTL7;     // OTG device endpoint-7 control register
    reserved_t<0x1> _0x1e8;
    volatile uint32_t OTG_HS_DIEPINT7;     // OTG device endpoint-7 interrupt register
    reserved_t<0x45> _0x300;
    volatile uint32_t OTG_HS_DOEPCTL0;     // OTG_HS device control OUT endpoint 0 control register
    reserved_t<0x1> _0x308;
    volatile uint32_t OTG_HS_DOEPINT0;     // [read-write] OTG_HS device endpoint-0 interrupt register
    reserved_t<0x1> _0x310;
    volatile uint32_t OTG_HS_DOEPTSIZ0;    // [read-write] OTG_HS device endpoint-1 transfer size register
    reserved_t<0x3> _0x320;
    volatile uint32_t OTG_HS_DOEPCTL1;     // OTG device endpoint-1 control register
    reserved_t<0x1> _0x328;
    volatile uint32_t OTG_HS_DOEPINT1;     // [read-write] OTG_HS device endpoint-1 interrupt register
    reserved_t<0x1> _0x330;
    volatile uint32_t OTG_HS_DOEPTSIZ1;    // [read-write] OTG_HS device endpoint-2 transfer size register
    reserved_t<0x3> _0x340;
    volatile uint32_t OTG_HS_DOEPCTL2;     // OTG device endpoint-2 control register
    reserved_t<0x1> _0x348;
    volatile uint32_t OTG_HS_DOEPINT2;     // [read-write] OTG_HS device endpoint-2 interrupt register
    reserved_t<0x1> _0x350;
    volatile uint32_t OTG_HS_DOEPTSIZ2;    // [read-write] OTG_HS device endpoint-3 transfer size register
    reserved_t<0x3> _0x360;
    volatile uint32_t OTG_HS_DOEPCTL3;     // OTG device endpoint-3 control register
    reserved_t<0x1> _0x368;
    volatile uint32_t OTG_HS_DOEPINT3;     // [read-write] OTG_HS device endpoint-3 interrupt register
    reserved_t<0x1> _0x370;
    volatile uint32_t OTG_HS_DOEPTSIZ3;    // [read-write] OTG_HS device endpoint-4 transfer size register
    reserved_t<0x5> _0x388;
    volatile uint32_t OTG_HS_DOEPINT4;     // [read-write] OTG_HS device endpoint-4 interrupt register
    reserved_t<0x1> _0x390;
    volatile uint32_t OTG_HS_DOEPTSIZ4;    // [read-write] OTG_HS device endpoint-5 transfer size register
    reserved_t<0x5> _0x3a8;
    volatile uint32_t OTG_HS_DOEPINT5;     // [read-write] OTG_HS device endpoint-5 interrupt register
    reserved_t<0x7> _0x3c8;
    volatile uint32_t OTG_HS_DOEPINT6;     // [read-write] OTG_HS device endpoint-6 interrupt register
    reserved_t<0x7> _0x3e8;
    volatile uint32_t OTG_HS_DOEPINT7;     // [read-write] OTG_HS device endpoint-7 interrupt register

    static constexpr uint32_t OTG_HS_DCFG_RESET_VALUE = 0x2200000;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DCFG_DSPD =          // Device speed
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_DCFG_NZLSOHSK = 0x4; // Nonzero-length status OUT handshake
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DCFG_DAD =           // Device address
        bit_field_t<4, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DCFG_PFIVL =         // Periodic (micro)frame interval
        bit_field_t<11, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DCFG_PERSCHIVL =     // Periodic scheduling interval
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t OTG_HS_DCTL_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DCTL_RWUSIG = 0x1;     // Remote wakeup signaling
    static constexpr uint32_t OTG_HS_DCTL_SDIS = 0x2;       // Soft disconnect
    static constexpr uint32_t OTG_HS_DCTL_GINSTS = 0x4;     // Global IN NAK status
    static constexpr uint32_t OTG_HS_DCTL_GONSTS = 0x8;     // Global OUT NAK status
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DCTL_TCTL =            // Test control
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t OTG_HS_DCTL_SGINAK = 0x80;    // Set global IN NAK
    static constexpr uint32_t OTG_HS_DCTL_CGINAK = 0x100;   // Clear global IN NAK
    static constexpr uint32_t OTG_HS_DCTL_SGONAK = 0x200;   // Set global OUT NAK
    static constexpr uint32_t OTG_HS_DCTL_CGONAK = 0x400;   // Clear global OUT NAK
    static constexpr uint32_t OTG_HS_DCTL_POPRGDNE = 0x800; // Power-on programming done

    static constexpr uint32_t OTG_HS_DSTS_RESET_VALUE = 0x10;
    static constexpr uint32_t OTG_HS_DSTS_SUSPSTS = 0x1; // Suspend status
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DSTS_ENUMSPD =      // Enumerated speed
        bit_field_t<1, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_DSTS_EERR = 0x8;    // Erratic error
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DSTS_FNSOF =        // Frame number of the received SOF
        bit_field_t<8, 0x3fff>::value<X>();

    static constexpr uint32_t OTG_HS_DIEPMSK_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DIEPMSK_XFRCM = 0x1;      // Transfer completed interrupt mask
    static constexpr uint32_t OTG_HS_DIEPMSK_EPDM = 0x2;       // Endpoint disabled interrupt mask
    static constexpr uint32_t OTG_HS_DIEPMSK_TOM = 0x8;        // Timeout condition mask (nonisochronous endpoints)
    static constexpr uint32_t OTG_HS_DIEPMSK_ITTXFEMSK = 0x10; // IN token received when TxFIFO empty mask
    static constexpr uint32_t OTG_HS_DIEPMSK_INEPNMM = 0x20;   // IN token received with EP mismatch mask
    static constexpr uint32_t OTG_HS_DIEPMSK_INEPNEM = 0x40;   // IN endpoint NAK effective mask
    static constexpr uint32_t OTG_HS_DIEPMSK_TXFURM = 0x100;   // FIFO underrun mask
    static constexpr uint32_t OTG_HS_DIEPMSK_BIM = 0x200;      // BNA interrupt mask

    static constexpr uint32_t OTG_HS_DOEPMSK_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DOEPMSK_XFRCM = 0x1;    // Transfer completed interrupt mask
    static constexpr uint32_t OTG_HS_DOEPMSK_EPDM = 0x2;     // Endpoint disabled interrupt mask
    static constexpr uint32_t OTG_HS_DOEPMSK_STUPM = 0x8;    // SETUP phase done mask
    static constexpr uint32_t OTG_HS_DOEPMSK_OTEPDM = 0x10;  // OUT token received when endpoint disabled mask
    static constexpr uint32_t OTG_HS_DOEPMSK_B2BSTUP = 0x40; // Back-to-back SETUP packets received mask
    static constexpr uint32_t OTG_HS_DOEPMSK_OPEM = 0x100;   // OUT packet error mask
    static constexpr uint32_t OTG_HS_DOEPMSK_BOIM = 0x200;   // BNA interrupt mask

    static constexpr uint32_t OTG_HS_DAINT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DAINT_IEPINT =   // IN endpoint interrupt bits
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DAINT_OEPINT =   // OUT endpoint interrupt bits
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HS_DAINTMSK_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DAINTMSK_IEPM =   // IN EP interrupt mask bits
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DAINTMSK_OEPM =   // OUT EP interrupt mask bits
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HS_DVBUSDIS_RESET_VALUE = 0x17d7;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DVBUSDIS_VBUSDT =   // Device VBUS discharge time
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HS_DVBUSPULSE_RESET_VALUE = 0x5b8;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DVBUSPULSE_DVBUSP =   // Device VBUS pulsing time
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t OTG_HS_DTHRCTL_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DTHRCTL_NONISOTHREN = 0x1; // Nonisochronous IN endpoints threshold enable
    static constexpr uint32_t OTG_HS_DTHRCTL_ISOTHREN = 0x2;    // ISO IN endpoint threshold enable
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DTHRCTL_TXTHRLEN =         // Transmit threshold length
        bit_field_t<2, 0x1ff>::value<X>();
    static constexpr uint32_t OTG_HS_DTHRCTL_RXTHREN = 0x10000; // Receive threshold enable
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DTHRCTL_RXTHRLEN =         // Receive threshold length
        bit_field_t<17, 0x1ff>::value<X>();
    static constexpr uint32_t OTG_HS_DTHRCTL_ARPEN = 0x8000000; // Arbiter parking enable

    static constexpr uint32_t OTG_HS_DIEPEMPMSK_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPEMPMSK_INEPTXFEM =   // IN EP Tx FIFO empty interrupt mask bits
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HS_DEACHINT_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DEACHINT_IEP1INT = 0x2;     // IN endpoint 1interrupt bit
    static constexpr uint32_t OTG_HS_DEACHINT_OEP1INT = 0x20000; // OUT endpoint 1 interrupt bit

    static constexpr uint32_t OTG_HS_DEACHINTMSK_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DEACHINTMSK_IEP1INTM = 0x2;     // IN Endpoint 1 interrupt mask bit
    static constexpr uint32_t OTG_HS_DEACHINTMSK_OEP1INTM = 0x20000; // OUT Endpoint 1 interrupt mask bit

    static constexpr uint32_t OTG_HS_DIEPEACHMSK1_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DIEPEACHMSK1_XFRCM = 0x1;      // Transfer completed interrupt mask
    static constexpr uint32_t OTG_HS_DIEPEACHMSK1_EPDM = 0x2;       // Endpoint disabled interrupt mask
    static constexpr uint32_t OTG_HS_DIEPEACHMSK1_TOM = 0x8;        // Timeout condition mask (nonisochronous endpoints)
    static constexpr uint32_t OTG_HS_DIEPEACHMSK1_ITTXFEMSK = 0x10; // IN token received when TxFIFO empty mask
    static constexpr uint32_t OTG_HS_DIEPEACHMSK1_INEPNMM = 0x20;   // IN token received with EP mismatch mask
    static constexpr uint32_t OTG_HS_DIEPEACHMSK1_INEPNEM = 0x40;   // IN endpoint NAK effective mask
    static constexpr uint32_t OTG_HS_DIEPEACHMSK1_TXFURM = 0x100;   // FIFO underrun mask
    static constexpr uint32_t OTG_HS_DIEPEACHMSK1_BIM = 0x200;      // BNA interrupt mask
    static constexpr uint32_t OTG_HS_DIEPEACHMSK1_NAKM = 0x2000;    // NAK interrupt mask

    static constexpr uint32_t OTG_HS_DOEPEACHMSK1_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DOEPEACHMSK1_XFRCM = 0x1;      // Transfer completed interrupt mask
    static constexpr uint32_t OTG_HS_DOEPEACHMSK1_EPDM = 0x2;       // Endpoint disabled interrupt mask
    static constexpr uint32_t OTG_HS_DOEPEACHMSK1_TOM = 0x8;        // Timeout condition mask
    static constexpr uint32_t OTG_HS_DOEPEACHMSK1_ITTXFEMSK = 0x10; // IN token received when TxFIFO empty mask
    static constexpr uint32_t OTG_HS_DOEPEACHMSK1_INEPNMM = 0x20;   // IN token received with EP mismatch mask
    static constexpr uint32_t OTG_HS_DOEPEACHMSK1_INEPNEM = 0x40;   // IN endpoint NAK effective mask
    static constexpr uint32_t OTG_HS_DOEPEACHMSK1_TXFURM = 0x100;   // OUT packet error mask
    static constexpr uint32_t OTG_HS_DOEPEACHMSK1_BIM = 0x200;      // BNA interrupt mask
    static constexpr uint32_t OTG_HS_DOEPEACHMSK1_BERRM = 0x1000;   // Bubble error interrupt mask
    static constexpr uint32_t OTG_HS_DOEPEACHMSK1_NAKM = 0x2000;    // NAK interrupt mask
    static constexpr uint32_t OTG_HS_DOEPEACHMSK1_NYETM = 0x4000;   // NYET interrupt mask

    static constexpr uint32_t OTG_HS_DIEPCTL0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL0_MPSIZ =                      // Maximum packet size
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL0_USBAEP = 0x8000;             // USB active endpoint
    static constexpr uint32_t OTG_HS_DIEPCTL0_EONUM_DPID = 0x10000;        // Even/odd frame
    static constexpr uint32_t OTG_HS_DIEPCTL0_NAKSTS = 0x20000;            // NAK status
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL0_EPTYP =                      // Endpoint type
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL0_Stall = 0x200000;            // STALL handshake
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL0_TXFNUM =                     // TxFIFO number
        bit_field_t<22, 0xf>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL0_CNAK = 0x4000000;            // Clear NAK
    static constexpr uint32_t OTG_HS_DIEPCTL0_SNAK = 0x8000000;            // Set NAK
    static constexpr uint32_t OTG_HS_DIEPCTL0_SD0PID_SEVNFRM = 0x10000000; // Set DATA0 PID
    static constexpr uint32_t OTG_HS_DIEPCTL0_SODDFRM = 0x20000000;        // Set odd frame
    static constexpr uint32_t OTG_HS_DIEPCTL0_EPDIS = 0x40000000;          // Endpoint disable
    static constexpr uint32_t OTG_HS_DIEPCTL0_EPENA = 0x80000000;          // Endpoint enable

    static constexpr uint32_t OTG_HS_DIEPCTL1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL1_MPSIZ =                      // Maximum packet size
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL1_USBAEP = 0x8000;             // USB active endpoint
    static constexpr uint32_t OTG_HS_DIEPCTL1_EONUM_DPID = 0x10000;        // Even/odd frame
    static constexpr uint32_t OTG_HS_DIEPCTL1_NAKSTS = 0x20000;            // NAK status
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL1_EPTYP =                      // Endpoint type
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL1_Stall = 0x200000;            // STALL handshake
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL1_TXFNUM =                     // TxFIFO number
        bit_field_t<22, 0xf>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL1_CNAK = 0x4000000;            // Clear NAK
    static constexpr uint32_t OTG_HS_DIEPCTL1_SNAK = 0x8000000;            // Set NAK
    static constexpr uint32_t OTG_HS_DIEPCTL1_SD0PID_SEVNFRM = 0x10000000; // Set DATA0 PID
    static constexpr uint32_t OTG_HS_DIEPCTL1_SODDFRM = 0x20000000;        // Set odd frame
    static constexpr uint32_t OTG_HS_DIEPCTL1_EPDIS = 0x40000000;          // Endpoint disable
    static constexpr uint32_t OTG_HS_DIEPCTL1_EPENA = 0x80000000;          // Endpoint enable

    static constexpr uint32_t OTG_HS_DIEPCTL2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL2_MPSIZ =                      // Maximum packet size
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL2_USBAEP = 0x8000;             // USB active endpoint
    static constexpr uint32_t OTG_HS_DIEPCTL2_EONUM_DPID = 0x10000;        // Even/odd frame
    static constexpr uint32_t OTG_HS_DIEPCTL2_NAKSTS = 0x20000;            // NAK status
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL2_EPTYP =                      // Endpoint type
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL2_Stall = 0x200000;            // STALL handshake
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL2_TXFNUM =                     // TxFIFO number
        bit_field_t<22, 0xf>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL2_CNAK = 0x4000000;            // Clear NAK
    static constexpr uint32_t OTG_HS_DIEPCTL2_SNAK = 0x8000000;            // Set NAK
    static constexpr uint32_t OTG_HS_DIEPCTL2_SD0PID_SEVNFRM = 0x10000000; // Set DATA0 PID
    static constexpr uint32_t OTG_HS_DIEPCTL2_SODDFRM = 0x20000000;        // Set odd frame
    static constexpr uint32_t OTG_HS_DIEPCTL2_EPDIS = 0x40000000;          // Endpoint disable
    static constexpr uint32_t OTG_HS_DIEPCTL2_EPENA = 0x80000000;          // Endpoint enable

    static constexpr uint32_t OTG_HS_DIEPCTL3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL3_MPSIZ =                      // Maximum packet size
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL3_USBAEP = 0x8000;             // USB active endpoint
    static constexpr uint32_t OTG_HS_DIEPCTL3_EONUM_DPID = 0x10000;        // Even/odd frame
    static constexpr uint32_t OTG_HS_DIEPCTL3_NAKSTS = 0x20000;            // NAK status
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL3_EPTYP =                      // Endpoint type
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL3_Stall = 0x200000;            // STALL handshake
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL3_TXFNUM =                     // TxFIFO number
        bit_field_t<22, 0xf>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL3_CNAK = 0x4000000;            // Clear NAK
    static constexpr uint32_t OTG_HS_DIEPCTL3_SNAK = 0x8000000;            // Set NAK
    static constexpr uint32_t OTG_HS_DIEPCTL3_SD0PID_SEVNFRM = 0x10000000; // Set DATA0 PID
    static constexpr uint32_t OTG_HS_DIEPCTL3_SODDFRM = 0x20000000;        // Set odd frame
    static constexpr uint32_t OTG_HS_DIEPCTL3_EPDIS = 0x40000000;          // Endpoint disable
    static constexpr uint32_t OTG_HS_DIEPCTL3_EPENA = 0x80000000;          // Endpoint enable

    static constexpr uint32_t OTG_HS_DIEPCTL4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL4_MPSIZ =                      // Maximum packet size
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL4_USBAEP = 0x8000;             // USB active endpoint
    static constexpr uint32_t OTG_HS_DIEPCTL4_EONUM_DPID = 0x10000;        // Even/odd frame
    static constexpr uint32_t OTG_HS_DIEPCTL4_NAKSTS = 0x20000;            // NAK status
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL4_EPTYP =                      // Endpoint type
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL4_Stall = 0x200000;            // STALL handshake
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL4_TXFNUM =                     // TxFIFO number
        bit_field_t<22, 0xf>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL4_CNAK = 0x4000000;            // Clear NAK
    static constexpr uint32_t OTG_HS_DIEPCTL4_SNAK = 0x8000000;            // Set NAK
    static constexpr uint32_t OTG_HS_DIEPCTL4_SD0PID_SEVNFRM = 0x10000000; // Set DATA0 PID
    static constexpr uint32_t OTG_HS_DIEPCTL4_SODDFRM = 0x20000000;        // Set odd frame
    static constexpr uint32_t OTG_HS_DIEPCTL4_EPDIS = 0x40000000;          // Endpoint disable
    static constexpr uint32_t OTG_HS_DIEPCTL4_EPENA = 0x80000000;          // Endpoint enable

    static constexpr uint32_t OTG_HS_DIEPCTL5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL5_MPSIZ =                      // Maximum packet size
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL5_USBAEP = 0x8000;             // USB active endpoint
    static constexpr uint32_t OTG_HS_DIEPCTL5_EONUM_DPID = 0x10000;        // Even/odd frame
    static constexpr uint32_t OTG_HS_DIEPCTL5_NAKSTS = 0x20000;            // NAK status
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL5_EPTYP =                      // Endpoint type
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL5_Stall = 0x200000;            // STALL handshake
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL5_TXFNUM =                     // TxFIFO number
        bit_field_t<22, 0xf>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL5_CNAK = 0x4000000;            // Clear NAK
    static constexpr uint32_t OTG_HS_DIEPCTL5_SNAK = 0x8000000;            // Set NAK
    static constexpr uint32_t OTG_HS_DIEPCTL5_SD0PID_SEVNFRM = 0x10000000; // Set DATA0 PID
    static constexpr uint32_t OTG_HS_DIEPCTL5_SODDFRM = 0x20000000;        // Set odd frame
    static constexpr uint32_t OTG_HS_DIEPCTL5_EPDIS = 0x40000000;          // Endpoint disable
    static constexpr uint32_t OTG_HS_DIEPCTL5_EPENA = 0x80000000;          // Endpoint enable

    static constexpr uint32_t OTG_HS_DIEPCTL6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL6_MPSIZ =                      // Maximum packet size
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL6_USBAEP = 0x8000;             // USB active endpoint
    static constexpr uint32_t OTG_HS_DIEPCTL6_EONUM_DPID = 0x10000;        // Even/odd frame
    static constexpr uint32_t OTG_HS_DIEPCTL6_NAKSTS = 0x20000;            // NAK status
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL6_EPTYP =                      // Endpoint type
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL6_Stall = 0x200000;            // STALL handshake
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL6_TXFNUM =                     // TxFIFO number
        bit_field_t<22, 0xf>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL6_CNAK = 0x4000000;            // Clear NAK
    static constexpr uint32_t OTG_HS_DIEPCTL6_SNAK = 0x8000000;            // Set NAK
    static constexpr uint32_t OTG_HS_DIEPCTL6_SD0PID_SEVNFRM = 0x10000000; // Set DATA0 PID
    static constexpr uint32_t OTG_HS_DIEPCTL6_SODDFRM = 0x20000000;        // Set odd frame
    static constexpr uint32_t OTG_HS_DIEPCTL6_EPDIS = 0x40000000;          // Endpoint disable
    static constexpr uint32_t OTG_HS_DIEPCTL6_EPENA = 0x80000000;          // Endpoint enable

    static constexpr uint32_t OTG_HS_DIEPCTL7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL7_MPSIZ =                      // Maximum packet size
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL7_USBAEP = 0x8000;             // USB active endpoint
    static constexpr uint32_t OTG_HS_DIEPCTL7_EONUM_DPID = 0x10000;        // Even/odd frame
    static constexpr uint32_t OTG_HS_DIEPCTL7_NAKSTS = 0x20000;            // NAK status
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL7_EPTYP =                      // Endpoint type
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL7_Stall = 0x200000;            // STALL handshake
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL7_TXFNUM =                     // TxFIFO number
        bit_field_t<22, 0xf>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL7_CNAK = 0x4000000;            // Clear NAK
    static constexpr uint32_t OTG_HS_DIEPCTL7_SNAK = 0x8000000;            // Set NAK
    static constexpr uint32_t OTG_HS_DIEPCTL7_SD0PID_SEVNFRM = 0x10000000; // Set DATA0 PID
    static constexpr uint32_t OTG_HS_DIEPCTL7_SODDFRM = 0x20000000;        // Set odd frame
    static constexpr uint32_t OTG_HS_DIEPCTL7_EPDIS = 0x40000000;          // Endpoint disable
    static constexpr uint32_t OTG_HS_DIEPCTL7_EPENA = 0x80000000;          // Endpoint enable

    static constexpr uint32_t OTG_HS_DIEPINT0_RESET_VALUE = 0x80;
    static constexpr uint32_t OTG_HS_DIEPINT0_XFRC = 0x1;         // Transfer completed interrupt
    static constexpr uint32_t OTG_HS_DIEPINT0_EPDISD = 0x2;       // Endpoint disabled interrupt
    static constexpr uint32_t OTG_HS_DIEPINT0_TOC = 0x8;          // Timeout condition
    static constexpr uint32_t OTG_HS_DIEPINT0_ITTXFE = 0x10;      // IN token received when TxFIFO is empty
    static constexpr uint32_t OTG_HS_DIEPINT0_INEPNE = 0x40;      // IN endpoint NAK effective
    static constexpr uint32_t OTG_HS_DIEPINT0_TXFE = 0x80;        // Transmit FIFO empty
    static constexpr uint32_t OTG_HS_DIEPINT0_TXFIFOUDRN = 0x100; // Transmit Fifo Underrun
    static constexpr uint32_t OTG_HS_DIEPINT0_BNA = 0x200;        // Buffer not available interrupt
    static constexpr uint32_t OTG_HS_DIEPINT0_PKTDRPSTS = 0x800;  // Packet dropped status
    static constexpr uint32_t OTG_HS_DIEPINT0_BERR = 0x1000;      // Babble error interrupt
    static constexpr uint32_t OTG_HS_DIEPINT0_NAK = 0x2000;       // NAK interrupt

    static constexpr uint32_t OTG_HS_DIEPINT1_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DIEPINT1_XFRC = 0x1;         // Transfer completed interrupt
    static constexpr uint32_t OTG_HS_DIEPINT1_EPDISD = 0x2;       // Endpoint disabled interrupt
    static constexpr uint32_t OTG_HS_DIEPINT1_TOC = 0x8;          // Timeout condition
    static constexpr uint32_t OTG_HS_DIEPINT1_ITTXFE = 0x10;      // IN token received when TxFIFO is empty
    static constexpr uint32_t OTG_HS_DIEPINT1_INEPNE = 0x40;      // IN endpoint NAK effective
    static constexpr uint32_t OTG_HS_DIEPINT1_TXFE = 0x80;        // Transmit FIFO empty
    static constexpr uint32_t OTG_HS_DIEPINT1_TXFIFOUDRN = 0x100; // Transmit Fifo Underrun
    static constexpr uint32_t OTG_HS_DIEPINT1_BNA = 0x200;        // Buffer not available interrupt
    static constexpr uint32_t OTG_HS_DIEPINT1_PKTDRPSTS = 0x800;  // Packet dropped status
    static constexpr uint32_t OTG_HS_DIEPINT1_BERR = 0x1000;      // Babble error interrupt
    static constexpr uint32_t OTG_HS_DIEPINT1_NAK = 0x2000;       // NAK interrupt

    static constexpr uint32_t OTG_HS_DIEPINT2_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DIEPINT2_XFRC = 0x1;         // Transfer completed interrupt
    static constexpr uint32_t OTG_HS_DIEPINT2_EPDISD = 0x2;       // Endpoint disabled interrupt
    static constexpr uint32_t OTG_HS_DIEPINT2_TOC = 0x8;          // Timeout condition
    static constexpr uint32_t OTG_HS_DIEPINT2_ITTXFE = 0x10;      // IN token received when TxFIFO is empty
    static constexpr uint32_t OTG_HS_DIEPINT2_INEPNE = 0x40;      // IN endpoint NAK effective
    static constexpr uint32_t OTG_HS_DIEPINT2_TXFE = 0x80;        // Transmit FIFO empty
    static constexpr uint32_t OTG_HS_DIEPINT2_TXFIFOUDRN = 0x100; // Transmit Fifo Underrun
    static constexpr uint32_t OTG_HS_DIEPINT2_BNA = 0x200;        // Buffer not available interrupt
    static constexpr uint32_t OTG_HS_DIEPINT2_PKTDRPSTS = 0x800;  // Packet dropped status
    static constexpr uint32_t OTG_HS_DIEPINT2_BERR = 0x1000;      // Babble error interrupt
    static constexpr uint32_t OTG_HS_DIEPINT2_NAK = 0x2000;       // NAK interrupt

    static constexpr uint32_t OTG_HS_DIEPINT3_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DIEPINT3_XFRC = 0x1;         // Transfer completed interrupt
    static constexpr uint32_t OTG_HS_DIEPINT3_EPDISD = 0x2;       // Endpoint disabled interrupt
    static constexpr uint32_t OTG_HS_DIEPINT3_TOC = 0x8;          // Timeout condition
    static constexpr uint32_t OTG_HS_DIEPINT3_ITTXFE = 0x10;      // IN token received when TxFIFO is empty
    static constexpr uint32_t OTG_HS_DIEPINT3_INEPNE = 0x40;      // IN endpoint NAK effective
    static constexpr uint32_t OTG_HS_DIEPINT3_TXFE = 0x80;        // Transmit FIFO empty
    static constexpr uint32_t OTG_HS_DIEPINT3_TXFIFOUDRN = 0x100; // Transmit Fifo Underrun
    static constexpr uint32_t OTG_HS_DIEPINT3_BNA = 0x200;        // Buffer not available interrupt
    static constexpr uint32_t OTG_HS_DIEPINT3_PKTDRPSTS = 0x800;  // Packet dropped status
    static constexpr uint32_t OTG_HS_DIEPINT3_BERR = 0x1000;      // Babble error interrupt
    static constexpr uint32_t OTG_HS_DIEPINT3_NAK = 0x2000;       // NAK interrupt

    static constexpr uint32_t OTG_HS_DIEPINT4_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DIEPINT4_XFRC = 0x1;         // Transfer completed interrupt
    static constexpr uint32_t OTG_HS_DIEPINT4_EPDISD = 0x2;       // Endpoint disabled interrupt
    static constexpr uint32_t OTG_HS_DIEPINT4_TOC = 0x8;          // Timeout condition
    static constexpr uint32_t OTG_HS_DIEPINT4_ITTXFE = 0x10;      // IN token received when TxFIFO is empty
    static constexpr uint32_t OTG_HS_DIEPINT4_INEPNE = 0x40;      // IN endpoint NAK effective
    static constexpr uint32_t OTG_HS_DIEPINT4_TXFE = 0x80;        // Transmit FIFO empty
    static constexpr uint32_t OTG_HS_DIEPINT4_TXFIFOUDRN = 0x100; // Transmit Fifo Underrun
    static constexpr uint32_t OTG_HS_DIEPINT4_BNA = 0x200;        // Buffer not available interrupt
    static constexpr uint32_t OTG_HS_DIEPINT4_PKTDRPSTS = 0x800;  // Packet dropped status
    static constexpr uint32_t OTG_HS_DIEPINT4_BERR = 0x1000;      // Babble error interrupt
    static constexpr uint32_t OTG_HS_DIEPINT4_NAK = 0x2000;       // NAK interrupt

    static constexpr uint32_t OTG_HS_DIEPINT5_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DIEPINT5_XFRC = 0x1;         // Transfer completed interrupt
    static constexpr uint32_t OTG_HS_DIEPINT5_EPDISD = 0x2;       // Endpoint disabled interrupt
    static constexpr uint32_t OTG_HS_DIEPINT5_TOC = 0x8;          // Timeout condition
    static constexpr uint32_t OTG_HS_DIEPINT5_ITTXFE = 0x10;      // IN token received when TxFIFO is empty
    static constexpr uint32_t OTG_HS_DIEPINT5_INEPNE = 0x40;      // IN endpoint NAK effective
    static constexpr uint32_t OTG_HS_DIEPINT5_TXFE = 0x80;        // Transmit FIFO empty
    static constexpr uint32_t OTG_HS_DIEPINT5_TXFIFOUDRN = 0x100; // Transmit Fifo Underrun
    static constexpr uint32_t OTG_HS_DIEPINT5_BNA = 0x200;        // Buffer not available interrupt
    static constexpr uint32_t OTG_HS_DIEPINT5_PKTDRPSTS = 0x800;  // Packet dropped status
    static constexpr uint32_t OTG_HS_DIEPINT5_BERR = 0x1000;      // Babble error interrupt
    static constexpr uint32_t OTG_HS_DIEPINT5_NAK = 0x2000;       // NAK interrupt

    static constexpr uint32_t OTG_HS_DIEPINT6_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DIEPINT6_XFRC = 0x1;         // Transfer completed interrupt
    static constexpr uint32_t OTG_HS_DIEPINT6_EPDISD = 0x2;       // Endpoint disabled interrupt
    static constexpr uint32_t OTG_HS_DIEPINT6_TOC = 0x8;          // Timeout condition
    static constexpr uint32_t OTG_HS_DIEPINT6_ITTXFE = 0x10;      // IN token received when TxFIFO is empty
    static constexpr uint32_t OTG_HS_DIEPINT6_INEPNE = 0x40;      // IN endpoint NAK effective
    static constexpr uint32_t OTG_HS_DIEPINT6_TXFE = 0x80;        // Transmit FIFO empty
    static constexpr uint32_t OTG_HS_DIEPINT6_TXFIFOUDRN = 0x100; // Transmit Fifo Underrun
    static constexpr uint32_t OTG_HS_DIEPINT6_BNA = 0x200;        // Buffer not available interrupt
    static constexpr uint32_t OTG_HS_DIEPINT6_PKTDRPSTS = 0x800;  // Packet dropped status
    static constexpr uint32_t OTG_HS_DIEPINT6_BERR = 0x1000;      // Babble error interrupt
    static constexpr uint32_t OTG_HS_DIEPINT6_NAK = 0x2000;       // NAK interrupt

    static constexpr uint32_t OTG_HS_DIEPINT7_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DIEPINT7_XFRC = 0x1;         // Transfer completed interrupt
    static constexpr uint32_t OTG_HS_DIEPINT7_EPDISD = 0x2;       // Endpoint disabled interrupt
    static constexpr uint32_t OTG_HS_DIEPINT7_TOC = 0x8;          // Timeout condition
    static constexpr uint32_t OTG_HS_DIEPINT7_ITTXFE = 0x10;      // IN token received when TxFIFO is empty
    static constexpr uint32_t OTG_HS_DIEPINT7_INEPNE = 0x40;      // IN endpoint NAK effective
    static constexpr uint32_t OTG_HS_DIEPINT7_TXFE = 0x80;        // Transmit FIFO empty
    static constexpr uint32_t OTG_HS_DIEPINT7_TXFIFOUDRN = 0x100; // Transmit Fifo Underrun
    static constexpr uint32_t OTG_HS_DIEPINT7_BNA = 0x200;        // Buffer not available interrupt
    static constexpr uint32_t OTG_HS_DIEPINT7_PKTDRPSTS = 0x800;  // Packet dropped status
    static constexpr uint32_t OTG_HS_DIEPINT7_BERR = 0x1000;      // Babble error interrupt
    static constexpr uint32_t OTG_HS_DIEPINT7_NAK = 0x2000;       // NAK interrupt

    static constexpr uint32_t OTG_HS_DIEPTSIZ0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTSIZ0_XFRSIZ =   // Transfer size
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTSIZ0_PKTCNT =   // Packet count
        bit_field_t<19, 0x3>::value<X>();

    static constexpr uint32_t OTG_HS_DIEPDMA1_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HS_DIEPDMA2_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HS_DIEPDMA3_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HS_DIEPDMA4_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HS_DIEPDMA5_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HS_DTXFSTS0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DTXFSTS0_INEPTFSAV =   // IN endpoint TxFIFO space avail
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HS_DTXFSTS1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DTXFSTS1_INEPTFSAV =   // IN endpoint TxFIFO space avail
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HS_DTXFSTS2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DTXFSTS2_INEPTFSAV =   // IN endpoint TxFIFO space avail
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HS_DTXFSTS3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DTXFSTS3_INEPTFSAV =   // IN endpoint TxFIFO space avail
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HS_DTXFSTS4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DTXFSTS4_INEPTFSAV =   // IN endpoint TxFIFO space avail
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HS_DTXFSTS5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DTXFSTS5_INEPTFSAV =   // IN endpoint TxFIFO space avail
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HS_DIEPTSIZ1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTSIZ1_XFRSIZ =   // Transfer size
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTSIZ1_PKTCNT =   // Packet count
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTSIZ1_MCNT =     // Multi count
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HS_DIEPTSIZ2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTSIZ2_XFRSIZ =   // Transfer size
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTSIZ2_PKTCNT =   // Packet count
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTSIZ2_MCNT =     // Multi count
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HS_DIEPTSIZ3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTSIZ3_XFRSIZ =   // Transfer size
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTSIZ3_PKTCNT =   // Packet count
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTSIZ3_MCNT =     // Multi count
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HS_DIEPTSIZ4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTSIZ4_XFRSIZ =   // Transfer size
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTSIZ4_PKTCNT =   // Packet count
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTSIZ4_MCNT =     // Multi count
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HS_DIEPTSIZ5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTSIZ5_XFRSIZ =   // Transfer size
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTSIZ5_PKTCNT =   // Packet count
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTSIZ5_MCNT =     // Multi count
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HS_DOEPCTL0_RESET_VALUE = 0x8000;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPCTL0_MPSIZ =             // Maximum packet size
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_DOEPCTL0_USBAEP = 0x8000;    // USB active endpoint
    static constexpr uint32_t OTG_HS_DOEPCTL0_NAKSTS = 0x20000;   // NAK status
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPCTL0_EPTYP =             // Endpoint type
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_DOEPCTL0_SNPM = 0x100000;    // Snoop mode
    static constexpr uint32_t OTG_HS_DOEPCTL0_Stall = 0x200000;   // STALL handshake
    static constexpr uint32_t OTG_HS_DOEPCTL0_CNAK = 0x4000000;   // Clear NAK
    static constexpr uint32_t OTG_HS_DOEPCTL0_SNAK = 0x8000000;   // Set NAK
    static constexpr uint32_t OTG_HS_DOEPCTL0_EPDIS = 0x40000000; // Endpoint disable
    static constexpr uint32_t OTG_HS_DOEPCTL0_EPENA = 0x80000000; // Endpoint enable

    static constexpr uint32_t OTG_HS_DOEPCTL1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPCTL1_MPSIZ =                      // Maximum packet size
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_HS_DOEPCTL1_USBAEP = 0x8000;             // USB active endpoint
    static constexpr uint32_t OTG_HS_DOEPCTL1_EONUM_DPID = 0x10000;        // Even odd frame/Endpoint data PID
    static constexpr uint32_t OTG_HS_DOEPCTL1_NAKSTS = 0x20000;            // NAK status
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPCTL1_EPTYP =                      // Endpoint type
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_DOEPCTL1_SNPM = 0x100000;             // Snoop mode
    static constexpr uint32_t OTG_HS_DOEPCTL1_Stall = 0x200000;            // STALL handshake
    static constexpr uint32_t OTG_HS_DOEPCTL1_CNAK = 0x4000000;            // Clear NAK
    static constexpr uint32_t OTG_HS_DOEPCTL1_SNAK = 0x8000000;            // Set NAK
    static constexpr uint32_t OTG_HS_DOEPCTL1_SD0PID_SEVNFRM = 0x10000000; // Set DATA0 PID/Set even frame
    static constexpr uint32_t OTG_HS_DOEPCTL1_SODDFRM = 0x20000000;        // Set odd frame
    static constexpr uint32_t OTG_HS_DOEPCTL1_EPDIS = 0x40000000;          // Endpoint disable
    static constexpr uint32_t OTG_HS_DOEPCTL1_EPENA = 0x80000000;          // Endpoint enable

    static constexpr uint32_t OTG_HS_DOEPCTL2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPCTL2_MPSIZ =                      // Maximum packet size
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_HS_DOEPCTL2_USBAEP = 0x8000;             // USB active endpoint
    static constexpr uint32_t OTG_HS_DOEPCTL2_EONUM_DPID = 0x10000;        // Even odd frame/Endpoint data PID
    static constexpr uint32_t OTG_HS_DOEPCTL2_NAKSTS = 0x20000;            // NAK status
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPCTL2_EPTYP =                      // Endpoint type
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_DOEPCTL2_SNPM = 0x100000;             // Snoop mode
    static constexpr uint32_t OTG_HS_DOEPCTL2_Stall = 0x200000;            // STALL handshake
    static constexpr uint32_t OTG_HS_DOEPCTL2_CNAK = 0x4000000;            // Clear NAK
    static constexpr uint32_t OTG_HS_DOEPCTL2_SNAK = 0x8000000;            // Set NAK
    static constexpr uint32_t OTG_HS_DOEPCTL2_SD0PID_SEVNFRM = 0x10000000; // Set DATA0 PID/Set even frame
    static constexpr uint32_t OTG_HS_DOEPCTL2_SODDFRM = 0x20000000;        // Set odd frame
    static constexpr uint32_t OTG_HS_DOEPCTL2_EPDIS = 0x40000000;          // Endpoint disable
    static constexpr uint32_t OTG_HS_DOEPCTL2_EPENA = 0x80000000;          // Endpoint enable

    static constexpr uint32_t OTG_HS_DOEPCTL3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPCTL3_MPSIZ =                      // Maximum packet size
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_HS_DOEPCTL3_USBAEP = 0x8000;             // USB active endpoint
    static constexpr uint32_t OTG_HS_DOEPCTL3_EONUM_DPID = 0x10000;        // Even odd frame/Endpoint data PID
    static constexpr uint32_t OTG_HS_DOEPCTL3_NAKSTS = 0x20000;            // NAK status
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPCTL3_EPTYP =                      // Endpoint type
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_DOEPCTL3_SNPM = 0x100000;             // Snoop mode
    static constexpr uint32_t OTG_HS_DOEPCTL3_Stall = 0x200000;            // STALL handshake
    static constexpr uint32_t OTG_HS_DOEPCTL3_CNAK = 0x4000000;            // Clear NAK
    static constexpr uint32_t OTG_HS_DOEPCTL3_SNAK = 0x8000000;            // Set NAK
    static constexpr uint32_t OTG_HS_DOEPCTL3_SD0PID_SEVNFRM = 0x10000000; // Set DATA0 PID/Set even frame
    static constexpr uint32_t OTG_HS_DOEPCTL3_SODDFRM = 0x20000000;        // Set odd frame
    static constexpr uint32_t OTG_HS_DOEPCTL3_EPDIS = 0x40000000;          // Endpoint disable
    static constexpr uint32_t OTG_HS_DOEPCTL3_EPENA = 0x80000000;          // Endpoint enable

    static constexpr uint32_t OTG_HS_DOEPINT0_RESET_VALUE = 0x80;
    static constexpr uint32_t OTG_HS_DOEPINT0_XFRC = 0x1;     // Transfer completed interrupt
    static constexpr uint32_t OTG_HS_DOEPINT0_EPDISD = 0x2;   // Endpoint disabled interrupt
    static constexpr uint32_t OTG_HS_DOEPINT0_STUP = 0x8;     // SETUP phase done
    static constexpr uint32_t OTG_HS_DOEPINT0_OTEPDIS = 0x10; // OUT token received when endpoint disabled
    static constexpr uint32_t OTG_HS_DOEPINT0_B2BSTUP = 0x40; // Back-to-back SETUP packets received
    static constexpr uint32_t OTG_HS_DOEPINT0_NYET = 0x4000;  // NYET interrupt

    static constexpr uint32_t OTG_HS_DOEPINT1_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DOEPINT1_XFRC = 0x1;     // Transfer completed interrupt
    static constexpr uint32_t OTG_HS_DOEPINT1_EPDISD = 0x2;   // Endpoint disabled interrupt
    static constexpr uint32_t OTG_HS_DOEPINT1_STUP = 0x8;     // SETUP phase done
    static constexpr uint32_t OTG_HS_DOEPINT1_OTEPDIS = 0x10; // OUT token received when endpoint disabled
    static constexpr uint32_t OTG_HS_DOEPINT1_B2BSTUP = 0x40; // Back-to-back SETUP packets received
    static constexpr uint32_t OTG_HS_DOEPINT1_NYET = 0x4000;  // NYET interrupt

    static constexpr uint32_t OTG_HS_DOEPINT2_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DOEPINT2_XFRC = 0x1;     // Transfer completed interrupt
    static constexpr uint32_t OTG_HS_DOEPINT2_EPDISD = 0x2;   // Endpoint disabled interrupt
    static constexpr uint32_t OTG_HS_DOEPINT2_STUP = 0x8;     // SETUP phase done
    static constexpr uint32_t OTG_HS_DOEPINT2_OTEPDIS = 0x10; // OUT token received when endpoint disabled
    static constexpr uint32_t OTG_HS_DOEPINT2_B2BSTUP = 0x40; // Back-to-back SETUP packets received
    static constexpr uint32_t OTG_HS_DOEPINT2_NYET = 0x4000;  // NYET interrupt

    static constexpr uint32_t OTG_HS_DOEPINT3_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DOEPINT3_XFRC = 0x1;     // Transfer completed interrupt
    static constexpr uint32_t OTG_HS_DOEPINT3_EPDISD = 0x2;   // Endpoint disabled interrupt
    static constexpr uint32_t OTG_HS_DOEPINT3_STUP = 0x8;     // SETUP phase done
    static constexpr uint32_t OTG_HS_DOEPINT3_OTEPDIS = 0x10; // OUT token received when endpoint disabled
    static constexpr uint32_t OTG_HS_DOEPINT3_B2BSTUP = 0x40; // Back-to-back SETUP packets received
    static constexpr uint32_t OTG_HS_DOEPINT3_NYET = 0x4000;  // NYET interrupt

    static constexpr uint32_t OTG_HS_DOEPINT4_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DOEPINT4_XFRC = 0x1;     // Transfer completed interrupt
    static constexpr uint32_t OTG_HS_DOEPINT4_EPDISD = 0x2;   // Endpoint disabled interrupt
    static constexpr uint32_t OTG_HS_DOEPINT4_STUP = 0x8;     // SETUP phase done
    static constexpr uint32_t OTG_HS_DOEPINT4_OTEPDIS = 0x10; // OUT token received when endpoint disabled
    static constexpr uint32_t OTG_HS_DOEPINT4_B2BSTUP = 0x40; // Back-to-back SETUP packets received
    static constexpr uint32_t OTG_HS_DOEPINT4_NYET = 0x4000;  // NYET interrupt

    static constexpr uint32_t OTG_HS_DOEPINT5_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DOEPINT5_XFRC = 0x1;     // Transfer completed interrupt
    static constexpr uint32_t OTG_HS_DOEPINT5_EPDISD = 0x2;   // Endpoint disabled interrupt
    static constexpr uint32_t OTG_HS_DOEPINT5_STUP = 0x8;     // SETUP phase done
    static constexpr uint32_t OTG_HS_DOEPINT5_OTEPDIS = 0x10; // OUT token received when endpoint disabled
    static constexpr uint32_t OTG_HS_DOEPINT5_B2BSTUP = 0x40; // Back-to-back SETUP packets received
    static constexpr uint32_t OTG_HS_DOEPINT5_NYET = 0x4000;  // NYET interrupt

    static constexpr uint32_t OTG_HS_DOEPINT6_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DOEPINT6_XFRC = 0x1;     // Transfer completed interrupt
    static constexpr uint32_t OTG_HS_DOEPINT6_EPDISD = 0x2;   // Endpoint disabled interrupt
    static constexpr uint32_t OTG_HS_DOEPINT6_STUP = 0x8;     // SETUP phase done
    static constexpr uint32_t OTG_HS_DOEPINT6_OTEPDIS = 0x10; // OUT token received when endpoint disabled
    static constexpr uint32_t OTG_HS_DOEPINT6_B2BSTUP = 0x40; // Back-to-back SETUP packets received
    static constexpr uint32_t OTG_HS_DOEPINT6_NYET = 0x4000;  // NYET interrupt

    static constexpr uint32_t OTG_HS_DOEPINT7_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DOEPINT7_XFRC = 0x1;     // Transfer completed interrupt
    static constexpr uint32_t OTG_HS_DOEPINT7_EPDISD = 0x2;   // Endpoint disabled interrupt
    static constexpr uint32_t OTG_HS_DOEPINT7_STUP = 0x8;     // SETUP phase done
    static constexpr uint32_t OTG_HS_DOEPINT7_OTEPDIS = 0x10; // OUT token received when endpoint disabled
    static constexpr uint32_t OTG_HS_DOEPINT7_B2BSTUP = 0x40; // Back-to-back SETUP packets received
    static constexpr uint32_t OTG_HS_DOEPINT7_NYET = 0x4000;  // NYET interrupt

    static constexpr uint32_t OTG_HS_DOEPTSIZ0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPTSIZ0_XFRSIZ =          // Transfer size
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t OTG_HS_DOEPTSIZ0_PKTCNT = 0x80000; // Packet count
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPTSIZ0_STUPCNT =         // SETUP packet count
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HS_DOEPTSIZ1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPTSIZ1_XFRSIZ =           // Transfer size
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPTSIZ1_PKTCNT =           // Packet count
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPTSIZ1_RXDPID_STUPCNT =   // Received data PID/SETUP packet count
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HS_DOEPTSIZ2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPTSIZ2_XFRSIZ =           // Transfer size
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPTSIZ2_PKTCNT =           // Packet count
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPTSIZ2_RXDPID_STUPCNT =   // Received data PID/SETUP packet count
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HS_DOEPTSIZ3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPTSIZ3_XFRSIZ =           // Transfer size
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPTSIZ3_PKTCNT =           // Packet count
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPTSIZ3_RXDPID_STUPCNT =   // Received data PID/SETUP packet count
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HS_DOEPTSIZ4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPTSIZ4_XFRSIZ =           // Transfer size
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPTSIZ4_PKTCNT =           // Packet count
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPTSIZ4_RXDPID_STUPCNT =   // Received data PID/SETUP packet count
        bit_field_t<29, 0x3>::value<X>();
};


////
//
//      USB on the go high speed
//
////

struct stm32f446_otg_hs_device_t
{
    volatile uint32_t OTG_HS_DCFG;         // [read-write] OTG_HS device configuration register
    volatile uint32_t OTG_HS_DCTL;         // OTG_HS device control register
    volatile uint32_t OTG_HS_DSTS;         // [read-only] OTG_HS device status register
    reserved_t<0x1> _0x10;
    volatile uint32_t OTG_HS_DIEPMSK;      // [read-write] OTG_HS device IN endpoint common interrupt mask register
    volatile uint32_t OTG_HS_DOEPMSK;      // [read-write] OTG_HS device OUT endpoint common interrupt mask register
    volatile uint32_t OTG_HS_DAINT;        // [read-only] OTG_HS device all endpoints interrupt register
    volatile uint32_t OTG_HS_DAINTMSK;     // [read-write] OTG_HS all endpoints interrupt mask register
    reserved_t<0x2> _0x28;
    volatile uint32_t OTG_HS_DVBUSDIS;     // [read-write] OTG_HS device VBUS discharge time register
    volatile uint32_t OTG_HS_DVBUSPULSE;   // [read-write] OTG_HS device VBUS pulsing time register
    volatile uint32_t OTG_HS_DTHRCTL;      // [read-write] OTG_HS Device threshold control register
    volatile uint32_t OTG_HS_DIEPEMPMSK;   // [read-write] OTG_HS device IN endpoint FIFO empty interrupt mask register
    volatile uint32_t OTG_HS_DEACHINT;     // [read-write] OTG_HS device each endpoint interrupt register
    volatile uint32_t OTG_HS_DEACHINTMSK;  // [read-write] OTG_HS device each endpoint interrupt register mask
    reserved_t<0x1> _0x44;
    volatile uint32_t OTG_HS_DIEPEACHMSK1; // [read-write] OTG_HS device each in endpoint-1 interrupt register
    reserved_t<0xf> _0x84;
    volatile uint32_t OTG_HS_DOEPEACHMSK1; // [read-write] OTG_HS device each OUT endpoint-1 interrupt register
    reserved_t<0x1e> _0x100;
    volatile uint32_t OTG_HS_DIEPCTL0;     // OTG device endpoint-0 control register
    reserved_t<0x1> _0x108;
    volatile uint32_t OTG_HS_DIEPINT0;     // OTG device endpoint-0 interrupt register
    reserved_t<0x1> _0x110;
    volatile uint32_t OTG_HS_DIEPTSIZ0;    // [read-write] OTG_HS device IN endpoint 0 transfer size register
    volatile uint32_t OTG_HS_DIEPDMA1;     // [read-write] OTG_HS device endpoint-1 DMA address register
    volatile uint32_t OTG_HS_DTXFSTS0;     // [read-only] OTG_HS device IN endpoint transmit FIFO status register
    reserved_t<0x1> _0x120;
    volatile uint32_t OTG_HS_DIEPCTL1;     // OTG device endpoint-1 control register
    reserved_t<0x1> _0x128;
    volatile uint32_t OTG_HS_DIEPINT1;     // OTG device endpoint-1 interrupt register
    reserved_t<0x1> _0x130;
    volatile uint32_t OTG_HS_DIEPTSIZ1;    // [read-write] OTG_HS device endpoint transfer size register
    volatile uint32_t OTG_HS_DIEPDMA2;     // [read-write] OTG_HS device endpoint-2 DMA address register
    volatile uint32_t OTG_HS_DTXFSTS1;     // [read-only] OTG_HS device IN endpoint transmit FIFO status register
    reserved_t<0x1> _0x140;
    volatile uint32_t OTG_HS_DIEPCTL2;     // OTG device endpoint-2 control register
    reserved_t<0x1> _0x148;
    volatile uint32_t OTG_HS_DIEPINT2;     // OTG device endpoint-2 interrupt register
    reserved_t<0x1> _0x150;
    volatile uint32_t OTG_HS_DIEPTSIZ2;    // [read-write] OTG_HS device endpoint transfer size register
    volatile uint32_t OTG_HS_DIEPDMA3;     // [read-write] OTG_HS device endpoint-3 DMA address register
    volatile uint32_t OTG_HS_DTXFSTS2;     // [read-only] OTG_HS device IN endpoint transmit FIFO status register
    reserved_t<0x1> _0x160;
    volatile uint32_t OTG_HS_DIEPCTL3;     // OTG device endpoint-3 control register
    reserved_t<0x1> _0x168;
    volatile uint32_t OTG_HS_DIEPINT3;     // OTG device endpoint-3 interrupt register
    reserved_t<0x1> _0x170;
    volatile uint32_t OTG_HS_DIEPTSIZ3;    // [read-write] OTG_HS device endpoint transfer size register
    volatile uint32_t OTG_HS_DIEPDMA4;     // [read-write] OTG_HS device endpoint-4 DMA address register
    volatile uint32_t OTG_HS_DTXFSTS3;     // [read-only] OTG_HS device IN endpoint transmit FIFO status register
    reserved_t<0x1> _0x180;
    volatile uint32_t OTG_HS_DIEPCTL4;     // OTG device endpoint-4 control register
    reserved_t<0x1> _0x188;
    volatile uint32_t OTG_HS_DIEPINT4;     // OTG device endpoint-4 interrupt register
    reserved_t<0x1> _0x190;
    volatile uint32_t OTG_HS_DIEPTSIZ4;    // [read-write] OTG_HS device endpoint transfer size register
    volatile uint32_t OTG_HS_DIEPDMA5;     // [read-write] OTG_HS device endpoint-5 DMA address register
    volatile uint32_t OTG_HS_DTXFSTS4;     // [read-only] OTG_HS device IN endpoint transmit FIFO status register
    reserved_t<0x1> _0x1a0;
    volatile uint32_t OTG_HS_DIEPCTL5;     // OTG device endpoint-5 control register
    reserved_t<0x1> _0x1a8;
    volatile uint32_t OTG_HS_DIEPINT5;     // OTG device endpoint-5 interrupt register
    reserved_t<0x1> _0x1b0;
    volatile uint32_t OTG_HS_DIEPTSIZ5;    // [read-write] OTG_HS device endpoint transfer size register
    reserved_t<0x1> _0x1b8;
    volatile uint32_t OTG_HS_DTXFSTS5;     // [read-only] OTG_HS device IN endpoint transmit FIFO status register
    reserved_t<0x1> _0x1c0;
    volatile uint32_t OTG_HS_DIEPCTL6;     // OTG device endpoint-6 control register
    reserved_t<0x1> _0x1c8;
    volatile uint32_t OTG_HS_DIEPINT6;     // OTG device endpoint-6 interrupt register
    reserved_t<0x5> _0x1e0;
    volatile uint32_t OTG_HS_DIEPCTL7;     // OTG device endpoint-7 control register
    reserved_t<0x1> _0x1e8;
    volatile uint32_t OTG_HS_DIEPINT7;     // OTG device endpoint-7 interrupt register
    reserved_t<0x45> _0x300;
    volatile uint32_t OTG_HS_DOEPCTL0;     // OTG_HS device control OUT endpoint 0 control register
    reserved_t<0x1> _0x308;
    volatile uint32_t OTG_HS_DOEPINT0;     // [read-write] OTG_HS device endpoint-0 interrupt register
    reserved_t<0x1> _0x310;
    volatile uint32_t OTG_HS_DOEPTSIZ0;    // [read-write] OTG_HS device endpoint-1 transfer size register
    reserved_t<0x3> _0x320;
    volatile uint32_t OTG_HS_DOEPCTL1;     // OTG device endpoint-1 control register
    reserved_t<0x1> _0x328;
    volatile uint32_t OTG_HS_DOEPINT1;     // [read-write] OTG_HS device endpoint-1 interrupt register
    reserved_t<0x1> _0x330;
    volatile uint32_t OTG_HS_DOEPTSIZ1;    // [read-write] OTG_HS device endpoint-2 transfer size register
    reserved_t<0x3> _0x340;
    volatile uint32_t OTG_HS_DOEPCTL2;     // OTG device endpoint-2 control register
    reserved_t<0x1> _0x348;
    volatile uint32_t OTG_HS_DOEPINT2;     // [read-write] OTG_HS device endpoint-2 interrupt register
    reserved_t<0x1> _0x350;
    volatile uint32_t OTG_HS_DOEPTSIZ2;    // [read-write] OTG_HS device endpoint-3 transfer size register
    reserved_t<0x3> _0x360;
    volatile uint32_t OTG_HS_DOEPCTL3;     // OTG device endpoint-3 control register
    reserved_t<0x1> _0x368;
    volatile uint32_t OTG_HS_DOEPINT3;     // [read-write] OTG_HS device endpoint-3 interrupt register
    reserved_t<0x1> _0x370;
    volatile uint32_t OTG_HS_DOEPTSIZ3;    // [read-write] OTG_HS device endpoint-4 transfer size register
    reserved_t<0x5> _0x388;
    volatile uint32_t OTG_HS_DOEPINT4;     // [read-write] OTG_HS device endpoint-4 interrupt register
    reserved_t<0x1> _0x390;
    volatile uint32_t OTG_HS_DOEPTSIZ4;    // [read-write] OTG_HS device endpoint-5 transfer size register
    reserved_t<0x5> _0x3a8;
    volatile uint32_t OTG_HS_DOEPINT5;     // [read-write] OTG_HS device endpoint-5 interrupt register
    reserved_t<0x7> _0x3c8;
    volatile uint32_t OTG_HS_DOEPINT6;     // [read-write] OTG_HS device endpoint-6 interrupt register
    reserved_t<0x7> _0x3e8;
    volatile uint32_t OTG_HS_DOEPINT7;     // [read-write] OTG_HS device endpoint-7 interrupt register

    static constexpr uint32_t OTG_HS_DCFG_RESET_VALUE = 0x2200000;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DCFG_DSPD =            // Device speed
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_DCFG_NZLSOHSK = 0x4;   // Nonzero-length status OUT handshake
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DCFG_DAD =             // Device address
        bit_field_t<4, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DCFG_PFIVL =           // Periodic (micro)frame interval
        bit_field_t<11, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DCFG_PERSCHIVL =       // Periodic scheduling interval
        bit_field_t<24, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_DCFG_XCVRDLY = 0x4000; // Transceiver delay
    static constexpr uint32_t OTG_HS_DCFG_ERRATIM = 0x8000; // Erratic error interrupt mask

    static constexpr uint32_t OTG_HS_DCTL_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DCTL_RWUSIG = 0x1;     // Remote wakeup signaling
    static constexpr uint32_t OTG_HS_DCTL_SDIS = 0x2;       // Soft disconnect
    static constexpr uint32_t OTG_HS_DCTL_GINSTS = 0x4;     // Global IN NAK status
    static constexpr uint32_t OTG_HS_DCTL_GONSTS = 0x8;     // Global OUT NAK status
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DCTL_TCTL =            // Test control
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t OTG_HS_DCTL_SGINAK = 0x80;    // Set global IN NAK
    static constexpr uint32_t OTG_HS_DCTL_CGINAK = 0x100;   // Clear global IN NAK
    static constexpr uint32_t OTG_HS_DCTL_SGONAK = 0x200;   // Set global OUT NAK
    static constexpr uint32_t OTG_HS_DCTL_CGONAK = 0x400;   // Clear global OUT NAK
    static constexpr uint32_t OTG_HS_DCTL_POPRGDNE = 0x800; // Power-on programming done

    static constexpr uint32_t OTG_HS_DSTS_RESET_VALUE = 0x10;
    static constexpr uint32_t OTG_HS_DSTS_SUSPSTS = 0x1; // Suspend status
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DSTS_ENUMSPD =      // Enumerated speed
        bit_field_t<1, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_DSTS_EERR = 0x8;    // Erratic error
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DSTS_FNSOF =        // Frame number of the received SOF
        bit_field_t<8, 0x3fff>::value<X>();

    static constexpr uint32_t OTG_HS_DIEPMSK_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DIEPMSK_XFRCM = 0x1;      // Transfer completed interrupt mask
    static constexpr uint32_t OTG_HS_DIEPMSK_EPDM = 0x2;       // Endpoint disabled interrupt mask
    static constexpr uint32_t OTG_HS_DIEPMSK_TOM = 0x8;        // Timeout condition mask (nonisochronous endpoints)
    static constexpr uint32_t OTG_HS_DIEPMSK_ITTXFEMSK = 0x10; // IN token received when TxFIFO empty mask
    static constexpr uint32_t OTG_HS_DIEPMSK_INEPNMM = 0x20;   // IN token received with EP mismatch mask
    static constexpr uint32_t OTG_HS_DIEPMSK_INEPNEM = 0x40;   // IN endpoint NAK effective mask
    static constexpr uint32_t OTG_HS_DIEPMSK_TXFURM = 0x100;   // FIFO underrun mask
    static constexpr uint32_t OTG_HS_DIEPMSK_BIM = 0x200;      // BNA interrupt mask

    static constexpr uint32_t OTG_HS_DOEPMSK_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DOEPMSK_XFRCM = 0x1;    // Transfer completed interrupt mask
    static constexpr uint32_t OTG_HS_DOEPMSK_EPDM = 0x2;     // Endpoint disabled interrupt mask
    static constexpr uint32_t OTG_HS_DOEPMSK_STUPM = 0x8;    // SETUP phase done mask
    static constexpr uint32_t OTG_HS_DOEPMSK_OTEPDM = 0x10;  // OUT token received when endpoint disabled mask
    static constexpr uint32_t OTG_HS_DOEPMSK_B2BSTUP = 0x40; // Back-to-back SETUP packets received mask
    static constexpr uint32_t OTG_HS_DOEPMSK_OPEM = 0x100;   // OUT packet error mask
    static constexpr uint32_t OTG_HS_DOEPMSK_BOIM = 0x200;   // BNA interrupt mask

    static constexpr uint32_t OTG_HS_DAINT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DAINT_IEPINT =   // IN endpoint interrupt bits
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DAINT_OEPINT =   // OUT endpoint interrupt bits
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HS_DAINTMSK_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DAINTMSK_IEPM =   // IN EP interrupt mask bits
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DAINTMSK_OEPM =   // OUT EP interrupt mask bits
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HS_DVBUSDIS_RESET_VALUE = 0x17d7;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DVBUSDIS_VBUSDT =   // Device VBUS discharge time
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HS_DVBUSPULSE_RESET_VALUE = 0x5b8;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DVBUSPULSE_DVBUSP =   // Device VBUS pulsing time
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t OTG_HS_DTHRCTL_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DTHRCTL_NONISOTHREN = 0x1; // Nonisochronous IN endpoints threshold enable
    static constexpr uint32_t OTG_HS_DTHRCTL_ISOTHREN = 0x2;    // ISO IN endpoint threshold enable
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DTHRCTL_TXTHRLEN =         // Transmit threshold length
        bit_field_t<2, 0x1ff>::value<X>();
    static constexpr uint32_t OTG_HS_DTHRCTL_RXTHREN = 0x10000; // Receive threshold enable
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DTHRCTL_RXTHRLEN =         // Receive threshold length
        bit_field_t<17, 0x1ff>::value<X>();
    static constexpr uint32_t OTG_HS_DTHRCTL_ARPEN = 0x8000000; // Arbiter parking enable

    static constexpr uint32_t OTG_HS_DIEPEMPMSK_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPEMPMSK_INEPTXFEM =   // IN EP Tx FIFO empty interrupt mask bits
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HS_DEACHINT_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DEACHINT_IEP1INT = 0x2;     // IN endpoint 1interrupt bit
    static constexpr uint32_t OTG_HS_DEACHINT_OEP1INT = 0x20000; // OUT endpoint 1 interrupt bit

    static constexpr uint32_t OTG_HS_DEACHINTMSK_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DEACHINTMSK_IEP1INTM = 0x2;     // IN Endpoint 1 interrupt mask bit
    static constexpr uint32_t OTG_HS_DEACHINTMSK_OEP1INTM = 0x20000; // OUT Endpoint 1 interrupt mask bit

    static constexpr uint32_t OTG_HS_DIEPEACHMSK1_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DIEPEACHMSK1_XFRCM = 0x1;      // Transfer completed interrupt mask
    static constexpr uint32_t OTG_HS_DIEPEACHMSK1_EPDM = 0x2;       // Endpoint disabled interrupt mask
    static constexpr uint32_t OTG_HS_DIEPEACHMSK1_TOM = 0x8;        // Timeout condition mask (nonisochronous endpoints)
    static constexpr uint32_t OTG_HS_DIEPEACHMSK1_ITTXFEMSK = 0x10; // IN token received when TxFIFO empty mask
    static constexpr uint32_t OTG_HS_DIEPEACHMSK1_INEPNMM = 0x20;   // IN token received with EP mismatch mask
    static constexpr uint32_t OTG_HS_DIEPEACHMSK1_INEPNEM = 0x40;   // IN endpoint NAK effective mask
    static constexpr uint32_t OTG_HS_DIEPEACHMSK1_TXFURM = 0x100;   // FIFO underrun mask
    static constexpr uint32_t OTG_HS_DIEPEACHMSK1_BIM = 0x200;      // BNA interrupt mask
    static constexpr uint32_t OTG_HS_DIEPEACHMSK1_NAKM = 0x2000;    // NAK interrupt mask

    static constexpr uint32_t OTG_HS_DOEPEACHMSK1_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DOEPEACHMSK1_XFRCM = 0x1;      // Transfer completed interrupt mask
    static constexpr uint32_t OTG_HS_DOEPEACHMSK1_EPDM = 0x2;       // Endpoint disabled interrupt mask
    static constexpr uint32_t OTG_HS_DOEPEACHMSK1_TOM = 0x8;        // Timeout condition mask
    static constexpr uint32_t OTG_HS_DOEPEACHMSK1_ITTXFEMSK = 0x10; // IN token received when TxFIFO empty mask
    static constexpr uint32_t OTG_HS_DOEPEACHMSK1_INEPNMM = 0x20;   // IN token received with EP mismatch mask
    static constexpr uint32_t OTG_HS_DOEPEACHMSK1_INEPNEM = 0x40;   // IN endpoint NAK effective mask
    static constexpr uint32_t OTG_HS_DOEPEACHMSK1_TXFURM = 0x100;   // OUT packet error mask
    static constexpr uint32_t OTG_HS_DOEPEACHMSK1_BIM = 0x200;      // BNA interrupt mask
    static constexpr uint32_t OTG_HS_DOEPEACHMSK1_BERRM = 0x1000;   // Bubble error interrupt mask
    static constexpr uint32_t OTG_HS_DOEPEACHMSK1_NAKM = 0x2000;    // NAK interrupt mask
    static constexpr uint32_t OTG_HS_DOEPEACHMSK1_NYETM = 0x4000;   // NYET interrupt mask

    static constexpr uint32_t OTG_HS_DIEPCTL0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL0_MPSIZ =                      // Maximum packet size
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL0_USBAEP = 0x8000;             // USB active endpoint
    static constexpr uint32_t OTG_HS_DIEPCTL0_EONUM_DPID = 0x10000;        // Even/odd frame
    static constexpr uint32_t OTG_HS_DIEPCTL0_NAKSTS = 0x20000;            // NAK status
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL0_EPTYP =                      // Endpoint type
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL0_Stall = 0x200000;            // STALL handshake
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL0_TXFNUM =                     // TxFIFO number
        bit_field_t<22, 0xf>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL0_CNAK = 0x4000000;            // Clear NAK
    static constexpr uint32_t OTG_HS_DIEPCTL0_SNAK = 0x8000000;            // Set NAK
    static constexpr uint32_t OTG_HS_DIEPCTL0_SD0PID_SEVNFRM = 0x10000000; // Set DATA0 PID
    static constexpr uint32_t OTG_HS_DIEPCTL0_SODDFRM = 0x20000000;        // Set odd frame
    static constexpr uint32_t OTG_HS_DIEPCTL0_EPDIS = 0x40000000;          // Endpoint disable
    static constexpr uint32_t OTG_HS_DIEPCTL0_EPENA = 0x80000000;          // Endpoint enable

    static constexpr uint32_t OTG_HS_DIEPCTL1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL1_MPSIZ =                      // Maximum packet size
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL1_USBAEP = 0x8000;             // USB active endpoint
    static constexpr uint32_t OTG_HS_DIEPCTL1_EONUM_DPID = 0x10000;        // Even/odd frame
    static constexpr uint32_t OTG_HS_DIEPCTL1_NAKSTS = 0x20000;            // NAK status
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL1_EPTYP =                      // Endpoint type
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL1_Stall = 0x200000;            // STALL handshake
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL1_TXFNUM =                     // TxFIFO number
        bit_field_t<22, 0xf>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL1_CNAK = 0x4000000;            // Clear NAK
    static constexpr uint32_t OTG_HS_DIEPCTL1_SNAK = 0x8000000;            // Set NAK
    static constexpr uint32_t OTG_HS_DIEPCTL1_SD0PID_SEVNFRM = 0x10000000; // Set DATA0 PID
    static constexpr uint32_t OTG_HS_DIEPCTL1_SODDFRM = 0x20000000;        // Set odd frame
    static constexpr uint32_t OTG_HS_DIEPCTL1_EPDIS = 0x40000000;          // Endpoint disable
    static constexpr uint32_t OTG_HS_DIEPCTL1_EPENA = 0x80000000;          // Endpoint enable

    static constexpr uint32_t OTG_HS_DIEPCTL2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL2_MPSIZ =                      // Maximum packet size
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL2_USBAEP = 0x8000;             // USB active endpoint
    static constexpr uint32_t OTG_HS_DIEPCTL2_EONUM_DPID = 0x10000;        // Even/odd frame
    static constexpr uint32_t OTG_HS_DIEPCTL2_NAKSTS = 0x20000;            // NAK status
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL2_EPTYP =                      // Endpoint type
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL2_Stall = 0x200000;            // STALL handshake
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL2_TXFNUM =                     // TxFIFO number
        bit_field_t<22, 0xf>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL2_CNAK = 0x4000000;            // Clear NAK
    static constexpr uint32_t OTG_HS_DIEPCTL2_SNAK = 0x8000000;            // Set NAK
    static constexpr uint32_t OTG_HS_DIEPCTL2_SD0PID_SEVNFRM = 0x10000000; // Set DATA0 PID
    static constexpr uint32_t OTG_HS_DIEPCTL2_SODDFRM = 0x20000000;        // Set odd frame
    static constexpr uint32_t OTG_HS_DIEPCTL2_EPDIS = 0x40000000;          // Endpoint disable
    static constexpr uint32_t OTG_HS_DIEPCTL2_EPENA = 0x80000000;          // Endpoint enable

    static constexpr uint32_t OTG_HS_DIEPCTL3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL3_MPSIZ =                      // Maximum packet size
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL3_USBAEP = 0x8000;             // USB active endpoint
    static constexpr uint32_t OTG_HS_DIEPCTL3_EONUM_DPID = 0x10000;        // Even/odd frame
    static constexpr uint32_t OTG_HS_DIEPCTL3_NAKSTS = 0x20000;            // NAK status
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL3_EPTYP =                      // Endpoint type
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL3_Stall = 0x200000;            // STALL handshake
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL3_TXFNUM =                     // TxFIFO number
        bit_field_t<22, 0xf>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL3_CNAK = 0x4000000;            // Clear NAK
    static constexpr uint32_t OTG_HS_DIEPCTL3_SNAK = 0x8000000;            // Set NAK
    static constexpr uint32_t OTG_HS_DIEPCTL3_SD0PID_SEVNFRM = 0x10000000; // Set DATA0 PID
    static constexpr uint32_t OTG_HS_DIEPCTL3_SODDFRM = 0x20000000;        // Set odd frame
    static constexpr uint32_t OTG_HS_DIEPCTL3_EPDIS = 0x40000000;          // Endpoint disable
    static constexpr uint32_t OTG_HS_DIEPCTL3_EPENA = 0x80000000;          // Endpoint enable

    static constexpr uint32_t OTG_HS_DIEPCTL4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL4_MPSIZ =                      // Maximum packet size
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL4_USBAEP = 0x8000;             // USB active endpoint
    static constexpr uint32_t OTG_HS_DIEPCTL4_EONUM_DPID = 0x10000;        // Even/odd frame
    static constexpr uint32_t OTG_HS_DIEPCTL4_NAKSTS = 0x20000;            // NAK status
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL4_EPTYP =                      // Endpoint type
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL4_Stall = 0x200000;            // STALL handshake
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL4_TXFNUM =                     // TxFIFO number
        bit_field_t<22, 0xf>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL4_CNAK = 0x4000000;            // Clear NAK
    static constexpr uint32_t OTG_HS_DIEPCTL4_SNAK = 0x8000000;            // Set NAK
    static constexpr uint32_t OTG_HS_DIEPCTL4_SD0PID_SEVNFRM = 0x10000000; // Set DATA0 PID
    static constexpr uint32_t OTG_HS_DIEPCTL4_SODDFRM = 0x20000000;        // Set odd frame
    static constexpr uint32_t OTG_HS_DIEPCTL4_EPDIS = 0x40000000;          // Endpoint disable
    static constexpr uint32_t OTG_HS_DIEPCTL4_EPENA = 0x80000000;          // Endpoint enable

    static constexpr uint32_t OTG_HS_DIEPCTL5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL5_MPSIZ =                      // Maximum packet size
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL5_USBAEP = 0x8000;             // USB active endpoint
    static constexpr uint32_t OTG_HS_DIEPCTL5_EONUM_DPID = 0x10000;        // Even/odd frame
    static constexpr uint32_t OTG_HS_DIEPCTL5_NAKSTS = 0x20000;            // NAK status
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL5_EPTYP =                      // Endpoint type
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL5_Stall = 0x200000;            // STALL handshake
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL5_TXFNUM =                     // TxFIFO number
        bit_field_t<22, 0xf>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL5_CNAK = 0x4000000;            // Clear NAK
    static constexpr uint32_t OTG_HS_DIEPCTL5_SNAK = 0x8000000;            // Set NAK
    static constexpr uint32_t OTG_HS_DIEPCTL5_SD0PID_SEVNFRM = 0x10000000; // Set DATA0 PID
    static constexpr uint32_t OTG_HS_DIEPCTL5_SODDFRM = 0x20000000;        // Set odd frame
    static constexpr uint32_t OTG_HS_DIEPCTL5_EPDIS = 0x40000000;          // Endpoint disable
    static constexpr uint32_t OTG_HS_DIEPCTL5_EPENA = 0x80000000;          // Endpoint enable

    static constexpr uint32_t OTG_HS_DIEPCTL6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL6_MPSIZ =                      // Maximum packet size
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL6_USBAEP = 0x8000;             // USB active endpoint
    static constexpr uint32_t OTG_HS_DIEPCTL6_EONUM_DPID = 0x10000;        // Even/odd frame
    static constexpr uint32_t OTG_HS_DIEPCTL6_NAKSTS = 0x20000;            // NAK status
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL6_EPTYP =                      // Endpoint type
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL6_Stall = 0x200000;            // STALL handshake
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL6_TXFNUM =                     // TxFIFO number
        bit_field_t<22, 0xf>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL6_CNAK = 0x4000000;            // Clear NAK
    static constexpr uint32_t OTG_HS_DIEPCTL6_SNAK = 0x8000000;            // Set NAK
    static constexpr uint32_t OTG_HS_DIEPCTL6_SD0PID_SEVNFRM = 0x10000000; // Set DATA0 PID
    static constexpr uint32_t OTG_HS_DIEPCTL6_SODDFRM = 0x20000000;        // Set odd frame
    static constexpr uint32_t OTG_HS_DIEPCTL6_EPDIS = 0x40000000;          // Endpoint disable
    static constexpr uint32_t OTG_HS_DIEPCTL6_EPENA = 0x80000000;          // Endpoint enable

    static constexpr uint32_t OTG_HS_DIEPCTL7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL7_MPSIZ =                      // Maximum packet size
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL7_USBAEP = 0x8000;             // USB active endpoint
    static constexpr uint32_t OTG_HS_DIEPCTL7_EONUM_DPID = 0x10000;        // Even/odd frame
    static constexpr uint32_t OTG_HS_DIEPCTL7_NAKSTS = 0x20000;            // NAK status
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL7_EPTYP =                      // Endpoint type
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL7_Stall = 0x200000;            // STALL handshake
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPCTL7_TXFNUM =                     // TxFIFO number
        bit_field_t<22, 0xf>::value<X>();
    static constexpr uint32_t OTG_HS_DIEPCTL7_CNAK = 0x4000000;            // Clear NAK
    static constexpr uint32_t OTG_HS_DIEPCTL7_SNAK = 0x8000000;            // Set NAK
    static constexpr uint32_t OTG_HS_DIEPCTL7_SD0PID_SEVNFRM = 0x10000000; // Set DATA0 PID
    static constexpr uint32_t OTG_HS_DIEPCTL7_SODDFRM = 0x20000000;        // Set odd frame
    static constexpr uint32_t OTG_HS_DIEPCTL7_EPDIS = 0x40000000;          // Endpoint disable
    static constexpr uint32_t OTG_HS_DIEPCTL7_EPENA = 0x80000000;          // Endpoint enable

    static constexpr uint32_t OTG_HS_DIEPINT0_RESET_VALUE = 0x80;
    static constexpr uint32_t OTG_HS_DIEPINT0_XFRC = 0x1;         // Transfer completed interrupt
    static constexpr uint32_t OTG_HS_DIEPINT0_EPDISD = 0x2;       // Endpoint disabled interrupt
    static constexpr uint32_t OTG_HS_DIEPINT0_TOC = 0x8;          // Timeout condition
    static constexpr uint32_t OTG_HS_DIEPINT0_ITTXFE = 0x10;      // IN token received when TxFIFO is empty
    static constexpr uint32_t OTG_HS_DIEPINT0_INEPNE = 0x40;      // IN endpoint NAK effective
    static constexpr uint32_t OTG_HS_DIEPINT0_TXFE = 0x80;        // Transmit FIFO empty
    static constexpr uint32_t OTG_HS_DIEPINT0_TXFIFOUDRN = 0x100; // Transmit Fifo Underrun
    static constexpr uint32_t OTG_HS_DIEPINT0_BNA = 0x200;        // Buffer not available interrupt
    static constexpr uint32_t OTG_HS_DIEPINT0_PKTDRPSTS = 0x800;  // Packet dropped status
    static constexpr uint32_t OTG_HS_DIEPINT0_BERR = 0x1000;      // Babble error interrupt
    static constexpr uint32_t OTG_HS_DIEPINT0_NAK = 0x2000;       // NAK interrupt

    static constexpr uint32_t OTG_HS_DIEPINT1_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DIEPINT1_XFRC = 0x1;         // Transfer completed interrupt
    static constexpr uint32_t OTG_HS_DIEPINT1_EPDISD = 0x2;       // Endpoint disabled interrupt
    static constexpr uint32_t OTG_HS_DIEPINT1_TOC = 0x8;          // Timeout condition
    static constexpr uint32_t OTG_HS_DIEPINT1_ITTXFE = 0x10;      // IN token received when TxFIFO is empty
    static constexpr uint32_t OTG_HS_DIEPINT1_INEPNE = 0x40;      // IN endpoint NAK effective
    static constexpr uint32_t OTG_HS_DIEPINT1_TXFE = 0x80;        // Transmit FIFO empty
    static constexpr uint32_t OTG_HS_DIEPINT1_TXFIFOUDRN = 0x100; // Transmit Fifo Underrun
    static constexpr uint32_t OTG_HS_DIEPINT1_BNA = 0x200;        // Buffer not available interrupt
    static constexpr uint32_t OTG_HS_DIEPINT1_PKTDRPSTS = 0x800;  // Packet dropped status
    static constexpr uint32_t OTG_HS_DIEPINT1_BERR = 0x1000;      // Babble error interrupt
    static constexpr uint32_t OTG_HS_DIEPINT1_NAK = 0x2000;       // NAK interrupt

    static constexpr uint32_t OTG_HS_DIEPINT2_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DIEPINT2_XFRC = 0x1;         // Transfer completed interrupt
    static constexpr uint32_t OTG_HS_DIEPINT2_EPDISD = 0x2;       // Endpoint disabled interrupt
    static constexpr uint32_t OTG_HS_DIEPINT2_TOC = 0x8;          // Timeout condition
    static constexpr uint32_t OTG_HS_DIEPINT2_ITTXFE = 0x10;      // IN token received when TxFIFO is empty
    static constexpr uint32_t OTG_HS_DIEPINT2_INEPNE = 0x40;      // IN endpoint NAK effective
    static constexpr uint32_t OTG_HS_DIEPINT2_TXFE = 0x80;        // Transmit FIFO empty
    static constexpr uint32_t OTG_HS_DIEPINT2_TXFIFOUDRN = 0x100; // Transmit Fifo Underrun
    static constexpr uint32_t OTG_HS_DIEPINT2_BNA = 0x200;        // Buffer not available interrupt
    static constexpr uint32_t OTG_HS_DIEPINT2_PKTDRPSTS = 0x800;  // Packet dropped status
    static constexpr uint32_t OTG_HS_DIEPINT2_BERR = 0x1000;      // Babble error interrupt
    static constexpr uint32_t OTG_HS_DIEPINT2_NAK = 0x2000;       // NAK interrupt

    static constexpr uint32_t OTG_HS_DIEPINT3_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DIEPINT3_XFRC = 0x1;         // Transfer completed interrupt
    static constexpr uint32_t OTG_HS_DIEPINT3_EPDISD = 0x2;       // Endpoint disabled interrupt
    static constexpr uint32_t OTG_HS_DIEPINT3_TOC = 0x8;          // Timeout condition
    static constexpr uint32_t OTG_HS_DIEPINT3_ITTXFE = 0x10;      // IN token received when TxFIFO is empty
    static constexpr uint32_t OTG_HS_DIEPINT3_INEPNE = 0x40;      // IN endpoint NAK effective
    static constexpr uint32_t OTG_HS_DIEPINT3_TXFE = 0x80;        // Transmit FIFO empty
    static constexpr uint32_t OTG_HS_DIEPINT3_TXFIFOUDRN = 0x100; // Transmit Fifo Underrun
    static constexpr uint32_t OTG_HS_DIEPINT3_BNA = 0x200;        // Buffer not available interrupt
    static constexpr uint32_t OTG_HS_DIEPINT3_PKTDRPSTS = 0x800;  // Packet dropped status
    static constexpr uint32_t OTG_HS_DIEPINT3_BERR = 0x1000;      // Babble error interrupt
    static constexpr uint32_t OTG_HS_DIEPINT3_NAK = 0x2000;       // NAK interrupt

    static constexpr uint32_t OTG_HS_DIEPINT4_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DIEPINT4_XFRC = 0x1;         // Transfer completed interrupt
    static constexpr uint32_t OTG_HS_DIEPINT4_EPDISD = 0x2;       // Endpoint disabled interrupt
    static constexpr uint32_t OTG_HS_DIEPINT4_TOC = 0x8;          // Timeout condition
    static constexpr uint32_t OTG_HS_DIEPINT4_ITTXFE = 0x10;      // IN token received when TxFIFO is empty
    static constexpr uint32_t OTG_HS_DIEPINT4_INEPNE = 0x40;      // IN endpoint NAK effective
    static constexpr uint32_t OTG_HS_DIEPINT4_TXFE = 0x80;        // Transmit FIFO empty
    static constexpr uint32_t OTG_HS_DIEPINT4_TXFIFOUDRN = 0x100; // Transmit Fifo Underrun
    static constexpr uint32_t OTG_HS_DIEPINT4_BNA = 0x200;        // Buffer not available interrupt
    static constexpr uint32_t OTG_HS_DIEPINT4_PKTDRPSTS = 0x800;  // Packet dropped status
    static constexpr uint32_t OTG_HS_DIEPINT4_BERR = 0x1000;      // Babble error interrupt
    static constexpr uint32_t OTG_HS_DIEPINT4_NAK = 0x2000;       // NAK interrupt

    static constexpr uint32_t OTG_HS_DIEPINT5_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DIEPINT5_XFRC = 0x1;         // Transfer completed interrupt
    static constexpr uint32_t OTG_HS_DIEPINT5_EPDISD = 0x2;       // Endpoint disabled interrupt
    static constexpr uint32_t OTG_HS_DIEPINT5_TOC = 0x8;          // Timeout condition
    static constexpr uint32_t OTG_HS_DIEPINT5_ITTXFE = 0x10;      // IN token received when TxFIFO is empty
    static constexpr uint32_t OTG_HS_DIEPINT5_INEPNE = 0x40;      // IN endpoint NAK effective
    static constexpr uint32_t OTG_HS_DIEPINT5_TXFE = 0x80;        // Transmit FIFO empty
    static constexpr uint32_t OTG_HS_DIEPINT5_TXFIFOUDRN = 0x100; // Transmit Fifo Underrun
    static constexpr uint32_t OTG_HS_DIEPINT5_BNA = 0x200;        // Buffer not available interrupt
    static constexpr uint32_t OTG_HS_DIEPINT5_PKTDRPSTS = 0x800;  // Packet dropped status
    static constexpr uint32_t OTG_HS_DIEPINT5_BERR = 0x1000;      // Babble error interrupt
    static constexpr uint32_t OTG_HS_DIEPINT5_NAK = 0x2000;       // NAK interrupt

    static constexpr uint32_t OTG_HS_DIEPINT6_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DIEPINT6_XFRC = 0x1;         // Transfer completed interrupt
    static constexpr uint32_t OTG_HS_DIEPINT6_EPDISD = 0x2;       // Endpoint disabled interrupt
    static constexpr uint32_t OTG_HS_DIEPINT6_TOC = 0x8;          // Timeout condition
    static constexpr uint32_t OTG_HS_DIEPINT6_ITTXFE = 0x10;      // IN token received when TxFIFO is empty
    static constexpr uint32_t OTG_HS_DIEPINT6_INEPNE = 0x40;      // IN endpoint NAK effective
    static constexpr uint32_t OTG_HS_DIEPINT6_TXFE = 0x80;        // Transmit FIFO empty
    static constexpr uint32_t OTG_HS_DIEPINT6_TXFIFOUDRN = 0x100; // Transmit Fifo Underrun
    static constexpr uint32_t OTG_HS_DIEPINT6_BNA = 0x200;        // Buffer not available interrupt
    static constexpr uint32_t OTG_HS_DIEPINT6_PKTDRPSTS = 0x800;  // Packet dropped status
    static constexpr uint32_t OTG_HS_DIEPINT6_BERR = 0x1000;      // Babble error interrupt
    static constexpr uint32_t OTG_HS_DIEPINT6_NAK = 0x2000;       // NAK interrupt

    static constexpr uint32_t OTG_HS_DIEPINT7_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DIEPINT7_XFRC = 0x1;         // Transfer completed interrupt
    static constexpr uint32_t OTG_HS_DIEPINT7_EPDISD = 0x2;       // Endpoint disabled interrupt
    static constexpr uint32_t OTG_HS_DIEPINT7_TOC = 0x8;          // Timeout condition
    static constexpr uint32_t OTG_HS_DIEPINT7_ITTXFE = 0x10;      // IN token received when TxFIFO is empty
    static constexpr uint32_t OTG_HS_DIEPINT7_INEPNE = 0x40;      // IN endpoint NAK effective
    static constexpr uint32_t OTG_HS_DIEPINT7_TXFE = 0x80;        // Transmit FIFO empty
    static constexpr uint32_t OTG_HS_DIEPINT7_TXFIFOUDRN = 0x100; // Transmit Fifo Underrun
    static constexpr uint32_t OTG_HS_DIEPINT7_BNA = 0x200;        // Buffer not available interrupt
    static constexpr uint32_t OTG_HS_DIEPINT7_PKTDRPSTS = 0x800;  // Packet dropped status
    static constexpr uint32_t OTG_HS_DIEPINT7_BERR = 0x1000;      // Babble error interrupt
    static constexpr uint32_t OTG_HS_DIEPINT7_NAK = 0x2000;       // NAK interrupt

    static constexpr uint32_t OTG_HS_DIEPTSIZ0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTSIZ0_XFRSIZ =   // Transfer size
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTSIZ0_PKTCNT =   // Packet count
        bit_field_t<19, 0x3>::value<X>();

    static constexpr uint32_t OTG_HS_DIEPDMA1_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HS_DIEPDMA2_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HS_DIEPDMA3_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HS_DIEPDMA4_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HS_DIEPDMA5_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HS_DTXFSTS0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DTXFSTS0_INEPTFSAV =   // IN endpoint TxFIFO space avail
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HS_DTXFSTS1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DTXFSTS1_INEPTFSAV =   // IN endpoint TxFIFO space avail
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HS_DTXFSTS2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DTXFSTS2_INEPTFSAV =   // IN endpoint TxFIFO space avail
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HS_DTXFSTS3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DTXFSTS3_INEPTFSAV =   // IN endpoint TxFIFO space avail
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HS_DTXFSTS4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DTXFSTS4_INEPTFSAV =   // IN endpoint TxFIFO space avail
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HS_DTXFSTS5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DTXFSTS5_INEPTFSAV =   // IN endpoint TxFIFO space avail
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HS_DIEPTSIZ1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTSIZ1_XFRSIZ =   // Transfer size
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTSIZ1_PKTCNT =   // Packet count
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTSIZ1_MCNT =     // Multi count
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HS_DIEPTSIZ2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTSIZ2_XFRSIZ =   // Transfer size
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTSIZ2_PKTCNT =   // Packet count
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTSIZ2_MCNT =     // Multi count
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HS_DIEPTSIZ3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTSIZ3_XFRSIZ =   // Transfer size
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTSIZ3_PKTCNT =   // Packet count
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTSIZ3_MCNT =     // Multi count
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HS_DIEPTSIZ4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTSIZ4_XFRSIZ =   // Transfer size
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTSIZ4_PKTCNT =   // Packet count
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTSIZ4_MCNT =     // Multi count
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HS_DIEPTSIZ5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTSIZ5_XFRSIZ =   // Transfer size
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTSIZ5_PKTCNT =   // Packet count
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTSIZ5_MCNT =     // Multi count
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HS_DOEPCTL0_RESET_VALUE = 0x8000;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPCTL0_MPSIZ =             // Maximum packet size
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_DOEPCTL0_USBAEP = 0x8000;    // USB active endpoint
    static constexpr uint32_t OTG_HS_DOEPCTL0_NAKSTS = 0x20000;   // NAK status
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPCTL0_EPTYP =             // Endpoint type
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_DOEPCTL0_SNPM = 0x100000;    // Snoop mode
    static constexpr uint32_t OTG_HS_DOEPCTL0_Stall = 0x200000;   // STALL handshake
    static constexpr uint32_t OTG_HS_DOEPCTL0_CNAK = 0x4000000;   // Clear NAK
    static constexpr uint32_t OTG_HS_DOEPCTL0_SNAK = 0x8000000;   // Set NAK
    static constexpr uint32_t OTG_HS_DOEPCTL0_EPDIS = 0x40000000; // Endpoint disable
    static constexpr uint32_t OTG_HS_DOEPCTL0_EPENA = 0x80000000; // Endpoint enable

    static constexpr uint32_t OTG_HS_DOEPCTL1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPCTL1_MPSIZ =                      // Maximum packet size
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_HS_DOEPCTL1_USBAEP = 0x8000;             // USB active endpoint
    static constexpr uint32_t OTG_HS_DOEPCTL1_EONUM_DPID = 0x10000;        // Even odd frame/Endpoint data PID
    static constexpr uint32_t OTG_HS_DOEPCTL1_NAKSTS = 0x20000;            // NAK status
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPCTL1_EPTYP =                      // Endpoint type
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_DOEPCTL1_SNPM = 0x100000;             // Snoop mode
    static constexpr uint32_t OTG_HS_DOEPCTL1_Stall = 0x200000;            // STALL handshake
    static constexpr uint32_t OTG_HS_DOEPCTL1_CNAK = 0x4000000;            // Clear NAK
    static constexpr uint32_t OTG_HS_DOEPCTL1_SNAK = 0x8000000;            // Set NAK
    static constexpr uint32_t OTG_HS_DOEPCTL1_SD0PID_SEVNFRM = 0x10000000; // Set DATA0 PID/Set even frame
    static constexpr uint32_t OTG_HS_DOEPCTL1_SODDFRM = 0x20000000;        // Set odd frame
    static constexpr uint32_t OTG_HS_DOEPCTL1_EPDIS = 0x40000000;          // Endpoint disable
    static constexpr uint32_t OTG_HS_DOEPCTL1_EPENA = 0x80000000;          // Endpoint enable

    static constexpr uint32_t OTG_HS_DOEPCTL2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPCTL2_MPSIZ =                      // Maximum packet size
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_HS_DOEPCTL2_USBAEP = 0x8000;             // USB active endpoint
    static constexpr uint32_t OTG_HS_DOEPCTL2_EONUM_DPID = 0x10000;        // Even odd frame/Endpoint data PID
    static constexpr uint32_t OTG_HS_DOEPCTL2_NAKSTS = 0x20000;            // NAK status
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPCTL2_EPTYP =                      // Endpoint type
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_DOEPCTL2_SNPM = 0x100000;             // Snoop mode
    static constexpr uint32_t OTG_HS_DOEPCTL2_Stall = 0x200000;            // STALL handshake
    static constexpr uint32_t OTG_HS_DOEPCTL2_CNAK = 0x4000000;            // Clear NAK
    static constexpr uint32_t OTG_HS_DOEPCTL2_SNAK = 0x8000000;            // Set NAK
    static constexpr uint32_t OTG_HS_DOEPCTL2_SD0PID_SEVNFRM = 0x10000000; // Set DATA0 PID/Set even frame
    static constexpr uint32_t OTG_HS_DOEPCTL2_SODDFRM = 0x20000000;        // Set odd frame
    static constexpr uint32_t OTG_HS_DOEPCTL2_EPDIS = 0x40000000;          // Endpoint disable
    static constexpr uint32_t OTG_HS_DOEPCTL2_EPENA = 0x80000000;          // Endpoint enable

    static constexpr uint32_t OTG_HS_DOEPCTL3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPCTL3_MPSIZ =                      // Maximum packet size
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_HS_DOEPCTL3_USBAEP = 0x8000;             // USB active endpoint
    static constexpr uint32_t OTG_HS_DOEPCTL3_EONUM_DPID = 0x10000;        // Even odd frame/Endpoint data PID
    static constexpr uint32_t OTG_HS_DOEPCTL3_NAKSTS = 0x20000;            // NAK status
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPCTL3_EPTYP =                      // Endpoint type
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_DOEPCTL3_SNPM = 0x100000;             // Snoop mode
    static constexpr uint32_t OTG_HS_DOEPCTL3_Stall = 0x200000;            // STALL handshake
    static constexpr uint32_t OTG_HS_DOEPCTL3_CNAK = 0x4000000;            // Clear NAK
    static constexpr uint32_t OTG_HS_DOEPCTL3_SNAK = 0x8000000;            // Set NAK
    static constexpr uint32_t OTG_HS_DOEPCTL3_SD0PID_SEVNFRM = 0x10000000; // Set DATA0 PID/Set even frame
    static constexpr uint32_t OTG_HS_DOEPCTL3_SODDFRM = 0x20000000;        // Set odd frame
    static constexpr uint32_t OTG_HS_DOEPCTL3_EPDIS = 0x40000000;          // Endpoint disable
    static constexpr uint32_t OTG_HS_DOEPCTL3_EPENA = 0x80000000;          // Endpoint enable

    static constexpr uint32_t OTG_HS_DOEPINT0_RESET_VALUE = 0x80;
    static constexpr uint32_t OTG_HS_DOEPINT0_XFRC = 0x1;     // Transfer completed interrupt
    static constexpr uint32_t OTG_HS_DOEPINT0_EPDISD = 0x2;   // Endpoint disabled interrupt
    static constexpr uint32_t OTG_HS_DOEPINT0_STUP = 0x8;     // SETUP phase done
    static constexpr uint32_t OTG_HS_DOEPINT0_OTEPDIS = 0x10; // OUT token received when endpoint disabled
    static constexpr uint32_t OTG_HS_DOEPINT0_B2BSTUP = 0x40; // Back-to-back SETUP packets received
    static constexpr uint32_t OTG_HS_DOEPINT0_NYET = 0x4000;  // NYET interrupt

    static constexpr uint32_t OTG_HS_DOEPINT1_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DOEPINT1_XFRC = 0x1;     // Transfer completed interrupt
    static constexpr uint32_t OTG_HS_DOEPINT1_EPDISD = 0x2;   // Endpoint disabled interrupt
    static constexpr uint32_t OTG_HS_DOEPINT1_STUP = 0x8;     // SETUP phase done
    static constexpr uint32_t OTG_HS_DOEPINT1_OTEPDIS = 0x10; // OUT token received when endpoint disabled
    static constexpr uint32_t OTG_HS_DOEPINT1_B2BSTUP = 0x40; // Back-to-back SETUP packets received
    static constexpr uint32_t OTG_HS_DOEPINT1_NYET = 0x4000;  // NYET interrupt

    static constexpr uint32_t OTG_HS_DOEPINT2_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DOEPINT2_XFRC = 0x1;     // Transfer completed interrupt
    static constexpr uint32_t OTG_HS_DOEPINT2_EPDISD = 0x2;   // Endpoint disabled interrupt
    static constexpr uint32_t OTG_HS_DOEPINT2_STUP = 0x8;     // SETUP phase done
    static constexpr uint32_t OTG_HS_DOEPINT2_OTEPDIS = 0x10; // OUT token received when endpoint disabled
    static constexpr uint32_t OTG_HS_DOEPINT2_B2BSTUP = 0x40; // Back-to-back SETUP packets received
    static constexpr uint32_t OTG_HS_DOEPINT2_NYET = 0x4000;  // NYET interrupt

    static constexpr uint32_t OTG_HS_DOEPINT3_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DOEPINT3_XFRC = 0x1;     // Transfer completed interrupt
    static constexpr uint32_t OTG_HS_DOEPINT3_EPDISD = 0x2;   // Endpoint disabled interrupt
    static constexpr uint32_t OTG_HS_DOEPINT3_STUP = 0x8;     // SETUP phase done
    static constexpr uint32_t OTG_HS_DOEPINT3_OTEPDIS = 0x10; // OUT token received when endpoint disabled
    static constexpr uint32_t OTG_HS_DOEPINT3_B2BSTUP = 0x40; // Back-to-back SETUP packets received
    static constexpr uint32_t OTG_HS_DOEPINT3_NYET = 0x4000;  // NYET interrupt

    static constexpr uint32_t OTG_HS_DOEPINT4_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DOEPINT4_XFRC = 0x1;     // Transfer completed interrupt
    static constexpr uint32_t OTG_HS_DOEPINT4_EPDISD = 0x2;   // Endpoint disabled interrupt
    static constexpr uint32_t OTG_HS_DOEPINT4_STUP = 0x8;     // SETUP phase done
    static constexpr uint32_t OTG_HS_DOEPINT4_OTEPDIS = 0x10; // OUT token received when endpoint disabled
    static constexpr uint32_t OTG_HS_DOEPINT4_B2BSTUP = 0x40; // Back-to-back SETUP packets received
    static constexpr uint32_t OTG_HS_DOEPINT4_NYET = 0x4000;  // NYET interrupt

    static constexpr uint32_t OTG_HS_DOEPINT5_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DOEPINT5_XFRC = 0x1;     // Transfer completed interrupt
    static constexpr uint32_t OTG_HS_DOEPINT5_EPDISD = 0x2;   // Endpoint disabled interrupt
    static constexpr uint32_t OTG_HS_DOEPINT5_STUP = 0x8;     // SETUP phase done
    static constexpr uint32_t OTG_HS_DOEPINT5_OTEPDIS = 0x10; // OUT token received when endpoint disabled
    static constexpr uint32_t OTG_HS_DOEPINT5_B2BSTUP = 0x40; // Back-to-back SETUP packets received
    static constexpr uint32_t OTG_HS_DOEPINT5_NYET = 0x4000;  // NYET interrupt

    static constexpr uint32_t OTG_HS_DOEPINT6_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DOEPINT6_XFRC = 0x1;     // Transfer completed interrupt
    static constexpr uint32_t OTG_HS_DOEPINT6_EPDISD = 0x2;   // Endpoint disabled interrupt
    static constexpr uint32_t OTG_HS_DOEPINT6_STUP = 0x8;     // SETUP phase done
    static constexpr uint32_t OTG_HS_DOEPINT6_OTEPDIS = 0x10; // OUT token received when endpoint disabled
    static constexpr uint32_t OTG_HS_DOEPINT6_B2BSTUP = 0x40; // Back-to-back SETUP packets received
    static constexpr uint32_t OTG_HS_DOEPINT6_NYET = 0x4000;  // NYET interrupt

    static constexpr uint32_t OTG_HS_DOEPINT7_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DOEPINT7_XFRC = 0x1;     // Transfer completed interrupt
    static constexpr uint32_t OTG_HS_DOEPINT7_EPDISD = 0x2;   // Endpoint disabled interrupt
    static constexpr uint32_t OTG_HS_DOEPINT7_STUP = 0x8;     // SETUP phase done
    static constexpr uint32_t OTG_HS_DOEPINT7_OTEPDIS = 0x10; // OUT token received when endpoint disabled
    static constexpr uint32_t OTG_HS_DOEPINT7_B2BSTUP = 0x40; // Back-to-back SETUP packets received
    static constexpr uint32_t OTG_HS_DOEPINT7_NYET = 0x4000;  // NYET interrupt

    static constexpr uint32_t OTG_HS_DOEPTSIZ0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPTSIZ0_XFRSIZ =          // Transfer size
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t OTG_HS_DOEPTSIZ0_PKTCNT = 0x80000; // Packet count
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPTSIZ0_STUPCNT =         // SETUP packet count
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HS_DOEPTSIZ1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPTSIZ1_XFRSIZ =           // Transfer size
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPTSIZ1_PKTCNT =           // Packet count
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPTSIZ1_RXDPID_STUPCNT =   // Received data PID/SETUP packet count
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HS_DOEPTSIZ2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPTSIZ2_XFRSIZ =           // Transfer size
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPTSIZ2_PKTCNT =           // Packet count
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPTSIZ2_RXDPID_STUPCNT =   // Received data PID/SETUP packet count
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HS_DOEPTSIZ3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPTSIZ3_XFRSIZ =           // Transfer size
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPTSIZ3_PKTCNT =           // Packet count
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPTSIZ3_RXDPID_STUPCNT =   // Received data PID/SETUP packet count
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HS_DOEPTSIZ4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPTSIZ4_XFRSIZ =           // Transfer size
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPTSIZ4_PKTCNT =           // Packet count
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DOEPTSIZ4_RXDPID_STUPCNT =   // Received data PID/SETUP packet count
        bit_field_t<29, 0x3>::value<X>();
};


////
//
//      USB on the go high speed
//
////

struct stm32f405_otg_hs_global_t
{
    volatile uint32_t OTG_HS_GOTGCTL;            // OTG_HS control and status register
    volatile uint32_t OTG_HS_GOTGINT;            // [read-write] OTG_HS interrupt register
    volatile uint32_t OTG_HS_GAHBCFG;            // [read-write] OTG_HS AHB configuration register
    volatile uint32_t OTG_HS_GUSBCFG;            // OTG_HS USB configuration register
    volatile uint32_t OTG_HS_GRSTCTL;            // OTG_HS reset register
    volatile uint32_t OTG_HS_GINTSTS;            // OTG_HS core interrupt register
    volatile uint32_t OTG_HS_GINTMSK;            // OTG_HS interrupt mask register
    volatile uint32_t OTG_HS_GRXSTSR_Host;       // [read-only] OTG_HS Receive status debug read register (host mode)
    volatile uint32_t OTG_HS_GRXSTSP_Host;       // [read-only] OTG_HS status read and pop register (host mode)
    volatile uint32_t OTG_HS_GRXFSIZ;            // [read-write] OTG_HS Receive FIFO size register
    volatile uint32_t OTG_HS_GNPTXFSIZ_Host;     // [read-write] OTG_HS nonperiodic transmit FIFO size register (host mode)
    volatile uint32_t OTG_HS_GNPTXSTS;           // [read-only] OTG_HS nonperiodic transmit FIFO/queue status register
    reserved_t<0x2> _0x38;
    volatile uint32_t OTG_HS_GCCFG;              // [read-write] OTG_HS general core configuration register
    volatile uint32_t OTG_HS_CID;                // [read-write] OTG_HS core ID register
    reserved_t<0x30> _0x100;
    volatile uint32_t OTG_HS_HPTXFSIZ;           // [read-write] OTG_HS Host periodic transmit FIFO size register
    volatile uint32_t OTG_HS_DIEPTXF1;           // [read-write] OTG_HS device IN endpoint transmit FIFO size register
    volatile uint32_t OTG_HS_DIEPTXF2;           // [read-write] OTG_HS device IN endpoint transmit FIFO size register
    reserved_t<0x4> _0x11c;
    volatile uint32_t OTG_HS_DIEPTXF3;           // [read-write] OTG_HS device IN endpoint transmit FIFO size register
    volatile uint32_t OTG_HS_DIEPTXF4;           // [read-write] OTG_HS device IN endpoint transmit FIFO size register
    volatile uint32_t OTG_HS_DIEPTXF5;           // [read-write] OTG_HS device IN endpoint transmit FIFO size register
    volatile uint32_t OTG_HS_DIEPTXF6;           // [read-write] OTG_HS device IN endpoint transmit FIFO size register
    volatile uint32_t OTG_HS_DIEPTXF7;           // [read-write] OTG_HS device IN endpoint transmit FIFO size register

    static constexpr uint32_t OTG_HS_GOTGCTL_RESET_VALUE = 0x800;
    static constexpr uint32_t OTG_HS_GOTGCTL_SRQSCS = 0x1;     // Session request success
    static constexpr uint32_t OTG_HS_GOTGCTL_SRQ = 0x2;        // Session request
    static constexpr uint32_t OTG_HS_GOTGCTL_HNGSCS = 0x100;   // Host negotiation success
    static constexpr uint32_t OTG_HS_GOTGCTL_HNPRQ = 0x200;    // HNP request
    static constexpr uint32_t OTG_HS_GOTGCTL_HSHNPEN = 0x400;  // Host set HNP enable
    static constexpr uint32_t OTG_HS_GOTGCTL_DHNPEN = 0x800;   // Device HNP enabled
    static constexpr uint32_t OTG_HS_GOTGCTL_CIDSTS = 0x10000; // Connector ID status
    static constexpr uint32_t OTG_HS_GOTGCTL_DBCT = 0x20000;   // Long/short debounce time
    static constexpr uint32_t OTG_HS_GOTGCTL_ASVLD = 0x40000;  // A-session valid
    static constexpr uint32_t OTG_HS_GOTGCTL_BSVLD = 0x80000;  // B-session valid

    static constexpr uint32_t OTG_HS_GOTGINT_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_GOTGINT_SEDET = 0x4;       // Session end detected
    static constexpr uint32_t OTG_HS_GOTGINT_SRSSCHG = 0x100;   // Session request success status change
    static constexpr uint32_t OTG_HS_GOTGINT_HNSSCHG = 0x200;   // Host negotiation success status change
    static constexpr uint32_t OTG_HS_GOTGINT_HNGDET = 0x20000;  // Host negotiation detected
    static constexpr uint32_t OTG_HS_GOTGINT_ADTOCHG = 0x40000; // A-device timeout change
    static constexpr uint32_t OTG_HS_GOTGINT_DBCDNE = 0x80000;  // Debounce done

    static constexpr uint32_t OTG_HS_GAHBCFG_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_GAHBCFG_GINT = 0x1;       // Global interrupt mask
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_GAHBCFG_HBSTLEN =         // Burst length/type
        bit_field_t<1, 0xf>::value<X>();
    static constexpr uint32_t OTG_HS_GAHBCFG_DMAEN = 0x20;     // DMA enable
    static constexpr uint32_t OTG_HS_GAHBCFG_TXFELVL = 0x80;   // TxFIFO empty level
    static constexpr uint32_t OTG_HS_GAHBCFG_PTXFELVL = 0x100; // Periodic TxFIFO empty level

    static constexpr uint32_t OTG_HS_GUSBCFG_RESET_VALUE = 0xa00;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_GUSBCFG_TOCAL =                // FS timeout calibration
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t OTG_HS_GUSBCFG_PHYSEL = 0x40;         // USB 2.0 high-speed ULPI PHY or USB 1.1 full-speed serial transceiver select
    static constexpr uint32_t OTG_HS_GUSBCFG_SRPCAP = 0x100;        // SRP-capable
    static constexpr uint32_t OTG_HS_GUSBCFG_HNPCAP = 0x200;        // HNP-capable
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_GUSBCFG_TRDT =                 // USB turnaround time
        bit_field_t<10, 0xf>::value<X>();
    static constexpr uint32_t OTG_HS_GUSBCFG_PHYLPCS = 0x8000;      // PHY Low-power clock select
    static constexpr uint32_t OTG_HS_GUSBCFG_ULPIFSLS = 0x20000;    // ULPI FS/LS select
    static constexpr uint32_t OTG_HS_GUSBCFG_ULPIAR = 0x40000;      // ULPI Auto-resume
    static constexpr uint32_t OTG_HS_GUSBCFG_ULPICSM = 0x80000;     // ULPI Clock SuspendM
    static constexpr uint32_t OTG_HS_GUSBCFG_ULPIEVBUSD = 0x100000; // ULPI External VBUS Drive
    static constexpr uint32_t OTG_HS_GUSBCFG_ULPIEVBUSI = 0x200000; // ULPI external VBUS indicator
    static constexpr uint32_t OTG_HS_GUSBCFG_TSDPS = 0x400000;      // TermSel DLine pulsing selection
    static constexpr uint32_t OTG_HS_GUSBCFG_PCCI = 0x800000;       // Indicator complement
    static constexpr uint32_t OTG_HS_GUSBCFG_PTCI = 0x1000000;      // Indicator pass through
    static constexpr uint32_t OTG_HS_GUSBCFG_ULPIIPD = 0x2000000;   // ULPI interface protect disable
    static constexpr uint32_t OTG_HS_GUSBCFG_FHMOD = 0x20000000;    // Forced host mode
    static constexpr uint32_t OTG_HS_GUSBCFG_FDMOD = 0x40000000;    // Forced peripheral mode
    static constexpr uint32_t OTG_HS_GUSBCFG_CTXPKT = 0x80000000;   // Corrupt Tx packet

    static constexpr uint32_t OTG_HS_GRSTCTL_RESET_VALUE = 0x20000000;
    static constexpr uint32_t OTG_HS_GRSTCTL_CSRST = 0x1;         // Core soft reset
    static constexpr uint32_t OTG_HS_GRSTCTL_HSRST = 0x2;         // HCLK soft reset
    static constexpr uint32_t OTG_HS_GRSTCTL_FCRST = 0x4;         // Host frame counter reset
    static constexpr uint32_t OTG_HS_GRSTCTL_RXFFLSH = 0x10;      // RxFIFO flush
    static constexpr uint32_t OTG_HS_GRSTCTL_TXFFLSH = 0x20;      // TxFIFO flush
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_GRSTCTL_TXFNUM =             // TxFIFO number
        bit_field_t<6, 0x1f>::value<X>();
    static constexpr uint32_t OTG_HS_GRSTCTL_DMAREQ = 0x40000000; // DMA request signal
    static constexpr uint32_t OTG_HS_GRSTCTL_AHBIDL = 0x80000000; // AHB master idle

    static constexpr uint32_t OTG_HS_GINTSTS_RESET_VALUE = 0x4000020;
    static constexpr uint32_t OTG_HS_GINTSTS_CMOD = 0x1;                   // Current mode of operation
    static constexpr uint32_t OTG_HS_GINTSTS_MMIS = 0x2;                   // Mode mismatch interrupt
    static constexpr uint32_t OTG_HS_GINTSTS_OTGINT = 0x4;                 // OTG interrupt
    static constexpr uint32_t OTG_HS_GINTSTS_SOF = 0x8;                    // Start of frame
    static constexpr uint32_t OTG_HS_GINTSTS_RXFLVL = 0x10;                // RxFIFO nonempty
    static constexpr uint32_t OTG_HS_GINTSTS_NPTXFE = 0x20;                // Nonperiodic TxFIFO empty
    static constexpr uint32_t OTG_HS_GINTSTS_GINAKEFF = 0x40;              // Global IN nonperiodic NAK effective
    static constexpr uint32_t OTG_HS_GINTSTS_BOUTNAKEFF = 0x80;            // Global OUT NAK effective
    static constexpr uint32_t OTG_HS_GINTSTS_ESUSP = 0x400;                // Early suspend
    static constexpr uint32_t OTG_HS_GINTSTS_USBSUSP = 0x800;              // USB suspend
    static constexpr uint32_t OTG_HS_GINTSTS_USBRST = 0x1000;              // USB reset
    static constexpr uint32_t OTG_HS_GINTSTS_ENUMDNE = 0x2000;             // Enumeration done
    static constexpr uint32_t OTG_HS_GINTSTS_ISOODRP = 0x4000;             // Isochronous OUT packet dropped interrupt
    static constexpr uint32_t OTG_HS_GINTSTS_EOPF = 0x8000;                // End of periodic frame interrupt
    static constexpr uint32_t OTG_HS_GINTSTS_IEPINT = 0x40000;             // IN endpoint interrupt
    static constexpr uint32_t OTG_HS_GINTSTS_OEPINT = 0x80000;             // OUT endpoint interrupt
    static constexpr uint32_t OTG_HS_GINTSTS_IISOIXFR = 0x100000;          // Incomplete isochronous IN transfer
    static constexpr uint32_t OTG_HS_GINTSTS_PXFR_INCOMPISOOUT = 0x200000; // Incomplete periodic transfer
    static constexpr uint32_t OTG_HS_GINTSTS_DATAFSUSP = 0x400000;         // Data fetch suspended
    static constexpr uint32_t OTG_HS_GINTSTS_HPRTINT = 0x1000000;          // Host port interrupt
    static constexpr uint32_t OTG_HS_GINTSTS_HCINT = 0x2000000;            // Host channels interrupt
    static constexpr uint32_t OTG_HS_GINTSTS_PTXFE = 0x4000000;            // Periodic TxFIFO empty
    static constexpr uint32_t OTG_HS_GINTSTS_CIDSCHG = 0x10000000;         // Connector ID status change
    static constexpr uint32_t OTG_HS_GINTSTS_DISCINT = 0x20000000;         // Disconnect detected interrupt
    static constexpr uint32_t OTG_HS_GINTSTS_SRQINT = 0x40000000;          // Session request/new session detected interrupt
    static constexpr uint32_t OTG_HS_GINTSTS_WKUINT = 0x80000000;          // Resume/remote wakeup detected interrupt

    static constexpr uint32_t OTG_HS_GINTMSK_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_GINTMSK_MMISM = 0x2;                // Mode mismatch interrupt mask
    static constexpr uint32_t OTG_HS_GINTMSK_OTGINT = 0x4;               // OTG interrupt mask
    static constexpr uint32_t OTG_HS_GINTMSK_SOFM = 0x8;                 // Start of frame mask
    static constexpr uint32_t OTG_HS_GINTMSK_RXFLVLM = 0x10;             // Receive FIFO nonempty mask
    static constexpr uint32_t OTG_HS_GINTMSK_NPTXFEM = 0x20;             // Nonperiodic TxFIFO empty mask
    static constexpr uint32_t OTG_HS_GINTMSK_GINAKEFFM = 0x40;           // Global nonperiodic IN NAK effective mask
    static constexpr uint32_t OTG_HS_GINTMSK_GONAKEFFM = 0x80;           // Global OUT NAK effective mask
    static constexpr uint32_t OTG_HS_GINTMSK_ESUSPM = 0x400;             // Early suspend mask
    static constexpr uint32_t OTG_HS_GINTMSK_USBSUSPM = 0x800;           // USB suspend mask
    static constexpr uint32_t OTG_HS_GINTMSK_USBRST = 0x1000;            // USB reset mask
    static constexpr uint32_t OTG_HS_GINTMSK_ENUMDNEM = 0x2000;          // Enumeration done mask
    static constexpr uint32_t OTG_HS_GINTMSK_ISOODRPM = 0x4000;          // Isochronous OUT packet dropped interrupt mask
    static constexpr uint32_t OTG_HS_GINTMSK_EOPFM = 0x8000;             // End of periodic frame interrupt mask
    static constexpr uint32_t OTG_HS_GINTMSK_EPMISM = 0x20000;           // Endpoint mismatch interrupt mask
    static constexpr uint32_t OTG_HS_GINTMSK_IEPINT = 0x40000;           // IN endpoints interrupt mask
    static constexpr uint32_t OTG_HS_GINTMSK_OEPINT = 0x80000;           // OUT endpoints interrupt mask
    static constexpr uint32_t OTG_HS_GINTMSK_IISOIXFRM = 0x100000;       // Incomplete isochronous IN transfer mask
    static constexpr uint32_t OTG_HS_GINTMSK_PXFRM_IISOOXFRM = 0x200000; // Incomplete periodic transfer mask
    static constexpr uint32_t OTG_HS_GINTMSK_FSUSPM = 0x400000;          // Data fetch suspended mask
    static constexpr uint32_t OTG_HS_GINTMSK_PRTIM = 0x1000000;          // Host port interrupt mask
    static constexpr uint32_t OTG_HS_GINTMSK_HCIM = 0x2000000;           // Host channels interrupt mask
    static constexpr uint32_t OTG_HS_GINTMSK_PTXFEM = 0x4000000;         // Periodic TxFIFO empty mask
    static constexpr uint32_t OTG_HS_GINTMSK_CIDSCHGM = 0x10000000;      // Connector ID status change mask
    static constexpr uint32_t OTG_HS_GINTMSK_DISCINT = 0x20000000;       // Disconnect detected interrupt mask
    static constexpr uint32_t OTG_HS_GINTMSK_SRQIM = 0x40000000;         // Session request/new session detected interrupt mask
    static constexpr uint32_t OTG_HS_GINTMSK_WUIM = 0x80000000;          // Resume/remote wakeup detected interrupt mask

    static constexpr uint32_t OTG_HS_GRXSTSR_Host_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_GRXSTSR_Host_CHNUM =    // Channel number
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_GRXSTSR_Host_BCNT =     // Byte count
        bit_field_t<4, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_GRXSTSR_Host_DPID =     // Data PID
        bit_field_t<15, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_GRXSTSR_Host_PKTSTS =   // Packet status
        bit_field_t<17, 0xf>::value<X>();

    static constexpr uint32_t OTG_HS_GRXSTSP_Host_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_GRXSTSP_Host_CHNUM =    // Channel number
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_GRXSTSP_Host_BCNT =     // Byte count
        bit_field_t<4, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_GRXSTSP_Host_DPID =     // Data PID
        bit_field_t<15, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_GRXSTSP_Host_PKTSTS =   // Packet status
        bit_field_t<17, 0xf>::value<X>();

    static constexpr uint32_t OTG_HS_GRXFSIZ_RESET_VALUE = 0x200;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_GRXFSIZ_RXFD =   // RxFIFO depth
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HS_GNPTXFSIZ_Host_RESET_VALUE = 0x200;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_GNPTXFSIZ_Host_NPTXFSA =   // Nonperiodic transmit RAM start address
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_GNPTXFSIZ_Host_NPTXFD =    // Nonperiodic TxFIFO depth
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HS_TX0FSIZ_Peripheral_RESET_VALUE = 0x200;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_TX0FSIZ_Peripheral_TX0FSA =   // Endpoint 0 transmit RAM start address
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_TX0FSIZ_Peripheral_TX0FD =    // Endpoint 0 TxFIFO depth
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HS_GNPTXSTS_RESET_VALUE = 0x80200;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_GNPTXSTS_NPTXFSAV =   // Nonperiodic TxFIFO space available
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_GNPTXSTS_NPTQXSAV =   // Nonperiodic transmit request queue space available
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_GNPTXSTS_NPTXQTOP =   // Top of the nonperiodic transmit request queue
        bit_field_t<24, 0x7f>::value<X>();

    static constexpr uint32_t OTG_HS_GCCFG_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_GCCFG_PWRDWN = 0x10000;      // Power down
    static constexpr uint32_t OTG_HS_GCCFG_I2CPADEN = 0x20000;    // Enable I2C bus connection for the external I2C PHY interface
    static constexpr uint32_t OTG_HS_GCCFG_VBUSASEN = 0x40000;    // Enable the VBUS sensing device
    static constexpr uint32_t OTG_HS_GCCFG_VBUSBSEN = 0x80000;    // Enable the VBUS sensing device
    static constexpr uint32_t OTG_HS_GCCFG_SOFOUTEN = 0x100000;   // SOF output enable
    static constexpr uint32_t OTG_HS_GCCFG_NOVBUSSENS = 0x200000; // VBUS sensing disable option

    static constexpr uint32_t OTG_HS_CID_RESET_VALUE = 0x1200;

    static constexpr uint32_t OTG_HS_HPTXFSIZ_RESET_VALUE = 0x2000600;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HPTXFSIZ_PTXSA =   // Host periodic TxFIFO start address
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HPTXFSIZ_PTXFD =   // Host periodic TxFIFO depth
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HS_DIEPTXF1_RESET_VALUE = 0x2000400;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTXF1_INEPTXSA =   // IN endpoint FIFOx transmit RAM start address
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTXF1_INEPTXFD =   // IN endpoint TxFIFO depth
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HS_DIEPTXF2_RESET_VALUE = 0x2000400;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTXF2_INEPTXSA =   // IN endpoint FIFOx transmit RAM start address
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTXF2_INEPTXFD =   // IN endpoint TxFIFO depth
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HS_DIEPTXF3_RESET_VALUE = 0x2000400;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTXF3_INEPTXSA =   // IN endpoint FIFOx transmit RAM start address
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTXF3_INEPTXFD =   // IN endpoint TxFIFO depth
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HS_DIEPTXF4_RESET_VALUE = 0x2000400;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTXF4_INEPTXSA =   // IN endpoint FIFOx transmit RAM start address
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTXF4_INEPTXFD =   // IN endpoint TxFIFO depth
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HS_DIEPTXF5_RESET_VALUE = 0x2000400;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTXF5_INEPTXSA =   // IN endpoint FIFOx transmit RAM start address
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTXF5_INEPTXFD =   // IN endpoint TxFIFO depth
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HS_DIEPTXF6_RESET_VALUE = 0x2000400;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTXF6_INEPTXSA =   // IN endpoint FIFOx transmit RAM start address
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTXF6_INEPTXFD =   // IN endpoint TxFIFO depth
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HS_DIEPTXF7_RESET_VALUE = 0x2000400;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTXF7_INEPTXSA =   // IN endpoint FIFOx transmit RAM start address
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_DIEPTXF7_INEPTXFD =   // IN endpoint TxFIFO depth
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HS_GRXSTSR_Peripheral_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_GRXSTSR_Peripheral_EPNUM =    // Endpoint number
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_GRXSTSR_Peripheral_BCNT =     // Byte count
        bit_field_t<4, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_GRXSTSR_Peripheral_DPID =     // Data PID
        bit_field_t<15, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_GRXSTSR_Peripheral_PKTSTS =   // Packet status
        bit_field_t<17, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_GRXSTSR_Peripheral_FRMNUM =   // Frame number
        bit_field_t<21, 0xf>::value<X>();

    static constexpr uint32_t OTG_HS_GRXSTSP_Peripheral_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_GRXSTSP_Peripheral_EPNUM =    // Endpoint number
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_GRXSTSP_Peripheral_BCNT =     // Byte count
        bit_field_t<4, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_GRXSTSP_Peripheral_DPID =     // Data PID
        bit_field_t<15, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_GRXSTSP_Peripheral_PKTSTS =   // Packet status
        bit_field_t<17, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_GRXSTSP_Peripheral_FRMNUM =   // Frame number
        bit_field_t<21, 0xf>::value<X>();
};


////
//
//      USB on the go high speed
//
////

struct stm32f405_otg_hs_host_t
{
    volatile uint32_t OTG_HS_HCFG;       // OTG_HS host configuration register
    volatile uint32_t OTG_HS_HFIR;       // [read-write] OTG_HS Host frame interval register
    volatile uint32_t OTG_HS_HFNUM;      // [read-only] OTG_HS host frame number/frame time remaining register
    reserved_t<0x1> _0x10;
    volatile uint32_t OTG_HS_HPTXSTS;    // OTG_HS_Host periodic transmit FIFO/queue status register
    volatile uint32_t OTG_HS_HAINT;      // [read-only] OTG_HS Host all channels interrupt register
    volatile uint32_t OTG_HS_HAINTMSK;   // [read-write] OTG_HS host all channels interrupt mask register
    reserved_t<0x9> _0x40;
    volatile uint32_t OTG_HS_HPRT;       // OTG_HS host port control and status register
    reserved_t<0x2f> _0x100;
    volatile uint32_t OTG_HS_HCCHAR0;    // [read-write] OTG_HS host channel-0 characteristics register
    volatile uint32_t OTG_HS_HCSPLT0;    // [read-write] OTG_HS host channel-0 split control register
    volatile uint32_t OTG_HS_HCINT0;     // [read-write] OTG_HS host channel-11 interrupt register
    volatile uint32_t OTG_HS_HCINTMSK0;  // [read-write] OTG_HS host channel-11 interrupt mask register
    volatile uint32_t OTG_HS_HCTSIZ0;    // [read-write] OTG_HS host channel-11 transfer size register
    volatile uint32_t OTG_HS_HCDMA0;     // [read-write] OTG_HS host channel-0 DMA address register
    reserved_t<0x2> _0x120;
    volatile uint32_t OTG_HS_HCCHAR1;    // [read-write] OTG_HS host channel-1 characteristics register
    volatile uint32_t OTG_HS_HCSPLT1;    // [read-write] OTG_HS host channel-1 split control register
    volatile uint32_t OTG_HS_HCINT1;     // [read-write] OTG_HS host channel-1 interrupt register
    volatile uint32_t OTG_HS_HCINTMSK1;  // [read-write] OTG_HS host channel-1 interrupt mask register
    volatile uint32_t OTG_HS_HCTSIZ1;    // [read-write] OTG_HS host channel-1 transfer size register
    volatile uint32_t OTG_HS_HCDMA1;     // [read-write] OTG_HS host channel-1 DMA address register
    reserved_t<0x2> _0x140;
    volatile uint32_t OTG_HS_HCCHAR2;    // [read-write] OTG_HS host channel-2 characteristics register
    volatile uint32_t OTG_HS_HCSPLT2;    // [read-write] OTG_HS host channel-2 split control register
    volatile uint32_t OTG_HS_HCINT2;     // [read-write] OTG_HS host channel-2 interrupt register
    volatile uint32_t OTG_HS_HCINTMSK2;  // [read-write] OTG_HS host channel-2 interrupt mask register
    volatile uint32_t OTG_HS_HCTSIZ2;    // [read-write] OTG_HS host channel-2 transfer size register
    volatile uint32_t OTG_HS_HCDMA2;     // [read-write] OTG_HS host channel-2 DMA address register
    reserved_t<0x2> _0x160;
    volatile uint32_t OTG_HS_HCCHAR3;    // [read-write] OTG_HS host channel-3 characteristics register
    volatile uint32_t OTG_HS_HCSPLT3;    // [read-write] OTG_HS host channel-3 split control register
    volatile uint32_t OTG_HS_HCINT3;     // [read-write] OTG_HS host channel-3 interrupt register
    volatile uint32_t OTG_HS_HCINTMSK3;  // [read-write] OTG_HS host channel-3 interrupt mask register
    volatile uint32_t OTG_HS_HCTSIZ3;    // [read-write] OTG_HS host channel-3 transfer size register
    volatile uint32_t OTG_HS_HCDMA3;     // [read-write] OTG_HS host channel-3 DMA address register
    reserved_t<0x2> _0x180;
    volatile uint32_t OTG_HS_HCCHAR4;    // [read-write] OTG_HS host channel-4 characteristics register
    volatile uint32_t OTG_HS_HCSPLT4;    // [read-write] OTG_HS host channel-4 split control register
    volatile uint32_t OTG_HS_HCINT4;     // [read-write] OTG_HS host channel-4 interrupt register
    volatile uint32_t OTG_HS_HCINTMSK4;  // [read-write] OTG_HS host channel-4 interrupt mask register
    volatile uint32_t OTG_HS_HCTSIZ4;    // [read-write] OTG_HS host channel-4 transfer size register
    volatile uint32_t OTG_HS_HCDMA4;     // [read-write] OTG_HS host channel-4 DMA address register
    reserved_t<0x2> _0x1a0;
    volatile uint32_t OTG_HS_HCCHAR5;    // [read-write] OTG_HS host channel-5 characteristics register
    volatile uint32_t OTG_HS_HCSPLT5;    // [read-write] OTG_HS host channel-5 split control register
    volatile uint32_t OTG_HS_HCINT5;     // [read-write] OTG_HS host channel-5 interrupt register
    volatile uint32_t OTG_HS_HCINTMSK5;  // [read-write] OTG_HS host channel-5 interrupt mask register
    volatile uint32_t OTG_HS_HCTSIZ5;    // [read-write] OTG_HS host channel-5 transfer size register
    volatile uint32_t OTG_HS_HCDMA5;     // [read-write] OTG_HS host channel-5 DMA address register
    reserved_t<0x2> _0x1c0;
    volatile uint32_t OTG_HS_HCCHAR6;    // [read-write] OTG_HS host channel-6 characteristics register
    volatile uint32_t OTG_HS_HCSPLT6;    // [read-write] OTG_HS host channel-6 split control register
    volatile uint32_t OTG_HS_HCINT6;     // [read-write] OTG_HS host channel-6 interrupt register
    volatile uint32_t OTG_HS_HCINTMSK6;  // [read-write] OTG_HS host channel-6 interrupt mask register
    volatile uint32_t OTG_HS_HCTSIZ6;    // [read-write] OTG_HS host channel-6 transfer size register
    volatile uint32_t OTG_HS_HCDMA6;     // [read-write] OTG_HS host channel-6 DMA address register
    reserved_t<0x2> _0x1e0;
    volatile uint32_t OTG_HS_HCCHAR7;    // [read-write] OTG_HS host channel-7 characteristics register
    volatile uint32_t OTG_HS_HCSPLT7;    // [read-write] OTG_HS host channel-7 split control register
    volatile uint32_t OTG_HS_HCINT7;     // [read-write] OTG_HS host channel-7 interrupt register
    volatile uint32_t OTG_HS_HCINTMSK7;  // [read-write] OTG_HS host channel-7 interrupt mask register
    volatile uint32_t OTG_HS_HCTSIZ7;    // [read-write] OTG_HS host channel-7 transfer size register
    volatile uint32_t OTG_HS_HCDMA7;     // [read-write] OTG_HS host channel-7 DMA address register
    reserved_t<0x2> _0x200;
    volatile uint32_t OTG_HS_HCCHAR8;    // [read-write] OTG_HS host channel-8 characteristics register
    volatile uint32_t OTG_HS_HCSPLT8;    // [read-write] OTG_HS host channel-8 split control register
    volatile uint32_t OTG_HS_HCINT8;     // [read-write] OTG_HS host channel-8 interrupt register
    volatile uint32_t OTG_HS_HCINTMSK8;  // [read-write] OTG_HS host channel-8 interrupt mask register
    volatile uint32_t OTG_HS_HCTSIZ8;    // [read-write] OTG_HS host channel-8 transfer size register
    volatile uint32_t OTG_HS_HCDMA8;     // [read-write] OTG_HS host channel-8 DMA address register
    reserved_t<0x2> _0x220;
    volatile uint32_t OTG_HS_HCCHAR9;    // [read-write] OTG_HS host channel-9 characteristics register
    volatile uint32_t OTG_HS_HCSPLT9;    // [read-write] OTG_HS host channel-9 split control register
    volatile uint32_t OTG_HS_HCINT9;     // [read-write] OTG_HS host channel-9 interrupt register
    volatile uint32_t OTG_HS_HCINTMSK9;  // [read-write] OTG_HS host channel-9 interrupt mask register
    volatile uint32_t OTG_HS_HCTSIZ9;    // [read-write] OTG_HS host channel-9 transfer size register
    volatile uint32_t OTG_HS_HCDMA9;     // [read-write] OTG_HS host channel-9 DMA address register
    reserved_t<0x2> _0x240;
    volatile uint32_t OTG_HS_HCCHAR10;   // [read-write] OTG_HS host channel-10 characteristics register
    volatile uint32_t OTG_HS_HCSPLT10;   // [read-write] OTG_HS host channel-10 split control register
    volatile uint32_t OTG_HS_HCINT10;    // [read-write] OTG_HS host channel-10 interrupt register
    volatile uint32_t OTG_HS_HCINTMSK10; // [read-write] OTG_HS host channel-10 interrupt mask register
    volatile uint32_t OTG_HS_HCTSIZ10;   // [read-write] OTG_HS host channel-10 transfer size register
    volatile uint32_t OTG_HS_HCDMA10;    // [read-write] OTG_HS host channel-10 DMA address register
    reserved_t<0x2> _0x260;
    volatile uint32_t OTG_HS_HCCHAR11;   // [read-write] OTG_HS host channel-11 characteristics register
    volatile uint32_t OTG_HS_HCSPLT11;   // [read-write] OTG_HS host channel-11 split control register
    volatile uint32_t OTG_HS_HCINT11;    // [read-write] OTG_HS host channel-11 interrupt register
    volatile uint32_t OTG_HS_HCINTMSK11; // [read-write] OTG_HS host channel-11 interrupt mask register
    volatile uint32_t OTG_HS_HCTSIZ11;   // [read-write] OTG_HS host channel-11 transfer size register
    volatile uint32_t OTG_HS_HCDMA11;    // [read-write] OTG_HS host channel-11 DMA address register

    static constexpr uint32_t OTG_HS_HCFG_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCFG_FSLSPCS =    // FS/LS PHY clock select
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_HCFG_FSLSS = 0x4; // FS- and LS-only support

    static constexpr uint32_t OTG_HS_HFIR_RESET_VALUE = 0xea60;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HFIR_FRIVL =   // Frame interval
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HS_HFNUM_RESET_VALUE = 0x3fff;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HFNUM_FRNUM =   // Frame number
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HFNUM_FTREM =   // Frame time remaining
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HS_HPTXSTS_RESET_VALUE = 0x80100;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HPTXSTS_PTXFSAVL =   // Periodic transmit data FIFO space available
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HPTXSTS_PTXQSAV =    // Periodic transmit request queue space available
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HPTXSTS_PTXQTOP =    // Top of the periodic transmit request queue
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t OTG_HS_HAINT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HAINT_HAINT =   // Channel interrupts
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HS_HAINTMSK_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HAINTMSK_HAINTM =   // Channel interrupt mask
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HS_HPRT_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_HPRT_PCSTS = 0x1;    // Port connect status
    static constexpr uint32_t OTG_HS_HPRT_PCDET = 0x2;    // Port connect detected
    static constexpr uint32_t OTG_HS_HPRT_PENA = 0x4;     // Port enable
    static constexpr uint32_t OTG_HS_HPRT_PENCHNG = 0x8;  // Port enable/disable change
    static constexpr uint32_t OTG_HS_HPRT_POCA = 0x10;    // Port overcurrent active
    static constexpr uint32_t OTG_HS_HPRT_POCCHNG = 0x20; // Port overcurrent change
    static constexpr uint32_t OTG_HS_HPRT_PRES = 0x40;    // Port resume
    static constexpr uint32_t OTG_HS_HPRT_PSUSP = 0x80;   // Port suspend
    static constexpr uint32_t OTG_HS_HPRT_PRST = 0x100;   // Port reset
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HPRT_PLSTS =         // Port line status
        bit_field_t<10, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_HPRT_PPWR = 0x1000;  // Port power
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HPRT_PTCTL =         // Port test control
        bit_field_t<13, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HPRT_PSPD =          // Port speed
        bit_field_t<17, 0x3>::value<X>();

    static constexpr uint32_t OTG_HS_HCCHAR0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR0_MPSIZ =              // Maximum packet size
        bit_field_t<0, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR0_EPNUM =              // Endpoint number
        bit_field_t<11, 0xf>::value<X>();
    static constexpr uint32_t OTG_HS_HCCHAR0_EPDIR = 0x8000;      // Endpoint direction
    static constexpr uint32_t OTG_HS_HCCHAR0_LSDEV = 0x20000;     // Low-speed device
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR0_EPTYP =              // Endpoint type
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR0_MC =                 // Multi Count (MC) / Error Count (EC)
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR0_DAD =                // Device address
        bit_field_t<22, 0x7f>::value<X>();
    static constexpr uint32_t OTG_HS_HCCHAR0_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t OTG_HS_HCCHAR0_CHDIS = 0x40000000;  // Channel disable
    static constexpr uint32_t OTG_HS_HCCHAR0_CHENA = 0x80000000;  // Channel enable

    static constexpr uint32_t OTG_HS_HCCHAR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR1_MPSIZ =              // Maximum packet size
        bit_field_t<0, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR1_EPNUM =              // Endpoint number
        bit_field_t<11, 0xf>::value<X>();
    static constexpr uint32_t OTG_HS_HCCHAR1_EPDIR = 0x8000;      // Endpoint direction
    static constexpr uint32_t OTG_HS_HCCHAR1_LSDEV = 0x20000;     // Low-speed device
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR1_EPTYP =              // Endpoint type
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR1_MC =                 // Multi Count (MC) / Error Count (EC)
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR1_DAD =                // Device address
        bit_field_t<22, 0x7f>::value<X>();
    static constexpr uint32_t OTG_HS_HCCHAR1_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t OTG_HS_HCCHAR1_CHDIS = 0x40000000;  // Channel disable
    static constexpr uint32_t OTG_HS_HCCHAR1_CHENA = 0x80000000;  // Channel enable

    static constexpr uint32_t OTG_HS_HCCHAR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR2_MPSIZ =              // Maximum packet size
        bit_field_t<0, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR2_EPNUM =              // Endpoint number
        bit_field_t<11, 0xf>::value<X>();
    static constexpr uint32_t OTG_HS_HCCHAR2_EPDIR = 0x8000;      // Endpoint direction
    static constexpr uint32_t OTG_HS_HCCHAR2_LSDEV = 0x20000;     // Low-speed device
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR2_EPTYP =              // Endpoint type
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR2_MC =                 // Multi Count (MC) / Error Count (EC)
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR2_DAD =                // Device address
        bit_field_t<22, 0x7f>::value<X>();
    static constexpr uint32_t OTG_HS_HCCHAR2_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t OTG_HS_HCCHAR2_CHDIS = 0x40000000;  // Channel disable
    static constexpr uint32_t OTG_HS_HCCHAR2_CHENA = 0x80000000;  // Channel enable

    static constexpr uint32_t OTG_HS_HCCHAR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR3_MPSIZ =              // Maximum packet size
        bit_field_t<0, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR3_EPNUM =              // Endpoint number
        bit_field_t<11, 0xf>::value<X>();
    static constexpr uint32_t OTG_HS_HCCHAR3_EPDIR = 0x8000;      // Endpoint direction
    static constexpr uint32_t OTG_HS_HCCHAR3_LSDEV = 0x20000;     // Low-speed device
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR3_EPTYP =              // Endpoint type
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR3_MC =                 // Multi Count (MC) / Error Count (EC)
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR3_DAD =                // Device address
        bit_field_t<22, 0x7f>::value<X>();
    static constexpr uint32_t OTG_HS_HCCHAR3_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t OTG_HS_HCCHAR3_CHDIS = 0x40000000;  // Channel disable
    static constexpr uint32_t OTG_HS_HCCHAR3_CHENA = 0x80000000;  // Channel enable

    static constexpr uint32_t OTG_HS_HCCHAR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR4_MPSIZ =              // Maximum packet size
        bit_field_t<0, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR4_EPNUM =              // Endpoint number
        bit_field_t<11, 0xf>::value<X>();
    static constexpr uint32_t OTG_HS_HCCHAR4_EPDIR = 0x8000;      // Endpoint direction
    static constexpr uint32_t OTG_HS_HCCHAR4_LSDEV = 0x20000;     // Low-speed device
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR4_EPTYP =              // Endpoint type
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR4_MC =                 // Multi Count (MC) / Error Count (EC)
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR4_DAD =                // Device address
        bit_field_t<22, 0x7f>::value<X>();
    static constexpr uint32_t OTG_HS_HCCHAR4_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t OTG_HS_HCCHAR4_CHDIS = 0x40000000;  // Channel disable
    static constexpr uint32_t OTG_HS_HCCHAR4_CHENA = 0x80000000;  // Channel enable

    static constexpr uint32_t OTG_HS_HCCHAR5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR5_MPSIZ =              // Maximum packet size
        bit_field_t<0, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR5_EPNUM =              // Endpoint number
        bit_field_t<11, 0xf>::value<X>();
    static constexpr uint32_t OTG_HS_HCCHAR5_EPDIR = 0x8000;      // Endpoint direction
    static constexpr uint32_t OTG_HS_HCCHAR5_LSDEV = 0x20000;     // Low-speed device
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR5_EPTYP =              // Endpoint type
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR5_MC =                 // Multi Count (MC) / Error Count (EC)
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR5_DAD =                // Device address
        bit_field_t<22, 0x7f>::value<X>();
    static constexpr uint32_t OTG_HS_HCCHAR5_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t OTG_HS_HCCHAR5_CHDIS = 0x40000000;  // Channel disable
    static constexpr uint32_t OTG_HS_HCCHAR5_CHENA = 0x80000000;  // Channel enable

    static constexpr uint32_t OTG_HS_HCCHAR6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR6_MPSIZ =              // Maximum packet size
        bit_field_t<0, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR6_EPNUM =              // Endpoint number
        bit_field_t<11, 0xf>::value<X>();
    static constexpr uint32_t OTG_HS_HCCHAR6_EPDIR = 0x8000;      // Endpoint direction
    static constexpr uint32_t OTG_HS_HCCHAR6_LSDEV = 0x20000;     // Low-speed device
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR6_EPTYP =              // Endpoint type
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR6_MC =                 // Multi Count (MC) / Error Count (EC)
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR6_DAD =                // Device address
        bit_field_t<22, 0x7f>::value<X>();
    static constexpr uint32_t OTG_HS_HCCHAR6_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t OTG_HS_HCCHAR6_CHDIS = 0x40000000;  // Channel disable
    static constexpr uint32_t OTG_HS_HCCHAR6_CHENA = 0x80000000;  // Channel enable

    static constexpr uint32_t OTG_HS_HCCHAR7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR7_MPSIZ =              // Maximum packet size
        bit_field_t<0, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR7_EPNUM =              // Endpoint number
        bit_field_t<11, 0xf>::value<X>();
    static constexpr uint32_t OTG_HS_HCCHAR7_EPDIR = 0x8000;      // Endpoint direction
    static constexpr uint32_t OTG_HS_HCCHAR7_LSDEV = 0x20000;     // Low-speed device
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR7_EPTYP =              // Endpoint type
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR7_MC =                 // Multi Count (MC) / Error Count (EC)
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR7_DAD =                // Device address
        bit_field_t<22, 0x7f>::value<X>();
    static constexpr uint32_t OTG_HS_HCCHAR7_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t OTG_HS_HCCHAR7_CHDIS = 0x40000000;  // Channel disable
    static constexpr uint32_t OTG_HS_HCCHAR7_CHENA = 0x80000000;  // Channel enable

    static constexpr uint32_t OTG_HS_HCCHAR8_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR8_MPSIZ =              // Maximum packet size
        bit_field_t<0, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR8_EPNUM =              // Endpoint number
        bit_field_t<11, 0xf>::value<X>();
    static constexpr uint32_t OTG_HS_HCCHAR8_EPDIR = 0x8000;      // Endpoint direction
    static constexpr uint32_t OTG_HS_HCCHAR8_LSDEV = 0x20000;     // Low-speed device
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR8_EPTYP =              // Endpoint type
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR8_MC =                 // Multi Count (MC) / Error Count (EC)
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR8_DAD =                // Device address
        bit_field_t<22, 0x7f>::value<X>();
    static constexpr uint32_t OTG_HS_HCCHAR8_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t OTG_HS_HCCHAR8_CHDIS = 0x40000000;  // Channel disable
    static constexpr uint32_t OTG_HS_HCCHAR8_CHENA = 0x80000000;  // Channel enable

    static constexpr uint32_t OTG_HS_HCCHAR9_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR9_MPSIZ =              // Maximum packet size
        bit_field_t<0, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR9_EPNUM =              // Endpoint number
        bit_field_t<11, 0xf>::value<X>();
    static constexpr uint32_t OTG_HS_HCCHAR9_EPDIR = 0x8000;      // Endpoint direction
    static constexpr uint32_t OTG_HS_HCCHAR9_LSDEV = 0x20000;     // Low-speed device
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR9_EPTYP =              // Endpoint type
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR9_MC =                 // Multi Count (MC) / Error Count (EC)
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR9_DAD =                // Device address
        bit_field_t<22, 0x7f>::value<X>();
    static constexpr uint32_t OTG_HS_HCCHAR9_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t OTG_HS_HCCHAR9_CHDIS = 0x40000000;  // Channel disable
    static constexpr uint32_t OTG_HS_HCCHAR9_CHENA = 0x80000000;  // Channel enable

    static constexpr uint32_t OTG_HS_HCCHAR10_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR10_MPSIZ =              // Maximum packet size
        bit_field_t<0, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR10_EPNUM =              // Endpoint number
        bit_field_t<11, 0xf>::value<X>();
    static constexpr uint32_t OTG_HS_HCCHAR10_EPDIR = 0x8000;      // Endpoint direction
    static constexpr uint32_t OTG_HS_HCCHAR10_LSDEV = 0x20000;     // Low-speed device
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR10_EPTYP =              // Endpoint type
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR10_MC =                 // Multi Count (MC) / Error Count (EC)
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR10_DAD =                // Device address
        bit_field_t<22, 0x7f>::value<X>();
    static constexpr uint32_t OTG_HS_HCCHAR10_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t OTG_HS_HCCHAR10_CHDIS = 0x40000000;  // Channel disable
    static constexpr uint32_t OTG_HS_HCCHAR10_CHENA = 0x80000000;  // Channel enable

    static constexpr uint32_t OTG_HS_HCCHAR11_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR11_MPSIZ =              // Maximum packet size
        bit_field_t<0, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR11_EPNUM =              // Endpoint number
        bit_field_t<11, 0xf>::value<X>();
    static constexpr uint32_t OTG_HS_HCCHAR11_EPDIR = 0x8000;      // Endpoint direction
    static constexpr uint32_t OTG_HS_HCCHAR11_LSDEV = 0x20000;     // Low-speed device
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR11_EPTYP =              // Endpoint type
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR11_MC =                 // Multi Count (MC) / Error Count (EC)
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCCHAR11_DAD =                // Device address
        bit_field_t<22, 0x7f>::value<X>();
    static constexpr uint32_t OTG_HS_HCCHAR11_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t OTG_HS_HCCHAR11_CHDIS = 0x40000000;  // Channel disable
    static constexpr uint32_t OTG_HS_HCCHAR11_CHENA = 0x80000000;  // Channel enable

    static constexpr uint32_t OTG_HS_HCSPLT0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCSPLT0_PRTADDR =             // Port address
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCSPLT0_HUBADDR =             // Hub address
        bit_field_t<7, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCSPLT0_XACTPOS =             // XACTPOS
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_HCSPLT0_COMPLSPLT = 0x10000;  // Do complete split
    static constexpr uint32_t OTG_HS_HCSPLT0_SPLITEN = 0x80000000; // Split enable

    static constexpr uint32_t OTG_HS_HCSPLT1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCSPLT1_PRTADDR =             // Port address
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCSPLT1_HUBADDR =             // Hub address
        bit_field_t<7, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCSPLT1_XACTPOS =             // XACTPOS
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_HCSPLT1_COMPLSPLT = 0x10000;  // Do complete split
    static constexpr uint32_t OTG_HS_HCSPLT1_SPLITEN = 0x80000000; // Split enable

    static constexpr uint32_t OTG_HS_HCSPLT2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCSPLT2_PRTADDR =             // Port address
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCSPLT2_HUBADDR =             // Hub address
        bit_field_t<7, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCSPLT2_XACTPOS =             // XACTPOS
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_HCSPLT2_COMPLSPLT = 0x10000;  // Do complete split
    static constexpr uint32_t OTG_HS_HCSPLT2_SPLITEN = 0x80000000; // Split enable

    static constexpr uint32_t OTG_HS_HCSPLT3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCSPLT3_PRTADDR =             // Port address
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCSPLT3_HUBADDR =             // Hub address
        bit_field_t<7, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCSPLT3_XACTPOS =             // XACTPOS
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_HCSPLT3_COMPLSPLT = 0x10000;  // Do complete split
    static constexpr uint32_t OTG_HS_HCSPLT3_SPLITEN = 0x80000000; // Split enable

    static constexpr uint32_t OTG_HS_HCSPLT4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCSPLT4_PRTADDR =             // Port address
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCSPLT4_HUBADDR =             // Hub address
        bit_field_t<7, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCSPLT4_XACTPOS =             // XACTPOS
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_HCSPLT4_COMPLSPLT = 0x10000;  // Do complete split
    static constexpr uint32_t OTG_HS_HCSPLT4_SPLITEN = 0x80000000; // Split enable

    static constexpr uint32_t OTG_HS_HCSPLT5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCSPLT5_PRTADDR =             // Port address
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCSPLT5_HUBADDR =             // Hub address
        bit_field_t<7, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCSPLT5_XACTPOS =             // XACTPOS
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_HCSPLT5_COMPLSPLT = 0x10000;  // Do complete split
    static constexpr uint32_t OTG_HS_HCSPLT5_SPLITEN = 0x80000000; // Split enable

    static constexpr uint32_t OTG_HS_HCSPLT6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCSPLT6_PRTADDR =             // Port address
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCSPLT6_HUBADDR =             // Hub address
        bit_field_t<7, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCSPLT6_XACTPOS =             // XACTPOS
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_HCSPLT6_COMPLSPLT = 0x10000;  // Do complete split
    static constexpr uint32_t OTG_HS_HCSPLT6_SPLITEN = 0x80000000; // Split enable

    static constexpr uint32_t OTG_HS_HCSPLT7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCSPLT7_PRTADDR =             // Port address
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCSPLT7_HUBADDR =             // Hub address
        bit_field_t<7, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCSPLT7_XACTPOS =             // XACTPOS
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_HCSPLT7_COMPLSPLT = 0x10000;  // Do complete split
    static constexpr uint32_t OTG_HS_HCSPLT7_SPLITEN = 0x80000000; // Split enable

    static constexpr uint32_t OTG_HS_HCSPLT8_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCSPLT8_PRTADDR =             // Port address
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCSPLT8_HUBADDR =             // Hub address
        bit_field_t<7, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCSPLT8_XACTPOS =             // XACTPOS
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_HCSPLT8_COMPLSPLT = 0x10000;  // Do complete split
    static constexpr uint32_t OTG_HS_HCSPLT8_SPLITEN = 0x80000000; // Split enable

    static constexpr uint32_t OTG_HS_HCSPLT9_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCSPLT9_PRTADDR =             // Port address
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCSPLT9_HUBADDR =             // Hub address
        bit_field_t<7, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCSPLT9_XACTPOS =             // XACTPOS
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_HCSPLT9_COMPLSPLT = 0x10000;  // Do complete split
    static constexpr uint32_t OTG_HS_HCSPLT9_SPLITEN = 0x80000000; // Split enable

    static constexpr uint32_t OTG_HS_HCSPLT10_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCSPLT10_PRTADDR =             // Port address
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCSPLT10_HUBADDR =             // Hub address
        bit_field_t<7, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCSPLT10_XACTPOS =             // XACTPOS
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_HCSPLT10_COMPLSPLT = 0x10000;  // Do complete split
    static constexpr uint32_t OTG_HS_HCSPLT10_SPLITEN = 0x80000000; // Split enable

    static constexpr uint32_t OTG_HS_HCSPLT11_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCSPLT11_PRTADDR =             // Port address
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCSPLT11_HUBADDR =             // Hub address
        bit_field_t<7, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCSPLT11_XACTPOS =             // XACTPOS
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t OTG_HS_HCSPLT11_COMPLSPLT = 0x10000;  // Do complete split
    static constexpr uint32_t OTG_HS_HCSPLT11_SPLITEN = 0x80000000; // Split enable

    static constexpr uint32_t OTG_HS_HCINT0_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_HCINT0_XFRC = 0x1;    // Transfer completed
    static constexpr uint32_t OTG_HS_HCINT0_CHH = 0x2;     // Channel halted
    static constexpr uint32_t OTG_HS_HCINT0_AHBERR = 0x4;  // AHB error
    static constexpr uint32_t OTG_HS_HCINT0_STALL = 0x8;   // STALL response received interrupt
    static constexpr uint32_t OTG_HS_HCINT0_NAK = 0x10;    // NAK response received interrupt
    static constexpr uint32_t OTG_HS_HCINT0_ACK = 0x20;    // ACK response received/transmitted interrupt
    static constexpr uint32_t OTG_HS_HCINT0_NYET = 0x40;   // Response received interrupt
    static constexpr uint32_t OTG_HS_HCINT0_TXERR = 0x80;  // Transaction error
    static constexpr uint32_t OTG_HS_HCINT0_BBERR = 0x100; // Babble error
    static constexpr uint32_t OTG_HS_HCINT0_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t OTG_HS_HCINT0_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t OTG_HS_HCINT1_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_HCINT1_XFRC = 0x1;    // Transfer completed
    static constexpr uint32_t OTG_HS_HCINT1_CHH = 0x2;     // Channel halted
    static constexpr uint32_t OTG_HS_HCINT1_AHBERR = 0x4;  // AHB error
    static constexpr uint32_t OTG_HS_HCINT1_STALL = 0x8;   // STALL response received interrupt
    static constexpr uint32_t OTG_HS_HCINT1_NAK = 0x10;    // NAK response received interrupt
    static constexpr uint32_t OTG_HS_HCINT1_ACK = 0x20;    // ACK response received/transmitted interrupt
    static constexpr uint32_t OTG_HS_HCINT1_NYET = 0x40;   // Response received interrupt
    static constexpr uint32_t OTG_HS_HCINT1_TXERR = 0x80;  // Transaction error
    static constexpr uint32_t OTG_HS_HCINT1_BBERR = 0x100; // Babble error
    static constexpr uint32_t OTG_HS_HCINT1_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t OTG_HS_HCINT1_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t OTG_HS_HCINT2_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_HCINT2_XFRC = 0x1;    // Transfer completed
    static constexpr uint32_t OTG_HS_HCINT2_CHH = 0x2;     // Channel halted
    static constexpr uint32_t OTG_HS_HCINT2_AHBERR = 0x4;  // AHB error
    static constexpr uint32_t OTG_HS_HCINT2_STALL = 0x8;   // STALL response received interrupt
    static constexpr uint32_t OTG_HS_HCINT2_NAK = 0x10;    // NAK response received interrupt
    static constexpr uint32_t OTG_HS_HCINT2_ACK = 0x20;    // ACK response received/transmitted interrupt
    static constexpr uint32_t OTG_HS_HCINT2_NYET = 0x40;   // Response received interrupt
    static constexpr uint32_t OTG_HS_HCINT2_TXERR = 0x80;  // Transaction error
    static constexpr uint32_t OTG_HS_HCINT2_BBERR = 0x100; // Babble error
    static constexpr uint32_t OTG_HS_HCINT2_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t OTG_HS_HCINT2_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t OTG_HS_HCINT3_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_HCINT3_XFRC = 0x1;    // Transfer completed
    static constexpr uint32_t OTG_HS_HCINT3_CHH = 0x2;     // Channel halted
    static constexpr uint32_t OTG_HS_HCINT3_AHBERR = 0x4;  // AHB error
    static constexpr uint32_t OTG_HS_HCINT3_STALL = 0x8;   // STALL response received interrupt
    static constexpr uint32_t OTG_HS_HCINT3_NAK = 0x10;    // NAK response received interrupt
    static constexpr uint32_t OTG_HS_HCINT3_ACK = 0x20;    // ACK response received/transmitted interrupt
    static constexpr uint32_t OTG_HS_HCINT3_NYET = 0x40;   // Response received interrupt
    static constexpr uint32_t OTG_HS_HCINT3_TXERR = 0x80;  // Transaction error
    static constexpr uint32_t OTG_HS_HCINT3_BBERR = 0x100; // Babble error
    static constexpr uint32_t OTG_HS_HCINT3_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t OTG_HS_HCINT3_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t OTG_HS_HCINT4_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_HCINT4_XFRC = 0x1;    // Transfer completed
    static constexpr uint32_t OTG_HS_HCINT4_CHH = 0x2;     // Channel halted
    static constexpr uint32_t OTG_HS_HCINT4_AHBERR = 0x4;  // AHB error
    static constexpr uint32_t OTG_HS_HCINT4_STALL = 0x8;   // STALL response received interrupt
    static constexpr uint32_t OTG_HS_HCINT4_NAK = 0x10;    // NAK response received interrupt
    static constexpr uint32_t OTG_HS_HCINT4_ACK = 0x20;    // ACK response received/transmitted interrupt
    static constexpr uint32_t OTG_HS_HCINT4_NYET = 0x40;   // Response received interrupt
    static constexpr uint32_t OTG_HS_HCINT4_TXERR = 0x80;  // Transaction error
    static constexpr uint32_t OTG_HS_HCINT4_BBERR = 0x100; // Babble error
    static constexpr uint32_t OTG_HS_HCINT4_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t OTG_HS_HCINT4_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t OTG_HS_HCINT5_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_HCINT5_XFRC = 0x1;    // Transfer completed
    static constexpr uint32_t OTG_HS_HCINT5_CHH = 0x2;     // Channel halted
    static constexpr uint32_t OTG_HS_HCINT5_AHBERR = 0x4;  // AHB error
    static constexpr uint32_t OTG_HS_HCINT5_STALL = 0x8;   // STALL response received interrupt
    static constexpr uint32_t OTG_HS_HCINT5_NAK = 0x10;    // NAK response received interrupt
    static constexpr uint32_t OTG_HS_HCINT5_ACK = 0x20;    // ACK response received/transmitted interrupt
    static constexpr uint32_t OTG_HS_HCINT5_NYET = 0x40;   // Response received interrupt
    static constexpr uint32_t OTG_HS_HCINT5_TXERR = 0x80;  // Transaction error
    static constexpr uint32_t OTG_HS_HCINT5_BBERR = 0x100; // Babble error
    static constexpr uint32_t OTG_HS_HCINT5_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t OTG_HS_HCINT5_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t OTG_HS_HCINT6_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_HCINT6_XFRC = 0x1;    // Transfer completed
    static constexpr uint32_t OTG_HS_HCINT6_CHH = 0x2;     // Channel halted
    static constexpr uint32_t OTG_HS_HCINT6_AHBERR = 0x4;  // AHB error
    static constexpr uint32_t OTG_HS_HCINT6_STALL = 0x8;   // STALL response received interrupt
    static constexpr uint32_t OTG_HS_HCINT6_NAK = 0x10;    // NAK response received interrupt
    static constexpr uint32_t OTG_HS_HCINT6_ACK = 0x20;    // ACK response received/transmitted interrupt
    static constexpr uint32_t OTG_HS_HCINT6_NYET = 0x40;   // Response received interrupt
    static constexpr uint32_t OTG_HS_HCINT6_TXERR = 0x80;  // Transaction error
    static constexpr uint32_t OTG_HS_HCINT6_BBERR = 0x100; // Babble error
    static constexpr uint32_t OTG_HS_HCINT6_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t OTG_HS_HCINT6_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t OTG_HS_HCINT7_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_HCINT7_XFRC = 0x1;    // Transfer completed
    static constexpr uint32_t OTG_HS_HCINT7_CHH = 0x2;     // Channel halted
    static constexpr uint32_t OTG_HS_HCINT7_AHBERR = 0x4;  // AHB error
    static constexpr uint32_t OTG_HS_HCINT7_STALL = 0x8;   // STALL response received interrupt
    static constexpr uint32_t OTG_HS_HCINT7_NAK = 0x10;    // NAK response received interrupt
    static constexpr uint32_t OTG_HS_HCINT7_ACK = 0x20;    // ACK response received/transmitted interrupt
    static constexpr uint32_t OTG_HS_HCINT7_NYET = 0x40;   // Response received interrupt
    static constexpr uint32_t OTG_HS_HCINT7_TXERR = 0x80;  // Transaction error
    static constexpr uint32_t OTG_HS_HCINT7_BBERR = 0x100; // Babble error
    static constexpr uint32_t OTG_HS_HCINT7_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t OTG_HS_HCINT7_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t OTG_HS_HCINT8_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_HCINT8_XFRC = 0x1;    // Transfer completed
    static constexpr uint32_t OTG_HS_HCINT8_CHH = 0x2;     // Channel halted
    static constexpr uint32_t OTG_HS_HCINT8_AHBERR = 0x4;  // AHB error
    static constexpr uint32_t OTG_HS_HCINT8_STALL = 0x8;   // STALL response received interrupt
    static constexpr uint32_t OTG_HS_HCINT8_NAK = 0x10;    // NAK response received interrupt
    static constexpr uint32_t OTG_HS_HCINT8_ACK = 0x20;    // ACK response received/transmitted interrupt
    static constexpr uint32_t OTG_HS_HCINT8_NYET = 0x40;   // Response received interrupt
    static constexpr uint32_t OTG_HS_HCINT8_TXERR = 0x80;  // Transaction error
    static constexpr uint32_t OTG_HS_HCINT8_BBERR = 0x100; // Babble error
    static constexpr uint32_t OTG_HS_HCINT8_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t OTG_HS_HCINT8_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t OTG_HS_HCINT9_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_HCINT9_XFRC = 0x1;    // Transfer completed
    static constexpr uint32_t OTG_HS_HCINT9_CHH = 0x2;     // Channel halted
    static constexpr uint32_t OTG_HS_HCINT9_AHBERR = 0x4;  // AHB error
    static constexpr uint32_t OTG_HS_HCINT9_STALL = 0x8;   // STALL response received interrupt
    static constexpr uint32_t OTG_HS_HCINT9_NAK = 0x10;    // NAK response received interrupt
    static constexpr uint32_t OTG_HS_HCINT9_ACK = 0x20;    // ACK response received/transmitted interrupt
    static constexpr uint32_t OTG_HS_HCINT9_NYET = 0x40;   // Response received interrupt
    static constexpr uint32_t OTG_HS_HCINT9_TXERR = 0x80;  // Transaction error
    static constexpr uint32_t OTG_HS_HCINT9_BBERR = 0x100; // Babble error
    static constexpr uint32_t OTG_HS_HCINT9_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t OTG_HS_HCINT9_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t OTG_HS_HCINT10_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_HCINT10_XFRC = 0x1;    // Transfer completed
    static constexpr uint32_t OTG_HS_HCINT10_CHH = 0x2;     // Channel halted
    static constexpr uint32_t OTG_HS_HCINT10_AHBERR = 0x4;  // AHB error
    static constexpr uint32_t OTG_HS_HCINT10_STALL = 0x8;   // STALL response received interrupt
    static constexpr uint32_t OTG_HS_HCINT10_NAK = 0x10;    // NAK response received interrupt
    static constexpr uint32_t OTG_HS_HCINT10_ACK = 0x20;    // ACK response received/transmitted interrupt
    static constexpr uint32_t OTG_HS_HCINT10_NYET = 0x40;   // Response received interrupt
    static constexpr uint32_t OTG_HS_HCINT10_TXERR = 0x80;  // Transaction error
    static constexpr uint32_t OTG_HS_HCINT10_BBERR = 0x100; // Babble error
    static constexpr uint32_t OTG_HS_HCINT10_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t OTG_HS_HCINT10_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t OTG_HS_HCINT11_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_HCINT11_XFRC = 0x1;    // Transfer completed
    static constexpr uint32_t OTG_HS_HCINT11_CHH = 0x2;     // Channel halted
    static constexpr uint32_t OTG_HS_HCINT11_AHBERR = 0x4;  // AHB error
    static constexpr uint32_t OTG_HS_HCINT11_STALL = 0x8;   // STALL response received interrupt
    static constexpr uint32_t OTG_HS_HCINT11_NAK = 0x10;    // NAK response received interrupt
    static constexpr uint32_t OTG_HS_HCINT11_ACK = 0x20;    // ACK response received/transmitted interrupt
    static constexpr uint32_t OTG_HS_HCINT11_NYET = 0x40;   // Response received interrupt
    static constexpr uint32_t OTG_HS_HCINT11_TXERR = 0x80;  // Transaction error
    static constexpr uint32_t OTG_HS_HCINT11_BBERR = 0x100; // Babble error
    static constexpr uint32_t OTG_HS_HCINT11_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t OTG_HS_HCINT11_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t OTG_HS_HCINTMSK0_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_HCINTMSK0_XFRCM = 0x1;    // Transfer completed mask
    static constexpr uint32_t OTG_HS_HCINTMSK0_CHHM = 0x2;     // Channel halted mask
    static constexpr uint32_t OTG_HS_HCINTMSK0_AHBERR = 0x4;   // AHB error
    static constexpr uint32_t OTG_HS_HCINTMSK0_STALLM = 0x8;   // STALL response received interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK0_NAKM = 0x10;    // NAK response received interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK0_ACKM = 0x20;    // ACK response received/transmitted interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK0_NYET = 0x40;    // response received interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK0_TXERRM = 0x80;  // Transaction error mask
    static constexpr uint32_t OTG_HS_HCINTMSK0_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t OTG_HS_HCINTMSK0_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t OTG_HS_HCINTMSK0_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t OTG_HS_HCINTMSK1_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_HCINTMSK1_XFRCM = 0x1;    // Transfer completed mask
    static constexpr uint32_t OTG_HS_HCINTMSK1_CHHM = 0x2;     // Channel halted mask
    static constexpr uint32_t OTG_HS_HCINTMSK1_AHBERR = 0x4;   // AHB error
    static constexpr uint32_t OTG_HS_HCINTMSK1_STALLM = 0x8;   // STALL response received interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK1_NAKM = 0x10;    // NAK response received interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK1_ACKM = 0x20;    // ACK response received/transmitted interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK1_NYET = 0x40;    // response received interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK1_TXERRM = 0x80;  // Transaction error mask
    static constexpr uint32_t OTG_HS_HCINTMSK1_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t OTG_HS_HCINTMSK1_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t OTG_HS_HCINTMSK1_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t OTG_HS_HCINTMSK2_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_HCINTMSK2_XFRCM = 0x1;    // Transfer completed mask
    static constexpr uint32_t OTG_HS_HCINTMSK2_CHHM = 0x2;     // Channel halted mask
    static constexpr uint32_t OTG_HS_HCINTMSK2_AHBERR = 0x4;   // AHB error
    static constexpr uint32_t OTG_HS_HCINTMSK2_STALLM = 0x8;   // STALL response received interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK2_NAKM = 0x10;    // NAK response received interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK2_ACKM = 0x20;    // ACK response received/transmitted interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK2_NYET = 0x40;    // response received interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK2_TXERRM = 0x80;  // Transaction error mask
    static constexpr uint32_t OTG_HS_HCINTMSK2_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t OTG_HS_HCINTMSK2_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t OTG_HS_HCINTMSK2_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t OTG_HS_HCINTMSK3_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_HCINTMSK3_XFRCM = 0x1;    // Transfer completed mask
    static constexpr uint32_t OTG_HS_HCINTMSK3_CHHM = 0x2;     // Channel halted mask
    static constexpr uint32_t OTG_HS_HCINTMSK3_AHBERR = 0x4;   // AHB error
    static constexpr uint32_t OTG_HS_HCINTMSK3_STALLM = 0x8;   // STALL response received interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK3_NAKM = 0x10;    // NAK response received interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK3_ACKM = 0x20;    // ACK response received/transmitted interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK3_NYET = 0x40;    // response received interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK3_TXERRM = 0x80;  // Transaction error mask
    static constexpr uint32_t OTG_HS_HCINTMSK3_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t OTG_HS_HCINTMSK3_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t OTG_HS_HCINTMSK3_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t OTG_HS_HCINTMSK4_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_HCINTMSK4_XFRCM = 0x1;    // Transfer completed mask
    static constexpr uint32_t OTG_HS_HCINTMSK4_CHHM = 0x2;     // Channel halted mask
    static constexpr uint32_t OTG_HS_HCINTMSK4_AHBERR = 0x4;   // AHB error
    static constexpr uint32_t OTG_HS_HCINTMSK4_STALLM = 0x8;   // STALL response received interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK4_NAKM = 0x10;    // NAK response received interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK4_ACKM = 0x20;    // ACK response received/transmitted interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK4_NYET = 0x40;    // response received interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK4_TXERRM = 0x80;  // Transaction error mask
    static constexpr uint32_t OTG_HS_HCINTMSK4_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t OTG_HS_HCINTMSK4_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t OTG_HS_HCINTMSK4_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t OTG_HS_HCINTMSK5_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_HCINTMSK5_XFRCM = 0x1;    // Transfer completed mask
    static constexpr uint32_t OTG_HS_HCINTMSK5_CHHM = 0x2;     // Channel halted mask
    static constexpr uint32_t OTG_HS_HCINTMSK5_AHBERR = 0x4;   // AHB error
    static constexpr uint32_t OTG_HS_HCINTMSK5_STALLM = 0x8;   // STALL response received interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK5_NAKM = 0x10;    // NAK response received interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK5_ACKM = 0x20;    // ACK response received/transmitted interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK5_NYET = 0x40;    // response received interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK5_TXERRM = 0x80;  // Transaction error mask
    static constexpr uint32_t OTG_HS_HCINTMSK5_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t OTG_HS_HCINTMSK5_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t OTG_HS_HCINTMSK5_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t OTG_HS_HCINTMSK6_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_HCINTMSK6_XFRCM = 0x1;    // Transfer completed mask
    static constexpr uint32_t OTG_HS_HCINTMSK6_CHHM = 0x2;     // Channel halted mask
    static constexpr uint32_t OTG_HS_HCINTMSK6_AHBERR = 0x4;   // AHB error
    static constexpr uint32_t OTG_HS_HCINTMSK6_STALLM = 0x8;   // STALL response received interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK6_NAKM = 0x10;    // NAK response received interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK6_ACKM = 0x20;    // ACK response received/transmitted interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK6_NYET = 0x40;    // response received interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK6_TXERRM = 0x80;  // Transaction error mask
    static constexpr uint32_t OTG_HS_HCINTMSK6_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t OTG_HS_HCINTMSK6_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t OTG_HS_HCINTMSK6_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t OTG_HS_HCINTMSK7_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_HCINTMSK7_XFRCM = 0x1;    // Transfer completed mask
    static constexpr uint32_t OTG_HS_HCINTMSK7_CHHM = 0x2;     // Channel halted mask
    static constexpr uint32_t OTG_HS_HCINTMSK7_AHBERR = 0x4;   // AHB error
    static constexpr uint32_t OTG_HS_HCINTMSK7_STALLM = 0x8;   // STALL response received interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK7_NAKM = 0x10;    // NAK response received interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK7_ACKM = 0x20;    // ACK response received/transmitted interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK7_NYET = 0x40;    // response received interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK7_TXERRM = 0x80;  // Transaction error mask
    static constexpr uint32_t OTG_HS_HCINTMSK7_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t OTG_HS_HCINTMSK7_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t OTG_HS_HCINTMSK7_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t OTG_HS_HCINTMSK8_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_HCINTMSK8_XFRCM = 0x1;    // Transfer completed mask
    static constexpr uint32_t OTG_HS_HCINTMSK8_CHHM = 0x2;     // Channel halted mask
    static constexpr uint32_t OTG_HS_HCINTMSK8_AHBERR = 0x4;   // AHB error
    static constexpr uint32_t OTG_HS_HCINTMSK8_STALLM = 0x8;   // STALL response received interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK8_NAKM = 0x10;    // NAK response received interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK8_ACKM = 0x20;    // ACK response received/transmitted interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK8_NYET = 0x40;    // response received interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK8_TXERRM = 0x80;  // Transaction error mask
    static constexpr uint32_t OTG_HS_HCINTMSK8_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t OTG_HS_HCINTMSK8_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t OTG_HS_HCINTMSK8_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t OTG_HS_HCINTMSK9_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_HCINTMSK9_XFRCM = 0x1;    // Transfer completed mask
    static constexpr uint32_t OTG_HS_HCINTMSK9_CHHM = 0x2;     // Channel halted mask
    static constexpr uint32_t OTG_HS_HCINTMSK9_AHBERR = 0x4;   // AHB error
    static constexpr uint32_t OTG_HS_HCINTMSK9_STALLM = 0x8;   // STALL response received interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK9_NAKM = 0x10;    // NAK response received interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK9_ACKM = 0x20;    // ACK response received/transmitted interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK9_NYET = 0x40;    // response received interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK9_TXERRM = 0x80;  // Transaction error mask
    static constexpr uint32_t OTG_HS_HCINTMSK9_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t OTG_HS_HCINTMSK9_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t OTG_HS_HCINTMSK9_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t OTG_HS_HCINTMSK10_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_HCINTMSK10_XFRCM = 0x1;    // Transfer completed mask
    static constexpr uint32_t OTG_HS_HCINTMSK10_CHHM = 0x2;     // Channel halted mask
    static constexpr uint32_t OTG_HS_HCINTMSK10_AHBERR = 0x4;   // AHB error
    static constexpr uint32_t OTG_HS_HCINTMSK10_STALLM = 0x8;   // STALL response received interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK10_NAKM = 0x10;    // NAK response received interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK10_ACKM = 0x20;    // ACK response received/transmitted interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK10_NYET = 0x40;    // response received interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK10_TXERRM = 0x80;  // Transaction error mask
    static constexpr uint32_t OTG_HS_HCINTMSK10_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t OTG_HS_HCINTMSK10_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t OTG_HS_HCINTMSK10_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t OTG_HS_HCINTMSK11_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_HCINTMSK11_XFRCM = 0x1;    // Transfer completed mask
    static constexpr uint32_t OTG_HS_HCINTMSK11_CHHM = 0x2;     // Channel halted mask
    static constexpr uint32_t OTG_HS_HCINTMSK11_AHBERR = 0x4;   // AHB error
    static constexpr uint32_t OTG_HS_HCINTMSK11_STALLM = 0x8;   // STALL response received interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK11_NAKM = 0x10;    // NAK response received interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK11_ACKM = 0x20;    // ACK response received/transmitted interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK11_NYET = 0x40;    // response received interrupt mask
    static constexpr uint32_t OTG_HS_HCINTMSK11_TXERRM = 0x80;  // Transaction error mask
    static constexpr uint32_t OTG_HS_HCINTMSK11_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t OTG_HS_HCINTMSK11_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t OTG_HS_HCINTMSK11_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t OTG_HS_HCTSIZ0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCTSIZ0_XFRSIZ =   // Transfer size
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCTSIZ0_PKTCNT =   // Packet count
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCTSIZ0_DPID =     // Data PID
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HS_HCTSIZ1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCTSIZ1_XFRSIZ =   // Transfer size
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCTSIZ1_PKTCNT =   // Packet count
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCTSIZ1_DPID =     // Data PID
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HS_HCTSIZ2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCTSIZ2_XFRSIZ =   // Transfer size
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCTSIZ2_PKTCNT =   // Packet count
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCTSIZ2_DPID =     // Data PID
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HS_HCTSIZ3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCTSIZ3_XFRSIZ =   // Transfer size
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCTSIZ3_PKTCNT =   // Packet count
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCTSIZ3_DPID =     // Data PID
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HS_HCTSIZ4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCTSIZ4_XFRSIZ =   // Transfer size
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCTSIZ4_PKTCNT =   // Packet count
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCTSIZ4_DPID =     // Data PID
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HS_HCTSIZ5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCTSIZ5_XFRSIZ =   // Transfer size
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCTSIZ5_PKTCNT =   // Packet count
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCTSIZ5_DPID =     // Data PID
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HS_HCTSIZ6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCTSIZ6_XFRSIZ =   // Transfer size
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCTSIZ6_PKTCNT =   // Packet count
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCTSIZ6_DPID =     // Data PID
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HS_HCTSIZ7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCTSIZ7_XFRSIZ =   // Transfer size
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCTSIZ7_PKTCNT =   // Packet count
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCTSIZ7_DPID =     // Data PID
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HS_HCTSIZ8_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCTSIZ8_XFRSIZ =   // Transfer size
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCTSIZ8_PKTCNT =   // Packet count
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCTSIZ8_DPID =     // Data PID
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HS_HCTSIZ9_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCTSIZ9_XFRSIZ =   // Transfer size
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCTSIZ9_PKTCNT =   // Packet count
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCTSIZ9_DPID =     // Data PID
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HS_HCTSIZ10_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCTSIZ10_XFRSIZ =   // Transfer size
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCTSIZ10_PKTCNT =   // Packet count
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCTSIZ10_DPID =     // Data PID
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HS_HCTSIZ11_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCTSIZ11_XFRSIZ =   // Transfer size
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCTSIZ11_PKTCNT =   // Packet count
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HS_HCTSIZ11_DPID =     // Data PID
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HS_HCDMA0_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HS_HCDMA1_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HS_HCDMA2_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HS_HCDMA3_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HS_HCDMA4_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HS_HCDMA5_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HS_HCDMA6_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HS_HCDMA7_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HS_HCDMA8_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HS_HCDMA9_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HS_HCDMA10_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HS_HCDMA11_RESET_VALUE = 0x0;
};


////
//
//      USB on the go high speed
//
////

struct stm32f405_otg_hs_pwrclk_t
{
    volatile uint32_t OTG_HS_PCGCR; // [read-write] Power and clock gating control register

    static constexpr uint32_t OTG_HS_PCGCR_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_PCGCR_STPPCLK = 0x1;  // Stop PHY clock
    static constexpr uint32_t OTG_HS_PCGCR_GATEHCLK = 0x2; // Gate HCLK
    static constexpr uint32_t OTG_HS_PCGCR_PHYSUSP = 0x10; // PHY suspended
};


template<>
struct peripheral_t<STM32F405, OTG_HS_GLOBAL>
{
    typedef stm32f405_otg_hs_global_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, OTG_HS_GLOBAL>
{
    typedef stm32f405_otg_hs_global_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, OTG_HS_GLOBAL>
{
    typedef stm32f405_otg_hs_global_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, OTG_HS_GLOBAL>
{
    typedef stm32f405_otg_hs_global_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, OTG_HS_GLOBAL>
{
    typedef stm32f405_otg_hs_global_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, OTG_HS_GLOBAL>
{
    typedef stm32f405_otg_hs_global_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, OTG_HS_HOST>
{
    typedef stm32f405_otg_hs_host_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, OTG_HS_HOST>
{
    typedef stm32f405_otg_hs_host_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, OTG_HS_HOST>
{
    typedef stm32f405_otg_hs_host_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, OTG_HS_HOST>
{
    typedef stm32f405_otg_hs_host_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, OTG_HS_HOST>
{
    typedef stm32f405_otg_hs_host_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, OTG_HS_HOST>
{
    typedef stm32f405_otg_hs_host_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, OTG_HS_DEVICE>
{
    typedef stm32f405_otg_hs_device_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, OTG_HS_DEVICE>
{
    typedef stm32f405_otg_hs_device_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, OTG_HS_DEVICE>
{
    typedef stm32f405_otg_hs_device_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, OTG_HS_DEVICE>
{
    typedef stm32f405_otg_hs_device_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, OTG_HS_DEVICE>
{
    typedef stm32f405_otg_hs_device_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, OTG_HS_PWRCLK>
{
    typedef stm32f405_otg_hs_pwrclk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, OTG_HS_PWRCLK>
{
    typedef stm32f405_otg_hs_pwrclk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, OTG_HS_PWRCLK>
{
    typedef stm32f405_otg_hs_pwrclk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, OTG_HS_PWRCLK>
{
    typedef stm32f405_otg_hs_pwrclk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, OTG_HS_PWRCLK>
{
    typedef stm32f405_otg_hs_pwrclk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, OTG_HS_PWRCLK>
{
    typedef stm32f405_otg_hs_pwrclk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, OTG_HS_DEVICE>
{
    typedef stm32f446_otg_hs_device_t T;
    static T& V;
};

using otg_hs_device_t = peripheral_t<mcu_svd, OTG_HS_DEVICE>;
using otg_hs_global_t = peripheral_t<mcu_svd, OTG_HS_GLOBAL>;
using otg_hs_host_t = peripheral_t<mcu_svd, OTG_HS_HOST>;
using otg_hs_pwrclk_t = peripheral_t<mcu_svd, OTG_HS_PWRCLK>;

