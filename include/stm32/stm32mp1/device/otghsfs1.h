#pragma once

////
//
//      STM32MP1 OTGHSFS1 peripherals
//
////

////
//
//      OTGHSFS1
//
////

struct stm32mp15xxx_otghsfs1_t
{
    volatile uint32_t OTG_GOTGCTL;         // The OTG_GOTGCTL register controls the behavior and reflects the status of the OTG function of the core.
    volatile uint32_t OTG_GOTGINT;         // [read-write] The application reads this register whenever there is an OTG interrupt and clears the bits in this register to clear the OTG interrupt.
    volatile uint32_t OTG_GAHBCFG;         // [read-write] This register can be used to configure the core after power-on or a change in mode. This register mainly contains AHB system-related configuration parameters. Do not change this register after the initial programming. The application must program this register before starting any transactions on either the AHB or the USB.
    volatile uint32_t OTG_GUSBCFG;         // [read-write] This register can be used to configure the core after power-on or a changing to host mode or device mode. It contains USB and USB-PHY related configuration parameters. The application must program this register before starting any transactions on either the AHB or the USB. Do not make changes to this register after the initial programming.
    volatile uint32_t OTG_GRSTCTL;         // The application uses this register to reset various hardware features inside the core.
    volatile uint32_t OTG_GINTSTS;         // This register interrupts the application for system-level events in the current mode (device mode or host mode). Some of the bits in this register are valid only in host mode, while others are valid in device mode only. This register also indicates the current mode. To clear the interrupt status bits of the rc_w1 type, the application must write 1 into the bit. The FIFO status interrupts are read-only; once software reads from or writes to the FIFO while servicing these interrupts, FIFO interrupt conditions are cleared automatically. The application must clear the OTG_GINTSTS register at initialization before unmasking the interrupt bit to avoid any interrupts generated prior to initialization.
    volatile uint32_t OTG_GINTMSK;         // This register works with the core interrupt register to interrupt the application. When an interrupt bit is masked, the interrupt associated with that bit is not generated. However, the core interrupt (OTG_GINTSTS) register bit corresponding to that interrupt is still set.
    volatile uint32_t OTG_GRXSTSR;         // [read-only] This description is for register OTG_GRXSTSR in Device mode. A read to the receive status debug read register returns the contents of the top of the receive FIFO. The core ignores the receive status read when the receive FIFO is empty and returns a value of 0x00000000.
    volatile uint32_t OTG_GRXSTSP;         // [read-only] This description is for register OTG_GRXSTSP in Device mode. Similarly to OTG_GRXSTSR (receive status debug read register) where a read returns the contents of the top of the receive FIFO, a read to OTG_GRXSTSP (receive status read and pop register) additionally pops the top data entry out of the Rx FIFO. The core ignores the receive status pop/read when the receive FIFO is empty and returns a value of 0x00000000. The application must only pop the receive status FIFO when the receive FIFO non-empty bit of the core interrupt register (RXFLVL bit in OTG_GINTSTS) is asserted.
    volatile uint32_t OTG_GRXFSIZ;         // [read-write] The application can program the RAM size that must be allocated to the Rx FIFO.
    volatile uint32_t OTG_HNPTXFSIZ;       // [read-write] Host mode
    volatile uint32_t OTG_HNPTXSTS;        // [read-only] In device mode, this register is not valid. This read-only register contains the free space information for the non-periodic Tx FIFO and the non-periodic transmit request queue.
    reserved_t<0x2> _0x38;
    volatile uint32_t OTG_GCCFG;           // OTG general core configuration register
    volatile uint32_t OTG_CID;             // [read-write] This is a register containing the Product ID as reset value.
    reserved_t<0x5> _0x54;
    volatile uint32_t OTG_GLPMCFG;         // OTG core LPM configuration register
    reserved_t<0x2a> _0x100;
    volatile uint32_t OTG_HPTXFSIZ;        // [read-write] OTG host periodic transmit FIFO size register
    volatile uint32_t OTG_DIEPTXF1;        // [read-write] OTG device IN endpoint transmit FIFO 1 size register
    volatile uint32_t OTG_DIEPTXF2;        // [read-write] OTG device IN endpoint transmit FIFO 2 size register
    volatile uint32_t OTG_DIEPTXF3;        // [read-write] OTG device IN endpoint transmit FIFO 3 size register
    volatile uint32_t OTG_DIEPTXF4;        // [read-write] OTG device IN endpoint transmit FIFO 4 size register
    volatile uint32_t OTG_DIEPTXF5;        // [read-write] OTG device IN endpoint transmit FIFO 5 size register
    volatile uint32_t OTG_DIEPTXF6;        // [read-write] OTG device IN endpoint transmit FIFO 6 size register
    volatile uint32_t OTG_DIEPTXF7;        // [read-write] OTG device IN endpoint transmit FIFO 7 size register
    volatile uint32_t OTG_DIEPTXF8;        // [read-write] OTG device IN endpoint transmit FIFO 8 size register
    reserved_t<0xb7> _0x400;
    volatile uint32_t OTG_HCFG;            // This register configures the core after power-on. Do not make changes to this register after initializing the host.
    volatile uint32_t OTG_HFIR;            // [read-write] This register stores the frame interval information for the current speed to which the OTG controller has enumerated.
    volatile uint32_t OTG_HFNUM;           // [read-only] This register indicates the current frame number. It also indicates the time remaining (in terms of the number of PHY clocks) in the current frame.
    reserved_t<0x1> _0x410;
    volatile uint32_t OTG_HPTXSTS;         // [read-only] This read-only register contains the free space information for the periodic Tx FIFO and the periodic transmit request queue.
    volatile uint32_t OTG_HAINT;           // [read-only] When a significant event occurs on a channel, the host all channels interrupt register interrupts the application using the host channels interrupt bit of the core interrupt register (HCINT bit in OTG_GINTSTS). This is shown in Figure724. There is one interrupt bit per channel, up to a maximum of 16 bits. Bits in this register are set and cleared when the application sets and clears bits in the corresponding host channel-x interrupt register.
    volatile uint32_t OTG_HAINTMSK;        // [read-write] The host all channel interrupt mask register works with the host all channel interrupt register to interrupt the application when an event occurs on a channel. There is one interrupt mask bit per channel, up to a maximum of 16 bits.
    volatile uint32_t OTG_HFLBADDR;        // [read-write] This register holds the starting address of the frame list information (scatter/gather mode).
    reserved_t<0x8> _0x440;
    volatile uint32_t OTG_HPRT;            // This register is available only in host mode. Currently, the OTG host supports only one port. A single register holds USB port-related information such as USB reset, enable, suspend, resume, connect status, and test mode for each port. It is shown in Figure724. The rc_w1 bits in this register can trigger an interrupt to the application through the host port interrupt bit of the core interrupt register (HPRTINT bit in OTG_GINTSTS). On a port interrupt, the application must read this register and clear the bit that caused the interrupt. For the rc_w1 bits, the application must write a 1 to the bit to clear the interrupt.
    reserved_t<0x2f> _0x500;
    volatile uint32_t OTG_HCCHAR0;         // [read-write] OTG host channel 0 characteristics register
    volatile uint32_t OTG_HCSPLT0;         // [read-write] OTG host channel 0 split control register
    volatile uint32_t OTG_HCINT0;          // [read-write] This register indicates the status of a channel with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the host channels interrupt bit in the core interrupt register (HCINT bit in OTG_GINTSTS) is set. Before the application can read this register, it must first read the host all channels interrupt (OTG_HAINT) register to get the exact channel number for the host channel-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the OTG_HAINT and OTG_GINTSTS registers.
    volatile uint32_t OTG_HCINTMSK0;       // [read-write] This register reflects the mask for each channel status described in the previous section.
    volatile uint32_t OTG_HCTSIZ0;         // [read-write] OTG host channel 0 transfer size register
    volatile uint32_t OTG_HCDMA0;          // [read-write] OTG host channel 0 DMA address register in buffer DMA [alternate]
    reserved_t<0x1> _0x51c;
    volatile uint32_t OTG_HCDMAB0;         // [read-only] OTG host channel-n DMA address buffer register
    volatile uint32_t OTG_HCCHAR1;         // [read-write] OTG host channel 1 characteristics register
    volatile uint32_t OTG_HCSPLT1;         // [read-write] OTG host channel 1 split control register
    volatile uint32_t OTG_HCINT1;          // [read-write] This register indicates the status of a channel with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the host channels interrupt bit in the core interrupt register (HCINT bit in OTG_GINTSTS) is set. Before the application can read this register, it must first read the host all channels interrupt (OTG_HAINT) register to get the exact channel number for the host channel-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the OTG_HAINT and OTG_GINTSTS registers.
    volatile uint32_t OTG_HCINTMSK1;       // [read-write] This register reflects the mask for each channel status described in the previous section.
    volatile uint32_t OTG_HCTSIZ1;         // [read-write] OTG host channel 1 transfer size register
    volatile uint32_t OTG_HCDMA1;          // [read-write] OTG host channel 1 DMA address register in buffer DMA [alternate]
    reserved_t<0x1> _0x53c;
    volatile uint32_t OTG_HCDMAB1;         // [read-only] OTG host channel-n DMA address buffer register
    volatile uint32_t OTG_HCCHAR2;         // [read-write] OTG host channel 2 characteristics register
    volatile uint32_t OTG_HCSPLT2;         // [read-write] OTG host channel 2 split control register
    volatile uint32_t OTG_HCINT2;          // [read-write] This register indicates the status of a channel with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the host channels interrupt bit in the core interrupt register (HCINT bit in OTG_GINTSTS) is set. Before the application can read this register, it must first read the host all channels interrupt (OTG_HAINT) register to get the exact channel number for the host channel-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the OTG_HAINT and OTG_GINTSTS registers.
    volatile uint32_t OTG_HCINTMSK2;       // [read-write] This register reflects the mask for each channel status described in the previous section.
    volatile uint32_t OTG_HCTSIZ2;         // [read-write] OTG host channel 2 transfer size register
    volatile uint32_t OTG_HCDMA2;          // [read-write] OTG host channel 2 DMA address register in buffer DMA [alternate]
    reserved_t<0x1> _0x55c;
    volatile uint32_t OTG_HCDMAB2;         // [read-only] OTG host channel-n DMA address buffer register
    volatile uint32_t OTG_HCCHAR3;         // [read-write] OTG host channel 3 characteristics register
    volatile uint32_t OTG_HCSPLT3;         // [read-write] OTG host channel 3 split control register
    volatile uint32_t OTG_HCINT3;          // [read-write] This register indicates the status of a channel with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the host channels interrupt bit in the core interrupt register (HCINT bit in OTG_GINTSTS) is set. Before the application can read this register, it must first read the host all channels interrupt (OTG_HAINT) register to get the exact channel number for the host channel-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the OTG_HAINT and OTG_GINTSTS registers.
    volatile uint32_t OTG_HCINTMSK3;       // [read-write] This register reflects the mask for each channel status described in the previous section.
    volatile uint32_t OTG_HCTSIZ3;         // [read-write] OTG host channel 3 transfer size register
    volatile uint32_t OTG_HCDMA3;          // [read-write] OTG host channel 3 DMA address register in buffer DMA [alternate]
    reserved_t<0x1> _0x57c;
    volatile uint32_t OTG_HCDMAB3;         // [read-only] OTG host channel-n DMA address buffer register
    volatile uint32_t OTG_HCCHAR4;         // [read-write] OTG host channel 4 characteristics register
    volatile uint32_t OTG_HCSPLT4;         // [read-write] OTG host channel 4 split control register
    volatile uint32_t OTG_HCINT4;          // [read-write] This register indicates the status of a channel with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the host channels interrupt bit in the core interrupt register (HCINT bit in OTG_GINTSTS) is set. Before the application can read this register, it must first read the host all channels interrupt (OTG_HAINT) register to get the exact channel number for the host channel-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the OTG_HAINT and OTG_GINTSTS registers.
    volatile uint32_t OTG_HCINTMSK4;       // [read-write] This register reflects the mask for each channel status described in the previous section.
    volatile uint32_t OTG_HCTSIZ4;         // [read-write] OTG host channel 4 transfer size register
    volatile uint32_t OTG_HCDMA4;          // [read-write] OTG host channel 4 DMA address register in buffer DMA [alternate]
    reserved_t<0x1> _0x59c;
    volatile uint32_t OTG_HCDMAB4;         // [read-only] OTG host channel-n DMA address buffer register
    volatile uint32_t OTG_HCCHAR5;         // [read-write] OTG host channel 5 characteristics register
    volatile uint32_t OTG_HCSPLT5;         // [read-write] OTG host channel 5 split control register
    volatile uint32_t OTG_HCINT5;          // [read-write] This register indicates the status of a channel with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the host channels interrupt bit in the core interrupt register (HCINT bit in OTG_GINTSTS) is set. Before the application can read this register, it must first read the host all channels interrupt (OTG_HAINT) register to get the exact channel number for the host channel-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the OTG_HAINT and OTG_GINTSTS registers.
    volatile uint32_t OTG_HCINTMSK5;       // [read-write] This register reflects the mask for each channel status described in the previous section.
    volatile uint32_t OTG_HCTSIZ5;         // [read-write] OTG host channel 5 transfer size register
    volatile uint32_t OTG_HCDMA5;          // [read-write] OTG host channel 5 DMA address register in buffer DMA [alternate]
    reserved_t<0x1> _0x5bc;
    volatile uint32_t OTG_HCDMAB5;         // [read-only] OTG host channel-n DMA address buffer register
    volatile uint32_t OTG_HCCHAR6;         // [read-write] OTG host channel 6 characteristics register
    volatile uint32_t OTG_HCSPLT6;         // [read-write] OTG host channel 6 split control register
    volatile uint32_t OTG_HCINT6;          // [read-write] This register indicates the status of a channel with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the host channels interrupt bit in the core interrupt register (HCINT bit in OTG_GINTSTS) is set. Before the application can read this register, it must first read the host all channels interrupt (OTG_HAINT) register to get the exact channel number for the host channel-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the OTG_HAINT and OTG_GINTSTS registers.
    volatile uint32_t OTG_HCINTMSK6;       // [read-write] This register reflects the mask for each channel status described in the previous section.
    volatile uint32_t OTG_HCTSIZ6;         // [read-write] OTG host channel 6 transfer size register
    volatile uint32_t OTG_HCDMA6;          // [read-write] OTG host channel 6 DMA address register in buffer DMA [alternate]
    reserved_t<0x1> _0x5dc;
    volatile uint32_t OTG_HCDMAB6;         // [read-only] OTG host channel-n DMA address buffer register
    volatile uint32_t OTG_HCCHAR7;         // [read-write] OTG host channel 7 characteristics register
    volatile uint32_t OTG_HCSPLT7;         // [read-write] OTG host channel 7 split control register
    volatile uint32_t OTG_HCINT7;          // [read-write] This register indicates the status of a channel with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the host channels interrupt bit in the core interrupt register (HCINT bit in OTG_GINTSTS) is set. Before the application can read this register, it must first read the host all channels interrupt (OTG_HAINT) register to get the exact channel number for the host channel-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the OTG_HAINT and OTG_GINTSTS registers.
    volatile uint32_t OTG_HCINTMSK7;       // [read-write] This register reflects the mask for each channel status described in the previous section.
    volatile uint32_t OTG_HCTSIZ7;         // [read-write] OTG host channel 7 transfer size register
    volatile uint32_t OTG_HCDMA7;          // [read-write] OTG host channel 7 DMA address register in buffer DMA [alternate]
    reserved_t<0x1> _0x5fc;
    volatile uint32_t OTG_HCDMAB7;         // [read-only] OTG host channel-n DMA address buffer register
    volatile uint32_t OTG_HCCHAR8;         // [read-write] OTG host channel 8 characteristics register
    volatile uint32_t OTG_HCSPLT8;         // [read-write] OTG host channel 8 split control register
    volatile uint32_t OTG_HCINT8;          // [read-write] This register indicates the status of a channel with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the host channels interrupt bit in the core interrupt register (HCINT bit in OTG_GINTSTS) is set. Before the application can read this register, it must first read the host all channels interrupt (OTG_HAINT) register to get the exact channel number for the host channel-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the OTG_HAINT and OTG_GINTSTS registers.
    volatile uint32_t OTG_HCINTMSK8;       // [read-write] This register reflects the mask for each channel status described in the previous section.
    volatile uint32_t OTG_HCTSIZ8;         // [read-write] OTG host channel 8 transfer size register
    volatile uint32_t OTG_HCDMA8;          // [read-write] OTG host channel 8 DMA address register in buffer DMA [alternate]
    reserved_t<0x1> _0x61c;
    volatile uint32_t OTG_HCDMAB8;         // [read-only] OTG host channel-n DMA address buffer register
    volatile uint32_t OTG_HCCHAR9;         // [read-write] OTG host channel 9 characteristics register
    volatile uint32_t OTG_HCSPLT9;         // [read-write] OTG host channel 9 split control register
    volatile uint32_t OTG_HCINT9;          // [read-write] This register indicates the status of a channel with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the host channels interrupt bit in the core interrupt register (HCINT bit in OTG_GINTSTS) is set. Before the application can read this register, it must first read the host all channels interrupt (OTG_HAINT) register to get the exact channel number for the host channel-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the OTG_HAINT and OTG_GINTSTS registers.
    volatile uint32_t OTG_HCINTMSK9;       // [read-write] This register reflects the mask for each channel status described in the previous section.
    volatile uint32_t OTG_HCTSIZ9;         // [read-write] OTG host channel 9 transfer size register
    volatile uint32_t OTG_HCDMA9;          // [read-write] OTG host channel 9 DMA address register in buffer DMA [alternate]
    reserved_t<0x1> _0x63c;
    volatile uint32_t OTG_HCDMAB9;         // [read-only] OTG host channel-n DMA address buffer register
    volatile uint32_t OTG_HCCHAR10;        // [read-write] OTG host channel 10 characteristics register
    volatile uint32_t OTG_HCSPLT10;        // [read-write] OTG host channel 10 split control register
    volatile uint32_t OTG_HCINT10;         // [read-write] This register indicates the status of a channel with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the host channels interrupt bit in the core interrupt register (HCINT bit in OTG_GINTSTS) is set. Before the application can read this register, it must first read the host all channels interrupt (OTG_HAINT) register to get the exact channel number for the host channel-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the OTG_HAINT and OTG_GINTSTS registers.
    volatile uint32_t OTG_HCINTMSK10;      // [read-write] This register reflects the mask for each channel status described in the previous section.
    volatile uint32_t OTG_HCTSIZ10;        // [read-write] OTG host channel 10 transfer size register
    volatile uint32_t OTG_HCDMA10;         // [read-write] OTG host channel 10 DMA address register in buffer DMA [alternate]
    reserved_t<0x1> _0x65c;
    volatile uint32_t OTG_HCDMAB10;        // [read-only] OTG host channel-n DMA address buffer register
    volatile uint32_t OTG_HCCHAR11;        // [read-write] OTG host channel 11 characteristics register
    volatile uint32_t OTG_HCSPLT11;        // [read-write] OTG host channel 11 split control register
    volatile uint32_t OTG_HCINT11;         // [read-write] This register indicates the status of a channel with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the host channels interrupt bit in the core interrupt register (HCINT bit in OTG_GINTSTS) is set. Before the application can read this register, it must first read the host all channels interrupt (OTG_HAINT) register to get the exact channel number for the host channel-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the OTG_HAINT and OTG_GINTSTS registers.
    volatile uint32_t OTG_HCINTMSK11;      // [read-write] This register reflects the mask for each channel status described in the previous section.
    volatile uint32_t OTG_HCTSIZ11;        // [read-write] OTG host channel 11 transfer size register
    volatile uint32_t OTG_HCDMA11;         // [read-write] OTG host channel 11 DMA address register in buffer DMA [alternate]
    reserved_t<0x1> _0x67c;
    volatile uint32_t OTG_HCDMAB11;        // [read-only] OTG host channel-n DMA address buffer register
    volatile uint32_t OTG_HCCHAR12;        // [read-write] OTG host channel 12 characteristics register
    volatile uint32_t OTG_HCSPLT12;        // [read-write] OTG host channel 12 split control register
    volatile uint32_t OTG_HCINT12;         // [read-write] This register indicates the status of a channel with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the host channels interrupt bit in the core interrupt register (HCINT bit in OTG_GINTSTS) is set. Before the application can read this register, it must first read the host all channels interrupt (OTG_HAINT) register to get the exact channel number for the host channel-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the OTG_HAINT and OTG_GINTSTS registers.
    volatile uint32_t OTG_HCINTMSK12;      // [read-write] This register reflects the mask for each channel status described in the previous section.
    volatile uint32_t OTG_HCTSIZ12;        // [read-write] OTG host channel 12 transfer size register
    volatile uint32_t OTG_HCDMA12;         // [read-write] OTG host channel 12 DMA address register in buffer DMA [alternate]
    reserved_t<0x1> _0x69c;
    volatile uint32_t OTG_HCDMAB12;        // [read-only] OTG host channel-n DMA address buffer register
    volatile uint32_t OTG_HCCHAR13;        // [read-write] OTG host channel 13 characteristics register
    volatile uint32_t OTG_HCSPLT13;        // [read-write] OTG host channel 13 split control register
    volatile uint32_t OTG_HCINT13;         // [read-write] This register indicates the status of a channel with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the host channels interrupt bit in the core interrupt register (HCINT bit in OTG_GINTSTS) is set. Before the application can read this register, it must first read the host all channels interrupt (OTG_HAINT) register to get the exact channel number for the host channel-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the OTG_HAINT and OTG_GINTSTS registers.
    volatile uint32_t OTG_HCINTMSK13;      // [read-write] This register reflects the mask for each channel status described in the previous section.
    volatile uint32_t OTG_HCTSIZ13;        // [read-write] OTG host channel 13 transfer size register
    volatile uint32_t OTG_HCDMA13;         // [read-write] OTG host channel 13 DMA address register in buffer DMA [alternate]
    reserved_t<0x1> _0x6bc;
    volatile uint32_t OTG_HCDMAB13;        // [read-only] OTG host channel-n DMA address buffer register
    volatile uint32_t OTG_HCCHAR14;        // [read-write] OTG host channel 14 characteristics register
    volatile uint32_t OTG_HCSPLT14;        // [read-write] OTG host channel 14 split control register
    volatile uint32_t OTG_HCINT14;         // [read-write] This register indicates the status of a channel with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the host channels interrupt bit in the core interrupt register (HCINT bit in OTG_GINTSTS) is set. Before the application can read this register, it must first read the host all channels interrupt (OTG_HAINT) register to get the exact channel number for the host channel-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the OTG_HAINT and OTG_GINTSTS registers.
    volatile uint32_t OTG_HCINTMSK14;      // [read-write] This register reflects the mask for each channel status described in the previous section.
    volatile uint32_t OTG_HCTSIZ14;        // [read-write] OTG host channel 14 transfer size register
    volatile uint32_t OTG_HCDMA14;         // [read-write] OTG host channel 14 DMA address register in buffer DMA [alternate]
    reserved_t<0x1> _0x6dc;
    volatile uint32_t OTG_HCDMAB14;        // [read-only] OTG host channel-n DMA address buffer register
    volatile uint32_t OTG_HCCHAR15;        // [read-write] OTG host channel 15 characteristics register
    volatile uint32_t OTG_HCSPLT15;        // [read-write] OTG host channel 15 split control register
    volatile uint32_t OTG_HCINT15;         // [read-write] This register indicates the status of a channel with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the host channels interrupt bit in the core interrupt register (HCINT bit in OTG_GINTSTS) is set. Before the application can read this register, it must first read the host all channels interrupt (OTG_HAINT) register to get the exact channel number for the host channel-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the OTG_HAINT and OTG_GINTSTS registers.
    volatile uint32_t OTG_HCINTMSK15;      // [read-write] This register reflects the mask for each channel status described in the previous section.
    volatile uint32_t OTG_HCTSIZ15;        // [read-write] OTG host channel 15 transfer size register
    volatile uint32_t OTG_HCDMA15;         // [read-write] OTG host channel 15 DMA address register in buffer DMA [alternate]
    reserved_t<0x1> _0x6fc;
    volatile uint32_t OTG_HCDMAB15;        // [read-only] OTG host channel-n DMA address buffer register
    reserved_t<0x40> _0x800;
    volatile uint32_t OTG_DCFG;            // [read-write] This register configures the core in device mode after power-on or after certain control commands or enumeration. Do not make changes to this register after initial programming.
    volatile uint32_t OTG_DCTL;            // OTG device control register
    volatile uint32_t OTG_DSTS;            // [read-only] This register indicates the status of the core with respect to USB-related events. It must be read on interrupts from the device all interrupts (OTG_DAINT) register.
    reserved_t<0x1> _0x810;
    volatile uint32_t OTG_DIEPMSK;         // [read-write] This register works with each of the OTG_DIEPINTx registers for all endpoints to generate an interrupt per IN endpoint. The IN endpoint interrupt for a specific status in the OTG_DIEPINTx register can be masked by writing to the corresponding bit in this register. Status bits are masked by default.
    volatile uint32_t OTG_DOEPMSK;         // [read-write] This register works with each of the OTG_DOEPINTx registers for all endpoints to generate an interrupt per OUT endpoint. The OUT endpoint interrupt for a specific status in the OTG_DOEPINTx register can be masked by writing into the corresponding bit in this register. Status bits are masked by default.
    volatile uint32_t OTG_DAINT;           // [read-only] When a significant event occurs on an endpoint, a OTG_DAINT register interrupts the application using the device OUT endpoints interrupt bit or device IN endpoints interrupt bit of the OTG_GINTSTS register (OEPINT or IEPINT in OTG_GINTSTS, respectively). There is one interrupt bit per endpoint, up to a maximum of 16 bits for OUT endpoints and 16 bits for IN endpoints. For a bidirectional endpoint, the corresponding IN and OUT interrupt bits are used. Bits in this register are set and cleared when the application sets and clears bits in the corresponding device endpoint-x interrupt register (OTG_DIEPINTx/OTG_DOEPINTx).
    volatile uint32_t OTG_DAINTMSK;        // [read-write] The OTG_DAINTMSK register works with the device endpoint interrupt register to interrupt the application when an event occurs on a device endpoint. However, the OTG_DAINT register bit corresponding to that interrupt is still set.
    reserved_t<0x2> _0x828;
    volatile uint32_t OTG_DVBUSDIS;        // [read-write] This register specifies the VBUS discharge time after VBUS pulsing during SRP.
    volatile uint32_t OTG_DVBUSPULSE;      // [read-write] This register specifies the VBUS pulsing time during SRP.
    volatile uint32_t OTG_DTHRCTL;         // [read-write] OTG device threshold control register
    volatile uint32_t OTG_DIEPEMPMSK;      // [read-write] This register is used to control the IN endpoint FIFO empty interrupt generation (TXFE_OTG_DIEPINTx).
    volatile uint32_t OTG_DEACHINT;        // [read-only] OTG device each endpoint interrupt register
    volatile uint32_t OTG_DEACHINTMSK;     // [read-write] There is one interrupt bit for endpoint 1 IN and one interrupt bit for endpoint 1 OUT.
    reserved_t<0x1> _0x844;
    volatile uint32_t OTG_HS_DIEPEACHMSK1; // [read-write] This register works with the OTG_DIEPINT1 register to generate a dedicated interrupt OTG_HS_EP1_IN for endpoint #1. The IN endpoint interrupt for a specific status in the OTG_DOEPINT1 register can be masked by writing into the corresponding bit in this register. Status bits are masked by default.
    reserved_t<0xf> _0x884;
    volatile uint32_t OTG_HS_DOEPEACHMSK1; // [read-write] This register works with the OTG_DOEPINT1 register to generate a dedicated interrupt OTG_HS_EP1_OUT for endpoint #1. The OUT endpoint interrupt for a specific status in the OTG_DOEPINT1 register can be masked by writing into the corresponding bit in this register. Status bits are masked by default.
    reserved_t<0x1e> _0x900;
    volatile uint32_t OTG_DIEPCTL0;        // The application uses this register to control the behavior of each logical endpoint other than endpoint 0.
    reserved_t<0x1> _0x908;
    volatile uint32_t OTG_DIEPINT0;        // This register indicates the status of an endpoint with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the IN endpoints interrupt bit of the core interrupt register (IEPINT in OTG_GINTSTS) is set. Before the application can read this register, it must first read the device all endpoints interrupt (OTG_DAINT) register to get the exact endpoint number for the device endpoint-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the OTG_DAINT and OTG_GINTSTS registers.
    reserved_t<0x1> _0x910;
    volatile uint32_t OTG_DIEPTSIZ0;       // [read-write] The application must modify this register before enabling endpoint 0.
    volatile uint32_t OTG_DIEPDMA0;        // [read-write] OTG device IN endpoint 0 DMA address register
    volatile uint32_t OTG_DTXFSTS0;        // [read-only] This read-only register contains the free space information for the device IN endpoint Tx FIFO.
    reserved_t<0x1> _0x920;
    volatile uint32_t OTG_DIEPCTL1;        // The application uses this register to control the behavior of each logical endpoint other than endpoint 0.
    reserved_t<0x1> _0x928;
    volatile uint32_t OTG_DIEPINT1;        // This register indicates the status of an endpoint with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the IN endpoints interrupt bit of the core interrupt register (IEPINT in OTG_GINTSTS) is set. Before the application can read this register, it must first read the device all endpoints interrupt (OTG_DAINT) register to get the exact endpoint number for the device endpoint-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the OTG_DAINT and OTG_GINTSTS registers.
    reserved_t<0x1> _0x930;
    volatile uint32_t OTG_DIEPTSIZ1;       // [read-write] The application must modify this register before enabling the endpoint. Once the endpoint is enabled using the endpoint enable bit in the OTG_DIEPCTLx registers (EPENA bit in OTG_DIEPCTLx), the core modifies this register. The application can only read this register once the core has cleared the endpoint enable bit.
    volatile uint32_t OTG_DIEPDMA1;        // [read-write] OTG device IN endpoint 1 DMA address register
    volatile uint32_t OTG_DTXFSTS1;        // [read-only] This read-only register contains the free space information for the device IN endpoint Tx FIFO.
    reserved_t<0x1> _0x940;
    volatile uint32_t OTG_DIEPCTL2;        // The application uses this register to control the behavior of each logical endpoint other than endpoint 0.
    reserved_t<0x1> _0x948;
    volatile uint32_t OTG_DIEPINT2;        // This register indicates the status of an endpoint with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the IN endpoints interrupt bit of the core interrupt register (IEPINT in OTG_GINTSTS) is set. Before the application can read this register, it must first read the device all endpoints interrupt (OTG_DAINT) register to get the exact endpoint number for the device endpoint-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the OTG_DAINT and OTG_GINTSTS registers.
    reserved_t<0x1> _0x950;
    volatile uint32_t OTG_DIEPTSIZ2;       // [read-write] The application must modify this register before enabling the endpoint. Once the endpoint is enabled using the endpoint enable bit in the OTG_DIEPCTLx registers (EPENA bit in OTG_DIEPCTLx), the core modifies this register. The application can only read this register once the core has cleared the endpoint enable bit.
    volatile uint32_t OTG_DIEPDMA2;        // [read-write] OTG device IN endpoint 2 DMA address register
    volatile uint32_t OTG_DTXFSTS2;        // [read-only] This read-only register contains the free space information for the device IN endpoint Tx FIFO.
    reserved_t<0x1> _0x960;
    volatile uint32_t OTG_DIEPCTL3;        // The application uses this register to control the behavior of each logical endpoint other than endpoint 0.
    reserved_t<0x1> _0x968;
    volatile uint32_t OTG_DIEPINT3;        // This register indicates the status of an endpoint with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the IN endpoints interrupt bit of the core interrupt register (IEPINT in OTG_GINTSTS) is set. Before the application can read this register, it must first read the device all endpoints interrupt (OTG_DAINT) register to get the exact endpoint number for the device endpoint-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the OTG_DAINT and OTG_GINTSTS registers.
    reserved_t<0x1> _0x970;
    volatile uint32_t OTG_DIEPTSIZ3;       // [read-write] The application must modify this register before enabling the endpoint. Once the endpoint is enabled using the endpoint enable bit in the OTG_DIEPCTLx registers (EPENA bit in OTG_DIEPCTLx), the core modifies this register. The application can only read this register once the core has cleared the endpoint enable bit.
    volatile uint32_t OTG_DIEPDMA3;        // [read-write] OTG device IN endpoint 3 DMA address register
    volatile uint32_t OTG_DTXFSTS3;        // [read-only] This read-only register contains the free space information for the device IN endpoint Tx FIFO.
    reserved_t<0x1> _0x980;
    volatile uint32_t OTG_DIEPCTL4;        // The application uses this register to control the behavior of each logical endpoint other than endpoint 0.
    reserved_t<0x1> _0x988;
    volatile uint32_t OTG_DIEPINT4;        // This register indicates the status of an endpoint with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the IN endpoints interrupt bit of the core interrupt register (IEPINT in OTG_GINTSTS) is set. Before the application can read this register, it must first read the device all endpoints interrupt (OTG_DAINT) register to get the exact endpoint number for the device endpoint-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the OTG_DAINT and OTG_GINTSTS registers.
    reserved_t<0x1> _0x990;
    volatile uint32_t OTG_DIEPTSIZ4;       // [read-write] The application must modify this register before enabling the endpoint. Once the endpoint is enabled using the endpoint enable bit in the OTG_DIEPCTLx registers (EPENA bit in OTG_DIEPCTLx), the core modifies this register. The application can only read this register once the core has cleared the endpoint enable bit.
    volatile uint32_t OTG_DIEPDMA4;        // [read-write] OTG device IN endpoint 4 DMA address register
    volatile uint32_t OTG_DTXFSTS4;        // [read-only] This read-only register contains the free space information for the device IN endpoint Tx FIFO.
    reserved_t<0x1> _0x9a0;
    volatile uint32_t OTG_DIEPCTL5;        // The application uses this register to control the behavior of each logical endpoint other than endpoint 0.
    reserved_t<0x1> _0x9a8;
    volatile uint32_t OTG_DIEPINT5;        // This register indicates the status of an endpoint with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the IN endpoints interrupt bit of the core interrupt register (IEPINT in OTG_GINTSTS) is set. Before the application can read this register, it must first read the device all endpoints interrupt (OTG_DAINT) register to get the exact endpoint number for the device endpoint-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the OTG_DAINT and OTG_GINTSTS registers.
    reserved_t<0x1> _0x9b0;
    volatile uint32_t OTG_DIEPTSIZ5;       // [read-write] The application must modify this register before enabling the endpoint. Once the endpoint is enabled using the endpoint enable bit in the OTG_DIEPCTLx registers (EPENA bit in OTG_DIEPCTLx), the core modifies this register. The application can only read this register once the core has cleared the endpoint enable bit.
    volatile uint32_t OTG_DIEPDMA5;        // [read-write] OTG device IN endpoint 5 DMA address register
    volatile uint32_t OTG_DTXFSTS5;        // [read-only] This read-only register contains the free space information for the device IN endpoint Tx FIFO.
    reserved_t<0x1> _0x9c0;
    volatile uint32_t OTG_DIEPCTL6;        // The application uses this register to control the behavior of each logical endpoint other than endpoint 0.
    reserved_t<0x1> _0x9c8;
    volatile uint32_t OTG_DIEPINT6;        // This register indicates the status of an endpoint with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the IN endpoints interrupt bit of the core interrupt register (IEPINT in OTG_GINTSTS) is set. Before the application can read this register, it must first read the device all endpoints interrupt (OTG_DAINT) register to get the exact endpoint number for the device endpoint-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the OTG_DAINT and OTG_GINTSTS registers.
    reserved_t<0x1> _0x9d0;
    volatile uint32_t OTG_DIEPTSIZ6;       // [read-write] The application must modify this register before enabling the endpoint. Once the endpoint is enabled using the endpoint enable bit in the OTG_DIEPCTLx registers (EPENA bit in OTG_DIEPCTLx), the core modifies this register. The application can only read this register once the core has cleared the endpoint enable bit.
    volatile uint32_t OTG_DIEPDMA6;        // [read-write] OTG device IN endpoint 6 DMA address register
    volatile uint32_t OTG_DTXFSTS6;        // [read-only] This read-only register contains the free space information for the device IN endpoint Tx FIFO.
    reserved_t<0x1> _0x9e0;
    volatile uint32_t OTG_DIEPCTL7;        // The application uses this register to control the behavior of each logical endpoint other than endpoint 0.
    reserved_t<0x1> _0x9e8;
    volatile uint32_t OTG_DIEPINT7;        // This register indicates the status of an endpoint with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the IN endpoints interrupt bit of the core interrupt register (IEPINT in OTG_GINTSTS) is set. Before the application can read this register, it must first read the device all endpoints interrupt (OTG_DAINT) register to get the exact endpoint number for the device endpoint-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the OTG_DAINT and OTG_GINTSTS registers.
    reserved_t<0x1> _0x9f0;
    volatile uint32_t OTG_DIEPTSIZ7;       // [read-write] The application must modify this register before enabling the endpoint. Once the endpoint is enabled using the endpoint enable bit in the OTG_DIEPCTLx registers (EPENA bit in OTG_DIEPCTLx), the core modifies this register. The application can only read this register once the core has cleared the endpoint enable bit.
    volatile uint32_t OTG_DIEPDMA7;        // [read-write] OTG device IN endpoint 7 DMA address register
    volatile uint32_t OTG_DTXFSTS7;        // [read-only] This read-only register contains the free space information for the device IN endpoint Tx FIFO.
    reserved_t<0x1> _0xa00;
    volatile uint32_t OTG_DIEPCTL8;        // The application uses this register to control the behavior of each logical endpoint other than endpoint 0.
    reserved_t<0x1> _0xa08;
    volatile uint32_t OTG_DIEPINT8;        // This register indicates the status of an endpoint with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the IN endpoints interrupt bit of the core interrupt register (IEPINT in OTG_GINTSTS) is set. Before the application can read this register, it must first read the device all endpoints interrupt (OTG_DAINT) register to get the exact endpoint number for the device endpoint-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the OTG_DAINT and OTG_GINTSTS registers.
    reserved_t<0x1> _0xa10;
    volatile uint32_t OTG_DIEPTSIZ8;       // [read-write] The application must modify this register before enabling the endpoint. Once the endpoint is enabled using the endpoint enable bit in the OTG_DIEPCTLx registers (EPENA bit in OTG_DIEPCTLx), the core modifies this register. The application can only read this register once the core has cleared the endpoint enable bit.
    volatile uint32_t OTG_DIEPDMA8;        // [read-write] OTG device IN endpoint 8 DMA address register
    volatile uint32_t OTG_DTXFSTS8;        // [read-only] This read-only register contains the free space information for the device IN endpoint Tx FIFO.
    reserved_t<0x39> _0xb00;
    volatile uint32_t OTG_DOEPCTL0;        // This section describes the OTG_DOEPCTL0 register.
    reserved_t<0x1> _0xb08;
    volatile uint32_t OTG_DOEPINT0;        // [read-write] This register indicates the status of an endpoint with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the OUT endpoints interrupt bit of the OTG_GINTSTS register (OEPINT bit in OTG_GINTSTS) is set. Before the application can read this register, it must first read the OTG_DAINT register to get the exact endpoint number for the OTG_DOEPINTx register. The application must clear the appropriate bit in this register to clear the corresponding bits in the OTG_DAINT and OTG_GINTSTS registers.
    reserved_t<0x1> _0xb10;
    volatile uint32_t OTG_DOEPTSIZ0;       // [read-write] The application must modify this register before enabling endpoint 0.
    volatile uint32_t OTG_DOEPDMA0;        // [read-write] OTG device OUT endpoint 0 DMA address register
    reserved_t<0x2> _0xb20;
    volatile uint32_t OTG_DOEPCTL1;        // The application uses this register to control the behavior of each logical endpoint other than endpoint 0.
    reserved_t<0x1> _0xb28;
    volatile uint32_t OTG_DOEPINT1;        // [read-write] This register indicates the status of an endpoint with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the OUT endpoints interrupt bit of the OTG_GINTSTS register (OEPINT bit in OTG_GINTSTS) is set. Before the application can read this register, it must first read the OTG_DAINT register to get the exact endpoint number for the OTG_DOEPINTx register. The application must clear the appropriate bit in this register to clear the corresponding bits in the OTG_DAINT and OTG_GINTSTS registers.
    reserved_t<0x1> _0xb30;
    volatile uint32_t OTG_DOEPTSIZ1;       // [read-write] The application must modify this register before enabling the endpoint. Once the endpoint is enabled using endpoint enable bit of the OTG_DOEPCTLx registers (EPENA bit in OTG_DOEPCTLx), the core modifies this register. The application can only read this register once the core has cleared the endpoint enable bit.
    volatile uint32_t OTG_DOEPDMA1;        // [read-write] OTG device OUT endpoint 1 DMA address register
    reserved_t<0x2> _0xb40;
    volatile uint32_t OTG_DOEPCTL2;        // The application uses this register to control the behavior of each logical endpoint other than endpoint 0.
    reserved_t<0x1> _0xb48;
    volatile uint32_t OTG_DOEPINT2;        // [read-write] This register indicates the status of an endpoint with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the OUT endpoints interrupt bit of the OTG_GINTSTS register (OEPINT bit in OTG_GINTSTS) is set. Before the application can read this register, it must first read the OTG_DAINT register to get the exact endpoint number for the OTG_DOEPINTx register. The application must clear the appropriate bit in this register to clear the corresponding bits in the OTG_DAINT and OTG_GINTSTS registers.
    reserved_t<0x1> _0xb50;
    volatile uint32_t OTG_DOEPTSIZ2;       // [read-write] The application must modify this register before enabling the endpoint. Once the endpoint is enabled using endpoint enable bit of the OTG_DOEPCTLx registers (EPENA bit in OTG_DOEPCTLx), the core modifies this register. The application can only read this register once the core has cleared the endpoint enable bit.
    volatile uint32_t OTG_DOEPDMA2;        // [read-write] OTG device OUT endpoint 2 DMA address register
    reserved_t<0x2> _0xb60;
    volatile uint32_t OTG_DOEPCTL3;        // The application uses this register to control the behavior of each logical endpoint other than endpoint 0.
    reserved_t<0x1> _0xb68;
    volatile uint32_t OTG_DOEPINT3;        // [read-write] This register indicates the status of an endpoint with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the OUT endpoints interrupt bit of the OTG_GINTSTS register (OEPINT bit in OTG_GINTSTS) is set. Before the application can read this register, it must first read the OTG_DAINT register to get the exact endpoint number for the OTG_DOEPINTx register. The application must clear the appropriate bit in this register to clear the corresponding bits in the OTG_DAINT and OTG_GINTSTS registers.
    reserved_t<0x1> _0xb70;
    volatile uint32_t OTG_DOEPTSIZ3;       // [read-write] The application must modify this register before enabling the endpoint. Once the endpoint is enabled using endpoint enable bit of the OTG_DOEPCTLx registers (EPENA bit in OTG_DOEPCTLx), the core modifies this register. The application can only read this register once the core has cleared the endpoint enable bit.
    volatile uint32_t OTG_DOEPDMA3;        // [read-write] OTG device OUT endpoint 3 DMA address register
    reserved_t<0x2> _0xb80;
    volatile uint32_t OTG_DOEPCTL4;        // The application uses this register to control the behavior of each logical endpoint other than endpoint 0.
    reserved_t<0x1> _0xb88;
    volatile uint32_t OTG_DOEPINT4;        // [read-write] This register indicates the status of an endpoint with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the OUT endpoints interrupt bit of the OTG_GINTSTS register (OEPINT bit in OTG_GINTSTS) is set. Before the application can read this register, it must first read the OTG_DAINT register to get the exact endpoint number for the OTG_DOEPINTx register. The application must clear the appropriate bit in this register to clear the corresponding bits in the OTG_DAINT and OTG_GINTSTS registers.
    reserved_t<0x1> _0xb90;
    volatile uint32_t OTG_DOEPTSIZ4;       // [read-write] The application must modify this register before enabling the endpoint. Once the endpoint is enabled using endpoint enable bit of the OTG_DOEPCTLx registers (EPENA bit in OTG_DOEPCTLx), the core modifies this register. The application can only read this register once the core has cleared the endpoint enable bit.
    volatile uint32_t OTG_DOEPDMA4;        // [read-write] OTG device OUT endpoint 4 DMA address register
    reserved_t<0x2> _0xba0;
    volatile uint32_t OTG_DOEPCTL5;        // The application uses this register to control the behavior of each logical endpoint other than endpoint 0.
    reserved_t<0x1> _0xba8;
    volatile uint32_t OTG_DOEPINT5;        // [read-write] This register indicates the status of an endpoint with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the OUT endpoints interrupt bit of the OTG_GINTSTS register (OEPINT bit in OTG_GINTSTS) is set. Before the application can read this register, it must first read the OTG_DAINT register to get the exact endpoint number for the OTG_DOEPINTx register. The application must clear the appropriate bit in this register to clear the corresponding bits in the OTG_DAINT and OTG_GINTSTS registers.
    reserved_t<0x1> _0xbb0;
    volatile uint32_t OTG_DOEPTSIZ5;       // [read-write] The application must modify this register before enabling the endpoint. Once the endpoint is enabled using endpoint enable bit of the OTG_DOEPCTLx registers (EPENA bit in OTG_DOEPCTLx), the core modifies this register. The application can only read this register once the core has cleared the endpoint enable bit.
    volatile uint32_t OTG_DOEPDMA5;        // [read-write] OTG device OUT endpoint 5 DMA address register
    reserved_t<0x2> _0xbc0;
    volatile uint32_t OTG_DOEPCTL6;        // The application uses this register to control the behavior of each logical endpoint other than endpoint 0.
    reserved_t<0x1> _0xbc8;
    volatile uint32_t OTG_DOEPINT6;        // [read-write] This register indicates the status of an endpoint with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the OUT endpoints interrupt bit of the OTG_GINTSTS register (OEPINT bit in OTG_GINTSTS) is set. Before the application can read this register, it must first read the OTG_DAINT register to get the exact endpoint number for the OTG_DOEPINTx register. The application must clear the appropriate bit in this register to clear the corresponding bits in the OTG_DAINT and OTG_GINTSTS registers.
    reserved_t<0x1> _0xbd0;
    volatile uint32_t OTG_DOEPTSIZ6;       // [read-write] The application must modify this register before enabling the endpoint. Once the endpoint is enabled using endpoint enable bit of the OTG_DOEPCTLx registers (EPENA bit in OTG_DOEPCTLx), the core modifies this register. The application can only read this register once the core has cleared the endpoint enable bit.
    volatile uint32_t OTG_DOEPDMA6;        // [read-write] OTG device OUT endpoint 6 DMA address register
    reserved_t<0x2> _0xbe0;
    volatile uint32_t OTG_DOEPCTL7;        // The application uses this register to control the behavior of each logical endpoint other than endpoint 0.
    reserved_t<0x1> _0xbe8;
    volatile uint32_t OTG_DOEPINT7;        // [read-write] This register indicates the status of an endpoint with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the OUT endpoints interrupt bit of the OTG_GINTSTS register (OEPINT bit in OTG_GINTSTS) is set. Before the application can read this register, it must first read the OTG_DAINT register to get the exact endpoint number for the OTG_DOEPINTx register. The application must clear the appropriate bit in this register to clear the corresponding bits in the OTG_DAINT and OTG_GINTSTS registers.
    reserved_t<0x1> _0xbf0;
    volatile uint32_t OTG_DOEPTSIZ7;       // [read-write] The application must modify this register before enabling the endpoint. Once the endpoint is enabled using endpoint enable bit of the OTG_DOEPCTLx registers (EPENA bit in OTG_DOEPCTLx), the core modifies this register. The application can only read this register once the core has cleared the endpoint enable bit.
    volatile uint32_t OTG_DOEPDMA7;        // [read-write] OTG device OUT endpoint 7 DMA address register
    reserved_t<0x2> _0xc00;
    volatile uint32_t OTG_DOEPCTL8;        // The application uses this register to control the behavior of each logical endpoint other than endpoint 0.
    reserved_t<0x1> _0xc08;
    volatile uint32_t OTG_DOEPINT8;        // [read-write] This register indicates the status of an endpoint with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the OUT endpoints interrupt bit of the OTG_GINTSTS register (OEPINT bit in OTG_GINTSTS) is set. Before the application can read this register, it must first read the OTG_DAINT register to get the exact endpoint number for the OTG_DOEPINTx register. The application must clear the appropriate bit in this register to clear the corresponding bits in the OTG_DAINT and OTG_GINTSTS registers.
    reserved_t<0x1> _0xc10;
    volatile uint32_t OTG_DOEPTSIZ8;       // [read-write] The application must modify this register before enabling the endpoint. Once the endpoint is enabled using endpoint enable bit of the OTG_DOEPCTLx registers (EPENA bit in OTG_DOEPCTLx), the core modifies this register. The application can only read this register once the core has cleared the endpoint enable bit.
    volatile uint32_t OTG_DOEPDMA8;        // [read-write] OTG device OUT endpoint 8 DMA address register
    reserved_t<0x7a> _0xe00;
    volatile uint32_t OTG_PCGCCTL;         // This register is available in host and device modes.

    static constexpr uint32_t OTG_GOTGCTL_RESET_VALUE = 0x10000;
    static constexpr uint32_t OTG_GOTGCTL_SRQSCS = 0x1;      // SRQSCS
    static constexpr uint32_t OTG_GOTGCTL_SRQ = 0x2;         // SRQ
    static constexpr uint32_t OTG_GOTGCTL_VBVALOEN = 0x4;    // VBVALOEN
    static constexpr uint32_t OTG_GOTGCTL_VBVALOVAL = 0x8;   // VBVALOVAL
    static constexpr uint32_t OTG_GOTGCTL_AVALOEN = 0x10;    // AVALOEN
    static constexpr uint32_t OTG_GOTGCTL_AVALOVAL = 0x20;   // AVALOVAL
    static constexpr uint32_t OTG_GOTGCTL_BVALOEN = 0x40;    // BVALOEN
    static constexpr uint32_t OTG_GOTGCTL_BVALOVAL = 0x80;   // BVALOVAL
    static constexpr uint32_t OTG_GOTGCTL_HNGSCS = 0x100;    // HNGSCS
    static constexpr uint32_t OTG_GOTGCTL_HNPRQ = 0x200;     // HNPRQ
    static constexpr uint32_t OTG_GOTGCTL_HSHNPEN = 0x400;   // HSHNPEN
    static constexpr uint32_t OTG_GOTGCTL_DHNPEN = 0x800;    // DHNPEN
    static constexpr uint32_t OTG_GOTGCTL_EHEN = 0x1000;     // EHEN
    static constexpr uint32_t OTG_GOTGCTL_CIDSTS = 0x10000;  // CIDSTS
    static constexpr uint32_t OTG_GOTGCTL_DBCT = 0x20000;    // DBCT
    static constexpr uint32_t OTG_GOTGCTL_ASVLD = 0x40000;   // ASVLD
    static constexpr uint32_t OTG_GOTGCTL_BSVLD = 0x80000;   // BSVLD
    static constexpr uint32_t OTG_GOTGCTL_OTGVER = 0x100000; // OTGVER
    static constexpr uint32_t OTG_GOTGCTL_CURMOD = 0x200000; // CURMOD

    static constexpr uint32_t OTG_GOTGINT_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_GOTGINT_SEDET = 0x4;       // SEDET
    static constexpr uint32_t OTG_GOTGINT_SRSSCHG = 0x100;   // SRSSCHG
    static constexpr uint32_t OTG_GOTGINT_HNSSCHG = 0x200;   // HNSSCHG
    static constexpr uint32_t OTG_GOTGINT_HNGDET = 0x20000;  // HNGDET
    static constexpr uint32_t OTG_GOTGINT_ADTOCHG = 0x40000; // ADTOCHG
    static constexpr uint32_t OTG_GOTGINT_DBCDNE = 0x80000;  // DBCDNE
    static constexpr uint32_t OTG_GOTGINT_IDCHNG = 0x100000; // IDCHNG

    static constexpr uint32_t OTG_GAHBCFG_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_GAHBCFG_GINTMSK = 0x1;    // GINTMSK
    template<uint32_t X>
    static constexpr uint32_t OTG_GAHBCFG_HBSTLEN =         // HBSTLEN
        bit_field_t<1, 0xf>::value<X>();
    static constexpr uint32_t OTG_GAHBCFG_DMAEN = 0x20;     // DMAEN
    static constexpr uint32_t OTG_GAHBCFG_TXFELVL = 0x80;   // TXFELVL
    static constexpr uint32_t OTG_GAHBCFG_PTXFELVL = 0x100; // PTXFELVL

    static constexpr uint32_t OTG_GUSBCFG_RESET_VALUE = 0x1400;
    template<uint32_t X>
    static constexpr uint32_t OTG_GUSBCFG_TOCAL =             // TOCAL
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t OTG_GUSBCFG_PHYSEL = 0x40;      // PHYSEL
    static constexpr uint32_t OTG_GUSBCFG_SRPCAP = 0x100;     // SRPCAP
    static constexpr uint32_t OTG_GUSBCFG_HNPCAP = 0x200;     // HNPCAP
    template<uint32_t X>
    static constexpr uint32_t OTG_GUSBCFG_TRDT =              // TRDT
        bit_field_t<10, 0xf>::value<X>();
    static constexpr uint32_t OTG_GUSBCFG_PHYLPC = 0x8000;    // PHYLPC
    static constexpr uint32_t OTG_GUSBCFG_TSDPS = 0x400000;   // TSDPS
    static constexpr uint32_t OTG_GUSBCFG_FHMOD = 0x20000000; // FHMOD
    static constexpr uint32_t OTG_GUSBCFG_FDMOD = 0x40000000; // FDMOD

    static constexpr uint32_t OTG_GRSTCTL_RESET_VALUE = 0x80000000;
    static constexpr uint32_t OTG_GRSTCTL_CSRST = 0x1;         // CSRST
    static constexpr uint32_t OTG_GRSTCTL_PSRST = 0x2;         // PSRST
    static constexpr uint32_t OTG_GRSTCTL_RXFFLSH = 0x10;      // RXFFLSH
    static constexpr uint32_t OTG_GRSTCTL_TXFFLSH = 0x20;      // TXFFLSH
    template<uint32_t X>
    static constexpr uint32_t OTG_GRSTCTL_TXFNUM =             // TXFNUM
        bit_field_t<6, 0x1f>::value<X>();
    static constexpr uint32_t OTG_GRSTCTL_DMAREQ = 0x40000000; // DMAREQ
    static constexpr uint32_t OTG_GRSTCTL_AHBIDL = 0x80000000; // AHBIDL

    static constexpr uint32_t OTG_GINTSTS_RESET_VALUE = 0x14000020;
    static constexpr uint32_t OTG_GINTSTS_CMOD = 0x1;           // CMOD
    static constexpr uint32_t OTG_GINTSTS_MMIS = 0x2;           // MMIS
    static constexpr uint32_t OTG_GINTSTS_OTGINT = 0x4;         // OTGINT
    static constexpr uint32_t OTG_GINTSTS_SOF = 0x8;            // SOF
    static constexpr uint32_t OTG_GINTSTS_RXFLVL = 0x10;        // RXFLVL
    static constexpr uint32_t OTG_GINTSTS_NPTXFE = 0x20;        // NPTXFE
    static constexpr uint32_t OTG_GINTSTS_GINAKEFF = 0x40;      // GINAKEFF
    static constexpr uint32_t OTG_GINTSTS_GONAKEFF = 0x80;      // GONAKEFF
    static constexpr uint32_t OTG_GINTSTS_ESUSP = 0x400;        // ESUSP
    static constexpr uint32_t OTG_GINTSTS_USBSUSP = 0x800;      // USBSUSP
    static constexpr uint32_t OTG_GINTSTS_USBRST = 0x1000;      // USBRST
    static constexpr uint32_t OTG_GINTSTS_ENUMDNE = 0x2000;     // ENUMDNE
    static constexpr uint32_t OTG_GINTSTS_ISOODRP = 0x4000;     // ISOODRP
    static constexpr uint32_t OTG_GINTSTS_EOPF = 0x8000;        // EOPF
    static constexpr uint32_t OTG_GINTSTS_IEPINT = 0x40000;     // IEPINT
    static constexpr uint32_t OTG_GINTSTS_OEPINT = 0x80000;     // OEPINT
    static constexpr uint32_t OTG_GINTSTS_IISOIXFR = 0x100000;  // IISOIXFR
    static constexpr uint32_t OTG_GINTSTS_IPXFR = 0x200000;     // IPXFR
    static constexpr uint32_t OTG_GINTSTS_DATAFSUSP = 0x400000; // DATAFSUSP
    static constexpr uint32_t OTG_GINTSTS_HPRTINT = 0x1000000;  // HPRTINT
    static constexpr uint32_t OTG_GINTSTS_HCINT = 0x2000000;    // HCINT
    static constexpr uint32_t OTG_GINTSTS_PTXFE = 0x4000000;    // PTXFE
    static constexpr uint32_t OTG_GINTSTS_CIDSCHG = 0x10000000; // CIDSCHG
    static constexpr uint32_t OTG_GINTSTS_DISCINT = 0x20000000; // DISCINT
    static constexpr uint32_t OTG_GINTSTS_SRQINT = 0x40000000;  // SRQINT
    static constexpr uint32_t OTG_GINTSTS_WKUPINT = 0x80000000; // WKUPINT

    static constexpr uint32_t OTG_GINTMSK_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_GINTMSK_MMISM = 0x2;           // MMISM
    static constexpr uint32_t OTG_GINTMSK_OTGINT = 0x4;          // OTGINT
    static constexpr uint32_t OTG_GINTMSK_SOFM = 0x8;            // SOFM
    static constexpr uint32_t OTG_GINTMSK_RXFLVLM = 0x10;        // RXFLVLM
    static constexpr uint32_t OTG_GINTMSK_NPTXFEM = 0x20;        // NPTXFEM
    static constexpr uint32_t OTG_GINTMSK_GINAKEFFM = 0x40;      // GINAKEFFM
    static constexpr uint32_t OTG_GINTMSK_GONAKEFFM = 0x80;      // GONAKEFFM
    static constexpr uint32_t OTG_GINTMSK_ESUSPM = 0x400;        // ESUSPM
    static constexpr uint32_t OTG_GINTMSK_USBSUSPM = 0x800;      // USBSUSPM
    static constexpr uint32_t OTG_GINTMSK_USBRST = 0x1000;       // USBRST
    static constexpr uint32_t OTG_GINTMSK_ENUMDNEM = 0x2000;     // ENUMDNEM
    static constexpr uint32_t OTG_GINTMSK_ISOODRPM = 0x4000;     // ISOODRPM
    static constexpr uint32_t OTG_GINTMSK_EOPFM = 0x8000;        // EOPFM
    static constexpr uint32_t OTG_GINTMSK_IEPINT = 0x40000;      // IEPINT
    static constexpr uint32_t OTG_GINTMSK_OEPINT = 0x80000;      // OEPINT
    static constexpr uint32_t OTG_GINTMSK_IISOIXFRM = 0x100000;  // IISOIXFRM
    static constexpr uint32_t OTG_GINTMSK_IPXFRM = 0x200000;     // IPXFRM
    static constexpr uint32_t OTG_GINTMSK_FSUSPM = 0x400000;     // FSUSPM
    static constexpr uint32_t OTG_GINTMSK_RSTDETM = 0x800000;    // RSTDETM
    static constexpr uint32_t OTG_GINTMSK_PRTIM = 0x1000000;     // PRTIM
    static constexpr uint32_t OTG_GINTMSK_HCIM = 0x2000000;      // HCIM
    static constexpr uint32_t OTG_GINTMSK_PTXFEM = 0x4000000;    // PTXFEM
    static constexpr uint32_t OTG_GINTMSK_LPMINTM = 0x8000000;   // LPMINTM
    static constexpr uint32_t OTG_GINTMSK_CIDSCHGM = 0x10000000; // CIDSCHGM
    static constexpr uint32_t OTG_GINTMSK_DISCINT = 0x20000000;  // DISCINT
    static constexpr uint32_t OTG_GINTMSK_SRQIM = 0x40000000;    // SRQIM
    static constexpr uint32_t OTG_GINTMSK_WUIM = 0x80000000;     // WUIM

    static constexpr uint32_t OTG_GRXSTSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_GRXSTSR_EPNUM =              // EPNUM
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_GRXSTSR_BCNT =               // BCNT
        bit_field_t<4, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_GRXSTSR_DPID =               // DPID
        bit_field_t<15, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_GRXSTSR_PKTSTS =             // PKTSTS
        bit_field_t<17, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_GRXSTSR_FRMNUM =             // FRMNUM
        bit_field_t<21, 0xf>::value<X>();
    static constexpr uint32_t OTG_GRXSTSR_STSPHST = 0x8000000; // STSPHST

    static constexpr uint32_t OTG_GRXSTSP_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_GRXSTSP_EPNUM =              // EPNUM
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_GRXSTSP_BCNT =               // BCNT
        bit_field_t<4, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_GRXSTSP_DPID =               // DPID
        bit_field_t<15, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_GRXSTSP_PKTSTS =             // PKTSTS
        bit_field_t<17, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_GRXSTSP_FRMNUM =             // FRMNUM
        bit_field_t<21, 0xf>::value<X>();
    static constexpr uint32_t OTG_GRXSTSP_STSPHST = 0x8000000; // STSPHST

    static constexpr uint32_t OTG_GRXFSIZ_RESET_VALUE = 0x400;
    template<uint32_t X>
    static constexpr uint32_t OTG_GRXFSIZ_RXFD =   // RXFD
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HNPTXFSIZ_RESET_VALUE = 0x2000200;
    template<uint32_t X>
    static constexpr uint32_t OTG_HNPTXFSIZ_NPTXFSA =   // NPTXFSA
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HNPTXFSIZ_NPTXFD =    // NPTXFD
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HNPTXSTS_RESET_VALUE = 0x80400;
    template<uint32_t X>
    static constexpr uint32_t OTG_HNPTXSTS_NPTXFSAV =   // NPTXFSAV
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HNPTXSTS_NPTQXSAV =   // NPTQXSAV
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HNPTXSTS_NPTXQTOP =   // NPTXQTOP
        bit_field_t<24, 0x7f>::value<X>();

    static constexpr uint32_t OTG_GCCFG_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_GCCFG_PDET = 0x2;       // PDET
    static constexpr uint32_t OTG_GCCFG_SDET = 0x4;       // SDET
    static constexpr uint32_t OTG_GCCFG_PS2DET = 0x8;     // PS2DET
    static constexpr uint32_t OTG_GCCFG_PWRDWN = 0x10000; // PWRDWN
    static constexpr uint32_t OTG_GCCFG_BCDEN = 0x20000;  // BCDEN
    static constexpr uint32_t OTG_GCCFG_PDEN = 0x80000;   // PDEN
    static constexpr uint32_t OTG_GCCFG_SDEN = 0x100000;  // SDEN
    static constexpr uint32_t OTG_GCCFG_VBDEN = 0x200000; // VBDEN
    static constexpr uint32_t OTG_GCCFG_IDEN = 0x400000;  // IDEN

    static constexpr uint32_t OTG_CID_RESET_VALUE = 0x4000;

    static constexpr uint32_t OTG_GLPMCFG_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_GLPMCFG_LPMEN = 0x1;         // LPMEN
    static constexpr uint32_t OTG_GLPMCFG_LPMACK = 0x2;        // LPMACK
    template<uint32_t X>
    static constexpr uint32_t OTG_GLPMCFG_BESL =               // BESL
        bit_field_t<2, 0xf>::value<X>();
    static constexpr uint32_t OTG_GLPMCFG_REMWAKE = 0x40;      // REMWAKE
    static constexpr uint32_t OTG_GLPMCFG_L1SSEN = 0x80;       // L1SSEN
    template<uint32_t X>
    static constexpr uint32_t OTG_GLPMCFG_BESLTHRS =           // BESLTHRS
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t OTG_GLPMCFG_L1DSEN = 0x1000;     // L1DSEN
    template<uint32_t X>
    static constexpr uint32_t OTG_GLPMCFG_LPMRSP =             // LPMRSP
        bit_field_t<13, 0x3>::value<X>();
    static constexpr uint32_t OTG_GLPMCFG_SLPSTS = 0x8000;     // SLPSTS
    static constexpr uint32_t OTG_GLPMCFG_L1RSMOK = 0x10000;   // L1RSMOK
    template<uint32_t X>
    static constexpr uint32_t OTG_GLPMCFG_LPMCHIDX =           // LPMCHIDX
        bit_field_t<17, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_GLPMCFG_LPMRCNT =            // LPMRCNT
        bit_field_t<21, 0x7>::value<X>();
    static constexpr uint32_t OTG_GLPMCFG_SNDLPM = 0x1000000;  // SNDLPM
    template<uint32_t X>
    static constexpr uint32_t OTG_GLPMCFG_LPMRCNTSTS =         // LPMRCNTSTS
        bit_field_t<25, 0x7>::value<X>();
    static constexpr uint32_t OTG_GLPMCFG_ENBESL = 0x10000000; // ENBESL

    static constexpr uint32_t OTG_HPTXFSIZ_RESET_VALUE = 0x2000400;
    template<uint32_t X>
    static constexpr uint32_t OTG_HPTXFSIZ_PTXSA =     // PTXSA
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HPTXFSIZ_PTXFSIZ =   // PTXFSIZ
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t OTG_DIEPTXF1_RESET_VALUE = 0x2000400;
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTXF1_INEPTXSA =   // INEPTXSA
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTXF1_INEPTXFD =   // INEPTXFD
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t OTG_DIEPTXF2_RESET_VALUE = 0x2000400;
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTXF2_INEPTXSA =   // INEPTXSA
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTXF2_INEPTXFD =   // INEPTXFD
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t OTG_DIEPTXF3_RESET_VALUE = 0x2000400;
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTXF3_INEPTXSA =   // INEPTXSA
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTXF3_INEPTXFD =   // INEPTXFD
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t OTG_DIEPTXF4_RESET_VALUE = 0x2000400;
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTXF4_INEPTXSA =   // INEPTXSA
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTXF4_INEPTXFD =   // INEPTXFD
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t OTG_DIEPTXF5_RESET_VALUE = 0x2000400;
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTXF5_INEPTXSA =   // INEPTXSA
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTXF5_INEPTXFD =   // INEPTXFD
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t OTG_DIEPTXF6_RESET_VALUE = 0x2000400;
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTXF6_INEPTXSA =   // INEPTXSA
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTXF6_INEPTXFD =   // INEPTXFD
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t OTG_DIEPTXF7_RESET_VALUE = 0x2000400;
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTXF7_INEPTXSA =   // INEPTXSA
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTXF7_INEPTXFD =   // INEPTXFD
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t OTG_DIEPTXF8_RESET_VALUE = 0x2000400;
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTXF8_INEPTXSA =   // INEPTXSA
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTXF8_INEPTXFD =   // INEPTXFD
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HCFG_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCFG_FSLSPCS =                 // FSLSPCS
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t OTG_HCFG_FSLSS = 0x4;              // FSLSS
    static constexpr uint32_t OTG_HCFG_DESCDMA = 0x800000;       // DESCDMA
    template<uint32_t X>
    static constexpr uint32_t OTG_HCFG_FRLSTEN =                 // FRLSTEN
        bit_field_t<24, 0x3>::value<X>();
    static constexpr uint32_t OTG_HCFG_PERSSCHEDENA = 0x4000000; // PERSSCHEDENA

    static constexpr uint32_t OTG_HFIR_RESET_VALUE = 0xea60;
    template<uint32_t X>
    static constexpr uint32_t OTG_HFIR_FRIVL =            // FRIVL
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t OTG_HFIR_RLDCTRL = 0x10000; // RLDCTRL

    static constexpr uint32_t OTG_HFNUM_RESET_VALUE = 0x3fff;
    template<uint32_t X>
    static constexpr uint32_t OTG_HFNUM_FRNUM =   // FRNUM
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HFNUM_FTREM =   // FTREM
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HPTXSTS_RESET_VALUE = 0x80100;
    template<uint32_t X>
    static constexpr uint32_t OTG_HPTXSTS_PTXFSAVL =   // PTXFSAVL
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HPTXSTS_PTXQSAV =    // PTXQSAV
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HPTXSTS_PTXQTOP =    // PTXQTOP
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t OTG_HAINT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HAINT_HAINT =   // HAINT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HAINTMSK_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HAINTMSK_HAINTM =   // HAINTM
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OTG_HFLBADDR_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HPRT_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HPRT_PCSTS = 0x1;    // PCSTS
    static constexpr uint32_t OTG_HPRT_PCDET = 0x2;    // PCDET
    static constexpr uint32_t OTG_HPRT_PENA = 0x4;     // PENA
    static constexpr uint32_t OTG_HPRT_PENCHNG = 0x8;  // PENCHNG
    static constexpr uint32_t OTG_HPRT_POCA = 0x10;    // POCA
    static constexpr uint32_t OTG_HPRT_POCCHNG = 0x20; // POCCHNG
    static constexpr uint32_t OTG_HPRT_PRES = 0x40;    // PRES
    static constexpr uint32_t OTG_HPRT_PSUSP = 0x80;   // PSUSP
    static constexpr uint32_t OTG_HPRT_PRST = 0x100;   // PRST
    template<uint32_t X>
    static constexpr uint32_t OTG_HPRT_PLSTS =         // PLSTS
        bit_field_t<10, 0x3>::value<X>();
    static constexpr uint32_t OTG_HPRT_PPWR = 0x1000;  // PPWR
    template<uint32_t X>
    static constexpr uint32_t OTG_HPRT_PTCTL =         // PTCTL
        bit_field_t<13, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HPRT_PSPD =          // PSPD
        bit_field_t<17, 0x3>::value<X>();

    static constexpr uint32_t OTG_HCCHAR0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR0_MPSIZ =             // MPSIZ
        bit_field_t<0, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR0_EPNUM =             // EPNUM
        bit_field_t<11, 0xf>::value<X>();
    static constexpr uint32_t OTG_HCCHAR0_EPDIR = 0x8000;     // EPDIR
    static constexpr uint32_t OTG_HCCHAR0_LSDEV = 0x20000;    // LSDEV
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR0_EPTYP =             // EPTYP
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR0_MCNT =              // MCNT
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR0_DAD =               // DAD
        bit_field_t<22, 0x7f>::value<X>();
    static constexpr uint32_t OTG_HCCHAR0_CHDIS = 0x40000000; // CHDIS
    static constexpr uint32_t OTG_HCCHAR0_CHENA = 0x80000000; // CHENA

    static constexpr uint32_t OTG_HCSPLT0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT0_PRTADDR =             // PRTADDR
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT0_HUBADDR =             // HUBADDR
        bit_field_t<7, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT0_XACTPOS =             // XACTPOS
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t OTG_HCSPLT0_COMPLSPLT = 0x10000;  // COMPLSPLT
    static constexpr uint32_t OTG_HCSPLT0_SPLITEN = 0x80000000; // SPLITEN

    static constexpr uint32_t OTG_HCINT0_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HCINT0_XFRC = 0x1;           // XFRC
    static constexpr uint32_t OTG_HCINT0_CHH = 0x2;            // CHH
    static constexpr uint32_t OTG_HCINT0_AHBERR = 0x4;         // AHBERR
    static constexpr uint32_t OTG_HCINT0_STALL = 0x8;          // STALL
    static constexpr uint32_t OTG_HCINT0_NAK = 0x10;           // NAK
    static constexpr uint32_t OTG_HCINT0_ACK = 0x20;           // ACK
    static constexpr uint32_t OTG_HCINT0_NYET = 0x40;          // NYET
    static constexpr uint32_t OTG_HCINT0_TXERR = 0x80;         // TXERR
    static constexpr uint32_t OTG_HCINT0_BBERR = 0x100;        // BBERR
    static constexpr uint32_t OTG_HCINT0_FRMOR = 0x200;        // FRMOR
    static constexpr uint32_t OTG_HCINT0_DTERR = 0x400;        // DTERR
    static constexpr uint32_t OTG_HCINT0_BNA = 0x800;          // BNA
    static constexpr uint32_t OTG_HCINT0_XCSXACTERR = 0x1000;  // XCSXACTERR
    static constexpr uint32_t OTG_HCINT0_DESCLSTROLL = 0x2000; // DESCLSTROLL

    static constexpr uint32_t OTG_HCINTMSK0_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HCINTMSK0_XFRCM = 0x1;             // XFRCM
    static constexpr uint32_t OTG_HCINTMSK0_CHHM = 0x2;              // CHHM
    static constexpr uint32_t OTG_HCINTMSK0_AHBERRM = 0x4;           // AHBERRM
    static constexpr uint32_t OTG_HCINTMSK0_STALLM = 0x8;            // STALLM
    static constexpr uint32_t OTG_HCINTMSK0_NAKM = 0x10;             // NAKM
    static constexpr uint32_t OTG_HCINTMSK0_ACKM = 0x20;             // ACKM
    static constexpr uint32_t OTG_HCINTMSK0_NYET = 0x40;             // NYET
    static constexpr uint32_t OTG_HCINTMSK0_TXERRM = 0x80;           // TXERRM
    static constexpr uint32_t OTG_HCINTMSK0_BBERRM = 0x100;          // BBERRM
    static constexpr uint32_t OTG_HCINTMSK0_FRMORM = 0x200;          // FRMORM
    static constexpr uint32_t OTG_HCINTMSK0_DTERRM = 0x400;          // DTERRM
    static constexpr uint32_t OTG_HCINTMSK0_BNAMSK = 0x800;          // BNAMSK
    static constexpr uint32_t OTG_HCINTMSK0_DESCLSTROLLMSK = 0x2000; // DESCLSTROLLMSK

    static constexpr uint32_t OTG_HCTSIZ0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ0_XFRSIZ =   // XFRSIZ
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ0_PKTCNT =   // PKTCNT
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ0_DPID =     // DPID
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HCDMA0_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HCDMAB0_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HCCHAR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR1_MPSIZ =             // MPSIZ
        bit_field_t<0, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR1_EPNUM =             // EPNUM
        bit_field_t<11, 0xf>::value<X>();
    static constexpr uint32_t OTG_HCCHAR1_EPDIR = 0x8000;     // EPDIR
    static constexpr uint32_t OTG_HCCHAR1_LSDEV = 0x20000;    // LSDEV
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR1_EPTYP =             // EPTYP
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR1_MCNT =              // MCNT
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR1_DAD =               // DAD
        bit_field_t<22, 0x7f>::value<X>();
    static constexpr uint32_t OTG_HCCHAR1_CHDIS = 0x40000000; // CHDIS
    static constexpr uint32_t OTG_HCCHAR1_CHENA = 0x80000000; // CHENA

    static constexpr uint32_t OTG_HCSPLT1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT1_PRTADDR =             // PRTADDR
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT1_HUBADDR =             // HUBADDR
        bit_field_t<7, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT1_XACTPOS =             // XACTPOS
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t OTG_HCSPLT1_COMPLSPLT = 0x10000;  // COMPLSPLT
    static constexpr uint32_t OTG_HCSPLT1_SPLITEN = 0x80000000; // SPLITEN

    static constexpr uint32_t OTG_HCINT1_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HCINT1_XFRC = 0x1;           // XFRC
    static constexpr uint32_t OTG_HCINT1_CHH = 0x2;            // CHH
    static constexpr uint32_t OTG_HCINT1_AHBERR = 0x4;         // AHBERR
    static constexpr uint32_t OTG_HCINT1_STALL = 0x8;          // STALL
    static constexpr uint32_t OTG_HCINT1_NAK = 0x10;           // NAK
    static constexpr uint32_t OTG_HCINT1_ACK = 0x20;           // ACK
    static constexpr uint32_t OTG_HCINT1_NYET = 0x40;          // NYET
    static constexpr uint32_t OTG_HCINT1_TXERR = 0x80;         // TXERR
    static constexpr uint32_t OTG_HCINT1_BBERR = 0x100;        // BBERR
    static constexpr uint32_t OTG_HCINT1_FRMOR = 0x200;        // FRMOR
    static constexpr uint32_t OTG_HCINT1_DTERR = 0x400;        // DTERR
    static constexpr uint32_t OTG_HCINT1_BNA = 0x800;          // BNA
    static constexpr uint32_t OTG_HCINT1_XCSXACTERR = 0x1000;  // XCSXACTERR
    static constexpr uint32_t OTG_HCINT1_DESCLSTROLL = 0x2000; // DESCLSTROLL

    static constexpr uint32_t OTG_HCINTMSK1_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HCINTMSK1_XFRCM = 0x1;             // XFRCM
    static constexpr uint32_t OTG_HCINTMSK1_CHHM = 0x2;              // CHHM
    static constexpr uint32_t OTG_HCINTMSK1_AHBERRM = 0x4;           // AHBERRM
    static constexpr uint32_t OTG_HCINTMSK1_STALLM = 0x8;            // STALLM
    static constexpr uint32_t OTG_HCINTMSK1_NAKM = 0x10;             // NAKM
    static constexpr uint32_t OTG_HCINTMSK1_ACKM = 0x20;             // ACKM
    static constexpr uint32_t OTG_HCINTMSK1_NYET = 0x40;             // NYET
    static constexpr uint32_t OTG_HCINTMSK1_TXERRM = 0x80;           // TXERRM
    static constexpr uint32_t OTG_HCINTMSK1_BBERRM = 0x100;          // BBERRM
    static constexpr uint32_t OTG_HCINTMSK1_FRMORM = 0x200;          // FRMORM
    static constexpr uint32_t OTG_HCINTMSK1_DTERRM = 0x400;          // DTERRM
    static constexpr uint32_t OTG_HCINTMSK1_BNAMSK = 0x800;          // BNAMSK
    static constexpr uint32_t OTG_HCINTMSK1_DESCLSTROLLMSK = 0x2000; // DESCLSTROLLMSK

    static constexpr uint32_t OTG_HCTSIZ1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ1_XFRSIZ =   // XFRSIZ
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ1_PKTCNT =   // PKTCNT
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ1_DPID =     // DPID
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HCDMA1_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HCDMAB1_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HCCHAR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR2_MPSIZ =             // MPSIZ
        bit_field_t<0, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR2_EPNUM =             // EPNUM
        bit_field_t<11, 0xf>::value<X>();
    static constexpr uint32_t OTG_HCCHAR2_EPDIR = 0x8000;     // EPDIR
    static constexpr uint32_t OTG_HCCHAR2_LSDEV = 0x20000;    // LSDEV
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR2_EPTYP =             // EPTYP
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR2_MCNT =              // MCNT
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR2_DAD =               // DAD
        bit_field_t<22, 0x7f>::value<X>();
    static constexpr uint32_t OTG_HCCHAR2_CHDIS = 0x40000000; // CHDIS
    static constexpr uint32_t OTG_HCCHAR2_CHENA = 0x80000000; // CHENA

    static constexpr uint32_t OTG_HCSPLT2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT2_PRTADDR =             // PRTADDR
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT2_HUBADDR =             // HUBADDR
        bit_field_t<7, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT2_XACTPOS =             // XACTPOS
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t OTG_HCSPLT2_COMPLSPLT = 0x10000;  // COMPLSPLT
    static constexpr uint32_t OTG_HCSPLT2_SPLITEN = 0x80000000; // SPLITEN

    static constexpr uint32_t OTG_HCINT2_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HCINT2_XFRC = 0x1;           // XFRC
    static constexpr uint32_t OTG_HCINT2_CHH = 0x2;            // CHH
    static constexpr uint32_t OTG_HCINT2_AHBERR = 0x4;         // AHBERR
    static constexpr uint32_t OTG_HCINT2_STALL = 0x8;          // STALL
    static constexpr uint32_t OTG_HCINT2_NAK = 0x10;           // NAK
    static constexpr uint32_t OTG_HCINT2_ACK = 0x20;           // ACK
    static constexpr uint32_t OTG_HCINT2_NYET = 0x40;          // NYET
    static constexpr uint32_t OTG_HCINT2_TXERR = 0x80;         // TXERR
    static constexpr uint32_t OTG_HCINT2_BBERR = 0x100;        // BBERR
    static constexpr uint32_t OTG_HCINT2_FRMOR = 0x200;        // FRMOR
    static constexpr uint32_t OTG_HCINT2_DTERR = 0x400;        // DTERR
    static constexpr uint32_t OTG_HCINT2_BNA = 0x800;          // BNA
    static constexpr uint32_t OTG_HCINT2_XCSXACTERR = 0x1000;  // XCSXACTERR
    static constexpr uint32_t OTG_HCINT2_DESCLSTROLL = 0x2000; // DESCLSTROLL

    static constexpr uint32_t OTG_HCINTMSK2_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HCINTMSK2_XFRCM = 0x1;             // XFRCM
    static constexpr uint32_t OTG_HCINTMSK2_CHHM = 0x2;              // CHHM
    static constexpr uint32_t OTG_HCINTMSK2_AHBERRM = 0x4;           // AHBERRM
    static constexpr uint32_t OTG_HCINTMSK2_STALLM = 0x8;            // STALLM
    static constexpr uint32_t OTG_HCINTMSK2_NAKM = 0x10;             // NAKM
    static constexpr uint32_t OTG_HCINTMSK2_ACKM = 0x20;             // ACKM
    static constexpr uint32_t OTG_HCINTMSK2_NYET = 0x40;             // NYET
    static constexpr uint32_t OTG_HCINTMSK2_TXERRM = 0x80;           // TXERRM
    static constexpr uint32_t OTG_HCINTMSK2_BBERRM = 0x100;          // BBERRM
    static constexpr uint32_t OTG_HCINTMSK2_FRMORM = 0x200;          // FRMORM
    static constexpr uint32_t OTG_HCINTMSK2_DTERRM = 0x400;          // DTERRM
    static constexpr uint32_t OTG_HCINTMSK2_BNAMSK = 0x800;          // BNAMSK
    static constexpr uint32_t OTG_HCINTMSK2_DESCLSTROLLMSK = 0x2000; // DESCLSTROLLMSK

    static constexpr uint32_t OTG_HCTSIZ2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ2_XFRSIZ =   // XFRSIZ
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ2_PKTCNT =   // PKTCNT
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ2_DPID =     // DPID
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HCDMA2_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HCDMAB2_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HCCHAR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR3_MPSIZ =             // MPSIZ
        bit_field_t<0, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR3_EPNUM =             // EPNUM
        bit_field_t<11, 0xf>::value<X>();
    static constexpr uint32_t OTG_HCCHAR3_EPDIR = 0x8000;     // EPDIR
    static constexpr uint32_t OTG_HCCHAR3_LSDEV = 0x20000;    // LSDEV
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR3_EPTYP =             // EPTYP
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR3_MCNT =              // MCNT
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR3_DAD =               // DAD
        bit_field_t<22, 0x7f>::value<X>();
    static constexpr uint32_t OTG_HCCHAR3_CHDIS = 0x40000000; // CHDIS
    static constexpr uint32_t OTG_HCCHAR3_CHENA = 0x80000000; // CHENA

    static constexpr uint32_t OTG_HCSPLT3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT3_PRTADDR =             // PRTADDR
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT3_HUBADDR =             // HUBADDR
        bit_field_t<7, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT3_XACTPOS =             // XACTPOS
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t OTG_HCSPLT3_COMPLSPLT = 0x10000;  // COMPLSPLT
    static constexpr uint32_t OTG_HCSPLT3_SPLITEN = 0x80000000; // SPLITEN

    static constexpr uint32_t OTG_HCINT3_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HCINT3_XFRC = 0x1;           // XFRC
    static constexpr uint32_t OTG_HCINT3_CHH = 0x2;            // CHH
    static constexpr uint32_t OTG_HCINT3_AHBERR = 0x4;         // AHBERR
    static constexpr uint32_t OTG_HCINT3_STALL = 0x8;          // STALL
    static constexpr uint32_t OTG_HCINT3_NAK = 0x10;           // NAK
    static constexpr uint32_t OTG_HCINT3_ACK = 0x20;           // ACK
    static constexpr uint32_t OTG_HCINT3_NYET = 0x40;          // NYET
    static constexpr uint32_t OTG_HCINT3_TXERR = 0x80;         // TXERR
    static constexpr uint32_t OTG_HCINT3_BBERR = 0x100;        // BBERR
    static constexpr uint32_t OTG_HCINT3_FRMOR = 0x200;        // FRMOR
    static constexpr uint32_t OTG_HCINT3_DTERR = 0x400;        // DTERR
    static constexpr uint32_t OTG_HCINT3_BNA = 0x800;          // BNA
    static constexpr uint32_t OTG_HCINT3_XCSXACTERR = 0x1000;  // XCSXACTERR
    static constexpr uint32_t OTG_HCINT3_DESCLSTROLL = 0x2000; // DESCLSTROLL

    static constexpr uint32_t OTG_HCINTMSK3_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HCINTMSK3_XFRCM = 0x1;             // XFRCM
    static constexpr uint32_t OTG_HCINTMSK3_CHHM = 0x2;              // CHHM
    static constexpr uint32_t OTG_HCINTMSK3_AHBERRM = 0x4;           // AHBERRM
    static constexpr uint32_t OTG_HCINTMSK3_STALLM = 0x8;            // STALLM
    static constexpr uint32_t OTG_HCINTMSK3_NAKM = 0x10;             // NAKM
    static constexpr uint32_t OTG_HCINTMSK3_ACKM = 0x20;             // ACKM
    static constexpr uint32_t OTG_HCINTMSK3_NYET = 0x40;             // NYET
    static constexpr uint32_t OTG_HCINTMSK3_TXERRM = 0x80;           // TXERRM
    static constexpr uint32_t OTG_HCINTMSK3_BBERRM = 0x100;          // BBERRM
    static constexpr uint32_t OTG_HCINTMSK3_FRMORM = 0x200;          // FRMORM
    static constexpr uint32_t OTG_HCINTMSK3_DTERRM = 0x400;          // DTERRM
    static constexpr uint32_t OTG_HCINTMSK3_BNAMSK = 0x800;          // BNAMSK
    static constexpr uint32_t OTG_HCINTMSK3_DESCLSTROLLMSK = 0x2000; // DESCLSTROLLMSK

    static constexpr uint32_t OTG_HCTSIZ3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ3_XFRSIZ =   // XFRSIZ
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ3_PKTCNT =   // PKTCNT
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ3_DPID =     // DPID
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HCDMA3_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HCDMAB3_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HCCHAR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR4_MPSIZ =             // MPSIZ
        bit_field_t<0, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR4_EPNUM =             // EPNUM
        bit_field_t<11, 0xf>::value<X>();
    static constexpr uint32_t OTG_HCCHAR4_EPDIR = 0x8000;     // EPDIR
    static constexpr uint32_t OTG_HCCHAR4_LSDEV = 0x20000;    // LSDEV
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR4_EPTYP =             // EPTYP
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR4_MCNT =              // MCNT
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR4_DAD =               // DAD
        bit_field_t<22, 0x7f>::value<X>();
    static constexpr uint32_t OTG_HCCHAR4_CHDIS = 0x40000000; // CHDIS
    static constexpr uint32_t OTG_HCCHAR4_CHENA = 0x80000000; // CHENA

    static constexpr uint32_t OTG_HCSPLT4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT4_PRTADDR =             // PRTADDR
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT4_HUBADDR =             // HUBADDR
        bit_field_t<7, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT4_XACTPOS =             // XACTPOS
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t OTG_HCSPLT4_COMPLSPLT = 0x10000;  // COMPLSPLT
    static constexpr uint32_t OTG_HCSPLT4_SPLITEN = 0x80000000; // SPLITEN

    static constexpr uint32_t OTG_HCINT4_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HCINT4_XFRC = 0x1;           // XFRC
    static constexpr uint32_t OTG_HCINT4_CHH = 0x2;            // CHH
    static constexpr uint32_t OTG_HCINT4_AHBERR = 0x4;         // AHBERR
    static constexpr uint32_t OTG_HCINT4_STALL = 0x8;          // STALL
    static constexpr uint32_t OTG_HCINT4_NAK = 0x10;           // NAK
    static constexpr uint32_t OTG_HCINT4_ACK = 0x20;           // ACK
    static constexpr uint32_t OTG_HCINT4_NYET = 0x40;          // NYET
    static constexpr uint32_t OTG_HCINT4_TXERR = 0x80;         // TXERR
    static constexpr uint32_t OTG_HCINT4_BBERR = 0x100;        // BBERR
    static constexpr uint32_t OTG_HCINT4_FRMOR = 0x200;        // FRMOR
    static constexpr uint32_t OTG_HCINT4_DTERR = 0x400;        // DTERR
    static constexpr uint32_t OTG_HCINT4_BNA = 0x800;          // BNA
    static constexpr uint32_t OTG_HCINT4_XCSXACTERR = 0x1000;  // XCSXACTERR
    static constexpr uint32_t OTG_HCINT4_DESCLSTROLL = 0x2000; // DESCLSTROLL

    static constexpr uint32_t OTG_HCINTMSK4_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HCINTMSK4_XFRCM = 0x1;             // XFRCM
    static constexpr uint32_t OTG_HCINTMSK4_CHHM = 0x2;              // CHHM
    static constexpr uint32_t OTG_HCINTMSK4_AHBERRM = 0x4;           // AHBERRM
    static constexpr uint32_t OTG_HCINTMSK4_STALLM = 0x8;            // STALLM
    static constexpr uint32_t OTG_HCINTMSK4_NAKM = 0x10;             // NAKM
    static constexpr uint32_t OTG_HCINTMSK4_ACKM = 0x20;             // ACKM
    static constexpr uint32_t OTG_HCINTMSK4_NYET = 0x40;             // NYET
    static constexpr uint32_t OTG_HCINTMSK4_TXERRM = 0x80;           // TXERRM
    static constexpr uint32_t OTG_HCINTMSK4_BBERRM = 0x100;          // BBERRM
    static constexpr uint32_t OTG_HCINTMSK4_FRMORM = 0x200;          // FRMORM
    static constexpr uint32_t OTG_HCINTMSK4_DTERRM = 0x400;          // DTERRM
    static constexpr uint32_t OTG_HCINTMSK4_BNAMSK = 0x800;          // BNAMSK
    static constexpr uint32_t OTG_HCINTMSK4_DESCLSTROLLMSK = 0x2000; // DESCLSTROLLMSK

    static constexpr uint32_t OTG_HCTSIZ4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ4_XFRSIZ =   // XFRSIZ
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ4_PKTCNT =   // PKTCNT
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ4_DPID =     // DPID
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HCDMA4_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HCDMAB4_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HCCHAR5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR5_MPSIZ =             // MPSIZ
        bit_field_t<0, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR5_EPNUM =             // EPNUM
        bit_field_t<11, 0xf>::value<X>();
    static constexpr uint32_t OTG_HCCHAR5_EPDIR = 0x8000;     // EPDIR
    static constexpr uint32_t OTG_HCCHAR5_LSDEV = 0x20000;    // LSDEV
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR5_EPTYP =             // EPTYP
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR5_MCNT =              // MCNT
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR5_DAD =               // DAD
        bit_field_t<22, 0x7f>::value<X>();
    static constexpr uint32_t OTG_HCCHAR5_CHDIS = 0x40000000; // CHDIS
    static constexpr uint32_t OTG_HCCHAR5_CHENA = 0x80000000; // CHENA

    static constexpr uint32_t OTG_HCSPLT5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT5_PRTADDR =             // PRTADDR
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT5_HUBADDR =             // HUBADDR
        bit_field_t<7, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT5_XACTPOS =             // XACTPOS
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t OTG_HCSPLT5_COMPLSPLT = 0x10000;  // COMPLSPLT
    static constexpr uint32_t OTG_HCSPLT5_SPLITEN = 0x80000000; // SPLITEN

    static constexpr uint32_t OTG_HCINT5_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HCINT5_XFRC = 0x1;           // XFRC
    static constexpr uint32_t OTG_HCINT5_CHH = 0x2;            // CHH
    static constexpr uint32_t OTG_HCINT5_AHBERR = 0x4;         // AHBERR
    static constexpr uint32_t OTG_HCINT5_STALL = 0x8;          // STALL
    static constexpr uint32_t OTG_HCINT5_NAK = 0x10;           // NAK
    static constexpr uint32_t OTG_HCINT5_ACK = 0x20;           // ACK
    static constexpr uint32_t OTG_HCINT5_NYET = 0x40;          // NYET
    static constexpr uint32_t OTG_HCINT5_TXERR = 0x80;         // TXERR
    static constexpr uint32_t OTG_HCINT5_BBERR = 0x100;        // BBERR
    static constexpr uint32_t OTG_HCINT5_FRMOR = 0x200;        // FRMOR
    static constexpr uint32_t OTG_HCINT5_DTERR = 0x400;        // DTERR
    static constexpr uint32_t OTG_HCINT5_BNA = 0x800;          // BNA
    static constexpr uint32_t OTG_HCINT5_XCSXACTERR = 0x1000;  // XCSXACTERR
    static constexpr uint32_t OTG_HCINT5_DESCLSTROLL = 0x2000; // DESCLSTROLL

    static constexpr uint32_t OTG_HCINTMSK5_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HCINTMSK5_XFRCM = 0x1;             // XFRCM
    static constexpr uint32_t OTG_HCINTMSK5_CHHM = 0x2;              // CHHM
    static constexpr uint32_t OTG_HCINTMSK5_AHBERRM = 0x4;           // AHBERRM
    static constexpr uint32_t OTG_HCINTMSK5_STALLM = 0x8;            // STALLM
    static constexpr uint32_t OTG_HCINTMSK5_NAKM = 0x10;             // NAKM
    static constexpr uint32_t OTG_HCINTMSK5_ACKM = 0x20;             // ACKM
    static constexpr uint32_t OTG_HCINTMSK5_NYET = 0x40;             // NYET
    static constexpr uint32_t OTG_HCINTMSK5_TXERRM = 0x80;           // TXERRM
    static constexpr uint32_t OTG_HCINTMSK5_BBERRM = 0x100;          // BBERRM
    static constexpr uint32_t OTG_HCINTMSK5_FRMORM = 0x200;          // FRMORM
    static constexpr uint32_t OTG_HCINTMSK5_DTERRM = 0x400;          // DTERRM
    static constexpr uint32_t OTG_HCINTMSK5_BNAMSK = 0x800;          // BNAMSK
    static constexpr uint32_t OTG_HCINTMSK5_DESCLSTROLLMSK = 0x2000; // DESCLSTROLLMSK

    static constexpr uint32_t OTG_HCTSIZ5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ5_XFRSIZ =   // XFRSIZ
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ5_PKTCNT =   // PKTCNT
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ5_DPID =     // DPID
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HCDMA5_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HCDMAB5_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HCCHAR6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR6_MPSIZ =             // MPSIZ
        bit_field_t<0, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR6_EPNUM =             // EPNUM
        bit_field_t<11, 0xf>::value<X>();
    static constexpr uint32_t OTG_HCCHAR6_EPDIR = 0x8000;     // EPDIR
    static constexpr uint32_t OTG_HCCHAR6_LSDEV = 0x20000;    // LSDEV
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR6_EPTYP =             // EPTYP
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR6_MCNT =              // MCNT
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR6_DAD =               // DAD
        bit_field_t<22, 0x7f>::value<X>();
    static constexpr uint32_t OTG_HCCHAR6_CHDIS = 0x40000000; // CHDIS
    static constexpr uint32_t OTG_HCCHAR6_CHENA = 0x80000000; // CHENA

    static constexpr uint32_t OTG_HCSPLT6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT6_PRTADDR =             // PRTADDR
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT6_HUBADDR =             // HUBADDR
        bit_field_t<7, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT6_XACTPOS =             // XACTPOS
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t OTG_HCSPLT6_COMPLSPLT = 0x10000;  // COMPLSPLT
    static constexpr uint32_t OTG_HCSPLT6_SPLITEN = 0x80000000; // SPLITEN

    static constexpr uint32_t OTG_HCINT6_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HCINT6_XFRC = 0x1;           // XFRC
    static constexpr uint32_t OTG_HCINT6_CHH = 0x2;            // CHH
    static constexpr uint32_t OTG_HCINT6_AHBERR = 0x4;         // AHBERR
    static constexpr uint32_t OTG_HCINT6_STALL = 0x8;          // STALL
    static constexpr uint32_t OTG_HCINT6_NAK = 0x10;           // NAK
    static constexpr uint32_t OTG_HCINT6_ACK = 0x20;           // ACK
    static constexpr uint32_t OTG_HCINT6_NYET = 0x40;          // NYET
    static constexpr uint32_t OTG_HCINT6_TXERR = 0x80;         // TXERR
    static constexpr uint32_t OTG_HCINT6_BBERR = 0x100;        // BBERR
    static constexpr uint32_t OTG_HCINT6_FRMOR = 0x200;        // FRMOR
    static constexpr uint32_t OTG_HCINT6_DTERR = 0x400;        // DTERR
    static constexpr uint32_t OTG_HCINT6_BNA = 0x800;          // BNA
    static constexpr uint32_t OTG_HCINT6_XCSXACTERR = 0x1000;  // XCSXACTERR
    static constexpr uint32_t OTG_HCINT6_DESCLSTROLL = 0x2000; // DESCLSTROLL

    static constexpr uint32_t OTG_HCINTMSK6_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HCINTMSK6_XFRCM = 0x1;             // XFRCM
    static constexpr uint32_t OTG_HCINTMSK6_CHHM = 0x2;              // CHHM
    static constexpr uint32_t OTG_HCINTMSK6_AHBERRM = 0x4;           // AHBERRM
    static constexpr uint32_t OTG_HCINTMSK6_STALLM = 0x8;            // STALLM
    static constexpr uint32_t OTG_HCINTMSK6_NAKM = 0x10;             // NAKM
    static constexpr uint32_t OTG_HCINTMSK6_ACKM = 0x20;             // ACKM
    static constexpr uint32_t OTG_HCINTMSK6_NYET = 0x40;             // NYET
    static constexpr uint32_t OTG_HCINTMSK6_TXERRM = 0x80;           // TXERRM
    static constexpr uint32_t OTG_HCINTMSK6_BBERRM = 0x100;          // BBERRM
    static constexpr uint32_t OTG_HCINTMSK6_FRMORM = 0x200;          // FRMORM
    static constexpr uint32_t OTG_HCINTMSK6_DTERRM = 0x400;          // DTERRM
    static constexpr uint32_t OTG_HCINTMSK6_BNAMSK = 0x800;          // BNAMSK
    static constexpr uint32_t OTG_HCINTMSK6_DESCLSTROLLMSK = 0x2000; // DESCLSTROLLMSK

    static constexpr uint32_t OTG_HCTSIZ6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ6_XFRSIZ =   // XFRSIZ
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ6_PKTCNT =   // PKTCNT
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ6_DPID =     // DPID
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HCDMA6_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HCDMAB6_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HCCHAR7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR7_MPSIZ =             // MPSIZ
        bit_field_t<0, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR7_EPNUM =             // EPNUM
        bit_field_t<11, 0xf>::value<X>();
    static constexpr uint32_t OTG_HCCHAR7_EPDIR = 0x8000;     // EPDIR
    static constexpr uint32_t OTG_HCCHAR7_LSDEV = 0x20000;    // LSDEV
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR7_EPTYP =             // EPTYP
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR7_MCNT =              // MCNT
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR7_DAD =               // DAD
        bit_field_t<22, 0x7f>::value<X>();
    static constexpr uint32_t OTG_HCCHAR7_CHDIS = 0x40000000; // CHDIS
    static constexpr uint32_t OTG_HCCHAR7_CHENA = 0x80000000; // CHENA

    static constexpr uint32_t OTG_HCSPLT7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT7_PRTADDR =             // PRTADDR
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT7_HUBADDR =             // HUBADDR
        bit_field_t<7, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT7_XACTPOS =             // XACTPOS
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t OTG_HCSPLT7_COMPLSPLT = 0x10000;  // COMPLSPLT
    static constexpr uint32_t OTG_HCSPLT7_SPLITEN = 0x80000000; // SPLITEN

    static constexpr uint32_t OTG_HCINT7_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HCINT7_XFRC = 0x1;           // XFRC
    static constexpr uint32_t OTG_HCINT7_CHH = 0x2;            // CHH
    static constexpr uint32_t OTG_HCINT7_AHBERR = 0x4;         // AHBERR
    static constexpr uint32_t OTG_HCINT7_STALL = 0x8;          // STALL
    static constexpr uint32_t OTG_HCINT7_NAK = 0x10;           // NAK
    static constexpr uint32_t OTG_HCINT7_ACK = 0x20;           // ACK
    static constexpr uint32_t OTG_HCINT7_NYET = 0x40;          // NYET
    static constexpr uint32_t OTG_HCINT7_TXERR = 0x80;         // TXERR
    static constexpr uint32_t OTG_HCINT7_BBERR = 0x100;        // BBERR
    static constexpr uint32_t OTG_HCINT7_FRMOR = 0x200;        // FRMOR
    static constexpr uint32_t OTG_HCINT7_DTERR = 0x400;        // DTERR
    static constexpr uint32_t OTG_HCINT7_BNA = 0x800;          // BNA
    static constexpr uint32_t OTG_HCINT7_XCSXACTERR = 0x1000;  // XCSXACTERR
    static constexpr uint32_t OTG_HCINT7_DESCLSTROLL = 0x2000; // DESCLSTROLL

    static constexpr uint32_t OTG_HCINTMSK7_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HCINTMSK7_XFRCM = 0x1;             // XFRCM
    static constexpr uint32_t OTG_HCINTMSK7_CHHM = 0x2;              // CHHM
    static constexpr uint32_t OTG_HCINTMSK7_AHBERRM = 0x4;           // AHBERRM
    static constexpr uint32_t OTG_HCINTMSK7_STALLM = 0x8;            // STALLM
    static constexpr uint32_t OTG_HCINTMSK7_NAKM = 0x10;             // NAKM
    static constexpr uint32_t OTG_HCINTMSK7_ACKM = 0x20;             // ACKM
    static constexpr uint32_t OTG_HCINTMSK7_NYET = 0x40;             // NYET
    static constexpr uint32_t OTG_HCINTMSK7_TXERRM = 0x80;           // TXERRM
    static constexpr uint32_t OTG_HCINTMSK7_BBERRM = 0x100;          // BBERRM
    static constexpr uint32_t OTG_HCINTMSK7_FRMORM = 0x200;          // FRMORM
    static constexpr uint32_t OTG_HCINTMSK7_DTERRM = 0x400;          // DTERRM
    static constexpr uint32_t OTG_HCINTMSK7_BNAMSK = 0x800;          // BNAMSK
    static constexpr uint32_t OTG_HCINTMSK7_DESCLSTROLLMSK = 0x2000; // DESCLSTROLLMSK

    static constexpr uint32_t OTG_HCTSIZ7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ7_XFRSIZ =   // XFRSIZ
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ7_PKTCNT =   // PKTCNT
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ7_DPID =     // DPID
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HCDMA7_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HCDMAB7_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HCCHAR8_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR8_MPSIZ =             // MPSIZ
        bit_field_t<0, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR8_EPNUM =             // EPNUM
        bit_field_t<11, 0xf>::value<X>();
    static constexpr uint32_t OTG_HCCHAR8_EPDIR = 0x8000;     // EPDIR
    static constexpr uint32_t OTG_HCCHAR8_LSDEV = 0x20000;    // LSDEV
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR8_EPTYP =             // EPTYP
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR8_MCNT =              // MCNT
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR8_DAD =               // DAD
        bit_field_t<22, 0x7f>::value<X>();
    static constexpr uint32_t OTG_HCCHAR8_CHDIS = 0x40000000; // CHDIS
    static constexpr uint32_t OTG_HCCHAR8_CHENA = 0x80000000; // CHENA

    static constexpr uint32_t OTG_HCSPLT8_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT8_PRTADDR =             // PRTADDR
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT8_HUBADDR =             // HUBADDR
        bit_field_t<7, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT8_XACTPOS =             // XACTPOS
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t OTG_HCSPLT8_COMPLSPLT = 0x10000;  // COMPLSPLT
    static constexpr uint32_t OTG_HCSPLT8_SPLITEN = 0x80000000; // SPLITEN

    static constexpr uint32_t OTG_HCINT8_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HCINT8_XFRC = 0x1;           // XFRC
    static constexpr uint32_t OTG_HCINT8_CHH = 0x2;            // CHH
    static constexpr uint32_t OTG_HCINT8_AHBERR = 0x4;         // AHBERR
    static constexpr uint32_t OTG_HCINT8_STALL = 0x8;          // STALL
    static constexpr uint32_t OTG_HCINT8_NAK = 0x10;           // NAK
    static constexpr uint32_t OTG_HCINT8_ACK = 0x20;           // ACK
    static constexpr uint32_t OTG_HCINT8_NYET = 0x40;          // NYET
    static constexpr uint32_t OTG_HCINT8_TXERR = 0x80;         // TXERR
    static constexpr uint32_t OTG_HCINT8_BBERR = 0x100;        // BBERR
    static constexpr uint32_t OTG_HCINT8_FRMOR = 0x200;        // FRMOR
    static constexpr uint32_t OTG_HCINT8_DTERR = 0x400;        // DTERR
    static constexpr uint32_t OTG_HCINT8_BNA = 0x800;          // BNA
    static constexpr uint32_t OTG_HCINT8_XCSXACTERR = 0x1000;  // XCSXACTERR
    static constexpr uint32_t OTG_HCINT8_DESCLSTROLL = 0x2000; // DESCLSTROLL

    static constexpr uint32_t OTG_HCINTMSK8_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HCINTMSK8_XFRCM = 0x1;             // XFRCM
    static constexpr uint32_t OTG_HCINTMSK8_CHHM = 0x2;              // CHHM
    static constexpr uint32_t OTG_HCINTMSK8_AHBERRM = 0x4;           // AHBERRM
    static constexpr uint32_t OTG_HCINTMSK8_STALLM = 0x8;            // STALLM
    static constexpr uint32_t OTG_HCINTMSK8_NAKM = 0x10;             // NAKM
    static constexpr uint32_t OTG_HCINTMSK8_ACKM = 0x20;             // ACKM
    static constexpr uint32_t OTG_HCINTMSK8_NYET = 0x40;             // NYET
    static constexpr uint32_t OTG_HCINTMSK8_TXERRM = 0x80;           // TXERRM
    static constexpr uint32_t OTG_HCINTMSK8_BBERRM = 0x100;          // BBERRM
    static constexpr uint32_t OTG_HCINTMSK8_FRMORM = 0x200;          // FRMORM
    static constexpr uint32_t OTG_HCINTMSK8_DTERRM = 0x400;          // DTERRM
    static constexpr uint32_t OTG_HCINTMSK8_BNAMSK = 0x800;          // BNAMSK
    static constexpr uint32_t OTG_HCINTMSK8_DESCLSTROLLMSK = 0x2000; // DESCLSTROLLMSK

    static constexpr uint32_t OTG_HCTSIZ8_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ8_XFRSIZ =   // XFRSIZ
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ8_PKTCNT =   // PKTCNT
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ8_DPID =     // DPID
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HCDMA8_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HCDMAB8_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HCCHAR9_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR9_MPSIZ =             // MPSIZ
        bit_field_t<0, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR9_EPNUM =             // EPNUM
        bit_field_t<11, 0xf>::value<X>();
    static constexpr uint32_t OTG_HCCHAR9_EPDIR = 0x8000;     // EPDIR
    static constexpr uint32_t OTG_HCCHAR9_LSDEV = 0x20000;    // LSDEV
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR9_EPTYP =             // EPTYP
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR9_MCNT =              // MCNT
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR9_DAD =               // DAD
        bit_field_t<22, 0x7f>::value<X>();
    static constexpr uint32_t OTG_HCCHAR9_CHDIS = 0x40000000; // CHDIS
    static constexpr uint32_t OTG_HCCHAR9_CHENA = 0x80000000; // CHENA

    static constexpr uint32_t OTG_HCSPLT9_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT9_PRTADDR =             // PRTADDR
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT9_HUBADDR =             // HUBADDR
        bit_field_t<7, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT9_XACTPOS =             // XACTPOS
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t OTG_HCSPLT9_COMPLSPLT = 0x10000;  // COMPLSPLT
    static constexpr uint32_t OTG_HCSPLT9_SPLITEN = 0x80000000; // SPLITEN

    static constexpr uint32_t OTG_HCINT9_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HCINT9_XFRC = 0x1;           // XFRC
    static constexpr uint32_t OTG_HCINT9_CHH = 0x2;            // CHH
    static constexpr uint32_t OTG_HCINT9_AHBERR = 0x4;         // AHBERR
    static constexpr uint32_t OTG_HCINT9_STALL = 0x8;          // STALL
    static constexpr uint32_t OTG_HCINT9_NAK = 0x10;           // NAK
    static constexpr uint32_t OTG_HCINT9_ACK = 0x20;           // ACK
    static constexpr uint32_t OTG_HCINT9_NYET = 0x40;          // NYET
    static constexpr uint32_t OTG_HCINT9_TXERR = 0x80;         // TXERR
    static constexpr uint32_t OTG_HCINT9_BBERR = 0x100;        // BBERR
    static constexpr uint32_t OTG_HCINT9_FRMOR = 0x200;        // FRMOR
    static constexpr uint32_t OTG_HCINT9_DTERR = 0x400;        // DTERR
    static constexpr uint32_t OTG_HCINT9_BNA = 0x800;          // BNA
    static constexpr uint32_t OTG_HCINT9_XCSXACTERR = 0x1000;  // XCSXACTERR
    static constexpr uint32_t OTG_HCINT9_DESCLSTROLL = 0x2000; // DESCLSTROLL

    static constexpr uint32_t OTG_HCINTMSK9_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HCINTMSK9_XFRCM = 0x1;             // XFRCM
    static constexpr uint32_t OTG_HCINTMSK9_CHHM = 0x2;              // CHHM
    static constexpr uint32_t OTG_HCINTMSK9_AHBERRM = 0x4;           // AHBERRM
    static constexpr uint32_t OTG_HCINTMSK9_STALLM = 0x8;            // STALLM
    static constexpr uint32_t OTG_HCINTMSK9_NAKM = 0x10;             // NAKM
    static constexpr uint32_t OTG_HCINTMSK9_ACKM = 0x20;             // ACKM
    static constexpr uint32_t OTG_HCINTMSK9_NYET = 0x40;             // NYET
    static constexpr uint32_t OTG_HCINTMSK9_TXERRM = 0x80;           // TXERRM
    static constexpr uint32_t OTG_HCINTMSK9_BBERRM = 0x100;          // BBERRM
    static constexpr uint32_t OTG_HCINTMSK9_FRMORM = 0x200;          // FRMORM
    static constexpr uint32_t OTG_HCINTMSK9_DTERRM = 0x400;          // DTERRM
    static constexpr uint32_t OTG_HCINTMSK9_BNAMSK = 0x800;          // BNAMSK
    static constexpr uint32_t OTG_HCINTMSK9_DESCLSTROLLMSK = 0x2000; // DESCLSTROLLMSK

    static constexpr uint32_t OTG_HCTSIZ9_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ9_XFRSIZ =   // XFRSIZ
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ9_PKTCNT =   // PKTCNT
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ9_DPID =     // DPID
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HCDMA9_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HCDMAB9_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HCCHAR10_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR10_MPSIZ =             // MPSIZ
        bit_field_t<0, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR10_EPNUM =             // EPNUM
        bit_field_t<11, 0xf>::value<X>();
    static constexpr uint32_t OTG_HCCHAR10_EPDIR = 0x8000;     // EPDIR
    static constexpr uint32_t OTG_HCCHAR10_LSDEV = 0x20000;    // LSDEV
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR10_EPTYP =             // EPTYP
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR10_MCNT =              // MCNT
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR10_DAD =               // DAD
        bit_field_t<22, 0x7f>::value<X>();
    static constexpr uint32_t OTG_HCCHAR10_CHDIS = 0x40000000; // CHDIS
    static constexpr uint32_t OTG_HCCHAR10_CHENA = 0x80000000; // CHENA

    static constexpr uint32_t OTG_HCSPLT10_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT10_PRTADDR =             // PRTADDR
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT10_HUBADDR =             // HUBADDR
        bit_field_t<7, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT10_XACTPOS =             // XACTPOS
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t OTG_HCSPLT10_COMPLSPLT = 0x10000;  // COMPLSPLT
    static constexpr uint32_t OTG_HCSPLT10_SPLITEN = 0x80000000; // SPLITEN

    static constexpr uint32_t OTG_HCINT10_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HCINT10_XFRC = 0x1;           // XFRC
    static constexpr uint32_t OTG_HCINT10_CHH = 0x2;            // CHH
    static constexpr uint32_t OTG_HCINT10_AHBERR = 0x4;         // AHBERR
    static constexpr uint32_t OTG_HCINT10_STALL = 0x8;          // STALL
    static constexpr uint32_t OTG_HCINT10_NAK = 0x10;           // NAK
    static constexpr uint32_t OTG_HCINT10_ACK = 0x20;           // ACK
    static constexpr uint32_t OTG_HCINT10_NYET = 0x40;          // NYET
    static constexpr uint32_t OTG_HCINT10_TXERR = 0x80;         // TXERR
    static constexpr uint32_t OTG_HCINT10_BBERR = 0x100;        // BBERR
    static constexpr uint32_t OTG_HCINT10_FRMOR = 0x200;        // FRMOR
    static constexpr uint32_t OTG_HCINT10_DTERR = 0x400;        // DTERR
    static constexpr uint32_t OTG_HCINT10_BNA = 0x800;          // BNA
    static constexpr uint32_t OTG_HCINT10_XCSXACTERR = 0x1000;  // XCSXACTERR
    static constexpr uint32_t OTG_HCINT10_DESCLSTROLL = 0x2000; // DESCLSTROLL

    static constexpr uint32_t OTG_HCINTMSK10_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HCINTMSK10_XFRCM = 0x1;             // XFRCM
    static constexpr uint32_t OTG_HCINTMSK10_CHHM = 0x2;              // CHHM
    static constexpr uint32_t OTG_HCINTMSK10_AHBERRM = 0x4;           // AHBERRM
    static constexpr uint32_t OTG_HCINTMSK10_STALLM = 0x8;            // STALLM
    static constexpr uint32_t OTG_HCINTMSK10_NAKM = 0x10;             // NAKM
    static constexpr uint32_t OTG_HCINTMSK10_ACKM = 0x20;             // ACKM
    static constexpr uint32_t OTG_HCINTMSK10_NYET = 0x40;             // NYET
    static constexpr uint32_t OTG_HCINTMSK10_TXERRM = 0x80;           // TXERRM
    static constexpr uint32_t OTG_HCINTMSK10_BBERRM = 0x100;          // BBERRM
    static constexpr uint32_t OTG_HCINTMSK10_FRMORM = 0x200;          // FRMORM
    static constexpr uint32_t OTG_HCINTMSK10_DTERRM = 0x400;          // DTERRM
    static constexpr uint32_t OTG_HCINTMSK10_BNAMSK = 0x800;          // BNAMSK
    static constexpr uint32_t OTG_HCINTMSK10_DESCLSTROLLMSK = 0x2000; // DESCLSTROLLMSK

    static constexpr uint32_t OTG_HCTSIZ10_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ10_XFRSIZ =   // XFRSIZ
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ10_PKTCNT =   // PKTCNT
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ10_DPID =     // DPID
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HCDMA10_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HCDMAB10_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HCCHAR11_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR11_MPSIZ =             // MPSIZ
        bit_field_t<0, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR11_EPNUM =             // EPNUM
        bit_field_t<11, 0xf>::value<X>();
    static constexpr uint32_t OTG_HCCHAR11_EPDIR = 0x8000;     // EPDIR
    static constexpr uint32_t OTG_HCCHAR11_LSDEV = 0x20000;    // LSDEV
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR11_EPTYP =             // EPTYP
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR11_MCNT =              // MCNT
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR11_DAD =               // DAD
        bit_field_t<22, 0x7f>::value<X>();
    static constexpr uint32_t OTG_HCCHAR11_CHDIS = 0x40000000; // CHDIS
    static constexpr uint32_t OTG_HCCHAR11_CHENA = 0x80000000; // CHENA

    static constexpr uint32_t OTG_HCSPLT11_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT11_PRTADDR =             // PRTADDR
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT11_HUBADDR =             // HUBADDR
        bit_field_t<7, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT11_XACTPOS =             // XACTPOS
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t OTG_HCSPLT11_COMPLSPLT = 0x10000;  // COMPLSPLT
    static constexpr uint32_t OTG_HCSPLT11_SPLITEN = 0x80000000; // SPLITEN

    static constexpr uint32_t OTG_HCINT11_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HCINT11_XFRC = 0x1;           // XFRC
    static constexpr uint32_t OTG_HCINT11_CHH = 0x2;            // CHH
    static constexpr uint32_t OTG_HCINT11_AHBERR = 0x4;         // AHBERR
    static constexpr uint32_t OTG_HCINT11_STALL = 0x8;          // STALL
    static constexpr uint32_t OTG_HCINT11_NAK = 0x10;           // NAK
    static constexpr uint32_t OTG_HCINT11_ACK = 0x20;           // ACK
    static constexpr uint32_t OTG_HCINT11_NYET = 0x40;          // NYET
    static constexpr uint32_t OTG_HCINT11_TXERR = 0x80;         // TXERR
    static constexpr uint32_t OTG_HCINT11_BBERR = 0x100;        // BBERR
    static constexpr uint32_t OTG_HCINT11_FRMOR = 0x200;        // FRMOR
    static constexpr uint32_t OTG_HCINT11_DTERR = 0x400;        // DTERR
    static constexpr uint32_t OTG_HCINT11_BNA = 0x800;          // BNA
    static constexpr uint32_t OTG_HCINT11_XCSXACTERR = 0x1000;  // XCSXACTERR
    static constexpr uint32_t OTG_HCINT11_DESCLSTROLL = 0x2000; // DESCLSTROLL

    static constexpr uint32_t OTG_HCINTMSK11_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HCINTMSK11_XFRCM = 0x1;             // XFRCM
    static constexpr uint32_t OTG_HCINTMSK11_CHHM = 0x2;              // CHHM
    static constexpr uint32_t OTG_HCINTMSK11_AHBERRM = 0x4;           // AHBERRM
    static constexpr uint32_t OTG_HCINTMSK11_STALLM = 0x8;            // STALLM
    static constexpr uint32_t OTG_HCINTMSK11_NAKM = 0x10;             // NAKM
    static constexpr uint32_t OTG_HCINTMSK11_ACKM = 0x20;             // ACKM
    static constexpr uint32_t OTG_HCINTMSK11_NYET = 0x40;             // NYET
    static constexpr uint32_t OTG_HCINTMSK11_TXERRM = 0x80;           // TXERRM
    static constexpr uint32_t OTG_HCINTMSK11_BBERRM = 0x100;          // BBERRM
    static constexpr uint32_t OTG_HCINTMSK11_FRMORM = 0x200;          // FRMORM
    static constexpr uint32_t OTG_HCINTMSK11_DTERRM = 0x400;          // DTERRM
    static constexpr uint32_t OTG_HCINTMSK11_BNAMSK = 0x800;          // BNAMSK
    static constexpr uint32_t OTG_HCINTMSK11_DESCLSTROLLMSK = 0x2000; // DESCLSTROLLMSK

    static constexpr uint32_t OTG_HCTSIZ11_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ11_XFRSIZ =   // XFRSIZ
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ11_PKTCNT =   // PKTCNT
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ11_DPID =     // DPID
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HCDMA11_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HCDMAB11_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HCCHAR12_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR12_MPSIZ =             // MPSIZ
        bit_field_t<0, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR12_EPNUM =             // EPNUM
        bit_field_t<11, 0xf>::value<X>();
    static constexpr uint32_t OTG_HCCHAR12_EPDIR = 0x8000;     // EPDIR
    static constexpr uint32_t OTG_HCCHAR12_LSDEV = 0x20000;    // LSDEV
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR12_EPTYP =             // EPTYP
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR12_MCNT =              // MCNT
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR12_DAD =               // DAD
        bit_field_t<22, 0x7f>::value<X>();
    static constexpr uint32_t OTG_HCCHAR12_CHDIS = 0x40000000; // CHDIS
    static constexpr uint32_t OTG_HCCHAR12_CHENA = 0x80000000; // CHENA

    static constexpr uint32_t OTG_HCSPLT12_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT12_PRTADDR =             // PRTADDR
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT12_HUBADDR =             // HUBADDR
        bit_field_t<7, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT12_XACTPOS =             // XACTPOS
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t OTG_HCSPLT12_COMPLSPLT = 0x10000;  // COMPLSPLT
    static constexpr uint32_t OTG_HCSPLT12_SPLITEN = 0x80000000; // SPLITEN

    static constexpr uint32_t OTG_HCINT12_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HCINT12_XFRC = 0x1;           // XFRC
    static constexpr uint32_t OTG_HCINT12_CHH = 0x2;            // CHH
    static constexpr uint32_t OTG_HCINT12_AHBERR = 0x4;         // AHBERR
    static constexpr uint32_t OTG_HCINT12_STALL = 0x8;          // STALL
    static constexpr uint32_t OTG_HCINT12_NAK = 0x10;           // NAK
    static constexpr uint32_t OTG_HCINT12_ACK = 0x20;           // ACK
    static constexpr uint32_t OTG_HCINT12_NYET = 0x40;          // NYET
    static constexpr uint32_t OTG_HCINT12_TXERR = 0x80;         // TXERR
    static constexpr uint32_t OTG_HCINT12_BBERR = 0x100;        // BBERR
    static constexpr uint32_t OTG_HCINT12_FRMOR = 0x200;        // FRMOR
    static constexpr uint32_t OTG_HCINT12_DTERR = 0x400;        // DTERR
    static constexpr uint32_t OTG_HCINT12_BNA = 0x800;          // BNA
    static constexpr uint32_t OTG_HCINT12_XCSXACTERR = 0x1000;  // XCSXACTERR
    static constexpr uint32_t OTG_HCINT12_DESCLSTROLL = 0x2000; // DESCLSTROLL

    static constexpr uint32_t OTG_HCINTMSK12_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HCINTMSK12_XFRCM = 0x1;             // XFRCM
    static constexpr uint32_t OTG_HCINTMSK12_CHHM = 0x2;              // CHHM
    static constexpr uint32_t OTG_HCINTMSK12_AHBERRM = 0x4;           // AHBERRM
    static constexpr uint32_t OTG_HCINTMSK12_STALLM = 0x8;            // STALLM
    static constexpr uint32_t OTG_HCINTMSK12_NAKM = 0x10;             // NAKM
    static constexpr uint32_t OTG_HCINTMSK12_ACKM = 0x20;             // ACKM
    static constexpr uint32_t OTG_HCINTMSK12_NYET = 0x40;             // NYET
    static constexpr uint32_t OTG_HCINTMSK12_TXERRM = 0x80;           // TXERRM
    static constexpr uint32_t OTG_HCINTMSK12_BBERRM = 0x100;          // BBERRM
    static constexpr uint32_t OTG_HCINTMSK12_FRMORM = 0x200;          // FRMORM
    static constexpr uint32_t OTG_HCINTMSK12_DTERRM = 0x400;          // DTERRM
    static constexpr uint32_t OTG_HCINTMSK12_BNAMSK = 0x800;          // BNAMSK
    static constexpr uint32_t OTG_HCINTMSK12_DESCLSTROLLMSK = 0x2000; // DESCLSTROLLMSK

    static constexpr uint32_t OTG_HCTSIZ12_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ12_XFRSIZ =   // XFRSIZ
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ12_PKTCNT =   // PKTCNT
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ12_DPID =     // DPID
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HCDMA12_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HCDMAB12_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HCCHAR13_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR13_MPSIZ =             // MPSIZ
        bit_field_t<0, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR13_EPNUM =             // EPNUM
        bit_field_t<11, 0xf>::value<X>();
    static constexpr uint32_t OTG_HCCHAR13_EPDIR = 0x8000;     // EPDIR
    static constexpr uint32_t OTG_HCCHAR13_LSDEV = 0x20000;    // LSDEV
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR13_EPTYP =             // EPTYP
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR13_MCNT =              // MCNT
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR13_DAD =               // DAD
        bit_field_t<22, 0x7f>::value<X>();
    static constexpr uint32_t OTG_HCCHAR13_CHDIS = 0x40000000; // CHDIS
    static constexpr uint32_t OTG_HCCHAR13_CHENA = 0x80000000; // CHENA

    static constexpr uint32_t OTG_HCSPLT13_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT13_PRTADDR =             // PRTADDR
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT13_HUBADDR =             // HUBADDR
        bit_field_t<7, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT13_XACTPOS =             // XACTPOS
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t OTG_HCSPLT13_COMPLSPLT = 0x10000;  // COMPLSPLT
    static constexpr uint32_t OTG_HCSPLT13_SPLITEN = 0x80000000; // SPLITEN

    static constexpr uint32_t OTG_HCINT13_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HCINT13_XFRC = 0x1;           // XFRC
    static constexpr uint32_t OTG_HCINT13_CHH = 0x2;            // CHH
    static constexpr uint32_t OTG_HCINT13_AHBERR = 0x4;         // AHBERR
    static constexpr uint32_t OTG_HCINT13_STALL = 0x8;          // STALL
    static constexpr uint32_t OTG_HCINT13_NAK = 0x10;           // NAK
    static constexpr uint32_t OTG_HCINT13_ACK = 0x20;           // ACK
    static constexpr uint32_t OTG_HCINT13_NYET = 0x40;          // NYET
    static constexpr uint32_t OTG_HCINT13_TXERR = 0x80;         // TXERR
    static constexpr uint32_t OTG_HCINT13_BBERR = 0x100;        // BBERR
    static constexpr uint32_t OTG_HCINT13_FRMOR = 0x200;        // FRMOR
    static constexpr uint32_t OTG_HCINT13_DTERR = 0x400;        // DTERR
    static constexpr uint32_t OTG_HCINT13_BNA = 0x800;          // BNA
    static constexpr uint32_t OTG_HCINT13_XCSXACTERR = 0x1000;  // XCSXACTERR
    static constexpr uint32_t OTG_HCINT13_DESCLSTROLL = 0x2000; // DESCLSTROLL

    static constexpr uint32_t OTG_HCINTMSK13_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HCINTMSK13_XFRCM = 0x1;             // XFRCM
    static constexpr uint32_t OTG_HCINTMSK13_CHHM = 0x2;              // CHHM
    static constexpr uint32_t OTG_HCINTMSK13_AHBERRM = 0x4;           // AHBERRM
    static constexpr uint32_t OTG_HCINTMSK13_STALLM = 0x8;            // STALLM
    static constexpr uint32_t OTG_HCINTMSK13_NAKM = 0x10;             // NAKM
    static constexpr uint32_t OTG_HCINTMSK13_ACKM = 0x20;             // ACKM
    static constexpr uint32_t OTG_HCINTMSK13_NYET = 0x40;             // NYET
    static constexpr uint32_t OTG_HCINTMSK13_TXERRM = 0x80;           // TXERRM
    static constexpr uint32_t OTG_HCINTMSK13_BBERRM = 0x100;          // BBERRM
    static constexpr uint32_t OTG_HCINTMSK13_FRMORM = 0x200;          // FRMORM
    static constexpr uint32_t OTG_HCINTMSK13_DTERRM = 0x400;          // DTERRM
    static constexpr uint32_t OTG_HCINTMSK13_BNAMSK = 0x800;          // BNAMSK
    static constexpr uint32_t OTG_HCINTMSK13_DESCLSTROLLMSK = 0x2000; // DESCLSTROLLMSK

    static constexpr uint32_t OTG_HCTSIZ13_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ13_XFRSIZ =   // XFRSIZ
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ13_PKTCNT =   // PKTCNT
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ13_DPID =     // DPID
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HCDMA13_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HCDMAB13_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HCCHAR14_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR14_MPSIZ =             // MPSIZ
        bit_field_t<0, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR14_EPNUM =             // EPNUM
        bit_field_t<11, 0xf>::value<X>();
    static constexpr uint32_t OTG_HCCHAR14_EPDIR = 0x8000;     // EPDIR
    static constexpr uint32_t OTG_HCCHAR14_LSDEV = 0x20000;    // LSDEV
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR14_EPTYP =             // EPTYP
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR14_MCNT =              // MCNT
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR14_DAD =               // DAD
        bit_field_t<22, 0x7f>::value<X>();
    static constexpr uint32_t OTG_HCCHAR14_CHDIS = 0x40000000; // CHDIS
    static constexpr uint32_t OTG_HCCHAR14_CHENA = 0x80000000; // CHENA

    static constexpr uint32_t OTG_HCSPLT14_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT14_PRTADDR =             // PRTADDR
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT14_HUBADDR =             // HUBADDR
        bit_field_t<7, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT14_XACTPOS =             // XACTPOS
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t OTG_HCSPLT14_COMPLSPLT = 0x10000;  // COMPLSPLT
    static constexpr uint32_t OTG_HCSPLT14_SPLITEN = 0x80000000; // SPLITEN

    static constexpr uint32_t OTG_HCINT14_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HCINT14_XFRC = 0x1;           // XFRC
    static constexpr uint32_t OTG_HCINT14_CHH = 0x2;            // CHH
    static constexpr uint32_t OTG_HCINT14_AHBERR = 0x4;         // AHBERR
    static constexpr uint32_t OTG_HCINT14_STALL = 0x8;          // STALL
    static constexpr uint32_t OTG_HCINT14_NAK = 0x10;           // NAK
    static constexpr uint32_t OTG_HCINT14_ACK = 0x20;           // ACK
    static constexpr uint32_t OTG_HCINT14_NYET = 0x40;          // NYET
    static constexpr uint32_t OTG_HCINT14_TXERR = 0x80;         // TXERR
    static constexpr uint32_t OTG_HCINT14_BBERR = 0x100;        // BBERR
    static constexpr uint32_t OTG_HCINT14_FRMOR = 0x200;        // FRMOR
    static constexpr uint32_t OTG_HCINT14_DTERR = 0x400;        // DTERR
    static constexpr uint32_t OTG_HCINT14_BNA = 0x800;          // BNA
    static constexpr uint32_t OTG_HCINT14_XCSXACTERR = 0x1000;  // XCSXACTERR
    static constexpr uint32_t OTG_HCINT14_DESCLSTROLL = 0x2000; // DESCLSTROLL

    static constexpr uint32_t OTG_HCINTMSK14_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HCINTMSK14_XFRCM = 0x1;             // XFRCM
    static constexpr uint32_t OTG_HCINTMSK14_CHHM = 0x2;              // CHHM
    static constexpr uint32_t OTG_HCINTMSK14_AHBERRM = 0x4;           // AHBERRM
    static constexpr uint32_t OTG_HCINTMSK14_STALLM = 0x8;            // STALLM
    static constexpr uint32_t OTG_HCINTMSK14_NAKM = 0x10;             // NAKM
    static constexpr uint32_t OTG_HCINTMSK14_ACKM = 0x20;             // ACKM
    static constexpr uint32_t OTG_HCINTMSK14_NYET = 0x40;             // NYET
    static constexpr uint32_t OTG_HCINTMSK14_TXERRM = 0x80;           // TXERRM
    static constexpr uint32_t OTG_HCINTMSK14_BBERRM = 0x100;          // BBERRM
    static constexpr uint32_t OTG_HCINTMSK14_FRMORM = 0x200;          // FRMORM
    static constexpr uint32_t OTG_HCINTMSK14_DTERRM = 0x400;          // DTERRM
    static constexpr uint32_t OTG_HCINTMSK14_BNAMSK = 0x800;          // BNAMSK
    static constexpr uint32_t OTG_HCINTMSK14_DESCLSTROLLMSK = 0x2000; // DESCLSTROLLMSK

    static constexpr uint32_t OTG_HCTSIZ14_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ14_XFRSIZ =   // XFRSIZ
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ14_PKTCNT =   // PKTCNT
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ14_DPID =     // DPID
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HCDMA14_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HCDMAB14_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HCCHAR15_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR15_MPSIZ =             // MPSIZ
        bit_field_t<0, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR15_EPNUM =             // EPNUM
        bit_field_t<11, 0xf>::value<X>();
    static constexpr uint32_t OTG_HCCHAR15_EPDIR = 0x8000;     // EPDIR
    static constexpr uint32_t OTG_HCCHAR15_LSDEV = 0x20000;    // LSDEV
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR15_EPTYP =             // EPTYP
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR15_MCNT =              // MCNT
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCCHAR15_DAD =               // DAD
        bit_field_t<22, 0x7f>::value<X>();
    static constexpr uint32_t OTG_HCCHAR15_CHDIS = 0x40000000; // CHDIS
    static constexpr uint32_t OTG_HCCHAR15_CHENA = 0x80000000; // CHENA

    static constexpr uint32_t OTG_HCSPLT15_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT15_PRTADDR =             // PRTADDR
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT15_HUBADDR =             // HUBADDR
        bit_field_t<7, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCSPLT15_XACTPOS =             // XACTPOS
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t OTG_HCSPLT15_COMPLSPLT = 0x10000;  // COMPLSPLT
    static constexpr uint32_t OTG_HCSPLT15_SPLITEN = 0x80000000; // SPLITEN

    static constexpr uint32_t OTG_HCINT15_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HCINT15_XFRC = 0x1;           // XFRC
    static constexpr uint32_t OTG_HCINT15_CHH = 0x2;            // CHH
    static constexpr uint32_t OTG_HCINT15_AHBERR = 0x4;         // AHBERR
    static constexpr uint32_t OTG_HCINT15_STALL = 0x8;          // STALL
    static constexpr uint32_t OTG_HCINT15_NAK = 0x10;           // NAK
    static constexpr uint32_t OTG_HCINT15_ACK = 0x20;           // ACK
    static constexpr uint32_t OTG_HCINT15_NYET = 0x40;          // NYET
    static constexpr uint32_t OTG_HCINT15_TXERR = 0x80;         // TXERR
    static constexpr uint32_t OTG_HCINT15_BBERR = 0x100;        // BBERR
    static constexpr uint32_t OTG_HCINT15_FRMOR = 0x200;        // FRMOR
    static constexpr uint32_t OTG_HCINT15_DTERR = 0x400;        // DTERR
    static constexpr uint32_t OTG_HCINT15_BNA = 0x800;          // BNA
    static constexpr uint32_t OTG_HCINT15_XCSXACTERR = 0x1000;  // XCSXACTERR
    static constexpr uint32_t OTG_HCINT15_DESCLSTROLL = 0x2000; // DESCLSTROLL

    static constexpr uint32_t OTG_HCINTMSK15_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HCINTMSK15_XFRCM = 0x1;             // XFRCM
    static constexpr uint32_t OTG_HCINTMSK15_CHHM = 0x2;              // CHHM
    static constexpr uint32_t OTG_HCINTMSK15_AHBERRM = 0x4;           // AHBERRM
    static constexpr uint32_t OTG_HCINTMSK15_STALLM = 0x8;            // STALLM
    static constexpr uint32_t OTG_HCINTMSK15_NAKM = 0x10;             // NAKM
    static constexpr uint32_t OTG_HCINTMSK15_ACKM = 0x20;             // ACKM
    static constexpr uint32_t OTG_HCINTMSK15_NYET = 0x40;             // NYET
    static constexpr uint32_t OTG_HCINTMSK15_TXERRM = 0x80;           // TXERRM
    static constexpr uint32_t OTG_HCINTMSK15_BBERRM = 0x100;          // BBERRM
    static constexpr uint32_t OTG_HCINTMSK15_FRMORM = 0x200;          // FRMORM
    static constexpr uint32_t OTG_HCINTMSK15_DTERRM = 0x400;          // DTERRM
    static constexpr uint32_t OTG_HCINTMSK15_BNAMSK = 0x800;          // BNAMSK
    static constexpr uint32_t OTG_HCINTMSK15_DESCLSTROLLMSK = 0x2000; // DESCLSTROLLMSK

    static constexpr uint32_t OTG_HCTSIZ15_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ15_XFRSIZ =   // XFRSIZ
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ15_PKTCNT =   // PKTCNT
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_HCTSIZ15_DPID =     // DPID
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_HCDMA15_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_HCDMAB15_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_DCFG_RESET_VALUE = 0x2200000;
    template<uint32_t X>
    static constexpr uint32_t OTG_DCFG_DSPD =            // DSPD
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t OTG_DCFG_NZLSOHSK = 0x4;   // NZLSOHSK
    template<uint32_t X>
    static constexpr uint32_t OTG_DCFG_DAD =             // DAD
        bit_field_t<4, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DCFG_PFIVL =           // PFIVL
        bit_field_t<11, 0x3>::value<X>();
    static constexpr uint32_t OTG_DCFG_XCVRDLY = 0x4000; // XCVRDLY
    static constexpr uint32_t OTG_DCFG_ERRATIM = 0x8000; // ERRATIM
    template<uint32_t X>
    static constexpr uint32_t OTG_DCFG_PERSCHIVL =       // PERSCHIVL
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t OTG_DCTL_RESET_VALUE = 0x2;
    static constexpr uint32_t OTG_DCTL_RWUSIG = 0x1;         // RWUSIG
    static constexpr uint32_t OTG_DCTL_SDIS = 0x2;           // SDIS
    static constexpr uint32_t OTG_DCTL_GINSTS = 0x4;         // GINSTS
    static constexpr uint32_t OTG_DCTL_GONSTS = 0x8;         // GONSTS
    template<uint32_t X>
    static constexpr uint32_t OTG_DCTL_TCTL =                // TCTL
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t OTG_DCTL_SGINAK = 0x80;        // SGINAK
    static constexpr uint32_t OTG_DCTL_CGINAK = 0x100;       // CGINAK
    static constexpr uint32_t OTG_DCTL_SGONAK = 0x200;       // SGONAK
    static constexpr uint32_t OTG_DCTL_CGONAK = 0x400;       // CGONAK
    static constexpr uint32_t OTG_DCTL_POPRGDNE = 0x800;     // POPRGDNE
    static constexpr uint32_t OTG_DCTL_DSBESLRJCT = 0x40000; // DSBESLRJCT

    static constexpr uint32_t OTG_DSTS_RESET_VALUE = 0x10;
    static constexpr uint32_t OTG_DSTS_SUSPSTS = 0x1; // SUSPSTS
    template<uint32_t X>
    static constexpr uint32_t OTG_DSTS_ENUMSPD =      // ENUMSPD
        bit_field_t<1, 0x3>::value<X>();
    static constexpr uint32_t OTG_DSTS_EERR = 0x8;    // EERR
    template<uint32_t X>
    static constexpr uint32_t OTG_DSTS_FNSOF =        // FNSOF
        bit_field_t<8, 0x3fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DSTS_DEVLNSTS =     // DEVLNSTS
        bit_field_t<22, 0x3>::value<X>();

    static constexpr uint32_t OTG_DIEPMSK_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_DIEPMSK_XFRCM = 0x1;      // XFRCM
    static constexpr uint32_t OTG_DIEPMSK_EPDM = 0x2;       // EPDM
    static constexpr uint32_t OTG_DIEPMSK_AHBERRM = 0x4;    // AHBERRM
    static constexpr uint32_t OTG_DIEPMSK_TOM = 0x8;        // TOM
    static constexpr uint32_t OTG_DIEPMSK_ITTXFEMSK = 0x10; // ITTXFEMSK
    static constexpr uint32_t OTG_DIEPMSK_INEPNMM = 0x20;   // INEPNMM
    static constexpr uint32_t OTG_DIEPMSK_INEPNEM = 0x40;   // INEPNEM
    static constexpr uint32_t OTG_DIEPMSK_TXFURM = 0x100;   // TXFURM
    static constexpr uint32_t OTG_DIEPMSK_BNAM = 0x200;     // BNAM
    static constexpr uint32_t OTG_DIEPMSK_NAKM = 0x2000;    // NAKM

    static constexpr uint32_t OTG_DOEPMSK_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_DOEPMSK_XFRCM = 0x1;        // XFRCM
    static constexpr uint32_t OTG_DOEPMSK_EPDM = 0x2;         // EPDM
    static constexpr uint32_t OTG_DOEPMSK_AHBERRM = 0x4;      // AHBERRM
    static constexpr uint32_t OTG_DOEPMSK_STUPM = 0x8;        // STUPM
    static constexpr uint32_t OTG_DOEPMSK_OTEPDM = 0x10;      // OTEPDM
    static constexpr uint32_t OTG_DOEPMSK_STSPHSRXM = 0x20;   // STSPHSRXM
    static constexpr uint32_t OTG_DOEPMSK_B2BSTUPM = 0x40;    // B2BSTUPM
    static constexpr uint32_t OTG_DOEPMSK_OUTPKTERRM = 0x100; // OUTPKTERRM
    static constexpr uint32_t OTG_DOEPMSK_BNAM = 0x200;       // BNAM
    static constexpr uint32_t OTG_DOEPMSK_BERRM = 0x1000;     // BERRM
    static constexpr uint32_t OTG_DOEPMSK_NAKMSK = 0x2000;    // NAKMSK
    static constexpr uint32_t OTG_DOEPMSK_NYETMSK = 0x4000;   // NYETMSK

    static constexpr uint32_t OTG_DAINT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DAINT_IEPINT =   // IEPINT
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DAINT_OEPINT =   // OEPINT
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t OTG_DAINTMSK_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DAINTMSK_IEPM =   // IEPM
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DAINTMSK_OEPM =   // OEPM
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t OTG_DVBUSDIS_RESET_VALUE = 0x17d7;
    template<uint32_t X>
    static constexpr uint32_t OTG_DVBUSDIS_VBUSDT =   // VBUSDT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OTG_DVBUSPULSE_RESET_VALUE = 0x5b8;
    template<uint32_t X>
    static constexpr uint32_t OTG_DVBUSPULSE_DVBUSP =   // DVBUSP
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OTG_DTHRCTL_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_DTHRCTL_NONISOTHREN = 0x1; // NONISOTHREN
    static constexpr uint32_t OTG_DTHRCTL_ISOTHREN = 0x2;    // ISOTHREN
    template<uint32_t X>
    static constexpr uint32_t OTG_DTHRCTL_TXTHRLEN =         // TXTHRLEN
        bit_field_t<2, 0x1ff>::value<X>();
    static constexpr uint32_t OTG_DTHRCTL_RXTHREN = 0x10000; // RXTHREN
    template<uint32_t X>
    static constexpr uint32_t OTG_DTHRCTL_RXTHRLEN =         // RXTHRLEN
        bit_field_t<17, 0x1ff>::value<X>();
    static constexpr uint32_t OTG_DTHRCTL_ARPEN = 0x8000000; // ARPEN

    static constexpr uint32_t OTG_DIEPEMPMSK_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPEMPMSK_INEPTXFEM =   // INEPTXFEM
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OTG_DEACHINT_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_DEACHINT_IEP1INT = 0x2;     // IEP1INT
    static constexpr uint32_t OTG_DEACHINT_OEP1INT = 0x20000; // OEP1INT

    static constexpr uint32_t OTG_DEACHINTMSK_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_DEACHINTMSK_IEP1INTM = 0x2;     // IEP1INTM
    static constexpr uint32_t OTG_DEACHINTMSK_OEP1INTM = 0x20000; // OEP1INTM

    static constexpr uint32_t OTG_HS_DIEPEACHMSK1_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DIEPEACHMSK1_XFRCM = 0x1;      // XFRCM
    static constexpr uint32_t OTG_HS_DIEPEACHMSK1_EPDM = 0x2;       // EPDM
    static constexpr uint32_t OTG_HS_DIEPEACHMSK1_AHBERRM = 0x4;    // AHBERRM
    static constexpr uint32_t OTG_HS_DIEPEACHMSK1_TOM = 0x8;        // TOM
    static constexpr uint32_t OTG_HS_DIEPEACHMSK1_ITTXFEMSK = 0x10; // ITTXFEMSK
    static constexpr uint32_t OTG_HS_DIEPEACHMSK1_INEPNEM = 0x40;   // INEPNEM
    static constexpr uint32_t OTG_HS_DIEPEACHMSK1_TXFURM = 0x100;   // TXFURM
    static constexpr uint32_t OTG_HS_DIEPEACHMSK1_BNAM = 0x200;     // BNAM
    static constexpr uint32_t OTG_HS_DIEPEACHMSK1_NAKM = 0x2000;    // NAKM

    static constexpr uint32_t OTG_HS_DOEPEACHMSK1_RESET_VALUE = 0x0;
    static constexpr uint32_t OTG_HS_DOEPEACHMSK1_XFRCM = 0x1;        // XFRCM
    static constexpr uint32_t OTG_HS_DOEPEACHMSK1_EPDM = 0x2;         // EPDM
    static constexpr uint32_t OTG_HS_DOEPEACHMSK1_AHBERRM = 0x4;      // AHBERRM
    static constexpr uint32_t OTG_HS_DOEPEACHMSK1_STUPM = 0x8;        // STUPM
    static constexpr uint32_t OTG_HS_DOEPEACHMSK1_OTEPDM = 0x10;      // OTEPDM
    static constexpr uint32_t OTG_HS_DOEPEACHMSK1_B2BSTUPM = 0x40;    // B2BSTUPM
    static constexpr uint32_t OTG_HS_DOEPEACHMSK1_OUTPKTERRM = 0x100; // OUTPKTERRM
    static constexpr uint32_t OTG_HS_DOEPEACHMSK1_BNAM = 0x200;       // BNAM
    static constexpr uint32_t OTG_HS_DOEPEACHMSK1_BERRM = 0x1000;     // BERRM
    static constexpr uint32_t OTG_HS_DOEPEACHMSK1_NAKMSK = 0x2000;    // NAKMSK
    static constexpr uint32_t OTG_HS_DOEPEACHMSK1_NYETMSK = 0x4000;   // NYETMSK

    static constexpr uint32_t OTG_DIEPCTL0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPCTL0_MPSIZ =                      // MPSIZ
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_DIEPCTL0_USBAEP = 0x8000;             // USBAEP
    static constexpr uint32_t OTG_DIEPCTL0_EONUM_DPIP = 0x10000;        // EONUM_DPIP
    static constexpr uint32_t OTG_DIEPCTL0_NAKSTS = 0x20000;            // NAKSTS
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPCTL0_EPTYP =                      // EPTYP
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_DIEPCTL0_STALL = 0x200000;            // STALL
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPCTL0_TXFNUM =                     // TXFNUM
        bit_field_t<22, 0xf>::value<X>();
    static constexpr uint32_t OTG_DIEPCTL0_CNAK = 0x4000000;            // CNAK
    static constexpr uint32_t OTG_DIEPCTL0_SNAK = 0x8000000;            // SNAK
    static constexpr uint32_t OTG_DIEPCTL0_SD0PID_SEVNFRM = 0x10000000; // SD0PID_SEVNFRM
    static constexpr uint32_t OTG_DIEPCTL0_SODDFRM = 0x20000000;        // SODDFRM
    static constexpr uint32_t OTG_DIEPCTL0_EPDIS = 0x40000000;          // EPDIS
    static constexpr uint32_t OTG_DIEPCTL0_EPENA = 0x80000000;          // EPENA

    static constexpr uint32_t OTG_DIEPINT0_RESET_VALUE = 0x80;
    static constexpr uint32_t OTG_DIEPINT0_XFRC = 0x1;         // XFRC
    static constexpr uint32_t OTG_DIEPINT0_EPDISD = 0x2;       // EPDISD
    static constexpr uint32_t OTG_DIEPINT0_AHBERR = 0x4;       // AHBERR
    static constexpr uint32_t OTG_DIEPINT0_TOC = 0x8;          // TOC
    static constexpr uint32_t OTG_DIEPINT0_ITTXFE = 0x10;      // ITTXFE
    static constexpr uint32_t OTG_DIEPINT0_INEPNM = 0x20;      // INEPNM
    static constexpr uint32_t OTG_DIEPINT0_INEPNE = 0x40;      // INEPNE
    static constexpr uint32_t OTG_DIEPINT0_TXFE = 0x80;        // TXFE
    static constexpr uint32_t OTG_DIEPINT0_TXFIFOUDRN = 0x100; // TXFIFOUDRN
    static constexpr uint32_t OTG_DIEPINT0_BNA = 0x200;        // BNA
    static constexpr uint32_t OTG_DIEPINT0_PKTDRPSTS = 0x800;  // PKTDRPSTS
    static constexpr uint32_t OTG_DIEPINT0_NAK = 0x2000;       // NAK

    static constexpr uint32_t OTG_DIEPTSIZ0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTSIZ0_XFRSIZ =   // XFRSIZ
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTSIZ0_PKTCNT =   // PKTCNT
        bit_field_t<19, 0x3>::value<X>();

    static constexpr uint32_t OTG_DIEPDMA0_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_DTXFSTS0_RESET_VALUE = 0x200;
    template<uint32_t X>
    static constexpr uint32_t OTG_DTXFSTS0_INEPTFSAV =   // INEPTFSAV
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OTG_DIEPCTL1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPCTL1_MPSIZ =                      // MPSIZ
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_DIEPCTL1_USBAEP = 0x8000;             // USBAEP
    static constexpr uint32_t OTG_DIEPCTL1_EONUM_DPIP = 0x10000;        // EONUM_DPIP
    static constexpr uint32_t OTG_DIEPCTL1_NAKSTS = 0x20000;            // NAKSTS
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPCTL1_EPTYP =                      // EPTYP
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_DIEPCTL1_STALL = 0x200000;            // STALL
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPCTL1_TXFNUM =                     // TXFNUM
        bit_field_t<22, 0xf>::value<X>();
    static constexpr uint32_t OTG_DIEPCTL1_CNAK = 0x4000000;            // CNAK
    static constexpr uint32_t OTG_DIEPCTL1_SNAK = 0x8000000;            // SNAK
    static constexpr uint32_t OTG_DIEPCTL1_SD0PID_SEVNFRM = 0x10000000; // SD0PID_SEVNFRM
    static constexpr uint32_t OTG_DIEPCTL1_SODDFRM = 0x20000000;        // SODDFRM
    static constexpr uint32_t OTG_DIEPCTL1_EPDIS = 0x40000000;          // EPDIS
    static constexpr uint32_t OTG_DIEPCTL1_EPENA = 0x80000000;          // EPENA

    static constexpr uint32_t OTG_DIEPINT1_RESET_VALUE = 0x80;
    static constexpr uint32_t OTG_DIEPINT1_XFRC = 0x1;         // XFRC
    static constexpr uint32_t OTG_DIEPINT1_EPDISD = 0x2;       // EPDISD
    static constexpr uint32_t OTG_DIEPINT1_AHBERR = 0x4;       // AHBERR
    static constexpr uint32_t OTG_DIEPINT1_TOC = 0x8;          // TOC
    static constexpr uint32_t OTG_DIEPINT1_ITTXFE = 0x10;      // ITTXFE
    static constexpr uint32_t OTG_DIEPINT1_INEPNM = 0x20;      // INEPNM
    static constexpr uint32_t OTG_DIEPINT1_INEPNE = 0x40;      // INEPNE
    static constexpr uint32_t OTG_DIEPINT1_TXFE = 0x80;        // TXFE
    static constexpr uint32_t OTG_DIEPINT1_TXFIFOUDRN = 0x100; // TXFIFOUDRN
    static constexpr uint32_t OTG_DIEPINT1_BNA = 0x200;        // BNA
    static constexpr uint32_t OTG_DIEPINT1_PKTDRPSTS = 0x800;  // PKTDRPSTS
    static constexpr uint32_t OTG_DIEPINT1_NAK = 0x2000;       // NAK

    static constexpr uint32_t OTG_DIEPTSIZ1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTSIZ1_XFRSIZ =   // XFRSIZ
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTSIZ1_PKTCNT =   // PKTCNT
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTSIZ1_MCNT =     // MCNT
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_DIEPDMA1_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_DTXFSTS1_RESET_VALUE = 0x200;
    template<uint32_t X>
    static constexpr uint32_t OTG_DTXFSTS1_INEPTFSAV =   // INEPTFSAV
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OTG_DIEPCTL2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPCTL2_MPSIZ =                      // MPSIZ
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_DIEPCTL2_USBAEP = 0x8000;             // USBAEP
    static constexpr uint32_t OTG_DIEPCTL2_EONUM_DPIP = 0x10000;        // EONUM_DPIP
    static constexpr uint32_t OTG_DIEPCTL2_NAKSTS = 0x20000;            // NAKSTS
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPCTL2_EPTYP =                      // EPTYP
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_DIEPCTL2_STALL = 0x200000;            // STALL
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPCTL2_TXFNUM =                     // TXFNUM
        bit_field_t<22, 0xf>::value<X>();
    static constexpr uint32_t OTG_DIEPCTL2_CNAK = 0x4000000;            // CNAK
    static constexpr uint32_t OTG_DIEPCTL2_SNAK = 0x8000000;            // SNAK
    static constexpr uint32_t OTG_DIEPCTL2_SD0PID_SEVNFRM = 0x10000000; // SD0PID_SEVNFRM
    static constexpr uint32_t OTG_DIEPCTL2_SODDFRM = 0x20000000;        // SODDFRM
    static constexpr uint32_t OTG_DIEPCTL2_EPDIS = 0x40000000;          // EPDIS
    static constexpr uint32_t OTG_DIEPCTL2_EPENA = 0x80000000;          // EPENA

    static constexpr uint32_t OTG_DIEPINT2_RESET_VALUE = 0x80;
    static constexpr uint32_t OTG_DIEPINT2_XFRC = 0x1;         // XFRC
    static constexpr uint32_t OTG_DIEPINT2_EPDISD = 0x2;       // EPDISD
    static constexpr uint32_t OTG_DIEPINT2_AHBERR = 0x4;       // AHBERR
    static constexpr uint32_t OTG_DIEPINT2_TOC = 0x8;          // TOC
    static constexpr uint32_t OTG_DIEPINT2_ITTXFE = 0x10;      // ITTXFE
    static constexpr uint32_t OTG_DIEPINT2_INEPNM = 0x20;      // INEPNM
    static constexpr uint32_t OTG_DIEPINT2_INEPNE = 0x40;      // INEPNE
    static constexpr uint32_t OTG_DIEPINT2_TXFE = 0x80;        // TXFE
    static constexpr uint32_t OTG_DIEPINT2_TXFIFOUDRN = 0x100; // TXFIFOUDRN
    static constexpr uint32_t OTG_DIEPINT2_BNA = 0x200;        // BNA
    static constexpr uint32_t OTG_DIEPINT2_PKTDRPSTS = 0x800;  // PKTDRPSTS
    static constexpr uint32_t OTG_DIEPINT2_NAK = 0x2000;       // NAK

    static constexpr uint32_t OTG_DIEPTSIZ2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTSIZ2_XFRSIZ =   // XFRSIZ
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTSIZ2_PKTCNT =   // PKTCNT
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTSIZ2_MCNT =     // MCNT
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_DIEPDMA2_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_DTXFSTS2_RESET_VALUE = 0x200;
    template<uint32_t X>
    static constexpr uint32_t OTG_DTXFSTS2_INEPTFSAV =   // INEPTFSAV
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OTG_DIEPCTL3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPCTL3_MPSIZ =                      // MPSIZ
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_DIEPCTL3_USBAEP = 0x8000;             // USBAEP
    static constexpr uint32_t OTG_DIEPCTL3_EONUM_DPIP = 0x10000;        // EONUM_DPIP
    static constexpr uint32_t OTG_DIEPCTL3_NAKSTS = 0x20000;            // NAKSTS
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPCTL3_EPTYP =                      // EPTYP
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_DIEPCTL3_STALL = 0x200000;            // STALL
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPCTL3_TXFNUM =                     // TXFNUM
        bit_field_t<22, 0xf>::value<X>();
    static constexpr uint32_t OTG_DIEPCTL3_CNAK = 0x4000000;            // CNAK
    static constexpr uint32_t OTG_DIEPCTL3_SNAK = 0x8000000;            // SNAK
    static constexpr uint32_t OTG_DIEPCTL3_SD0PID_SEVNFRM = 0x10000000; // SD0PID_SEVNFRM
    static constexpr uint32_t OTG_DIEPCTL3_SODDFRM = 0x20000000;        // SODDFRM
    static constexpr uint32_t OTG_DIEPCTL3_EPDIS = 0x40000000;          // EPDIS
    static constexpr uint32_t OTG_DIEPCTL3_EPENA = 0x80000000;          // EPENA

    static constexpr uint32_t OTG_DIEPINT3_RESET_VALUE = 0x80;
    static constexpr uint32_t OTG_DIEPINT3_XFRC = 0x1;         // XFRC
    static constexpr uint32_t OTG_DIEPINT3_EPDISD = 0x2;       // EPDISD
    static constexpr uint32_t OTG_DIEPINT3_AHBERR = 0x4;       // AHBERR
    static constexpr uint32_t OTG_DIEPINT3_TOC = 0x8;          // TOC
    static constexpr uint32_t OTG_DIEPINT3_ITTXFE = 0x10;      // ITTXFE
    static constexpr uint32_t OTG_DIEPINT3_INEPNM = 0x20;      // INEPNM
    static constexpr uint32_t OTG_DIEPINT3_INEPNE = 0x40;      // INEPNE
    static constexpr uint32_t OTG_DIEPINT3_TXFE = 0x80;        // TXFE
    static constexpr uint32_t OTG_DIEPINT3_TXFIFOUDRN = 0x100; // TXFIFOUDRN
    static constexpr uint32_t OTG_DIEPINT3_BNA = 0x200;        // BNA
    static constexpr uint32_t OTG_DIEPINT3_PKTDRPSTS = 0x800;  // PKTDRPSTS
    static constexpr uint32_t OTG_DIEPINT3_NAK = 0x2000;       // NAK

    static constexpr uint32_t OTG_DIEPTSIZ3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTSIZ3_XFRSIZ =   // XFRSIZ
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTSIZ3_PKTCNT =   // PKTCNT
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTSIZ3_MCNT =     // MCNT
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_DIEPDMA3_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_DTXFSTS3_RESET_VALUE = 0x200;
    template<uint32_t X>
    static constexpr uint32_t OTG_DTXFSTS3_INEPTFSAV =   // INEPTFSAV
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OTG_DIEPCTL4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPCTL4_MPSIZ =                      // MPSIZ
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_DIEPCTL4_USBAEP = 0x8000;             // USBAEP
    static constexpr uint32_t OTG_DIEPCTL4_EONUM_DPIP = 0x10000;        // EONUM_DPIP
    static constexpr uint32_t OTG_DIEPCTL4_NAKSTS = 0x20000;            // NAKSTS
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPCTL4_EPTYP =                      // EPTYP
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_DIEPCTL4_STALL = 0x200000;            // STALL
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPCTL4_TXFNUM =                     // TXFNUM
        bit_field_t<22, 0xf>::value<X>();
    static constexpr uint32_t OTG_DIEPCTL4_CNAK = 0x4000000;            // CNAK
    static constexpr uint32_t OTG_DIEPCTL4_SNAK = 0x8000000;            // SNAK
    static constexpr uint32_t OTG_DIEPCTL4_SD0PID_SEVNFRM = 0x10000000; // SD0PID_SEVNFRM
    static constexpr uint32_t OTG_DIEPCTL4_SODDFRM = 0x20000000;        // SODDFRM
    static constexpr uint32_t OTG_DIEPCTL4_EPDIS = 0x40000000;          // EPDIS
    static constexpr uint32_t OTG_DIEPCTL4_EPENA = 0x80000000;          // EPENA

    static constexpr uint32_t OTG_DIEPINT4_RESET_VALUE = 0x80;
    static constexpr uint32_t OTG_DIEPINT4_XFRC = 0x1;         // XFRC
    static constexpr uint32_t OTG_DIEPINT4_EPDISD = 0x2;       // EPDISD
    static constexpr uint32_t OTG_DIEPINT4_AHBERR = 0x4;       // AHBERR
    static constexpr uint32_t OTG_DIEPINT4_TOC = 0x8;          // TOC
    static constexpr uint32_t OTG_DIEPINT4_ITTXFE = 0x10;      // ITTXFE
    static constexpr uint32_t OTG_DIEPINT4_INEPNM = 0x20;      // INEPNM
    static constexpr uint32_t OTG_DIEPINT4_INEPNE = 0x40;      // INEPNE
    static constexpr uint32_t OTG_DIEPINT4_TXFE = 0x80;        // TXFE
    static constexpr uint32_t OTG_DIEPINT4_TXFIFOUDRN = 0x100; // TXFIFOUDRN
    static constexpr uint32_t OTG_DIEPINT4_BNA = 0x200;        // BNA
    static constexpr uint32_t OTG_DIEPINT4_PKTDRPSTS = 0x800;  // PKTDRPSTS
    static constexpr uint32_t OTG_DIEPINT4_NAK = 0x2000;       // NAK

    static constexpr uint32_t OTG_DIEPTSIZ4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTSIZ4_XFRSIZ =   // XFRSIZ
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTSIZ4_PKTCNT =   // PKTCNT
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTSIZ4_MCNT =     // MCNT
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_DIEPDMA4_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_DTXFSTS4_RESET_VALUE = 0x200;
    template<uint32_t X>
    static constexpr uint32_t OTG_DTXFSTS4_INEPTFSAV =   // INEPTFSAV
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OTG_DIEPCTL5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPCTL5_MPSIZ =                      // MPSIZ
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_DIEPCTL5_USBAEP = 0x8000;             // USBAEP
    static constexpr uint32_t OTG_DIEPCTL5_EONUM_DPIP = 0x10000;        // EONUM_DPIP
    static constexpr uint32_t OTG_DIEPCTL5_NAKSTS = 0x20000;            // NAKSTS
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPCTL5_EPTYP =                      // EPTYP
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_DIEPCTL5_STALL = 0x200000;            // STALL
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPCTL5_TXFNUM =                     // TXFNUM
        bit_field_t<22, 0xf>::value<X>();
    static constexpr uint32_t OTG_DIEPCTL5_CNAK = 0x4000000;            // CNAK
    static constexpr uint32_t OTG_DIEPCTL5_SNAK = 0x8000000;            // SNAK
    static constexpr uint32_t OTG_DIEPCTL5_SD0PID_SEVNFRM = 0x10000000; // SD0PID_SEVNFRM
    static constexpr uint32_t OTG_DIEPCTL5_SODDFRM = 0x20000000;        // SODDFRM
    static constexpr uint32_t OTG_DIEPCTL5_EPDIS = 0x40000000;          // EPDIS
    static constexpr uint32_t OTG_DIEPCTL5_EPENA = 0x80000000;          // EPENA

    static constexpr uint32_t OTG_DIEPINT5_RESET_VALUE = 0x80;
    static constexpr uint32_t OTG_DIEPINT5_XFRC = 0x1;         // XFRC
    static constexpr uint32_t OTG_DIEPINT5_EPDISD = 0x2;       // EPDISD
    static constexpr uint32_t OTG_DIEPINT5_AHBERR = 0x4;       // AHBERR
    static constexpr uint32_t OTG_DIEPINT5_TOC = 0x8;          // TOC
    static constexpr uint32_t OTG_DIEPINT5_ITTXFE = 0x10;      // ITTXFE
    static constexpr uint32_t OTG_DIEPINT5_INEPNM = 0x20;      // INEPNM
    static constexpr uint32_t OTG_DIEPINT5_INEPNE = 0x40;      // INEPNE
    static constexpr uint32_t OTG_DIEPINT5_TXFE = 0x80;        // TXFE
    static constexpr uint32_t OTG_DIEPINT5_TXFIFOUDRN = 0x100; // TXFIFOUDRN
    static constexpr uint32_t OTG_DIEPINT5_BNA = 0x200;        // BNA
    static constexpr uint32_t OTG_DIEPINT5_PKTDRPSTS = 0x800;  // PKTDRPSTS
    static constexpr uint32_t OTG_DIEPINT5_NAK = 0x2000;       // NAK

    static constexpr uint32_t OTG_DIEPTSIZ5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTSIZ5_XFRSIZ =   // XFRSIZ
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTSIZ5_PKTCNT =   // PKTCNT
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTSIZ5_MCNT =     // MCNT
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_DIEPDMA5_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_DTXFSTS5_RESET_VALUE = 0x200;
    template<uint32_t X>
    static constexpr uint32_t OTG_DTXFSTS5_INEPTFSAV =   // INEPTFSAV
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OTG_DIEPCTL6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPCTL6_MPSIZ =                      // MPSIZ
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_DIEPCTL6_USBAEP = 0x8000;             // USBAEP
    static constexpr uint32_t OTG_DIEPCTL6_EONUM_DPIP = 0x10000;        // EONUM_DPIP
    static constexpr uint32_t OTG_DIEPCTL6_NAKSTS = 0x20000;            // NAKSTS
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPCTL6_EPTYP =                      // EPTYP
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_DIEPCTL6_STALL = 0x200000;            // STALL
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPCTL6_TXFNUM =                     // TXFNUM
        bit_field_t<22, 0xf>::value<X>();
    static constexpr uint32_t OTG_DIEPCTL6_CNAK = 0x4000000;            // CNAK
    static constexpr uint32_t OTG_DIEPCTL6_SNAK = 0x8000000;            // SNAK
    static constexpr uint32_t OTG_DIEPCTL6_SD0PID_SEVNFRM = 0x10000000; // SD0PID_SEVNFRM
    static constexpr uint32_t OTG_DIEPCTL6_SODDFRM = 0x20000000;        // SODDFRM
    static constexpr uint32_t OTG_DIEPCTL6_EPDIS = 0x40000000;          // EPDIS
    static constexpr uint32_t OTG_DIEPCTL6_EPENA = 0x80000000;          // EPENA

    static constexpr uint32_t OTG_DIEPINT6_RESET_VALUE = 0x80;
    static constexpr uint32_t OTG_DIEPINT6_XFRC = 0x1;         // XFRC
    static constexpr uint32_t OTG_DIEPINT6_EPDISD = 0x2;       // EPDISD
    static constexpr uint32_t OTG_DIEPINT6_AHBERR = 0x4;       // AHBERR
    static constexpr uint32_t OTG_DIEPINT6_TOC = 0x8;          // TOC
    static constexpr uint32_t OTG_DIEPINT6_ITTXFE = 0x10;      // ITTXFE
    static constexpr uint32_t OTG_DIEPINT6_INEPNM = 0x20;      // INEPNM
    static constexpr uint32_t OTG_DIEPINT6_INEPNE = 0x40;      // INEPNE
    static constexpr uint32_t OTG_DIEPINT6_TXFE = 0x80;        // TXFE
    static constexpr uint32_t OTG_DIEPINT6_TXFIFOUDRN = 0x100; // TXFIFOUDRN
    static constexpr uint32_t OTG_DIEPINT6_BNA = 0x200;        // BNA
    static constexpr uint32_t OTG_DIEPINT6_PKTDRPSTS = 0x800;  // PKTDRPSTS
    static constexpr uint32_t OTG_DIEPINT6_NAK = 0x2000;       // NAK

    static constexpr uint32_t OTG_DIEPTSIZ6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTSIZ6_XFRSIZ =   // XFRSIZ
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTSIZ6_PKTCNT =   // PKTCNT
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTSIZ6_MCNT =     // MCNT
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_DIEPDMA6_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_DTXFSTS6_RESET_VALUE = 0x200;
    template<uint32_t X>
    static constexpr uint32_t OTG_DTXFSTS6_INEPTFSAV =   // INEPTFSAV
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OTG_DIEPCTL7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPCTL7_MPSIZ =                      // MPSIZ
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_DIEPCTL7_USBAEP = 0x8000;             // USBAEP
    static constexpr uint32_t OTG_DIEPCTL7_EONUM_DPIP = 0x10000;        // EONUM_DPIP
    static constexpr uint32_t OTG_DIEPCTL7_NAKSTS = 0x20000;            // NAKSTS
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPCTL7_EPTYP =                      // EPTYP
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_DIEPCTL7_STALL = 0x200000;            // STALL
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPCTL7_TXFNUM =                     // TXFNUM
        bit_field_t<22, 0xf>::value<X>();
    static constexpr uint32_t OTG_DIEPCTL7_CNAK = 0x4000000;            // CNAK
    static constexpr uint32_t OTG_DIEPCTL7_SNAK = 0x8000000;            // SNAK
    static constexpr uint32_t OTG_DIEPCTL7_SD0PID_SEVNFRM = 0x10000000; // SD0PID_SEVNFRM
    static constexpr uint32_t OTG_DIEPCTL7_SODDFRM = 0x20000000;        // SODDFRM
    static constexpr uint32_t OTG_DIEPCTL7_EPDIS = 0x40000000;          // EPDIS
    static constexpr uint32_t OTG_DIEPCTL7_EPENA = 0x80000000;          // EPENA

    static constexpr uint32_t OTG_DIEPINT7_RESET_VALUE = 0x80;
    static constexpr uint32_t OTG_DIEPINT7_XFRC = 0x1;         // XFRC
    static constexpr uint32_t OTG_DIEPINT7_EPDISD = 0x2;       // EPDISD
    static constexpr uint32_t OTG_DIEPINT7_AHBERR = 0x4;       // AHBERR
    static constexpr uint32_t OTG_DIEPINT7_TOC = 0x8;          // TOC
    static constexpr uint32_t OTG_DIEPINT7_ITTXFE = 0x10;      // ITTXFE
    static constexpr uint32_t OTG_DIEPINT7_INEPNM = 0x20;      // INEPNM
    static constexpr uint32_t OTG_DIEPINT7_INEPNE = 0x40;      // INEPNE
    static constexpr uint32_t OTG_DIEPINT7_TXFE = 0x80;        // TXFE
    static constexpr uint32_t OTG_DIEPINT7_TXFIFOUDRN = 0x100; // TXFIFOUDRN
    static constexpr uint32_t OTG_DIEPINT7_BNA = 0x200;        // BNA
    static constexpr uint32_t OTG_DIEPINT7_PKTDRPSTS = 0x800;  // PKTDRPSTS
    static constexpr uint32_t OTG_DIEPINT7_NAK = 0x2000;       // NAK

    static constexpr uint32_t OTG_DIEPTSIZ7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTSIZ7_XFRSIZ =   // XFRSIZ
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTSIZ7_PKTCNT =   // PKTCNT
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTSIZ7_MCNT =     // MCNT
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_DIEPDMA7_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_DTXFSTS7_RESET_VALUE = 0x200;
    template<uint32_t X>
    static constexpr uint32_t OTG_DTXFSTS7_INEPTFSAV =   // INEPTFSAV
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OTG_DIEPCTL8_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPCTL8_MPSIZ =                      // MPSIZ
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_DIEPCTL8_USBAEP = 0x8000;             // USBAEP
    static constexpr uint32_t OTG_DIEPCTL8_EONUM_DPIP = 0x10000;        // EONUM_DPIP
    static constexpr uint32_t OTG_DIEPCTL8_NAKSTS = 0x20000;            // NAKSTS
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPCTL8_EPTYP =                      // EPTYP
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_DIEPCTL8_STALL = 0x200000;            // STALL
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPCTL8_TXFNUM =                     // TXFNUM
        bit_field_t<22, 0xf>::value<X>();
    static constexpr uint32_t OTG_DIEPCTL8_CNAK = 0x4000000;            // CNAK
    static constexpr uint32_t OTG_DIEPCTL8_SNAK = 0x8000000;            // SNAK
    static constexpr uint32_t OTG_DIEPCTL8_SD0PID_SEVNFRM = 0x10000000; // SD0PID_SEVNFRM
    static constexpr uint32_t OTG_DIEPCTL8_SODDFRM = 0x20000000;        // SODDFRM
    static constexpr uint32_t OTG_DIEPCTL8_EPDIS = 0x40000000;          // EPDIS
    static constexpr uint32_t OTG_DIEPCTL8_EPENA = 0x80000000;          // EPENA

    static constexpr uint32_t OTG_DIEPINT8_RESET_VALUE = 0x80;
    static constexpr uint32_t OTG_DIEPINT8_XFRC = 0x1;         // XFRC
    static constexpr uint32_t OTG_DIEPINT8_EPDISD = 0x2;       // EPDISD
    static constexpr uint32_t OTG_DIEPINT8_AHBERR = 0x4;       // AHBERR
    static constexpr uint32_t OTG_DIEPINT8_TOC = 0x8;          // TOC
    static constexpr uint32_t OTG_DIEPINT8_ITTXFE = 0x10;      // ITTXFE
    static constexpr uint32_t OTG_DIEPINT8_INEPNM = 0x20;      // INEPNM
    static constexpr uint32_t OTG_DIEPINT8_INEPNE = 0x40;      // INEPNE
    static constexpr uint32_t OTG_DIEPINT8_TXFE = 0x80;        // TXFE
    static constexpr uint32_t OTG_DIEPINT8_TXFIFOUDRN = 0x100; // TXFIFOUDRN
    static constexpr uint32_t OTG_DIEPINT8_BNA = 0x200;        // BNA
    static constexpr uint32_t OTG_DIEPINT8_PKTDRPSTS = 0x800;  // PKTDRPSTS
    static constexpr uint32_t OTG_DIEPINT8_NAK = 0x2000;       // NAK

    static constexpr uint32_t OTG_DIEPTSIZ8_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTSIZ8_XFRSIZ =   // XFRSIZ
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTSIZ8_PKTCNT =   // PKTCNT
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DIEPTSIZ8_MCNT =     // MCNT
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_DIEPDMA8_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_DTXFSTS8_RESET_VALUE = 0x200;
    template<uint32_t X>
    static constexpr uint32_t OTG_DTXFSTS8_INEPTFSAV =   // INEPTFSAV
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OTG_DOEPCTL0_RESET_VALUE = 0x8000;
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPCTL0_MPSIZ =             // MPSIZ
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t OTG_DOEPCTL0_USBAEP = 0x8000;    // USBAEP
    static constexpr uint32_t OTG_DOEPCTL0_NAKSTS = 0x20000;   // NAKSTS
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPCTL0_EPTYP =             // EPTYP
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_DOEPCTL0_SNPM = 0x100000;    // SNPM
    static constexpr uint32_t OTG_DOEPCTL0_STALL = 0x200000;   // STALL
    static constexpr uint32_t OTG_DOEPCTL0_CNAK = 0x4000000;   // CNAK
    static constexpr uint32_t OTG_DOEPCTL0_SNAK = 0x8000000;   // SNAK
    static constexpr uint32_t OTG_DOEPCTL0_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t OTG_DOEPCTL0_EPENA = 0x80000000; // EPENA

    static constexpr uint32_t OTG_DOEPINT0_RESET_VALUE = 0x80;
    static constexpr uint32_t OTG_DOEPINT0_XFRC = 0x1;        // XFRC
    static constexpr uint32_t OTG_DOEPINT0_EPDISD = 0x2;      // EPDISD
    static constexpr uint32_t OTG_DOEPINT0_AHBERR = 0x4;      // AHBERR
    static constexpr uint32_t OTG_DOEPINT0_STUP = 0x8;        // STUP
    static constexpr uint32_t OTG_DOEPINT0_OTEPDIS = 0x10;    // OTEPDIS
    static constexpr uint32_t OTG_DOEPINT0_STSPHSRX = 0x20;   // STSPHSRX
    static constexpr uint32_t OTG_DOEPINT0_B2BSTUP = 0x40;    // B2BSTUP
    static constexpr uint32_t OTG_DOEPINT0_OUTPKTERR = 0x100; // OUTPKTERR
    static constexpr uint32_t OTG_DOEPINT0_BNA = 0x200;       // BNA
    static constexpr uint32_t OTG_DOEPINT0_BERR = 0x1000;     // BERR
    static constexpr uint32_t OTG_DOEPINT0_NAK = 0x2000;      // NAK
    static constexpr uint32_t OTG_DOEPINT0_NYET = 0x4000;     // NYET
    static constexpr uint32_t OTG_DOEPINT0_STPKTRX = 0x8000;  // STPKTRX

    static constexpr uint32_t OTG_DOEPTSIZ0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPTSIZ0_XFRSIZ =          // XFRSIZ
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t OTG_DOEPTSIZ0_PKTCNT = 0x80000; // PKTCNT
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPTSIZ0_STUPCNT =         // STUPCNT
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_DOEPDMA0_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_DOEPCTL1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPCTL1_MPSIZ =                      // MPSIZ
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_DOEPCTL1_USBAEP = 0x8000;             // USBAEP
    static constexpr uint32_t OTG_DOEPCTL1_EONUM_DPIP = 0x10000;        // EONUM_DPIP
    static constexpr uint32_t OTG_DOEPCTL1_NAKSTS = 0x20000;            // NAKSTS
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPCTL1_EPTYP =                      // EPTYP
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_DOEPCTL1_SNPM = 0x100000;             // SNPM
    static constexpr uint32_t OTG_DOEPCTL1_STALL = 0x200000;            // STALL
    static constexpr uint32_t OTG_DOEPCTL1_CNAK = 0x4000000;            // CNAK
    static constexpr uint32_t OTG_DOEPCTL1_SNAK = 0x8000000;            // SNAK
    static constexpr uint32_t OTG_DOEPCTL1_SD0PID_SEVNFRM = 0x10000000; // SD0PID_SEVNFRM
    static constexpr uint32_t OTG_DOEPCTL1_SD1PID_SODDFRM = 0x20000000; // SD1PID_SODDFRM
    static constexpr uint32_t OTG_DOEPCTL1_EPDIS = 0x40000000;          // EPDIS
    static constexpr uint32_t OTG_DOEPCTL1_EPENA = 0x80000000;          // EPENA

    static constexpr uint32_t OTG_DOEPINT1_RESET_VALUE = 0x80;
    static constexpr uint32_t OTG_DOEPINT1_XFRC = 0x1;        // XFRC
    static constexpr uint32_t OTG_DOEPINT1_EPDISD = 0x2;      // EPDISD
    static constexpr uint32_t OTG_DOEPINT1_AHBERR = 0x4;      // AHBERR
    static constexpr uint32_t OTG_DOEPINT1_STUP = 0x8;        // STUP
    static constexpr uint32_t OTG_DOEPINT1_OTEPDIS = 0x10;    // OTEPDIS
    static constexpr uint32_t OTG_DOEPINT1_STSPHSRX = 0x20;   // STSPHSRX
    static constexpr uint32_t OTG_DOEPINT1_B2BSTUP = 0x40;    // B2BSTUP
    static constexpr uint32_t OTG_DOEPINT1_OUTPKTERR = 0x100; // OUTPKTERR
    static constexpr uint32_t OTG_DOEPINT1_BNA = 0x200;       // BNA
    static constexpr uint32_t OTG_DOEPINT1_BERR = 0x1000;     // BERR
    static constexpr uint32_t OTG_DOEPINT1_NAK = 0x2000;      // NAK
    static constexpr uint32_t OTG_DOEPINT1_NYET = 0x4000;     // NYET
    static constexpr uint32_t OTG_DOEPINT1_STPKTRX = 0x8000;  // STPKTRX

    static constexpr uint32_t OTG_DOEPTSIZ1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPTSIZ1_XFRSIZ =           // XFRSIZ
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPTSIZ1_PKTCNT =           // PKTCNT
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPTSIZ1_RXDPID_STUPCNT =   // RXDPID_STUPCNT
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_DOEPDMA1_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_DOEPCTL2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPCTL2_MPSIZ =                      // MPSIZ
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_DOEPCTL2_USBAEP = 0x8000;             // USBAEP
    static constexpr uint32_t OTG_DOEPCTL2_EONUM_DPIP = 0x10000;        // EONUM_DPIP
    static constexpr uint32_t OTG_DOEPCTL2_NAKSTS = 0x20000;            // NAKSTS
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPCTL2_EPTYP =                      // EPTYP
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_DOEPCTL2_SNPM = 0x100000;             // SNPM
    static constexpr uint32_t OTG_DOEPCTL2_STALL = 0x200000;            // STALL
    static constexpr uint32_t OTG_DOEPCTL2_CNAK = 0x4000000;            // CNAK
    static constexpr uint32_t OTG_DOEPCTL2_SNAK = 0x8000000;            // SNAK
    static constexpr uint32_t OTG_DOEPCTL2_SD0PID_SEVNFRM = 0x10000000; // SD0PID_SEVNFRM
    static constexpr uint32_t OTG_DOEPCTL2_SD1PID_SODDFRM = 0x20000000; // SD1PID_SODDFRM
    static constexpr uint32_t OTG_DOEPCTL2_EPDIS = 0x40000000;          // EPDIS
    static constexpr uint32_t OTG_DOEPCTL2_EPENA = 0x80000000;          // EPENA

    static constexpr uint32_t OTG_DOEPINT2_RESET_VALUE = 0x80;
    static constexpr uint32_t OTG_DOEPINT2_XFRC = 0x1;        // XFRC
    static constexpr uint32_t OTG_DOEPINT2_EPDISD = 0x2;      // EPDISD
    static constexpr uint32_t OTG_DOEPINT2_AHBERR = 0x4;      // AHBERR
    static constexpr uint32_t OTG_DOEPINT2_STUP = 0x8;        // STUP
    static constexpr uint32_t OTG_DOEPINT2_OTEPDIS = 0x10;    // OTEPDIS
    static constexpr uint32_t OTG_DOEPINT2_STSPHSRX = 0x20;   // STSPHSRX
    static constexpr uint32_t OTG_DOEPINT2_B2BSTUP = 0x40;    // B2BSTUP
    static constexpr uint32_t OTG_DOEPINT2_OUTPKTERR = 0x100; // OUTPKTERR
    static constexpr uint32_t OTG_DOEPINT2_BNA = 0x200;       // BNA
    static constexpr uint32_t OTG_DOEPINT2_BERR = 0x1000;     // BERR
    static constexpr uint32_t OTG_DOEPINT2_NAK = 0x2000;      // NAK
    static constexpr uint32_t OTG_DOEPINT2_NYET = 0x4000;     // NYET
    static constexpr uint32_t OTG_DOEPINT2_STPKTRX = 0x8000;  // STPKTRX

    static constexpr uint32_t OTG_DOEPTSIZ2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPTSIZ2_XFRSIZ =           // XFRSIZ
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPTSIZ2_PKTCNT =           // PKTCNT
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPTSIZ2_RXDPID_STUPCNT =   // RXDPID_STUPCNT
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_DOEPDMA2_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_DOEPCTL3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPCTL3_MPSIZ =                      // MPSIZ
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_DOEPCTL3_USBAEP = 0x8000;             // USBAEP
    static constexpr uint32_t OTG_DOEPCTL3_EONUM_DPIP = 0x10000;        // EONUM_DPIP
    static constexpr uint32_t OTG_DOEPCTL3_NAKSTS = 0x20000;            // NAKSTS
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPCTL3_EPTYP =                      // EPTYP
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_DOEPCTL3_SNPM = 0x100000;             // SNPM
    static constexpr uint32_t OTG_DOEPCTL3_STALL = 0x200000;            // STALL
    static constexpr uint32_t OTG_DOEPCTL3_CNAK = 0x4000000;            // CNAK
    static constexpr uint32_t OTG_DOEPCTL3_SNAK = 0x8000000;            // SNAK
    static constexpr uint32_t OTG_DOEPCTL3_SD0PID_SEVNFRM = 0x10000000; // SD0PID_SEVNFRM
    static constexpr uint32_t OTG_DOEPCTL3_SD1PID_SODDFRM = 0x20000000; // SD1PID_SODDFRM
    static constexpr uint32_t OTG_DOEPCTL3_EPDIS = 0x40000000;          // EPDIS
    static constexpr uint32_t OTG_DOEPCTL3_EPENA = 0x80000000;          // EPENA

    static constexpr uint32_t OTG_DOEPINT3_RESET_VALUE = 0x80;
    static constexpr uint32_t OTG_DOEPINT3_XFRC = 0x1;        // XFRC
    static constexpr uint32_t OTG_DOEPINT3_EPDISD = 0x2;      // EPDISD
    static constexpr uint32_t OTG_DOEPINT3_AHBERR = 0x4;      // AHBERR
    static constexpr uint32_t OTG_DOEPINT3_STUP = 0x8;        // STUP
    static constexpr uint32_t OTG_DOEPINT3_OTEPDIS = 0x10;    // OTEPDIS
    static constexpr uint32_t OTG_DOEPINT3_STSPHSRX = 0x20;   // STSPHSRX
    static constexpr uint32_t OTG_DOEPINT3_B2BSTUP = 0x40;    // B2BSTUP
    static constexpr uint32_t OTG_DOEPINT3_OUTPKTERR = 0x100; // OUTPKTERR
    static constexpr uint32_t OTG_DOEPINT3_BNA = 0x200;       // BNA
    static constexpr uint32_t OTG_DOEPINT3_BERR = 0x1000;     // BERR
    static constexpr uint32_t OTG_DOEPINT3_NAK = 0x2000;      // NAK
    static constexpr uint32_t OTG_DOEPINT3_NYET = 0x4000;     // NYET
    static constexpr uint32_t OTG_DOEPINT3_STPKTRX = 0x8000;  // STPKTRX

    static constexpr uint32_t OTG_DOEPTSIZ3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPTSIZ3_XFRSIZ =           // XFRSIZ
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPTSIZ3_PKTCNT =           // PKTCNT
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPTSIZ3_RXDPID_STUPCNT =   // RXDPID_STUPCNT
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_DOEPDMA3_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_DOEPCTL4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPCTL4_MPSIZ =                      // MPSIZ
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_DOEPCTL4_USBAEP = 0x8000;             // USBAEP
    static constexpr uint32_t OTG_DOEPCTL4_EONUM_DPIP = 0x10000;        // EONUM_DPIP
    static constexpr uint32_t OTG_DOEPCTL4_NAKSTS = 0x20000;            // NAKSTS
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPCTL4_EPTYP =                      // EPTYP
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_DOEPCTL4_SNPM = 0x100000;             // SNPM
    static constexpr uint32_t OTG_DOEPCTL4_STALL = 0x200000;            // STALL
    static constexpr uint32_t OTG_DOEPCTL4_CNAK = 0x4000000;            // CNAK
    static constexpr uint32_t OTG_DOEPCTL4_SNAK = 0x8000000;            // SNAK
    static constexpr uint32_t OTG_DOEPCTL4_SD0PID_SEVNFRM = 0x10000000; // SD0PID_SEVNFRM
    static constexpr uint32_t OTG_DOEPCTL4_SD1PID_SODDFRM = 0x20000000; // SD1PID_SODDFRM
    static constexpr uint32_t OTG_DOEPCTL4_EPDIS = 0x40000000;          // EPDIS
    static constexpr uint32_t OTG_DOEPCTL4_EPENA = 0x80000000;          // EPENA

    static constexpr uint32_t OTG_DOEPINT4_RESET_VALUE = 0x80;
    static constexpr uint32_t OTG_DOEPINT4_XFRC = 0x1;        // XFRC
    static constexpr uint32_t OTG_DOEPINT4_EPDISD = 0x2;      // EPDISD
    static constexpr uint32_t OTG_DOEPINT4_AHBERR = 0x4;      // AHBERR
    static constexpr uint32_t OTG_DOEPINT4_STUP = 0x8;        // STUP
    static constexpr uint32_t OTG_DOEPINT4_OTEPDIS = 0x10;    // OTEPDIS
    static constexpr uint32_t OTG_DOEPINT4_STSPHSRX = 0x20;   // STSPHSRX
    static constexpr uint32_t OTG_DOEPINT4_B2BSTUP = 0x40;    // B2BSTUP
    static constexpr uint32_t OTG_DOEPINT4_OUTPKTERR = 0x100; // OUTPKTERR
    static constexpr uint32_t OTG_DOEPINT4_BNA = 0x200;       // BNA
    static constexpr uint32_t OTG_DOEPINT4_BERR = 0x1000;     // BERR
    static constexpr uint32_t OTG_DOEPINT4_NAK = 0x2000;      // NAK
    static constexpr uint32_t OTG_DOEPINT4_NYET = 0x4000;     // NYET
    static constexpr uint32_t OTG_DOEPINT4_STPKTRX = 0x8000;  // STPKTRX

    static constexpr uint32_t OTG_DOEPTSIZ4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPTSIZ4_XFRSIZ =           // XFRSIZ
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPTSIZ4_PKTCNT =           // PKTCNT
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPTSIZ4_RXDPID_STUPCNT =   // RXDPID_STUPCNT
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_DOEPDMA4_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_DOEPCTL5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPCTL5_MPSIZ =                      // MPSIZ
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_DOEPCTL5_USBAEP = 0x8000;             // USBAEP
    static constexpr uint32_t OTG_DOEPCTL5_EONUM_DPIP = 0x10000;        // EONUM_DPIP
    static constexpr uint32_t OTG_DOEPCTL5_NAKSTS = 0x20000;            // NAKSTS
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPCTL5_EPTYP =                      // EPTYP
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_DOEPCTL5_SNPM = 0x100000;             // SNPM
    static constexpr uint32_t OTG_DOEPCTL5_STALL = 0x200000;            // STALL
    static constexpr uint32_t OTG_DOEPCTL5_CNAK = 0x4000000;            // CNAK
    static constexpr uint32_t OTG_DOEPCTL5_SNAK = 0x8000000;            // SNAK
    static constexpr uint32_t OTG_DOEPCTL5_SD0PID_SEVNFRM = 0x10000000; // SD0PID_SEVNFRM
    static constexpr uint32_t OTG_DOEPCTL5_SD1PID_SODDFRM = 0x20000000; // SD1PID_SODDFRM
    static constexpr uint32_t OTG_DOEPCTL5_EPDIS = 0x40000000;          // EPDIS
    static constexpr uint32_t OTG_DOEPCTL5_EPENA = 0x80000000;          // EPENA

    static constexpr uint32_t OTG_DOEPINT5_RESET_VALUE = 0x80;
    static constexpr uint32_t OTG_DOEPINT5_XFRC = 0x1;        // XFRC
    static constexpr uint32_t OTG_DOEPINT5_EPDISD = 0x2;      // EPDISD
    static constexpr uint32_t OTG_DOEPINT5_AHBERR = 0x4;      // AHBERR
    static constexpr uint32_t OTG_DOEPINT5_STUP = 0x8;        // STUP
    static constexpr uint32_t OTG_DOEPINT5_OTEPDIS = 0x10;    // OTEPDIS
    static constexpr uint32_t OTG_DOEPINT5_STSPHSRX = 0x20;   // STSPHSRX
    static constexpr uint32_t OTG_DOEPINT5_B2BSTUP = 0x40;    // B2BSTUP
    static constexpr uint32_t OTG_DOEPINT5_OUTPKTERR = 0x100; // OUTPKTERR
    static constexpr uint32_t OTG_DOEPINT5_BNA = 0x200;       // BNA
    static constexpr uint32_t OTG_DOEPINT5_BERR = 0x1000;     // BERR
    static constexpr uint32_t OTG_DOEPINT5_NAK = 0x2000;      // NAK
    static constexpr uint32_t OTG_DOEPINT5_NYET = 0x4000;     // NYET
    static constexpr uint32_t OTG_DOEPINT5_STPKTRX = 0x8000;  // STPKTRX

    static constexpr uint32_t OTG_DOEPTSIZ5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPTSIZ5_XFRSIZ =           // XFRSIZ
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPTSIZ5_PKTCNT =           // PKTCNT
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPTSIZ5_RXDPID_STUPCNT =   // RXDPID_STUPCNT
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_DOEPDMA5_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_DOEPCTL6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPCTL6_MPSIZ =                      // MPSIZ
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_DOEPCTL6_USBAEP = 0x8000;             // USBAEP
    static constexpr uint32_t OTG_DOEPCTL6_EONUM_DPIP = 0x10000;        // EONUM_DPIP
    static constexpr uint32_t OTG_DOEPCTL6_NAKSTS = 0x20000;            // NAKSTS
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPCTL6_EPTYP =                      // EPTYP
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_DOEPCTL6_SNPM = 0x100000;             // SNPM
    static constexpr uint32_t OTG_DOEPCTL6_STALL = 0x200000;            // STALL
    static constexpr uint32_t OTG_DOEPCTL6_CNAK = 0x4000000;            // CNAK
    static constexpr uint32_t OTG_DOEPCTL6_SNAK = 0x8000000;            // SNAK
    static constexpr uint32_t OTG_DOEPCTL6_SD0PID_SEVNFRM = 0x10000000; // SD0PID_SEVNFRM
    static constexpr uint32_t OTG_DOEPCTL6_SD1PID_SODDFRM = 0x20000000; // SD1PID_SODDFRM
    static constexpr uint32_t OTG_DOEPCTL6_EPDIS = 0x40000000;          // EPDIS
    static constexpr uint32_t OTG_DOEPCTL6_EPENA = 0x80000000;          // EPENA

    static constexpr uint32_t OTG_DOEPINT6_RESET_VALUE = 0x80;
    static constexpr uint32_t OTG_DOEPINT6_XFRC = 0x1;        // XFRC
    static constexpr uint32_t OTG_DOEPINT6_EPDISD = 0x2;      // EPDISD
    static constexpr uint32_t OTG_DOEPINT6_AHBERR = 0x4;      // AHBERR
    static constexpr uint32_t OTG_DOEPINT6_STUP = 0x8;        // STUP
    static constexpr uint32_t OTG_DOEPINT6_OTEPDIS = 0x10;    // OTEPDIS
    static constexpr uint32_t OTG_DOEPINT6_STSPHSRX = 0x20;   // STSPHSRX
    static constexpr uint32_t OTG_DOEPINT6_B2BSTUP = 0x40;    // B2BSTUP
    static constexpr uint32_t OTG_DOEPINT6_OUTPKTERR = 0x100; // OUTPKTERR
    static constexpr uint32_t OTG_DOEPINT6_BNA = 0x200;       // BNA
    static constexpr uint32_t OTG_DOEPINT6_BERR = 0x1000;     // BERR
    static constexpr uint32_t OTG_DOEPINT6_NAK = 0x2000;      // NAK
    static constexpr uint32_t OTG_DOEPINT6_NYET = 0x4000;     // NYET
    static constexpr uint32_t OTG_DOEPINT6_STPKTRX = 0x8000;  // STPKTRX

    static constexpr uint32_t OTG_DOEPTSIZ6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPTSIZ6_XFRSIZ =           // XFRSIZ
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPTSIZ6_PKTCNT =           // PKTCNT
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPTSIZ6_RXDPID_STUPCNT =   // RXDPID_STUPCNT
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_DOEPDMA6_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_DOEPCTL7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPCTL7_MPSIZ =                      // MPSIZ
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_DOEPCTL7_USBAEP = 0x8000;             // USBAEP
    static constexpr uint32_t OTG_DOEPCTL7_EONUM_DPIP = 0x10000;        // EONUM_DPIP
    static constexpr uint32_t OTG_DOEPCTL7_NAKSTS = 0x20000;            // NAKSTS
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPCTL7_EPTYP =                      // EPTYP
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_DOEPCTL7_SNPM = 0x100000;             // SNPM
    static constexpr uint32_t OTG_DOEPCTL7_STALL = 0x200000;            // STALL
    static constexpr uint32_t OTG_DOEPCTL7_CNAK = 0x4000000;            // CNAK
    static constexpr uint32_t OTG_DOEPCTL7_SNAK = 0x8000000;            // SNAK
    static constexpr uint32_t OTG_DOEPCTL7_SD0PID_SEVNFRM = 0x10000000; // SD0PID_SEVNFRM
    static constexpr uint32_t OTG_DOEPCTL7_SD1PID_SODDFRM = 0x20000000; // SD1PID_SODDFRM
    static constexpr uint32_t OTG_DOEPCTL7_EPDIS = 0x40000000;          // EPDIS
    static constexpr uint32_t OTG_DOEPCTL7_EPENA = 0x80000000;          // EPENA

    static constexpr uint32_t OTG_DOEPINT7_RESET_VALUE = 0x80;
    static constexpr uint32_t OTG_DOEPINT7_XFRC = 0x1;        // XFRC
    static constexpr uint32_t OTG_DOEPINT7_EPDISD = 0x2;      // EPDISD
    static constexpr uint32_t OTG_DOEPINT7_AHBERR = 0x4;      // AHBERR
    static constexpr uint32_t OTG_DOEPINT7_STUP = 0x8;        // STUP
    static constexpr uint32_t OTG_DOEPINT7_OTEPDIS = 0x10;    // OTEPDIS
    static constexpr uint32_t OTG_DOEPINT7_STSPHSRX = 0x20;   // STSPHSRX
    static constexpr uint32_t OTG_DOEPINT7_B2BSTUP = 0x40;    // B2BSTUP
    static constexpr uint32_t OTG_DOEPINT7_OUTPKTERR = 0x100; // OUTPKTERR
    static constexpr uint32_t OTG_DOEPINT7_BNA = 0x200;       // BNA
    static constexpr uint32_t OTG_DOEPINT7_BERR = 0x1000;     // BERR
    static constexpr uint32_t OTG_DOEPINT7_NAK = 0x2000;      // NAK
    static constexpr uint32_t OTG_DOEPINT7_NYET = 0x4000;     // NYET
    static constexpr uint32_t OTG_DOEPINT7_STPKTRX = 0x8000;  // STPKTRX

    static constexpr uint32_t OTG_DOEPTSIZ7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPTSIZ7_XFRSIZ =           // XFRSIZ
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPTSIZ7_PKTCNT =           // PKTCNT
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPTSIZ7_RXDPID_STUPCNT =   // RXDPID_STUPCNT
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_DOEPDMA7_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_DOEPCTL8_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPCTL8_MPSIZ =                      // MPSIZ
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t OTG_DOEPCTL8_USBAEP = 0x8000;             // USBAEP
    static constexpr uint32_t OTG_DOEPCTL8_EONUM_DPIP = 0x10000;        // EONUM_DPIP
    static constexpr uint32_t OTG_DOEPCTL8_NAKSTS = 0x20000;            // NAKSTS
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPCTL8_EPTYP =                      // EPTYP
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t OTG_DOEPCTL8_SNPM = 0x100000;             // SNPM
    static constexpr uint32_t OTG_DOEPCTL8_STALL = 0x200000;            // STALL
    static constexpr uint32_t OTG_DOEPCTL8_CNAK = 0x4000000;            // CNAK
    static constexpr uint32_t OTG_DOEPCTL8_SNAK = 0x8000000;            // SNAK
    static constexpr uint32_t OTG_DOEPCTL8_SD0PID_SEVNFRM = 0x10000000; // SD0PID_SEVNFRM
    static constexpr uint32_t OTG_DOEPCTL8_SD1PID_SODDFRM = 0x20000000; // SD1PID_SODDFRM
    static constexpr uint32_t OTG_DOEPCTL8_EPDIS = 0x40000000;          // EPDIS
    static constexpr uint32_t OTG_DOEPCTL8_EPENA = 0x80000000;          // EPENA

    static constexpr uint32_t OTG_DOEPINT8_RESET_VALUE = 0x80;
    static constexpr uint32_t OTG_DOEPINT8_XFRC = 0x1;        // XFRC
    static constexpr uint32_t OTG_DOEPINT8_EPDISD = 0x2;      // EPDISD
    static constexpr uint32_t OTG_DOEPINT8_AHBERR = 0x4;      // AHBERR
    static constexpr uint32_t OTG_DOEPINT8_STUP = 0x8;        // STUP
    static constexpr uint32_t OTG_DOEPINT8_OTEPDIS = 0x10;    // OTEPDIS
    static constexpr uint32_t OTG_DOEPINT8_STSPHSRX = 0x20;   // STSPHSRX
    static constexpr uint32_t OTG_DOEPINT8_B2BSTUP = 0x40;    // B2BSTUP
    static constexpr uint32_t OTG_DOEPINT8_OUTPKTERR = 0x100; // OUTPKTERR
    static constexpr uint32_t OTG_DOEPINT8_BNA = 0x200;       // BNA
    static constexpr uint32_t OTG_DOEPINT8_BERR = 0x1000;     // BERR
    static constexpr uint32_t OTG_DOEPINT8_NAK = 0x2000;      // NAK
    static constexpr uint32_t OTG_DOEPINT8_NYET = 0x4000;     // NYET
    static constexpr uint32_t OTG_DOEPINT8_STPKTRX = 0x8000;  // STPKTRX

    static constexpr uint32_t OTG_DOEPTSIZ8_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPTSIZ8_XFRSIZ =           // XFRSIZ
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPTSIZ8_PKTCNT =           // PKTCNT
        bit_field_t<19, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OTG_DOEPTSIZ8_RXDPID_STUPCNT =   // RXDPID_STUPCNT
        bit_field_t<29, 0x3>::value<X>();

    static constexpr uint32_t OTG_DOEPDMA8_RESET_VALUE = 0x0;

    static constexpr uint32_t OTG_PCGCCTL_RESET_VALUE = 0x200b8000;
    static constexpr uint32_t OTG_PCGCCTL_STPPCLK = 0x1;   // STPPCLK
    static constexpr uint32_t OTG_PCGCCTL_GATEHCLK = 0x2;  // GATEHCLK
    static constexpr uint32_t OTG_PCGCCTL_PHYSUSP = 0x10;  // PHYSUSP
    static constexpr uint32_t OTG_PCGCCTL_ENL1GTG = 0x20;  // ENL1GTG
    static constexpr uint32_t OTG_PCGCCTL_PHYSLEEP = 0x40; // PHYSLEEP
    static constexpr uint32_t OTG_PCGCCTL_SUSP = 0x80;     // SUSP
};


template<>
struct peripheral_t<STM32MP15xxx, OTGHSFS1>
{
    typedef stm32mp15xxx_otghsfs1_t T;
    static T& V;
};

using otghsfs1_t = peripheral_t<mcu_svd, OTGHSFS1>;

