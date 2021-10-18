#pragma once

////
//
//      STM32U5 OTG_FS peripherals
//
///

// OTG_FS: OTG_FS

struct stm32u5xx_otg_fs_t
{
    volatile uint32_t GOTGCTL; // The GOTGCTL register controls the behavior and reflects the status of the OTG function of the core.
    volatile uint32_t GOTGINT; // The application reads this register whenever there is an OTG interrupt and clears the bits in this register to clear the OTG interrupt.
    volatile uint32_t GAHBCFG; // This register can be used to configure the core after power-on or a change in mode. This register mainly contains AHB system-related configuration parameters. Do not change this register after the initial programming. The application must program this register before starting any transactions on either the AHB or the USB.
    volatile uint32_t GUSBCFG; // This register can be used to configure the core after power-on or a changing to host mode or device mode. It contains USB and USB-PHY related configuration parameters. The application must program this register before starting any transactions on either the AHB or the USB. Do not make changes to this register after the initial programming.
    volatile uint32_t GRSTCTL; // The application uses this register to reset various hardware features inside the core.
    volatile uint32_t GINTSTS; // This register interrupts the application for system-level events in the current mode (device mode or host mode). Some of the bits in this register are valid only in host mode, while others are valid in device mode only. This register also indicates the current mode. To clear the interrupt status bits of the rc_w1 type, the application must write 1 into the bit. The FIFO status interrupts are read-only; once software reads from or writes to the FIFO while servicing these interrupts, FIFO interrupt conditions are cleared automatically. The application must clear the GINTSTS register at initialization before unmasking the interrupt bit to avoid any interrupts generated prior to initialization.
    volatile uint32_t GINTMSK; // This register works with the core interrupt register to interrupt the application. When an interrupt bit is masked, the interrupt associated with that bit is not generated. However, the core interrupt (GINTSTS) register bit corresponding to that interrupt is still set.
    volatile uint32_t GRXSTSR_DEVICE; // This description is for register GRXSTSR in Device mode. A read to the receive status debug read register returns the contents of the top of the receive FIFO. The core ignores the receive status read when the receive FIFO is empty and returns a value of 0x00000000.
    volatile uint32_t GRXSTSP_DEVICE; // This description is for register GRXSTSP in Device mode. Similarly to GRXSTSR (receive status debug read register) where a read returns the contents of the top of the receive FIFO, a read to GRXSTSP (receive status read and pop register) additionally pops the top data entry out of the Rx FIFO. The core ignores the receive status pop/read when the receive FIFO is empty and returns a value of 0x00000000. The application must only pop the receive status FIFO when the receive FIFO non-empty bit of the core interrupt register (RXFLVL bit in GINTSTS) is asserted.
    volatile uint32_t GRXFSIZ; // The application can program the RAM size that must be allocated to the Rx FIFO.
    volatile uint32_t HNPTXFSIZ; // Host mode
    volatile uint32_t HNPTXSTS; // In device mode, this register is not valid. This read-only register contains the free space information for the non-periodic Tx FIFO and the non-periodic transmit request queue.
    reserved_t<0x2> _0x30;
    volatile uint32_t GCCFG; // OTG general core configuration register
    volatile uint32_t CID; // This is a register containing the Product ID as reset value.
    reserved_t<0x5> _0x40;
    volatile uint32_t GLPMCFG; // OTG core LPM configuration register
    reserved_t<0x2a> _0x58;
    volatile uint32_t HPTXFSIZ; // OTG host periodic transmit FIFO size register
    volatile uint32_t DIEPTXF1; // OTG device IN endpoint transmit FIFO 1 size register
    volatile uint32_t DIEPTXF2; // OTG device IN endpoint transmit FIFO 2 size register
    volatile uint32_t DIEPTXF3; // OTG device IN endpoint transmit FIFO 3 size register
    volatile uint32_t DIEPTXF4; // OTG device IN endpoint transmit FIFO 4 size register
    volatile uint32_t DIEPTXF5; // OTG device IN endpoint transmit FIFO 5 size register
    reserved_t<0xba> _0x118;
    volatile uint32_t HCFG; // This register configures the core after power-on. Do not make changes to this register after initializing the host.
    volatile uint32_t HFIR; // This register stores the frame interval information for the current speed to which the OTG controller has enumerated.
    volatile uint32_t HFNUM; // This register indicates the current frame number. It also indicates the time remaining (in terms of the number of PHY clocks) in the current frame.
    reserved_t<0x1> _0x40c;
    volatile uint32_t HPTXSTS; // This read-only register contains the free space information for the periodic Tx FIFO and the periodic transmit request queue.
    volatile uint32_t HAINT; // When a significant event occurs on a channel, the host all channels interrupt register interrupts the application using the host channels interrupt bit of the core interrupt register (HCINT bit in GINTSTS). This is shown in Figure724. There is one interrupt bit per channel, up to a maximum of 16 bits. Bits in this register are set and cleared when the application sets and clears bits in the corresponding host channel-x interrupt register.
    volatile uint32_t HAINTMSK; // The host all channel interrupt mask register works with the host all channel interrupt register to interrupt the application when an event occurs on a channel. There is one interrupt mask bit per channel, up to a maximum of 16 bits.
    reserved_t<0x9> _0x41c;
    volatile uint32_t HPRT; // This register is available only in host mode. Currently, the OTG host supports only one port. A single register holds USB port-related information such as USB reset, enable, suspend, resume, connect status, and test mode for each port. It is shown in Figure724. The rc_w1 bits in this register can trigger an interrupt to the application through the host port interrupt bit of the core interrupt register (HPRTINT bit in GINTSTS). On a port interrupt, the application must read this register and clear the bit that caused the interrupt. For the rc_w1 bits, the application must write a 1 to the bit to clear the interrupt.
    reserved_t<0x2f> _0x444;
    volatile uint32_t HCCHAR0; // OTG host channel 0 characteristics register
    reserved_t<0x1> _0x504;
    volatile uint32_t HCINT0; // This register indicates the status of a channel with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the host channels interrupt bit in the core interrupt register (HCINT bit in GINTSTS) is set. Before the application can read this register, it must first read the host all channels interrupt (HAINT) register to get the exact channel number for the host channel-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the HAINT and GINTSTS registers.
    volatile uint32_t HCINTMSK0; // This register reflects the mask for each channel status described in the previous section.
    volatile uint32_t HCTSIZ0; // OTG host channel 0 transfer size register
    reserved_t<0x3> _0x514;
    volatile uint32_t HCCHAR1; // OTG host channel 1 characteristics register
    reserved_t<0x1> _0x524;
    volatile uint32_t HCINT1_DEVICE; // This register indicates the status of a channel with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the host channels interrupt bit in the core interrupt register (HCINT bit in GINTSTS) is set. Before the application can read this register, it must first read the host all channels interrupt (HAINT) register to get the exact channel number for the host channel-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the HAINT and GINTSTS registers.
    volatile uint32_t HCINTMSK1; // This register reflects the mask for each channel status described in the previous section.
    volatile uint32_t HCTSIZ1; // OTG host channel 1 transfer size register
    reserved_t<0x3> _0x534;
    volatile uint32_t HCCHAR2; // OTG host channel 2 characteristics register
    reserved_t<0x1> _0x544;
    volatile uint32_t HCINT2; // This register indicates the status of a channel with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the host channels interrupt bit in the core interrupt register (HCINT bit in GINTSTS) is set. Before the application can read this register, it must first read the host all channels interrupt (HAINT) register to get the exact channel number for the host channel-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the HAINT and GINTSTS registers.
    volatile uint32_t HCINTMSK2; // This register reflects the mask for each channel status described in the previous section.
    volatile uint32_t HCTSIZ2; // OTG host channel 2 transfer size register
    reserved_t<0x3> _0x554;
    volatile uint32_t HCCHAR3; // OTG host channel 3 characteristics register
    reserved_t<0x1> _0x564;
    volatile uint32_t HCINT3; // This register indicates the status of a channel with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the host channels interrupt bit in the core interrupt register (HCINT bit in GINTSTS) is set. Before the application can read this register, it must first read the host all channels interrupt (HAINT) register to get the exact channel number for the host channel-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the HAINT and GINTSTS registers.
    volatile uint32_t HCINTMSK3; // This register reflects the mask for each channel status described in the previous section.
    volatile uint32_t HCTSIZ3; // OTG host channel 3 transfer size register
    reserved_t<0x3> _0x574;
    volatile uint32_t HCCHAR4; // OTG host channel 4 characteristics register
    reserved_t<0x1> _0x584;
    volatile uint32_t HCINT4; // This register indicates the status of a channel with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the host channels interrupt bit in the core interrupt register (HCINT bit in GINTSTS) is set. Before the application can read this register, it must first read the host all channels interrupt (HAINT) register to get the exact channel number for the host channel-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the HAINT and GINTSTS registers.
    volatile uint32_t HCINTMSK4; // This register reflects the mask for each channel status described in the previous section.
    volatile uint32_t HCTSIZ4; // OTG host channel 4 transfer size register
    reserved_t<0x3> _0x594;
    volatile uint32_t HCCHAR5; // OTG host channel 5 characteristics register
    reserved_t<0x1> _0x5a4;
    volatile uint32_t HCINT5; // This register indicates the status of a channel with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the host channels interrupt bit in the core interrupt register (HCINT bit in GINTSTS) is set. Before the application can read this register, it must first read the host all channels interrupt (HAINT) register to get the exact channel number for the host channel-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the HAINT and GINTSTS registers.
    volatile uint32_t HCINTMSK5; // This register reflects the mask for each channel status described in the previous section.
    volatile uint32_t HCTSIZ5; // OTG host channel 5 transfer size register
    reserved_t<0x3> _0x5b4;
    volatile uint32_t HCCHAR6; // OTG host channel 6 characteristics register
    reserved_t<0x1> _0x5c4;
    volatile uint32_t HCINT6; // This register indicates the status of a channel with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the host channels interrupt bit in the core interrupt register (HCINT bit in GINTSTS) is set. Before the application can read this register, it must first read the host all channels interrupt (HAINT) register to get the exact channel number for the host channel-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the HAINT and GINTSTS registers.
    volatile uint32_t HCINTMSK6; // This register reflects the mask for each channel status described in the previous section.
    volatile uint32_t HCTSIZ6; // OTG host channel 6 transfer size register
    reserved_t<0x3> _0x5d4;
    volatile uint32_t HCCHAR7; // OTG host channel 7 characteristics register
    reserved_t<0x1> _0x5e4;
    volatile uint32_t HCINT7; // This register indicates the status of a channel with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the host channels interrupt bit in the core interrupt register (HCINT bit in GINTSTS) is set. Before the application can read this register, it must first read the host all channels interrupt (HAINT) register to get the exact channel number for the host channel-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the HAINT and GINTSTS registers.
    volatile uint32_t HCINTMSK7; // This register reflects the mask for each channel status described in the previous section.
    volatile uint32_t HCTSIZ7; // OTG host channel 7 transfer size register
    reserved_t<0x3> _0x5f4;
    volatile uint32_t HCCHAR8; // OTG host channel 8 characteristics register
    reserved_t<0x1> _0x604;
    volatile uint32_t HCINT8; // This register indicates the status of a channel with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the host channels interrupt bit in the core interrupt register (HCINT bit in GINTSTS) is set. Before the application can read this register, it must first read the host all channels interrupt (HAINT) register to get the exact channel number for the host channel-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the HAINT and GINTSTS registers.
    volatile uint32_t HCINTMSK8; // This register reflects the mask for each channel status described in the previous section.
    volatile uint32_t HCTSIZ8; // OTG host channel 8 transfer size register
    reserved_t<0x3> _0x614;
    volatile uint32_t HCCHAR9; // OTG host channel 9 characteristics register
    reserved_t<0x1> _0x624;
    volatile uint32_t HCINT9; // This register indicates the status of a channel with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the host channels interrupt bit in the core interrupt register (HCINT bit in GINTSTS) is set. Before the application can read this register, it must first read the host all channels interrupt (HAINT) register to get the exact channel number for the host channel-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the HAINT and GINTSTS registers.
    volatile uint32_t HCINTMSK9; // This register reflects the mask for each channel status described in the previous section.
    volatile uint32_t HCTSIZ9; // OTG host channel 9 transfer size register
    reserved_t<0x3> _0x634;
    volatile uint32_t HCCHAR10; // OTG host channel 10 characteristics register
    reserved_t<0x1> _0x644;
    volatile uint32_t HCINT10; // This register indicates the status of a channel with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the host channels interrupt bit in the core interrupt register (HCINT bit in GINTSTS) is set. Before the application can read this register, it must first read the host all channels interrupt (HAINT) register to get the exact channel number for the host channel-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the HAINT and GINTSTS registers.
    volatile uint32_t HCINTMSK10; // This register reflects the mask for each channel status described in the previous section.
    volatile uint32_t HCTSIZ10; // OTG host channel 10 transfer size register
    reserved_t<0x3> _0x654;
    volatile uint32_t HCCHAR11; // OTG host channel 11 characteristics register
    reserved_t<0x1> _0x664;
    volatile uint32_t HCINT11; // This register indicates the status of a channel with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the host channels interrupt bit in the core interrupt register (HCINT bit in GINTSTS) is set. Before the application can read this register, it must first read the host all channels interrupt (HAINT) register to get the exact channel number for the host channel-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the HAINT and GINTSTS registers.
    volatile uint32_t HCINTMSK11; // This register reflects the mask for each channel status described in the previous section.
    volatile uint32_t HCTSIZ11; // OTG host channel 11 transfer size register
    reserved_t<0x63> _0x674;
    volatile uint32_t DCFG; // This register configures the core in device mode after power-on or after certain control commands or enumeration. Do not make changes to this register after initial programming.
    volatile uint32_t DCTL; // OTG device control register
    volatile uint32_t DSTS; // This register indicates the status of the core with respect to USB-related events. It must be read on interrupts from the device all interrupts (DAINT) register.
    reserved_t<0x1> _0x80c;
    volatile uint32_t DIEPMSK; // This register works with each of the DIEPINTx registers for all endpoints to generate an interrupt per IN endpoint. The IN endpoint interrupt for a specific status in the DIEPINTx register can be masked by writing to the corresponding bit in this register. Status bits are masked by default.
    volatile uint32_t DOEPMSK; // This register works with each of the DOEPINTx registers for all endpoints to generate an interrupt per OUT endpoint. The OUT endpoint interrupt for a specific status in the DOEPINTx register can be masked by writing into the corresponding bit in this register. Status bits are masked by default.
    volatile uint32_t DAINT; // When a significant event occurs on an endpoint, a DAINT register interrupts the application using the device OUT endpoints interrupt bit or device IN endpoints interrupt bit of the GINTSTS register (OEPINT or IEPINT in GINTSTS, respectively). There is one interrupt bit per endpoint, up to a maximum of 16 bits for OUT endpoints and 16 bits for IN endpoints. For a bidirectional endpoint, the corresponding IN and OUT interrupt bits are used. Bits in this register are set and cleared when the application sets and clears bits in the corresponding device endpoint-x interrupt register (DIEPINTx/DOEPINTx).
    volatile uint32_t DAINTMSK; // The DAINTMSK register works with the device endpoint interrupt register to interrupt the application when an event occurs on a device endpoint. However, the DAINT register bit corresponding to that interrupt is still set.
    reserved_t<0x2> _0x820;
    volatile uint32_t DVBUSDIS; // This register specifies the VBUS discharge time after VBUS pulsing during SRP.
    volatile uint32_t DVBUSPULSE; // This register specifies the VBUS pulsing time during SRP.
    reserved_t<0x1> _0x830;
    volatile uint32_t DIEPEMPMSK; // This register is used to control the IN endpoint FIFO empty interrupt generation (TXFE_DIEPINTx).
    reserved_t<0x32> _0x838;
    volatile uint32_t DIEPCTL0; // The application uses this register to control the behavior of each logical endpoint other than endpoint 0.
    reserved_t<0x1> _0x904;
    volatile uint32_t DIEPINT0; // This register indicates the status of an endpoint with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the IN endpoints interrupt bit of the core interrupt register (IEPINT in GINTSTS) is set. Before the application can read this register, it must first read the device all endpoints interrupt (DAINT) register to get the exact endpoint number for the device endpoint-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the DAINT and GINTSTS registers.
    reserved_t<0x1> _0x90c;
    volatile uint32_t DIEPTSIZ0; // The application must modify this register before enabling endpoint 0.
    reserved_t<0x1> _0x914;
    volatile uint32_t DTXFSTS0; // This read-only register contains the free space information for the device IN endpoint Tx FIFO.
    reserved_t<0x1> _0x91c;
    volatile uint32_t DIEPCTL1; // The application uses this register to control the behavior of each logical endpoint other than endpoint 0.
    reserved_t<0x1> _0x924;
    volatile uint32_t DIEPINT1; // This register indicates the status of an endpoint with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the IN endpoints interrupt bit of the core interrupt register (IEPINT in GINTSTS) is set. Before the application can read this register, it must first read the device all endpoints interrupt (DAINT) register to get the exact endpoint number for the device endpoint-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the DAINT and GINTSTS registers.
    reserved_t<0x1> _0x92c;
    volatile uint32_t DIEPTSIZ1; // The application must modify this register before enabling the endpoint. Once the endpoint is enabled using the endpoint enable bit in the DIEPCTLx registers (EPENA bit in DIEPCTLx), the core modifies this register. The application can only read this register once the core has cleared the endpoint enable bit.
    volatile uint32_t DIEPDMA1; // OTG device IN endpoint 1 DMA address register
    volatile uint32_t DTXFSTS1; // This read-only register contains the free space information for the device IN endpoint Tx FIFO.
    reserved_t<0x1> _0x93c;
    volatile uint32_t DIEPCTL2; // The application uses this register to control the behavior of each logical endpoint other than endpoint 0.
    reserved_t<0x1> _0x944;
    volatile uint32_t DIEPINT2; // This register indicates the status of an endpoint with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the IN endpoints interrupt bit of the core interrupt register (IEPINT in GINTSTS) is set. Before the application can read this register, it must first read the device all endpoints interrupt (DAINT) register to get the exact endpoint number for the device endpoint-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the DAINT and GINTSTS registers.
    reserved_t<0x1> _0x94c;
    volatile uint32_t DIEPTSIZ2; // The application must modify this register before enabling the endpoint. Once the endpoint is enabled using the endpoint enable bit in the DIEPCTLx registers (EPENA bit in DIEPCTLx), the core modifies this register. The application can only read this register once the core has cleared the endpoint enable bit.
    volatile uint32_t DIEPDMA2; // OTG device IN endpoint 2 DMA address register
    volatile uint32_t DTXFSTS2; // This read-only register contains the free space information for the device IN endpoint Tx FIFO.
    reserved_t<0x1> _0x95c;
    volatile uint32_t DIEPCTL3; // The application uses this register to control the behavior of each logical endpoint other than endpoint 0.
    reserved_t<0x1> _0x964;
    volatile uint32_t DIEPINT3; // This register indicates the status of an endpoint with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the IN endpoints interrupt bit of the core interrupt register (IEPINT in GINTSTS) is set. Before the application can read this register, it must first read the device all endpoints interrupt (DAINT) register to get the exact endpoint number for the device endpoint-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the DAINT and GINTSTS registers.
    reserved_t<0x1> _0x96c;
    volatile uint32_t DIEPTSIZ3; // The application must modify this register before enabling the endpoint. Once the endpoint is enabled using the endpoint enable bit in the DIEPCTLx registers (EPENA bit in DIEPCTLx), the core modifies this register. The application can only read this register once the core has cleared the endpoint enable bit.
    volatile uint32_t DIEPDMA3; // OTG device IN endpoint 3 DMA address register
    volatile uint32_t DTXFSTS3; // This read-only register contains the free space information for the device IN endpoint Tx FIFO.
    reserved_t<0x1> _0x97c;
    volatile uint32_t DIEPCTL4; // The application uses this register to control the behavior of each logical endpoint other than endpoint 0.
    reserved_t<0x1> _0x984;
    volatile uint32_t DIEPINT4; // This register indicates the status of an endpoint with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the IN endpoints interrupt bit of the core interrupt register (IEPINT in GINTSTS) is set. Before the application can read this register, it must first read the device all endpoints interrupt (DAINT) register to get the exact endpoint number for the device endpoint-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the DAINT and GINTSTS registers.
    reserved_t<0x1> _0x98c;
    volatile uint32_t DIEPTSIZ4; // The application must modify this register before enabling the endpoint. Once the endpoint is enabled using the endpoint enable bit in the DIEPCTLx registers (EPENA bit in DIEPCTLx), the core modifies this register. The application can only read this register once the core has cleared the endpoint enable bit.
    volatile uint32_t DIEPDMA4; // OTG device IN endpoint 4 DMA address register
    volatile uint32_t DTXFSTS4; // This read-only register contains the free space information for the device IN endpoint Tx FIFO.
    reserved_t<0x1> _0x99c;
    volatile uint32_t DIEPCTL5; // The application uses this register to control the behavior of each logical endpoint other than endpoint 0.
    reserved_t<0x1> _0x9a4;
    volatile uint32_t DIEPINT5; // This register indicates the status of an endpoint with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the IN endpoints interrupt bit of the core interrupt register (IEPINT in GINTSTS) is set. Before the application can read this register, it must first read the device all endpoints interrupt (DAINT) register to get the exact endpoint number for the device endpoint-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the DAINT and GINTSTS registers.
    reserved_t<0x1> _0x9ac;
    volatile uint32_t DIEPTSIZ5; // The application must modify this register before enabling the endpoint. Once the endpoint is enabled using the endpoint enable bit in the DIEPCTLx registers (EPENA bit in DIEPCTLx), the core modifies this register. The application can only read this register once the core has cleared the endpoint enable bit.
    volatile uint32_t DIEPDMA5; // OTG device IN endpoint 5 DMA address register
    volatile uint32_t DTXFSTS5; // This read-only register contains the free space information for the device IN endpoint Tx FIFO.
    reserved_t<0x3> _0x9bc;
    volatile uint32_t DIEPINT6; // This register indicates the status of an endpoint with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the IN endpoints interrupt bit of the core interrupt register (IEPINT in GINTSTS) is set. Before the application can read this register, it must first read the device all endpoints interrupt (DAINT) register to get the exact endpoint number for the device endpoint-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the DAINT and GINTSTS registers.
    reserved_t<0x1> _0x9cc;
    volatile uint32_t DIEPTSIZ6; // The application must modify this register before enabling the endpoint. Once the endpoint is enabled using the endpoint enable bit in the DIEPCTLx registers (EPENA bit in DIEPCTLx), the core modifies this register. The application can only read this register once the core has cleared the endpoint enable bit.
    volatile uint32_t DIEPDMA6; // OTG device IN endpoint 6 DMA address register
    reserved_t<0x4> _0x9d8;
    volatile uint32_t DIEPINT7; // This register indicates the status of an endpoint with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the IN endpoints interrupt bit of the core interrupt register (IEPINT in GINTSTS) is set. Before the application can read this register, it must first read the device all endpoints interrupt (DAINT) register to get the exact endpoint number for the device endpoint-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the DAINT and GINTSTS registers.
    reserved_t<0x1> _0x9ec;
    volatile uint32_t DIEPTSIZ7; // The application must modify this register before enabling the endpoint. Once the endpoint is enabled using the endpoint enable bit in the DIEPCTLx registers (EPENA bit in DIEPCTLx), the core modifies this register. The application can only read this register once the core has cleared the endpoint enable bit.
    volatile uint32_t DIEPDMA7; // OTG device IN endpoint 7 DMA address register
    reserved_t<0x4> _0x9f8;
    volatile uint32_t DIEPINT8; // This register indicates the status of an endpoint with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the IN endpoints interrupt bit of the core interrupt register (IEPINT in GINTSTS) is set. Before the application can read this register, it must first read the device all endpoints interrupt (DAINT) register to get the exact endpoint number for the device endpoint-x interrupt register. The application must clear the appropriate bit in this register to clear the corresponding bits in the DAINT and GINTSTS registers.
    reserved_t<0x1> _0xa0c;
    volatile uint32_t DIEPTSIZ8; // The application must modify this register before enabling the endpoint. Once the endpoint is enabled using the endpoint enable bit in the DIEPCTLx registers (EPENA bit in DIEPCTLx), the core modifies this register. The application can only read this register once the core has cleared the endpoint enable bit.
    volatile uint32_t DIEPDMA8; // OTG device IN endpoint 8 DMA address register
    reserved_t<0x3a> _0xa18;
    volatile uint32_t DOEPCTL0; // This section describes the DOEPCTL0 register.
    reserved_t<0x1> _0xb04;
    volatile uint32_t DOEPINT0; // This register indicates the status of an endpoint with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the OUT endpoints interrupt bit of the GINTSTS register (OEPINT bit in GINTSTS) is set. Before the application can read this register, it must first read the DAINT register to get the exact endpoint number for the DOEPINTx register. The application must clear the appropriate bit in this register to clear the corresponding bits in the DAINT and GINTSTS registers.
    reserved_t<0x1> _0xb0c;
    volatile uint32_t DOEPTSIZ0; // The application must modify this register before enabling endpoint 0.
    volatile uint32_t DOEPDMA0; // OTG device OUT endpoint 0 DMA address register
    reserved_t<0x2> _0xb18;
    volatile uint32_t DOEPCTL1; // The application uses this register to control the behavior of each logical endpoint other than endpoint 0.
    reserved_t<0x1> _0xb24;
    volatile uint32_t DOEPINT1; // This register indicates the status of an endpoint with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the OUT endpoints interrupt bit of the GINTSTS register (OEPINT bit in GINTSTS) is set. Before the application can read this register, it must first read the DAINT register to get the exact endpoint number for the DOEPINTx register. The application must clear the appropriate bit in this register to clear the corresponding bits in the DAINT and GINTSTS registers.
    reserved_t<0x1> _0xb2c;
    volatile uint32_t DOEPTSIZ1; // The application must modify this register before enabling the endpoint. Once the endpoint is enabled using endpoint enable bit of the DOEPCTLx registers (EPENA bit in DOEPCTLx), the core modifies this register. The application can only read this register once the core has cleared the endpoint enable bit.
    volatile uint32_t DOEPDMA1; // OTG device OUT endpoint 1 DMA address register
    reserved_t<0x2> _0xb38;
    volatile uint32_t DOEPCTL2; // The application uses this register to control the behavior of each logical endpoint other than endpoint 0.
    reserved_t<0x1> _0xb44;
    volatile uint32_t DOEPINT2; // This register indicates the status of an endpoint with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the OUT endpoints interrupt bit of the GINTSTS register (OEPINT bit in GINTSTS) is set. Before the application can read this register, it must first read the DAINT register to get the exact endpoint number for the DOEPINTx register. The application must clear the appropriate bit in this register to clear the corresponding bits in the DAINT and GINTSTS registers.
    reserved_t<0x1> _0xb4c;
    volatile uint32_t DOEPTSIZ2; // The application must modify this register before enabling the endpoint. Once the endpoint is enabled using endpoint enable bit of the DOEPCTLx registers (EPENA bit in DOEPCTLx), the core modifies this register. The application can only read this register once the core has cleared the endpoint enable bit.
    volatile uint32_t DOEPDMA2; // OTG device OUT endpoint 2 DMA address register
    reserved_t<0x2> _0xb58;
    volatile uint32_t DOEPCTL3; // The application uses this register to control the behavior of each logical endpoint other than endpoint 0.
    reserved_t<0x1> _0xb64;
    volatile uint32_t DOEPINT3; // This register indicates the status of an endpoint with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the OUT endpoints interrupt bit of the GINTSTS register (OEPINT bit in GINTSTS) is set. Before the application can read this register, it must first read the DAINT register to get the exact endpoint number for the DOEPINTx register. The application must clear the appropriate bit in this register to clear the corresponding bits in the DAINT and GINTSTS registers.
    reserved_t<0x1> _0xb6c;
    volatile uint32_t DOEPTSIZ3; // The application must modify this register before enabling the endpoint. Once the endpoint is enabled using endpoint enable bit of the DOEPCTLx registers (EPENA bit in DOEPCTLx), the core modifies this register. The application can only read this register once the core has cleared the endpoint enable bit.
    volatile uint32_t DOEPDMA3; // OTG device OUT endpoint 3 DMA address register
    reserved_t<0x2> _0xb78;
    volatile uint32_t DOEPCTL4; // The application uses this register to control the behavior of each logical endpoint other than endpoint 0.
    reserved_t<0x1> _0xb84;
    volatile uint32_t DOEPINT4; // This register indicates the status of an endpoint with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the OUT endpoints interrupt bit of the GINTSTS register (OEPINT bit in GINTSTS) is set. Before the application can read this register, it must first read the DAINT register to get the exact endpoint number for the DOEPINTx register. The application must clear the appropriate bit in this register to clear the corresponding bits in the DAINT and GINTSTS registers.
    reserved_t<0x1> _0xb8c;
    volatile uint32_t DOEPTSIZ4; // The application must modify this register before enabling the endpoint. Once the endpoint is enabled using endpoint enable bit of the DOEPCTLx registers (EPENA bit in DOEPCTLx), the core modifies this register. The application can only read this register once the core has cleared the endpoint enable bit.
    volatile uint32_t DOEPDMA4; // OTG device OUT endpoint 4 DMA address register
    reserved_t<0x2> _0xb98;
    volatile uint32_t DOEPCTL5; // The application uses this register to control the behavior of each logical endpoint other than endpoint 0.
    reserved_t<0x1> _0xba4;
    volatile uint32_t DOEPINT5; // This register indicates the status of an endpoint with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the OUT endpoints interrupt bit of the GINTSTS register (OEPINT bit in GINTSTS) is set. Before the application can read this register, it must first read the DAINT register to get the exact endpoint number for the DOEPINTx register. The application must clear the appropriate bit in this register to clear the corresponding bits in the DAINT and GINTSTS registers.
    reserved_t<0x1> _0xbac;
    volatile uint32_t DOEPTSIZ5; // The application must modify this register before enabling the endpoint. Once the endpoint is enabled using endpoint enable bit of the DOEPCTLx registers (EPENA bit in DOEPCTLx), the core modifies this register. The application can only read this register once the core has cleared the endpoint enable bit.
    volatile uint32_t DOEPDMA5; // OTG device OUT endpoint 5 DMA address register
    reserved_t<0x2> _0xbb8;
    volatile uint32_t DOEPCTL6; // The application uses this register to control the behavior of each logical endpoint other than endpoint 0.
    reserved_t<0x1> _0xbc4;
    volatile uint32_t DOEPINT6; // This register indicates the status of an endpoint with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the OUT endpoints interrupt bit of the GINTSTS register (OEPINT bit in GINTSTS) is set. Before the application can read this register, it must first read the DAINT register to get the exact endpoint number for the DOEPINTx register. The application must clear the appropriate bit in this register to clear the corresponding bits in the DAINT and GINTSTS registers.
    reserved_t<0x1> _0xbcc;
    volatile uint32_t DOEPTSIZ6; // The application must modify this register before enabling the endpoint. Once the endpoint is enabled using endpoint enable bit of the DOEPCTLx registers (EPENA bit in DOEPCTLx), the core modifies this register. The application can only read this register once the core has cleared the endpoint enable bit.
    volatile uint32_t DOEPDMA6; // OTG device OUT endpoint 6 DMA address register
    reserved_t<0x2> _0xbd8;
    volatile uint32_t DOEPCTL7; // The application uses this register to control the behavior of each logical endpoint other than endpoint 0.
    reserved_t<0x1> _0xbe4;
    volatile uint32_t DOEPINT7; // This register indicates the status of an endpoint with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the OUT endpoints interrupt bit of the GINTSTS register (OEPINT bit in GINTSTS) is set. Before the application can read this register, it must first read the DAINT register to get the exact endpoint number for the DOEPINTx register. The application must clear the appropriate bit in this register to clear the corresponding bits in the DAINT and GINTSTS registers.
    reserved_t<0x1> _0xbec;
    volatile uint32_t DOEPTSIZ7; // The application must modify this register before enabling the endpoint. Once the endpoint is enabled using endpoint enable bit of the DOEPCTLx registers (EPENA bit in DOEPCTLx), the core modifies this register. The application can only read this register once the core has cleared the endpoint enable bit.
    volatile uint32_t DOEPDMA7; // OTG device OUT endpoint 7 DMA address register
    reserved_t<0x2> _0xbf8;
    volatile uint32_t DOEPCTL8; // The application uses this register to control the behavior of each logical endpoint other than endpoint 0.
    reserved_t<0x1> _0xc04;
    volatile uint32_t DOEPINT8; // This register indicates the status of an endpoint with respect to USB- and AHB-related events. It is shown in Figure724. The application must read this register when the OUT endpoints interrupt bit of the GINTSTS register (OEPINT bit in GINTSTS) is set. Before the application can read this register, it must first read the DAINT register to get the exact endpoint number for the DOEPINTx register. The application must clear the appropriate bit in this register to clear the corresponding bits in the DAINT and GINTSTS registers.
    reserved_t<0x1> _0xc0c;
    volatile uint32_t DOEPTSIZ8; // The application must modify this register before enabling the endpoint. Once the endpoint is enabled using endpoint enable bit of the DOEPCTLx registers (EPENA bit in DOEPCTLx), the core modifies this register. The application can only read this register once the core has cleared the endpoint enable bit.
    volatile uint32_t DOEPDMA8; // OTG device OUT endpoint 8 DMA address register
    reserved_t<0x7a> _0xc18;
    volatile uint32_t PCGCCTL; // This register is available in host and device modes.

    static constexpr uint32_t GOTGCTL_RESET_VALUE = 0x10000; // Reset value
    static constexpr uint32_t GOTGCTL_SRQSCS = 0x1; // SRQSCS
    static constexpr uint32_t GOTGCTL_SRQ = 0x2; // SRQ
    static constexpr uint32_t GOTGCTL_VBVALOEN = 0x4; // VBVALOEN
    static constexpr uint32_t GOTGCTL_VBVALOVAL = 0x8; // VBVALOVAL
    static constexpr uint32_t GOTGCTL_AVALOEN = 0x10; // AVALOEN
    static constexpr uint32_t GOTGCTL_AVALOVAL = 0x20; // AVALOVAL
    static constexpr uint32_t GOTGCTL_BVALOEN = 0x40; // BVALOEN
    static constexpr uint32_t GOTGCTL_BVALOVAL = 0x80; // BVALOVAL
    static constexpr uint32_t GOTGCTL_HNGSCS = 0x100; // HNGSCS
    static constexpr uint32_t GOTGCTL_HNPRQ = 0x200; // HNPRQ
    static constexpr uint32_t GOTGCTL_HSHNPEN = 0x400; // HSHNPEN
    static constexpr uint32_t GOTGCTL_DHNPEN = 0x800; // DHNPEN
    static constexpr uint32_t GOTGCTL_EHEN = 0x1000; // EHEN
    static constexpr uint32_t GOTGCTL_CIDSTS = 0x10000; // CIDSTS
    static constexpr uint32_t GOTGCTL_DBCT = 0x20000; // DBCT
    static constexpr uint32_t GOTGCTL_ASVLD = 0x40000; // ASVLD
    static constexpr uint32_t GOTGCTL_BSVLD = 0x80000; // BSVLD
    static constexpr uint32_t GOTGCTL_OTGVER = 0x100000; // OTGVER
    static constexpr uint32_t GOTGCTL_CURMOD = 0x200000; // CURMOD

    static constexpr uint32_t GOTGINT_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t GOTGINT_SEDET = 0x4; // SEDET
    static constexpr uint32_t GOTGINT_SRSSCHG = 0x100; // SRSSCHG
    static constexpr uint32_t GOTGINT_HNSSCHG = 0x200; // HNSSCHG
    static constexpr uint32_t GOTGINT_HNGDET = 0x20000; // HNGDET
    static constexpr uint32_t GOTGINT_ADTOCHG = 0x40000; // ADTOCHG
    static constexpr uint32_t GOTGINT_DBCDNE = 0x80000; // DBCDNE

    static constexpr uint32_t GAHBCFG_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t GAHBCFG_GINTMSK = 0x1; // GINTMSK
    static constexpr uint32_t GAHBCFG_TXFELVL = 0x80; // TXFELVL
    static constexpr uint32_t GAHBCFG_PTXFELVL = 0x100; // PTXFELVL

    static constexpr uint32_t GUSBCFG_RESET_VALUE = 0x1440; // Reset value
    typedef bit_field_t<0, 0x7> GUSBCFG_TOCAL; // TOCAL
    static constexpr uint32_t GUSBCFG_PHYSEL = 0x40; // PHYSEL
    static constexpr uint32_t GUSBCFG_SRPCAP = 0x100; // SRPCAP
    static constexpr uint32_t GUSBCFG_HNPCAP = 0x200; // HNPCAP
    typedef bit_field_t<10, 0xf> GUSBCFG_TRDT; // TRDT
    static constexpr uint32_t GUSBCFG_FHMOD = 0x20000000; // FHMOD
    static constexpr uint32_t GUSBCFG_FDMOD = 0x40000000; // FDMOD

    static constexpr uint32_t GRSTCTL_RESET_VALUE = 0x80000000; // Reset value
    static constexpr uint32_t GRSTCTL_CSRST = 0x1; // CSRST
    static constexpr uint32_t GRSTCTL_PSRST = 0x2; // PSRST
    static constexpr uint32_t GRSTCTL_FSRST = 0x4; // FSRST
    static constexpr uint32_t GRSTCTL_RXFFLSH = 0x10; // RXFFLSH
    static constexpr uint32_t GRSTCTL_TXFFLSH = 0x20; // TXFFLSH
    typedef bit_field_t<6, 0x1f> GRSTCTL_TXFNUM; // TXFNUM
    static constexpr uint32_t GRSTCTL_AHBIDL = 0x80000000; // AHBIDL

    static constexpr uint32_t GINTSTS_RESET_VALUE = 0x4000020; // Reset value
    static constexpr uint32_t GINTSTS_CMOD = 0x1; // CMOD
    static constexpr uint32_t GINTSTS_MMIS = 0x2; // MMIS
    static constexpr uint32_t GINTSTS_OTGINT = 0x4; // OTGINT
    static constexpr uint32_t GINTSTS_SOF = 0x8; // SOF
    static constexpr uint32_t GINTSTS_RXFLVL = 0x10; // RXFLVL
    static constexpr uint32_t GINTSTS_NPTXFE = 0x20; // NPTXFE
    static constexpr uint32_t GINTSTS_GINAKEFF = 0x40; // GINAKEFF
    static constexpr uint32_t GINTSTS_GONAKEFF = 0x80; // GONAKEFF
    static constexpr uint32_t GINTSTS_ESUSP = 0x400; // ESUSP
    static constexpr uint32_t GINTSTS_USBSUSP = 0x800; // USBSUSP
    static constexpr uint32_t GINTSTS_USBRST = 0x1000; // USBRST
    static constexpr uint32_t GINTSTS_ENUMDNE = 0x2000; // ENUMDNE
    static constexpr uint32_t GINTSTS_ISOODRP = 0x4000; // ISOODRP
    static constexpr uint32_t GINTSTS_EOPF = 0x8000; // EOPF
    static constexpr uint32_t GINTSTS_IEPINT = 0x40000; // IEPINT
    static constexpr uint32_t GINTSTS_OEPINT = 0x80000; // OEPINT
    static constexpr uint32_t GINTSTS_IISOIXFR = 0x100000; // IISOIXFR
    static constexpr uint32_t GINTSTS_IPXFR = 0x200000; // IPXFR
    static constexpr uint32_t GINTSTS_RSTDET = 0x800000; // RSTDET
    static constexpr uint32_t GINTSTS_HPRTINT = 0x1000000; // HPRTINT
    static constexpr uint32_t GINTSTS_HCINT = 0x2000000; // HCINT
    static constexpr uint32_t GINTSTS_PTXFE = 0x4000000; // PTXFE
    static constexpr uint32_t GINTSTS_LPMINT = 0x8000000; // LPMINT
    static constexpr uint32_t GINTSTS_CIDSCHG = 0x10000000; // CIDSCHG
    static constexpr uint32_t GINTSTS_DISCINT = 0x20000000; // DISCINT
    static constexpr uint32_t GINTSTS_SRQINT = 0x40000000; // SRQINT
    static constexpr uint32_t GINTSTS_WKUPINT = 0x80000000; // WKUPINT

    static constexpr uint32_t GINTMSK_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t GINTMSK_MMISM = 0x2; // MMISM
    static constexpr uint32_t GINTMSK_OTGINT = 0x4; // OTGINT
    static constexpr uint32_t GINTMSK_SOFM = 0x8; // SOFM
    static constexpr uint32_t GINTMSK_RXFLVLM = 0x10; // RXFLVLM
    static constexpr uint32_t GINTMSK_NPTXFEM = 0x20; // NPTXFEM
    static constexpr uint32_t GINTMSK_GINAKEFFM = 0x40; // GINAKEFFM
    static constexpr uint32_t GINTMSK_GONAKEFFM = 0x80; // GONAKEFFM
    static constexpr uint32_t GINTMSK_ESUSPM = 0x400; // ESUSPM
    static constexpr uint32_t GINTMSK_USBSUSPM = 0x800; // USBSUSPM
    static constexpr uint32_t GINTMSK_USBRST = 0x1000; // USBRST
    static constexpr uint32_t GINTMSK_ENUMDNEM = 0x2000; // ENUMDNEM
    static constexpr uint32_t GINTMSK_ISOODRPM = 0x4000; // ISOODRPM
    static constexpr uint32_t GINTMSK_EOPFM = 0x8000; // EOPFM
    static constexpr uint32_t GINTMSK_IEPINT = 0x40000; // IEPINT
    static constexpr uint32_t GINTMSK_OEPINT = 0x80000; // OEPINT
    static constexpr uint32_t GINTMSK_IISOIXFRM = 0x100000; // IISOIXFRM
    static constexpr uint32_t GINTMSK_IPXFRM = 0x200000; // IPXFRM
    static constexpr uint32_t GINTMSK_RSTDETM = 0x800000; // RSTDETM
    static constexpr uint32_t GINTMSK_PRTIM = 0x1000000; // PRTIM
    static constexpr uint32_t GINTMSK_HCIM = 0x2000000; // HCIM
    static constexpr uint32_t GINTMSK_PTXFEM = 0x4000000; // PTXFEM
    static constexpr uint32_t GINTMSK_LPMINTM = 0x8000000; // LPMINTM
    static constexpr uint32_t GINTMSK_CIDSCHGM = 0x10000000; // CIDSCHGM
    static constexpr uint32_t GINTMSK_DISCINT = 0x20000000; // DISCINT
    static constexpr uint32_t GINTMSK_SRQIM = 0x40000000; // SRQIM
    static constexpr uint32_t GINTMSK_WUIM = 0x80000000; // WUIM

    static constexpr uint32_t GRXSTSR_DEVICE_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0x7ff> GRXSTSR_DEVICE_BCNT; // BCNT
    typedef bit_field_t<0, 0xf> GRXSTSR_DEVICE_CHNUM; // CHNUM
    typedef bit_field_t<15, 0x3> GRXSTSR_DEVICE_DPID; // DPID
    typedef bit_field_t<0, 0xf> GRXSTSR_DEVICE_EPNUM; // EPNUM
    typedef bit_field_t<21, 0xf> GRXSTSR_DEVICE_FRMNUM; // FRMNUM
    typedef bit_field_t<17, 0xf> GRXSTSR_DEVICE_PKTSTS; // PKTSTS
    static constexpr uint32_t GRXSTSR_DEVICE_STSPHST = 0x8000000; // STSPHST

    static constexpr uint32_t GRXSTSP_DEVICE_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0x7ff> GRXSTSP_DEVICE_BCNT; // BCNT
    typedef bit_field_t<0, 0xf> GRXSTSP_DEVICE_CHNUM; // CHNUM
    typedef bit_field_t<15, 0x3> GRXSTSP_DEVICE_DPID; // DPID
    typedef bit_field_t<0, 0xf> GRXSTSP_DEVICE_EPNUM; // EPNUM
    typedef bit_field_t<21, 0xf> GRXSTSP_DEVICE_FRMNUM; // FRMNUM
    typedef bit_field_t<17, 0xf> GRXSTSP_DEVICE_PKTSTS; // PKTSTS
    static constexpr uint32_t GRXSTSP_DEVICE_STSPHST = 0x8000000; // STSPHST

    static constexpr uint32_t GRXFSIZ_RESET_VALUE = 0x200; // Reset value
    typedef bit_field_t<0, 0xffff> GRXFSIZ_RXFD; // RXFD

    static constexpr uint32_t HNPTXFSIZ_RESET_VALUE = 0x2000200; // Reset value
    typedef bit_field_t<0, 0xffff> HNPTXFSIZ_NPTXFSA; // NPTXFSA
    typedef bit_field_t<16, 0xffff> HNPTXFSIZ_NPTXFD; // NPTXFD

    static constexpr uint32_t HNPTXSTS_RESET_VALUE = 0x80200; // Reset value
    typedef bit_field_t<0, 0xffff> HNPTXSTS_NPTXFSAV; // NPTXFSAV
    typedef bit_field_t<16, 0xff> HNPTXSTS_NPTQXSAV; // NPTQXSAV
    typedef bit_field_t<24, 0x7f> HNPTXSTS_NPTXQTOP; // NPTXQTOP


    static constexpr uint32_t GCCFG_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t GCCFG_DCDET = 0x1; // DCDET
    static constexpr uint32_t GCCFG_PDET = 0x2; // PDET
    static constexpr uint32_t GCCFG_SDET = 0x4; // SDET
    static constexpr uint32_t GCCFG_PS2DET = 0x8; // PS2DET
    static constexpr uint32_t GCCFG_PWRDWN = 0x10000; // PWRDWN
    static constexpr uint32_t GCCFG_BCDEN = 0x20000; // BCDEN
    static constexpr uint32_t GCCFG_DCDEN = 0x40000; // DCDEN
    static constexpr uint32_t GCCFG_PDEN = 0x80000; // PDEN
    static constexpr uint32_t GCCFG_SDEN = 0x100000; // SDEN
    static constexpr uint32_t GCCFG_VBDEN = 0x200000; // VBDEN

    static constexpr uint32_t CID_RESET_VALUE = 0x3000; // Reset value
    typedef bit_field_t<0, 0xffffffff> CID_PRODUCT_ID; // PRODUCT_ID


    static constexpr uint32_t GLPMCFG_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t GLPMCFG_LPMEN = 0x1; // LPMEN
    static constexpr uint32_t GLPMCFG_LPMACK = 0x2; // LPMACK
    typedef bit_field_t<2, 0xf> GLPMCFG_BESL; // BESL
    static constexpr uint32_t GLPMCFG_REMWAKE = 0x40; // REMWAKE
    static constexpr uint32_t GLPMCFG_L1SSEN = 0x80; // L1SSEN
    typedef bit_field_t<8, 0xf> GLPMCFG_BESLTHRS; // BESLTHRS
    static constexpr uint32_t GLPMCFG_L1DSEN = 0x1000; // L1DSEN
    typedef bit_field_t<13, 0x3> GLPMCFG_LPMRSP; // LPMRSP
    static constexpr uint32_t GLPMCFG_SLPSTS = 0x8000; // SLPSTS
    static constexpr uint32_t GLPMCFG_L1RSMOK = 0x10000; // L1RSMOK
    typedef bit_field_t<17, 0xf> GLPMCFG_LPMCHIDX; // LPMCHIDX
    typedef bit_field_t<21, 0x7> GLPMCFG_LPMRCNT; // LPMRCNT
    static constexpr uint32_t GLPMCFG_SNDLPM = 0x1000000; // SNDLPM
    typedef bit_field_t<25, 0x7> GLPMCFG_LPMRCNTSTS; // LPMRCNTSTS
    static constexpr uint32_t GLPMCFG_ENBESL = 0x10000000; // ENBESL


    static constexpr uint32_t HPTXFSIZ_RESET_VALUE = 0x2000400; // Reset value
    typedef bit_field_t<0, 0xffff> HPTXFSIZ_PTXSA; // PTXSA
    typedef bit_field_t<16, 0xffff> HPTXFSIZ_PTXFSIZ; // PTXFSIZ

    static constexpr uint32_t DIEPTXF1_RESET_VALUE = 0x2000400; // Reset value
    typedef bit_field_t<0, 0xffff> DIEPTXF1_INEPTXSA; // INEPTXSA
    typedef bit_field_t<16, 0xffff> DIEPTXF1_INEPTXFD; // INEPTXFD

    static constexpr uint32_t DIEPTXF2_RESET_VALUE = 0x2000600; // Reset value
    typedef bit_field_t<0, 0xffff> DIEPTXF2_INEPTXSA; // INEPTXSA
    typedef bit_field_t<16, 0xffff> DIEPTXF2_INEPTXFD; // INEPTXFD

    static constexpr uint32_t DIEPTXF3_RESET_VALUE = 0x2000800; // Reset value
    typedef bit_field_t<0, 0xffff> DIEPTXF3_INEPTXSA; // INEPTXSA
    typedef bit_field_t<16, 0xffff> DIEPTXF3_INEPTXFD; // INEPTXFD

    static constexpr uint32_t DIEPTXF4_RESET_VALUE = 0x2000a00; // Reset value
    typedef bit_field_t<0, 0xffff> DIEPTXF4_INEPTXSA; // INEPTXSA
    typedef bit_field_t<16, 0xffff> DIEPTXF4_INEPTXFD; // INEPTXFD

    static constexpr uint32_t DIEPTXF5_RESET_VALUE = 0x2000c00; // Reset value
    typedef bit_field_t<0, 0xffff> DIEPTXF5_INEPTXSA; // INEPTXSA
    typedef bit_field_t<16, 0xffff> DIEPTXF5_INEPTXFD; // INEPTXFD


    static constexpr uint32_t HCFG_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> HCFG_FSLSPCS; // FSLSPCS
    static constexpr uint32_t HCFG_FSLSS = 0x4; // FSLSS

    static constexpr uint32_t HFIR_RESET_VALUE = 0xea60; // Reset value
    typedef bit_field_t<0, 0xffff> HFIR_FRIVL; // FRIVL
    static constexpr uint32_t HFIR_RLDCTRL = 0x10000; // RLDCTRL

    static constexpr uint32_t HFNUM_RESET_VALUE = 0x3fff; // Reset value
    typedef bit_field_t<0, 0xffff> HFNUM_FRNUM; // FRNUM
    typedef bit_field_t<16, 0xffff> HFNUM_FTREM; // FTREM


    static constexpr uint32_t HPTXSTS_RESET_VALUE = 0x80100; // Reset value
    typedef bit_field_t<0, 0xffff> HPTXSTS_PTXFSAVL; // PTXFSAVL
    typedef bit_field_t<16, 0xff> HPTXSTS_PTXQSAV; // PTXQSAV
    typedef bit_field_t<24, 0xff> HPTXSTS_PTXQTOP; // PTXQTOP

    static constexpr uint32_t HAINT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> HAINT_HAINT; // HAINT

    static constexpr uint32_t HAINTMSK_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> HAINTMSK_HAINTM; // HAINTM


    static constexpr uint32_t HPRT_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HPRT_PCSTS = 0x1; // PCSTS
    static constexpr uint32_t HPRT_PCDET = 0x2; // PCDET
    static constexpr uint32_t HPRT_PENA = 0x4; // PENA
    static constexpr uint32_t HPRT_PENCHNG = 0x8; // PENCHNG
    static constexpr uint32_t HPRT_POCA = 0x10; // POCA
    static constexpr uint32_t HPRT_POCCHNG = 0x20; // POCCHNG
    static constexpr uint32_t HPRT_PRES = 0x40; // PRES
    static constexpr uint32_t HPRT_PSUSP = 0x80; // PSUSP
    static constexpr uint32_t HPRT_PRST = 0x100; // PRST
    typedef bit_field_t<10, 0x3> HPRT_PLSTS; // PLSTS
    static constexpr uint32_t HPRT_PPWR = 0x1000; // PPWR
    typedef bit_field_t<13, 0xf> HPRT_PTCTL; // PTCTL
    typedef bit_field_t<17, 0x3> HPRT_PSPD; // PSPD


    static constexpr uint32_t HCCHAR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> HCCHAR0_MPSIZ; // MPSIZ
    typedef bit_field_t<11, 0xf> HCCHAR0_EPNUM; // EPNUM
    static constexpr uint32_t HCCHAR0_EPDIR = 0x8000; // EPDIR
    static constexpr uint32_t HCCHAR0_LSDEV = 0x20000; // LSDEV
    typedef bit_field_t<18, 0x3> HCCHAR0_EPTYP; // EPTYP
    typedef bit_field_t<20, 0x3> HCCHAR0_MCNT; // MCNT
    typedef bit_field_t<22, 0x7f> HCCHAR0_DAD; // DAD
    static constexpr uint32_t HCCHAR0_ODDFRM = 0x20000000; // ODDFRM
    static constexpr uint32_t HCCHAR0_CHDIS = 0x40000000; // CHDIS
    static constexpr uint32_t HCCHAR0_CHENA = 0x80000000; // CHENA


    static constexpr uint32_t HCINT0_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HCINT0_XFRC = 0x1; // XFRC
    static constexpr uint32_t HCINT0_CHH = 0x2; // CHH
    static constexpr uint32_t HCINT0_STALL = 0x8; // STALL
    static constexpr uint32_t HCINT0_NAK = 0x10; // NAK
    static constexpr uint32_t HCINT0_ACK = 0x20; // ACK
    static constexpr uint32_t HCINT0_TXERR = 0x80; // TXERR
    static constexpr uint32_t HCINT0_BBERR = 0x100; // BBERR
    static constexpr uint32_t HCINT0_FRMOR = 0x200; // FRMOR
    static constexpr uint32_t HCINT0_DTERR = 0x400; // DTERR

    static constexpr uint32_t HCINTMSK0_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HCINTMSK0_XFRCM = 0x1; // XFRCM
    static constexpr uint32_t HCINTMSK0_CHHM = 0x2; // CHHM
    static constexpr uint32_t HCINTMSK0_STALLM = 0x8; // STALLM
    static constexpr uint32_t HCINTMSK0_NAKM = 0x10; // NAKM
    static constexpr uint32_t HCINTMSK0_ACKM = 0x20; // ACKM
    static constexpr uint32_t HCINTMSK0_TXERRM = 0x80; // TXERRM
    static constexpr uint32_t HCINTMSK0_BBERRM = 0x100; // BBERRM
    static constexpr uint32_t HCINTMSK0_FRMORM = 0x200; // FRMORM
    static constexpr uint32_t HCINTMSK0_DTERRM = 0x400; // DTERRM

    static constexpr uint32_t HCTSIZ0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> HCTSIZ0_XFRSIZ; // XFRSIZ
    typedef bit_field_t<19, 0x3ff> HCTSIZ0_PKTCNT; // PKTCNT
    typedef bit_field_t<29, 0x3> HCTSIZ0_DPID; // DPID
    static constexpr uint32_t HCTSIZ0_DOPNG = 0x80000000; // DOPNG


    static constexpr uint32_t HCCHAR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> HCCHAR1_MPSIZ; // MPSIZ
    typedef bit_field_t<11, 0xf> HCCHAR1_EPNUM; // EPNUM
    static constexpr uint32_t HCCHAR1_EPDIR = 0x8000; // EPDIR
    static constexpr uint32_t HCCHAR1_LSDEV = 0x20000; // LSDEV
    typedef bit_field_t<18, 0x3> HCCHAR1_EPTYP; // EPTYP
    typedef bit_field_t<20, 0x3> HCCHAR1_MCNT; // MCNT
    typedef bit_field_t<22, 0x7f> HCCHAR1_DAD; // DAD
    static constexpr uint32_t HCCHAR1_ODDFRM = 0x20000000; // ODDFRM
    static constexpr uint32_t HCCHAR1_CHDIS = 0x40000000; // CHDIS
    static constexpr uint32_t HCCHAR1_CHENA = 0x80000000; // CHENA


    static constexpr uint32_t HCINT1_DEVICE_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HCINT1_DEVICE_XFRC = 0x1; // XFRC
    static constexpr uint32_t HCINT1_DEVICE_CHH = 0x2; // CHH
    static constexpr uint32_t HCINT1_DEVICE_STALL = 0x8; // STALL
    static constexpr uint32_t HCINT1_DEVICE_NAK = 0x10; // NAK
    static constexpr uint32_t HCINT1_DEVICE_ACK = 0x20; // ACK
    static constexpr uint32_t HCINT1_DEVICE_TXERR = 0x80; // TXERR
    static constexpr uint32_t HCINT1_DEVICE_BBERR = 0x100; // BBERR
    static constexpr uint32_t HCINT1_DEVICE_FRMOR = 0x200; // FRMOR
    static constexpr uint32_t HCINT1_DEVICE_DTERR = 0x400; // DTERR

    static constexpr uint32_t HCINTMSK1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HCINTMSK1_XFRCM = 0x1; // XFRCM
    static constexpr uint32_t HCINTMSK1_CHHM = 0x2; // CHHM
    static constexpr uint32_t HCINTMSK1_STALLM = 0x8; // STALLM
    static constexpr uint32_t HCINTMSK1_NAKM = 0x10; // NAKM
    static constexpr uint32_t HCINTMSK1_ACKM = 0x20; // ACKM
    static constexpr uint32_t HCINTMSK1_TXERRM = 0x80; // TXERRM
    static constexpr uint32_t HCINTMSK1_BBERRM = 0x100; // BBERRM
    static constexpr uint32_t HCINTMSK1_FRMORM = 0x200; // FRMORM
    static constexpr uint32_t HCINTMSK1_DTERRM = 0x400; // DTERRM

    static constexpr uint32_t HCTSIZ1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> HCTSIZ1_XFRSIZ; // XFRSIZ
    typedef bit_field_t<19, 0x3ff> HCTSIZ1_PKTCNT; // PKTCNT
    typedef bit_field_t<29, 0x3> HCTSIZ1_DPID; // DPID
    static constexpr uint32_t HCTSIZ1_DOPNG = 0x80000000; // DOPNG


    static constexpr uint32_t HCCHAR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> HCCHAR2_MPSIZ; // MPSIZ
    typedef bit_field_t<11, 0xf> HCCHAR2_EPNUM; // EPNUM
    static constexpr uint32_t HCCHAR2_EPDIR = 0x8000; // EPDIR
    static constexpr uint32_t HCCHAR2_LSDEV = 0x20000; // LSDEV
    typedef bit_field_t<18, 0x3> HCCHAR2_EPTYP; // EPTYP
    typedef bit_field_t<20, 0x3> HCCHAR2_MCNT; // MCNT
    typedef bit_field_t<22, 0x7f> HCCHAR2_DAD; // DAD
    static constexpr uint32_t HCCHAR2_ODDFRM = 0x20000000; // ODDFRM
    static constexpr uint32_t HCCHAR2_CHDIS = 0x40000000; // CHDIS
    static constexpr uint32_t HCCHAR2_CHENA = 0x80000000; // CHENA


    static constexpr uint32_t HCINT2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HCINT2_XFRC = 0x1; // XFRC
    static constexpr uint32_t HCINT2_CHH = 0x2; // CHH
    static constexpr uint32_t HCINT2_STALL = 0x8; // STALL
    static constexpr uint32_t HCINT2_NAK = 0x10; // NAK
    static constexpr uint32_t HCINT2_ACK = 0x20; // ACK
    static constexpr uint32_t HCINT2_TXERR = 0x80; // TXERR
    static constexpr uint32_t HCINT2_BBERR = 0x100; // BBERR
    static constexpr uint32_t HCINT2_FRMOR = 0x200; // FRMOR
    static constexpr uint32_t HCINT2_DTERR = 0x400; // DTERR

    static constexpr uint32_t HCINTMSK2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HCINTMSK2_XFRCM = 0x1; // XFRCM
    static constexpr uint32_t HCINTMSK2_CHHM = 0x2; // CHHM
    static constexpr uint32_t HCINTMSK2_STALLM = 0x8; // STALLM
    static constexpr uint32_t HCINTMSK2_NAKM = 0x10; // NAKM
    static constexpr uint32_t HCINTMSK2_ACKM = 0x20; // ACKM
    static constexpr uint32_t HCINTMSK2_TXERRM = 0x80; // TXERRM
    static constexpr uint32_t HCINTMSK2_BBERRM = 0x100; // BBERRM
    static constexpr uint32_t HCINTMSK2_FRMORM = 0x200; // FRMORM
    static constexpr uint32_t HCINTMSK2_DTERRM = 0x400; // DTERRM

    static constexpr uint32_t HCTSIZ2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> HCTSIZ2_XFRSIZ; // XFRSIZ
    typedef bit_field_t<19, 0x3ff> HCTSIZ2_PKTCNT; // PKTCNT
    typedef bit_field_t<29, 0x3> HCTSIZ2_DPID; // DPID
    static constexpr uint32_t HCTSIZ2_DOPNG = 0x80000000; // DOPNG


    static constexpr uint32_t HCCHAR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> HCCHAR3_MPSIZ; // MPSIZ
    typedef bit_field_t<11, 0xf> HCCHAR3_EPNUM; // EPNUM
    static constexpr uint32_t HCCHAR3_EPDIR = 0x8000; // EPDIR
    static constexpr uint32_t HCCHAR3_LSDEV = 0x20000; // LSDEV
    typedef bit_field_t<18, 0x3> HCCHAR3_EPTYP; // EPTYP
    typedef bit_field_t<20, 0x3> HCCHAR3_MCNT; // MCNT
    typedef bit_field_t<22, 0x7f> HCCHAR3_DAD; // DAD
    static constexpr uint32_t HCCHAR3_ODDFRM = 0x20000000; // ODDFRM
    static constexpr uint32_t HCCHAR3_CHDIS = 0x40000000; // CHDIS
    static constexpr uint32_t HCCHAR3_CHENA = 0x80000000; // CHENA


    static constexpr uint32_t HCINT3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HCINT3_XFRC = 0x1; // XFRC
    static constexpr uint32_t HCINT3_CHH = 0x2; // CHH
    static constexpr uint32_t HCINT3_STALL = 0x8; // STALL
    static constexpr uint32_t HCINT3_NAK = 0x10; // NAK
    static constexpr uint32_t HCINT3_ACK = 0x20; // ACK
    static constexpr uint32_t HCINT3_TXERR = 0x80; // TXERR
    static constexpr uint32_t HCINT3_BBERR = 0x100; // BBERR
    static constexpr uint32_t HCINT3_FRMOR = 0x200; // FRMOR
    static constexpr uint32_t HCINT3_DTERR = 0x400; // DTERR

    static constexpr uint32_t HCINTMSK3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HCINTMSK3_XFRCM = 0x1; // XFRCM
    static constexpr uint32_t HCINTMSK3_CHHM = 0x2; // CHHM
    static constexpr uint32_t HCINTMSK3_STALLM = 0x8; // STALLM
    static constexpr uint32_t HCINTMSK3_NAKM = 0x10; // NAKM
    static constexpr uint32_t HCINTMSK3_ACKM = 0x20; // ACKM
    static constexpr uint32_t HCINTMSK3_TXERRM = 0x80; // TXERRM
    static constexpr uint32_t HCINTMSK3_BBERRM = 0x100; // BBERRM
    static constexpr uint32_t HCINTMSK3_FRMORM = 0x200; // FRMORM
    static constexpr uint32_t HCINTMSK3_DTERRM = 0x400; // DTERRM

    static constexpr uint32_t HCTSIZ3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> HCTSIZ3_XFRSIZ; // XFRSIZ
    typedef bit_field_t<19, 0x3ff> HCTSIZ3_PKTCNT; // PKTCNT
    typedef bit_field_t<29, 0x3> HCTSIZ3_DPID; // DPID
    static constexpr uint32_t HCTSIZ3_DOPNG = 0x80000000; // DOPNG


    static constexpr uint32_t HCCHAR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> HCCHAR4_MPSIZ; // MPSIZ
    typedef bit_field_t<11, 0xf> HCCHAR4_EPNUM; // EPNUM
    static constexpr uint32_t HCCHAR4_EPDIR = 0x8000; // EPDIR
    static constexpr uint32_t HCCHAR4_LSDEV = 0x20000; // LSDEV
    typedef bit_field_t<18, 0x3> HCCHAR4_EPTYP; // EPTYP
    typedef bit_field_t<20, 0x3> HCCHAR4_MCNT; // MCNT
    typedef bit_field_t<22, 0x7f> HCCHAR4_DAD; // DAD
    static constexpr uint32_t HCCHAR4_ODDFRM = 0x20000000; // ODDFRM
    static constexpr uint32_t HCCHAR4_CHDIS = 0x40000000; // CHDIS
    static constexpr uint32_t HCCHAR4_CHENA = 0x80000000; // CHENA


    static constexpr uint32_t HCINT4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HCINT4_XFRC = 0x1; // XFRC
    static constexpr uint32_t HCINT4_CHH = 0x2; // CHH
    static constexpr uint32_t HCINT4_STALL = 0x8; // STALL
    static constexpr uint32_t HCINT4_NAK = 0x10; // NAK
    static constexpr uint32_t HCINT4_ACK = 0x20; // ACK
    static constexpr uint32_t HCINT4_TXERR = 0x80; // TXERR
    static constexpr uint32_t HCINT4_BBERR = 0x100; // BBERR
    static constexpr uint32_t HCINT4_FRMOR = 0x200; // FRMOR
    static constexpr uint32_t HCINT4_DTERR = 0x400; // DTERR

    static constexpr uint32_t HCINTMSK4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HCINTMSK4_XFRCM = 0x1; // XFRCM
    static constexpr uint32_t HCINTMSK4_CHHM = 0x2; // CHHM
    static constexpr uint32_t HCINTMSK4_STALLM = 0x8; // STALLM
    static constexpr uint32_t HCINTMSK4_NAKM = 0x10; // NAKM
    static constexpr uint32_t HCINTMSK4_ACKM = 0x20; // ACKM
    static constexpr uint32_t HCINTMSK4_TXERRM = 0x80; // TXERRM
    static constexpr uint32_t HCINTMSK4_BBERRM = 0x100; // BBERRM
    static constexpr uint32_t HCINTMSK4_FRMORM = 0x200; // FRMORM
    static constexpr uint32_t HCINTMSK4_DTERRM = 0x400; // DTERRM

    static constexpr uint32_t HCTSIZ4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> HCTSIZ4_XFRSIZ; // XFRSIZ
    typedef bit_field_t<19, 0x3ff> HCTSIZ4_PKTCNT; // PKTCNT
    typedef bit_field_t<29, 0x3> HCTSIZ4_DPID; // DPID
    static constexpr uint32_t HCTSIZ4_DOPNG = 0x80000000; // DOPNG


    static constexpr uint32_t HCCHAR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> HCCHAR5_MPSIZ; // MPSIZ
    typedef bit_field_t<11, 0xf> HCCHAR5_EPNUM; // EPNUM
    static constexpr uint32_t HCCHAR5_EPDIR = 0x8000; // EPDIR
    static constexpr uint32_t HCCHAR5_LSDEV = 0x20000; // LSDEV
    typedef bit_field_t<18, 0x3> HCCHAR5_EPTYP; // EPTYP
    typedef bit_field_t<20, 0x3> HCCHAR5_MCNT; // MCNT
    typedef bit_field_t<22, 0x7f> HCCHAR5_DAD; // DAD
    static constexpr uint32_t HCCHAR5_ODDFRM = 0x20000000; // ODDFRM
    static constexpr uint32_t HCCHAR5_CHDIS = 0x40000000; // CHDIS
    static constexpr uint32_t HCCHAR5_CHENA = 0x80000000; // CHENA


    static constexpr uint32_t HCINT5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HCINT5_XFRC = 0x1; // XFRC
    static constexpr uint32_t HCINT5_CHH = 0x2; // CHH
    static constexpr uint32_t HCINT5_STALL = 0x8; // STALL
    static constexpr uint32_t HCINT5_NAK = 0x10; // NAK
    static constexpr uint32_t HCINT5_ACK = 0x20; // ACK
    static constexpr uint32_t HCINT5_TXERR = 0x80; // TXERR
    static constexpr uint32_t HCINT5_BBERR = 0x100; // BBERR
    static constexpr uint32_t HCINT5_FRMOR = 0x200; // FRMOR
    static constexpr uint32_t HCINT5_DTERR = 0x400; // DTERR

    static constexpr uint32_t HCINTMSK5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HCINTMSK5_XFRCM = 0x1; // XFRCM
    static constexpr uint32_t HCINTMSK5_CHHM = 0x2; // CHHM
    static constexpr uint32_t HCINTMSK5_STALLM = 0x8; // STALLM
    static constexpr uint32_t HCINTMSK5_NAKM = 0x10; // NAKM
    static constexpr uint32_t HCINTMSK5_ACKM = 0x20; // ACKM
    static constexpr uint32_t HCINTMSK5_TXERRM = 0x80; // TXERRM
    static constexpr uint32_t HCINTMSK5_BBERRM = 0x100; // BBERRM
    static constexpr uint32_t HCINTMSK5_FRMORM = 0x200; // FRMORM
    static constexpr uint32_t HCINTMSK5_DTERRM = 0x400; // DTERRM

    static constexpr uint32_t HCTSIZ5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> HCTSIZ5_XFRSIZ; // XFRSIZ
    typedef bit_field_t<19, 0x3ff> HCTSIZ5_PKTCNT; // PKTCNT
    typedef bit_field_t<29, 0x3> HCTSIZ5_DPID; // DPID
    static constexpr uint32_t HCTSIZ5_DOPNG = 0x80000000; // DOPNG


    static constexpr uint32_t HCCHAR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> HCCHAR6_MPSIZ; // MPSIZ
    typedef bit_field_t<11, 0xf> HCCHAR6_EPNUM; // EPNUM
    static constexpr uint32_t HCCHAR6_EPDIR = 0x8000; // EPDIR
    static constexpr uint32_t HCCHAR6_LSDEV = 0x20000; // LSDEV
    typedef bit_field_t<18, 0x3> HCCHAR6_EPTYP; // EPTYP
    typedef bit_field_t<20, 0x3> HCCHAR6_MCNT; // MCNT
    typedef bit_field_t<22, 0x7f> HCCHAR6_DAD; // DAD
    static constexpr uint32_t HCCHAR6_ODDFRM = 0x20000000; // ODDFRM
    static constexpr uint32_t HCCHAR6_CHDIS = 0x40000000; // CHDIS
    static constexpr uint32_t HCCHAR6_CHENA = 0x80000000; // CHENA


    static constexpr uint32_t HCINT6_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HCINT6_XFRC = 0x1; // XFRC
    static constexpr uint32_t HCINT6_CHH = 0x2; // CHH
    static constexpr uint32_t HCINT6_STALL = 0x8; // STALL
    static constexpr uint32_t HCINT6_NAK = 0x10; // NAK
    static constexpr uint32_t HCINT6_ACK = 0x20; // ACK
    static constexpr uint32_t HCINT6_TXERR = 0x80; // TXERR
    static constexpr uint32_t HCINT6_BBERR = 0x100; // BBERR
    static constexpr uint32_t HCINT6_FRMOR = 0x200; // FRMOR
    static constexpr uint32_t HCINT6_DTERR = 0x400; // DTERR

    static constexpr uint32_t HCINTMSK6_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HCINTMSK6_XFRCM = 0x1; // XFRCM
    static constexpr uint32_t HCINTMSK6_CHHM = 0x2; // CHHM
    static constexpr uint32_t HCINTMSK6_STALLM = 0x8; // STALLM
    static constexpr uint32_t HCINTMSK6_NAKM = 0x10; // NAKM
    static constexpr uint32_t HCINTMSK6_ACKM = 0x20; // ACKM
    static constexpr uint32_t HCINTMSK6_TXERRM = 0x80; // TXERRM
    static constexpr uint32_t HCINTMSK6_BBERRM = 0x100; // BBERRM
    static constexpr uint32_t HCINTMSK6_FRMORM = 0x200; // FRMORM
    static constexpr uint32_t HCINTMSK6_DTERRM = 0x400; // DTERRM

    static constexpr uint32_t HCTSIZ6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> HCTSIZ6_XFRSIZ; // XFRSIZ
    typedef bit_field_t<19, 0x3ff> HCTSIZ6_PKTCNT; // PKTCNT
    typedef bit_field_t<29, 0x3> HCTSIZ6_DPID; // DPID
    static constexpr uint32_t HCTSIZ6_DOPNG = 0x80000000; // DOPNG


    static constexpr uint32_t HCCHAR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> HCCHAR7_MPSIZ; // MPSIZ
    typedef bit_field_t<11, 0xf> HCCHAR7_EPNUM; // EPNUM
    static constexpr uint32_t HCCHAR7_EPDIR = 0x8000; // EPDIR
    static constexpr uint32_t HCCHAR7_LSDEV = 0x20000; // LSDEV
    typedef bit_field_t<18, 0x3> HCCHAR7_EPTYP; // EPTYP
    typedef bit_field_t<20, 0x3> HCCHAR7_MCNT; // MCNT
    typedef bit_field_t<22, 0x7f> HCCHAR7_DAD; // DAD
    static constexpr uint32_t HCCHAR7_ODDFRM = 0x20000000; // ODDFRM
    static constexpr uint32_t HCCHAR7_CHDIS = 0x40000000; // CHDIS
    static constexpr uint32_t HCCHAR7_CHENA = 0x80000000; // CHENA


    static constexpr uint32_t HCINT7_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HCINT7_XFRC = 0x1; // XFRC
    static constexpr uint32_t HCINT7_CHH = 0x2; // CHH
    static constexpr uint32_t HCINT7_STALL = 0x8; // STALL
    static constexpr uint32_t HCINT7_NAK = 0x10; // NAK
    static constexpr uint32_t HCINT7_ACK = 0x20; // ACK
    static constexpr uint32_t HCINT7_TXERR = 0x80; // TXERR
    static constexpr uint32_t HCINT7_BBERR = 0x100; // BBERR
    static constexpr uint32_t HCINT7_FRMOR = 0x200; // FRMOR
    static constexpr uint32_t HCINT7_DTERR = 0x400; // DTERR

    static constexpr uint32_t HCINTMSK7_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HCINTMSK7_XFRCM = 0x1; // XFRCM
    static constexpr uint32_t HCINTMSK7_CHHM = 0x2; // CHHM
    static constexpr uint32_t HCINTMSK7_STALLM = 0x8; // STALLM
    static constexpr uint32_t HCINTMSK7_NAKM = 0x10; // NAKM
    static constexpr uint32_t HCINTMSK7_ACKM = 0x20; // ACKM
    static constexpr uint32_t HCINTMSK7_TXERRM = 0x80; // TXERRM
    static constexpr uint32_t HCINTMSK7_BBERRM = 0x100; // BBERRM
    static constexpr uint32_t HCINTMSK7_FRMORM = 0x200; // FRMORM
    static constexpr uint32_t HCINTMSK7_DTERRM = 0x400; // DTERRM

    static constexpr uint32_t HCTSIZ7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> HCTSIZ7_XFRSIZ; // XFRSIZ
    typedef bit_field_t<19, 0x3ff> HCTSIZ7_PKTCNT; // PKTCNT
    typedef bit_field_t<29, 0x3> HCTSIZ7_DPID; // DPID
    static constexpr uint32_t HCTSIZ7_DOPNG = 0x80000000; // DOPNG


    static constexpr uint32_t HCCHAR8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> HCCHAR8_MPSIZ; // MPSIZ
    typedef bit_field_t<11, 0xf> HCCHAR8_EPNUM; // EPNUM
    static constexpr uint32_t HCCHAR8_EPDIR = 0x8000; // EPDIR
    static constexpr uint32_t HCCHAR8_LSDEV = 0x20000; // LSDEV
    typedef bit_field_t<18, 0x3> HCCHAR8_EPTYP; // EPTYP
    typedef bit_field_t<20, 0x3> HCCHAR8_MCNT; // MCNT
    typedef bit_field_t<22, 0x7f> HCCHAR8_DAD; // DAD
    static constexpr uint32_t HCCHAR8_ODDFRM = 0x20000000; // ODDFRM
    static constexpr uint32_t HCCHAR8_CHDIS = 0x40000000; // CHDIS
    static constexpr uint32_t HCCHAR8_CHENA = 0x80000000; // CHENA


    static constexpr uint32_t HCINT8_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HCINT8_XFRC = 0x1; // XFRC
    static constexpr uint32_t HCINT8_CHH = 0x2; // CHH
    static constexpr uint32_t HCINT8_STALL = 0x8; // STALL
    static constexpr uint32_t HCINT8_NAK = 0x10; // NAK
    static constexpr uint32_t HCINT8_ACK = 0x20; // ACK
    static constexpr uint32_t HCINT8_TXERR = 0x80; // TXERR
    static constexpr uint32_t HCINT8_BBERR = 0x100; // BBERR
    static constexpr uint32_t HCINT8_FRMOR = 0x200; // FRMOR
    static constexpr uint32_t HCINT8_DTERR = 0x400; // DTERR

    static constexpr uint32_t HCINTMSK8_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HCINTMSK8_XFRCM = 0x1; // XFRCM
    static constexpr uint32_t HCINTMSK8_CHHM = 0x2; // CHHM
    static constexpr uint32_t HCINTMSK8_STALLM = 0x8; // STALLM
    static constexpr uint32_t HCINTMSK8_NAKM = 0x10; // NAKM
    static constexpr uint32_t HCINTMSK8_ACKM = 0x20; // ACKM
    static constexpr uint32_t HCINTMSK8_TXERRM = 0x80; // TXERRM
    static constexpr uint32_t HCINTMSK8_BBERRM = 0x100; // BBERRM
    static constexpr uint32_t HCINTMSK8_FRMORM = 0x200; // FRMORM
    static constexpr uint32_t HCINTMSK8_DTERRM = 0x400; // DTERRM

    static constexpr uint32_t HCTSIZ8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> HCTSIZ8_XFRSIZ; // XFRSIZ
    typedef bit_field_t<19, 0x3ff> HCTSIZ8_PKTCNT; // PKTCNT
    typedef bit_field_t<29, 0x3> HCTSIZ8_DPID; // DPID
    static constexpr uint32_t HCTSIZ8_DOPNG = 0x80000000; // DOPNG


    static constexpr uint32_t HCCHAR9_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> HCCHAR9_MPSIZ; // MPSIZ
    typedef bit_field_t<11, 0xf> HCCHAR9_EPNUM; // EPNUM
    static constexpr uint32_t HCCHAR9_EPDIR = 0x8000; // EPDIR
    static constexpr uint32_t HCCHAR9_LSDEV = 0x20000; // LSDEV
    typedef bit_field_t<18, 0x3> HCCHAR9_EPTYP; // EPTYP
    typedef bit_field_t<20, 0x3> HCCHAR9_MCNT; // MCNT
    typedef bit_field_t<22, 0x7f> HCCHAR9_DAD; // DAD
    static constexpr uint32_t HCCHAR9_ODDFRM = 0x20000000; // ODDFRM
    static constexpr uint32_t HCCHAR9_CHDIS = 0x40000000; // CHDIS
    static constexpr uint32_t HCCHAR9_CHENA = 0x80000000; // CHENA


    static constexpr uint32_t HCINT9_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HCINT9_XFRC = 0x1; // XFRC
    static constexpr uint32_t HCINT9_CHH = 0x2; // CHH
    static constexpr uint32_t HCINT9_STALL = 0x8; // STALL
    static constexpr uint32_t HCINT9_NAK = 0x10; // NAK
    static constexpr uint32_t HCINT9_ACK = 0x20; // ACK
    static constexpr uint32_t HCINT9_TXERR = 0x80; // TXERR
    static constexpr uint32_t HCINT9_BBERR = 0x100; // BBERR
    static constexpr uint32_t HCINT9_FRMOR = 0x200; // FRMOR
    static constexpr uint32_t HCINT9_DTERR = 0x400; // DTERR

    static constexpr uint32_t HCINTMSK9_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HCINTMSK9_XFRCM = 0x1; // XFRCM
    static constexpr uint32_t HCINTMSK9_CHHM = 0x2; // CHHM
    static constexpr uint32_t HCINTMSK9_STALLM = 0x8; // STALLM
    static constexpr uint32_t HCINTMSK9_NAKM = 0x10; // NAKM
    static constexpr uint32_t HCINTMSK9_ACKM = 0x20; // ACKM
    static constexpr uint32_t HCINTMSK9_TXERRM = 0x80; // TXERRM
    static constexpr uint32_t HCINTMSK9_BBERRM = 0x100; // BBERRM
    static constexpr uint32_t HCINTMSK9_FRMORM = 0x200; // FRMORM
    static constexpr uint32_t HCINTMSK9_DTERRM = 0x400; // DTERRM

    static constexpr uint32_t HCTSIZ9_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> HCTSIZ9_XFRSIZ; // XFRSIZ
    typedef bit_field_t<19, 0x3ff> HCTSIZ9_PKTCNT; // PKTCNT
    typedef bit_field_t<29, 0x3> HCTSIZ9_DPID; // DPID
    static constexpr uint32_t HCTSIZ9_DOPNG = 0x80000000; // DOPNG


    static constexpr uint32_t HCCHAR10_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> HCCHAR10_MPSIZ; // MPSIZ
    typedef bit_field_t<11, 0xf> HCCHAR10_EPNUM; // EPNUM
    static constexpr uint32_t HCCHAR10_EPDIR = 0x8000; // EPDIR
    static constexpr uint32_t HCCHAR10_LSDEV = 0x20000; // LSDEV
    typedef bit_field_t<18, 0x3> HCCHAR10_EPTYP; // EPTYP
    typedef bit_field_t<20, 0x3> HCCHAR10_MCNT; // MCNT
    typedef bit_field_t<22, 0x7f> HCCHAR10_DAD; // DAD
    static constexpr uint32_t HCCHAR10_ODDFRM = 0x20000000; // ODDFRM
    static constexpr uint32_t HCCHAR10_CHDIS = 0x40000000; // CHDIS
    static constexpr uint32_t HCCHAR10_CHENA = 0x80000000; // CHENA


    static constexpr uint32_t HCINT10_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HCINT10_XFRC = 0x1; // XFRC
    static constexpr uint32_t HCINT10_CHH = 0x2; // CHH
    static constexpr uint32_t HCINT10_STALL = 0x8; // STALL
    static constexpr uint32_t HCINT10_NAK = 0x10; // NAK
    static constexpr uint32_t HCINT10_ACK = 0x20; // ACK
    static constexpr uint32_t HCINT10_TXERR = 0x80; // TXERR
    static constexpr uint32_t HCINT10_BBERR = 0x100; // BBERR
    static constexpr uint32_t HCINT10_FRMOR = 0x200; // FRMOR
    static constexpr uint32_t HCINT10_DTERR = 0x400; // DTERR

    static constexpr uint32_t HCINTMSK10_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HCINTMSK10_XFRCM = 0x1; // XFRCM
    static constexpr uint32_t HCINTMSK10_CHHM = 0x2; // CHHM
    static constexpr uint32_t HCINTMSK10_STALLM = 0x8; // STALLM
    static constexpr uint32_t HCINTMSK10_NAKM = 0x10; // NAKM
    static constexpr uint32_t HCINTMSK10_ACKM = 0x20; // ACKM
    static constexpr uint32_t HCINTMSK10_TXERRM = 0x80; // TXERRM
    static constexpr uint32_t HCINTMSK10_BBERRM = 0x100; // BBERRM
    static constexpr uint32_t HCINTMSK10_FRMORM = 0x200; // FRMORM
    static constexpr uint32_t HCINTMSK10_DTERRM = 0x400; // DTERRM

    static constexpr uint32_t HCTSIZ10_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> HCTSIZ10_XFRSIZ; // XFRSIZ
    typedef bit_field_t<19, 0x3ff> HCTSIZ10_PKTCNT; // PKTCNT
    typedef bit_field_t<29, 0x3> HCTSIZ10_DPID; // DPID
    static constexpr uint32_t HCTSIZ10_DOPNG = 0x80000000; // DOPNG


    static constexpr uint32_t HCCHAR11_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> HCCHAR11_MPSIZ; // MPSIZ
    typedef bit_field_t<11, 0xf> HCCHAR11_EPNUM; // EPNUM
    static constexpr uint32_t HCCHAR11_EPDIR = 0x8000; // EPDIR
    static constexpr uint32_t HCCHAR11_LSDEV = 0x20000; // LSDEV
    typedef bit_field_t<18, 0x3> HCCHAR11_EPTYP; // EPTYP
    typedef bit_field_t<20, 0x3> HCCHAR11_MCNT; // MCNT
    typedef bit_field_t<22, 0x7f> HCCHAR11_DAD; // DAD
    static constexpr uint32_t HCCHAR11_ODDFRM = 0x20000000; // ODDFRM
    static constexpr uint32_t HCCHAR11_CHDIS = 0x40000000; // CHDIS
    static constexpr uint32_t HCCHAR11_CHENA = 0x80000000; // CHENA


    static constexpr uint32_t HCINT11_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HCINT11_XFRC = 0x1; // XFRC
    static constexpr uint32_t HCINT11_CHH = 0x2; // CHH
    static constexpr uint32_t HCINT11_STALL = 0x8; // STALL
    static constexpr uint32_t HCINT11_NAK = 0x10; // NAK
    static constexpr uint32_t HCINT11_ACK = 0x20; // ACK
    static constexpr uint32_t HCINT11_TXERR = 0x80; // TXERR
    static constexpr uint32_t HCINT11_BBERR = 0x100; // BBERR
    static constexpr uint32_t HCINT11_FRMOR = 0x200; // FRMOR
    static constexpr uint32_t HCINT11_DTERR = 0x400; // DTERR

    static constexpr uint32_t HCINTMSK11_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HCINTMSK11_XFRCM = 0x1; // XFRCM
    static constexpr uint32_t HCINTMSK11_CHHM = 0x2; // CHHM
    static constexpr uint32_t HCINTMSK11_STALLM = 0x8; // STALLM
    static constexpr uint32_t HCINTMSK11_NAKM = 0x10; // NAKM
    static constexpr uint32_t HCINTMSK11_ACKM = 0x20; // ACKM
    static constexpr uint32_t HCINTMSK11_TXERRM = 0x80; // TXERRM
    static constexpr uint32_t HCINTMSK11_BBERRM = 0x100; // BBERRM
    static constexpr uint32_t HCINTMSK11_FRMORM = 0x200; // FRMORM
    static constexpr uint32_t HCINTMSK11_DTERRM = 0x400; // DTERRM

    static constexpr uint32_t HCTSIZ11_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> HCTSIZ11_XFRSIZ; // XFRSIZ
    typedef bit_field_t<19, 0x3ff> HCTSIZ11_PKTCNT; // PKTCNT
    typedef bit_field_t<29, 0x3> HCTSIZ11_DPID; // DPID
    static constexpr uint32_t HCTSIZ11_DOPNG = 0x80000000; // DOPNG


    static constexpr uint32_t DCFG_RESET_VALUE = 0x2200000; // Reset value
    typedef bit_field_t<0, 0x3> DCFG_DSPD; // DSPD
    static constexpr uint32_t DCFG_NZLSOHSK = 0x4; // NZLSOHSK
    typedef bit_field_t<4, 0x7f> DCFG_DAD; // DAD
    typedef bit_field_t<11, 0x3> DCFG_PFIVL; // PFIVL
    static constexpr uint32_t DCFG_ERRATIM = 0x8000; // ERRATIM

    static constexpr uint32_t DCTL_RESET_VALUE = 0x2; // Reset value
    static constexpr uint32_t DCTL_RWUSIG = 0x1; // RWUSIG
    static constexpr uint32_t DCTL_SDIS = 0x2; // SDIS
    static constexpr uint32_t DCTL_GINSTS = 0x4; // GINSTS
    static constexpr uint32_t DCTL_GONSTS = 0x8; // GONSTS
    typedef bit_field_t<4, 0x7> DCTL_TCTL; // TCTL
    static constexpr uint32_t DCTL_SGINAK = 0x80; // SGINAK
    static constexpr uint32_t DCTL_CGINAK = 0x100; // CGINAK
    static constexpr uint32_t DCTL_SGONAK = 0x200; // SGONAK
    static constexpr uint32_t DCTL_CGONAK = 0x400; // CGONAK
    static constexpr uint32_t DCTL_POPRGDNE = 0x800; // POPRGDNE
    static constexpr uint32_t DCTL_DSBESLRJCT = 0x40000; // DSBESLRJCT

    static constexpr uint32_t DSTS_RESET_VALUE = 0x10; // Reset value
    static constexpr uint32_t DSTS_SUSPSTS = 0x1; // SUSPSTS
    typedef bit_field_t<1, 0x3> DSTS_ENUMSPD; // ENUMSPD
    static constexpr uint32_t DSTS_EERR = 0x8; // EERR
    typedef bit_field_t<8, 0x3fff> DSTS_FNSOF; // FNSOF
    typedef bit_field_t<22, 0x3> DSTS_DEVLNSTS; // DEVLNSTS


    static constexpr uint32_t DIEPMSK_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIEPMSK_XFRCM = 0x1; // XFRCM
    static constexpr uint32_t DIEPMSK_EPDM = 0x2; // EPDM
    static constexpr uint32_t DIEPMSK_TOM = 0x8; // TOM
    static constexpr uint32_t DIEPMSK_ITTXFEMSK = 0x10; // ITTXFEMSK
    static constexpr uint32_t DIEPMSK_INEPNMM = 0x20; // INEPNMM
    static constexpr uint32_t DIEPMSK_INEPNEM = 0x40; // INEPNEM
    static constexpr uint32_t DIEPMSK_NAKM = 0x2000; // NAKM

    static constexpr uint32_t DOEPMSK_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DOEPMSK_XFRCM = 0x1; // XFRCM
    static constexpr uint32_t DOEPMSK_EPDM = 0x2; // EPDM
    static constexpr uint32_t DOEPMSK_STUPM = 0x8; // STUPM
    static constexpr uint32_t DOEPMSK_OTEPDM = 0x10; // OTEPDM
    static constexpr uint32_t DOEPMSK_STSPHSRXM = 0x20; // STSPHSRXM
    static constexpr uint32_t DOEPMSK_OUTPKTERRM = 0x100; // OUTPKTERRM
    static constexpr uint32_t DOEPMSK_BERRM = 0x1000; // BERRM
    static constexpr uint32_t DOEPMSK_NAKMSK = 0x2000; // NAKMSK

    static constexpr uint32_t DAINT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DAINT_IEPINT; // IEPINT
    typedef bit_field_t<16, 0xffff> DAINT_OEPINT; // OEPINT

    static constexpr uint32_t DAINTMSK_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DAINTMSK_IEPM; // IEPM
    typedef bit_field_t<16, 0xffff> DAINTMSK_OEPM; // OEPM


    static constexpr uint32_t DVBUSDIS_RESET_VALUE = 0x17d7; // Reset value
    typedef bit_field_t<0, 0xffff> DVBUSDIS_VBUSDT; // VBUSDT

    static constexpr uint32_t DVBUSPULSE_RESET_VALUE = 0x5b8; // Reset value
    typedef bit_field_t<0, 0xffff> DVBUSPULSE_DVBUSP; // DVBUSP


    static constexpr uint32_t DIEPEMPMSK_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DIEPEMPMSK_INEPTXFEM; // INEPTXFEM


    static constexpr uint32_t DIEPCTL0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> DIEPCTL0_MPSIZ; // MPSIZ
    static constexpr uint32_t DIEPCTL0_USBAEP = 0x8000; // USBAEP
    static constexpr uint32_t DIEPCTL0_NAKSTS = 0x20000; // NAKSTS
    typedef bit_field_t<18, 0x3> DIEPCTL0_EPTYP; // EPTYP
    static constexpr uint32_t DIEPCTL0_STALL = 0x200000; // STALL
    typedef bit_field_t<22, 0xf> DIEPCTL0_TXFNUM; // TXFNUM
    static constexpr uint32_t DIEPCTL0_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t DIEPCTL0_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t DIEPCTL0_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t DIEPCTL0_EPENA = 0x80000000; // EPENA


    static constexpr uint32_t DIEPINT0_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DIEPINT0_XFRC = 0x1; // XFRC
    static constexpr uint32_t DIEPINT0_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DIEPINT0_TOC = 0x8; // TOC
    static constexpr uint32_t DIEPINT0_ITTXFE = 0x10; // ITTXFE
    static constexpr uint32_t DIEPINT0_INEPNM = 0x20; // INEPNM
    static constexpr uint32_t DIEPINT0_INEPNE = 0x40; // INEPNE
    static constexpr uint32_t DIEPINT0_TXFE = 0x80; // TXFE
    static constexpr uint32_t DIEPINT0_PKTDRPSTS = 0x800; // PKTDRPSTS
    static constexpr uint32_t DIEPINT0_NAK = 0x2000; // NAK


    static constexpr uint32_t DIEPTSIZ0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> DIEPTSIZ0_XFRSIZ; // XFRSIZ
    typedef bit_field_t<19, 0x3> DIEPTSIZ0_PKTCNT; // PKTCNT


    static constexpr uint32_t DTXFSTS0_RESET_VALUE = 0x200; // Reset value
    typedef bit_field_t<0, 0xffff> DTXFSTS0_INEPTFSAV; // INEPTFSAV


    static constexpr uint32_t DIEPCTL1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> DIEPCTL1_MPSIZ; // MPSIZ
    static constexpr uint32_t DIEPCTL1_USBAEP = 0x8000; // USBAEP
    static constexpr uint32_t DIEPCTL1_EONUM_DPIP = 0x10000; // EONUM_DPIP
    static constexpr uint32_t DIEPCTL1_NAKSTS = 0x20000; // NAKSTS
    typedef bit_field_t<18, 0x3> DIEPCTL1_EPTYP; // EPTYP
    static constexpr uint32_t DIEPCTL1_STALL = 0x200000; // STALL
    typedef bit_field_t<22, 0xf> DIEPCTL1_TXFNUM; // TXFNUM
    static constexpr uint32_t DIEPCTL1_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t DIEPCTL1_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t DIEPCTL1_SD0PID_SEVNFRM = 0x10000000; // SD0PID_SEVNFRM
    static constexpr uint32_t DIEPCTL1_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t DIEPCTL1_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t DIEPCTL1_EPENA = 0x80000000; // EPENA


    static constexpr uint32_t DIEPINT1_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DIEPINT1_XFRC = 0x1; // XFRC
    static constexpr uint32_t DIEPINT1_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DIEPINT1_TOC = 0x8; // TOC
    static constexpr uint32_t DIEPINT1_ITTXFE = 0x10; // ITTXFE
    static constexpr uint32_t DIEPINT1_INEPNM = 0x20; // INEPNM
    static constexpr uint32_t DIEPINT1_INEPNE = 0x40; // INEPNE
    static constexpr uint32_t DIEPINT1_TXFE = 0x80; // TXFE
    static constexpr uint32_t DIEPINT1_PKTDRPSTS = 0x800; // PKTDRPSTS
    static constexpr uint32_t DIEPINT1_NAK = 0x2000; // NAK


    static constexpr uint32_t DIEPTSIZ1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> DIEPTSIZ1_XFRSIZ; // XFRSIZ
    typedef bit_field_t<19, 0x3ff> DIEPTSIZ1_PKTCNT; // PKTCNT
    typedef bit_field_t<29, 0x3> DIEPTSIZ1_MCNT; // MCNT

    static constexpr uint32_t DIEPDMA1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DIEPDMA1_DMAADDR; // DMAADDR

    static constexpr uint32_t DTXFSTS1_RESET_VALUE = 0x200; // Reset value
    typedef bit_field_t<0, 0xffff> DTXFSTS1_INEPTFSAV; // INEPTFSAV


    static constexpr uint32_t DIEPCTL2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> DIEPCTL2_MPSIZ; // MPSIZ
    static constexpr uint32_t DIEPCTL2_USBAEP = 0x8000; // USBAEP
    static constexpr uint32_t DIEPCTL2_EONUM_DPIP = 0x10000; // EONUM_DPIP
    static constexpr uint32_t DIEPCTL2_NAKSTS = 0x20000; // NAKSTS
    typedef bit_field_t<18, 0x3> DIEPCTL2_EPTYP; // EPTYP
    static constexpr uint32_t DIEPCTL2_STALL = 0x200000; // STALL
    typedef bit_field_t<22, 0xf> DIEPCTL2_TXFNUM; // TXFNUM
    static constexpr uint32_t DIEPCTL2_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t DIEPCTL2_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t DIEPCTL2_SD0PID_SEVNFRM = 0x10000000; // SD0PID_SEVNFRM
    static constexpr uint32_t DIEPCTL2_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t DIEPCTL2_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t DIEPCTL2_EPENA = 0x80000000; // EPENA


    static constexpr uint32_t DIEPINT2_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DIEPINT2_XFRC = 0x1; // XFRC
    static constexpr uint32_t DIEPINT2_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DIEPINT2_TOC = 0x8; // TOC
    static constexpr uint32_t DIEPINT2_ITTXFE = 0x10; // ITTXFE
    static constexpr uint32_t DIEPINT2_INEPNM = 0x20; // INEPNM
    static constexpr uint32_t DIEPINT2_INEPNE = 0x40; // INEPNE
    static constexpr uint32_t DIEPINT2_TXFE = 0x80; // TXFE
    static constexpr uint32_t DIEPINT2_PKTDRPSTS = 0x800; // PKTDRPSTS
    static constexpr uint32_t DIEPINT2_NAK = 0x2000; // NAK


    static constexpr uint32_t DIEPTSIZ2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> DIEPTSIZ2_XFRSIZ; // XFRSIZ
    typedef bit_field_t<19, 0x3ff> DIEPTSIZ2_PKTCNT; // PKTCNT
    typedef bit_field_t<29, 0x3> DIEPTSIZ2_MCNT; // MCNT

    static constexpr uint32_t DIEPDMA2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DIEPDMA2_DMAADDR; // DMAADDR

    static constexpr uint32_t DTXFSTS2_RESET_VALUE = 0x200; // Reset value
    typedef bit_field_t<0, 0xffff> DTXFSTS2_INEPTFSAV; // INEPTFSAV


    static constexpr uint32_t DIEPCTL3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> DIEPCTL3_MPSIZ; // MPSIZ
    static constexpr uint32_t DIEPCTL3_USBAEP = 0x8000; // USBAEP
    static constexpr uint32_t DIEPCTL3_EONUM_DPIP = 0x10000; // EONUM_DPIP
    static constexpr uint32_t DIEPCTL3_NAKSTS = 0x20000; // NAKSTS
    typedef bit_field_t<18, 0x3> DIEPCTL3_EPTYP; // EPTYP
    static constexpr uint32_t DIEPCTL3_STALL = 0x200000; // STALL
    typedef bit_field_t<22, 0xf> DIEPCTL3_TXFNUM; // TXFNUM
    static constexpr uint32_t DIEPCTL3_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t DIEPCTL3_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t DIEPCTL3_SD0PID_SEVNFRM = 0x10000000; // SD0PID_SEVNFRM
    static constexpr uint32_t DIEPCTL3_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t DIEPCTL3_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t DIEPCTL3_EPENA = 0x80000000; // EPENA


    static constexpr uint32_t DIEPINT3_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DIEPINT3_XFRC = 0x1; // XFRC
    static constexpr uint32_t DIEPINT3_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DIEPINT3_TOC = 0x8; // TOC
    static constexpr uint32_t DIEPINT3_ITTXFE = 0x10; // ITTXFE
    static constexpr uint32_t DIEPINT3_INEPNM = 0x20; // INEPNM
    static constexpr uint32_t DIEPINT3_INEPNE = 0x40; // INEPNE
    static constexpr uint32_t DIEPINT3_TXFE = 0x80; // TXFE
    static constexpr uint32_t DIEPINT3_PKTDRPSTS = 0x800; // PKTDRPSTS
    static constexpr uint32_t DIEPINT3_NAK = 0x2000; // NAK


    static constexpr uint32_t DIEPTSIZ3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> DIEPTSIZ3_XFRSIZ; // XFRSIZ
    typedef bit_field_t<19, 0x3ff> DIEPTSIZ3_PKTCNT; // PKTCNT
    typedef bit_field_t<29, 0x3> DIEPTSIZ3_MCNT; // MCNT

    static constexpr uint32_t DIEPDMA3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DIEPDMA3_DMAADDR; // DMAADDR

    static constexpr uint32_t DTXFSTS3_RESET_VALUE = 0x200; // Reset value
    typedef bit_field_t<0, 0xffff> DTXFSTS3_INEPTFSAV; // INEPTFSAV


    static constexpr uint32_t DIEPCTL4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> DIEPCTL4_MPSIZ; // MPSIZ
    static constexpr uint32_t DIEPCTL4_USBAEP = 0x8000; // USBAEP
    static constexpr uint32_t DIEPCTL4_EONUM_DPIP = 0x10000; // EONUM_DPIP
    static constexpr uint32_t DIEPCTL4_NAKSTS = 0x20000; // NAKSTS
    typedef bit_field_t<18, 0x3> DIEPCTL4_EPTYP; // EPTYP
    static constexpr uint32_t DIEPCTL4_STALL = 0x200000; // STALL
    typedef bit_field_t<22, 0xf> DIEPCTL4_TXFNUM; // TXFNUM
    static constexpr uint32_t DIEPCTL4_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t DIEPCTL4_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t DIEPCTL4_SD0PID_SEVNFRM = 0x10000000; // SD0PID_SEVNFRM
    static constexpr uint32_t DIEPCTL4_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t DIEPCTL4_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t DIEPCTL4_EPENA = 0x80000000; // EPENA


    static constexpr uint32_t DIEPINT4_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DIEPINT4_XFRC = 0x1; // XFRC
    static constexpr uint32_t DIEPINT4_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DIEPINT4_TOC = 0x8; // TOC
    static constexpr uint32_t DIEPINT4_ITTXFE = 0x10; // ITTXFE
    static constexpr uint32_t DIEPINT4_INEPNM = 0x20; // INEPNM
    static constexpr uint32_t DIEPINT4_INEPNE = 0x40; // INEPNE
    static constexpr uint32_t DIEPINT4_TXFE = 0x80; // TXFE
    static constexpr uint32_t DIEPINT4_PKTDRPSTS = 0x800; // PKTDRPSTS
    static constexpr uint32_t DIEPINT4_NAK = 0x2000; // NAK


    static constexpr uint32_t DIEPTSIZ4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> DIEPTSIZ4_XFRSIZ; // XFRSIZ
    typedef bit_field_t<19, 0x3ff> DIEPTSIZ4_PKTCNT; // PKTCNT
    typedef bit_field_t<29, 0x3> DIEPTSIZ4_MCNT; // MCNT

    static constexpr uint32_t DIEPDMA4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DIEPDMA4_DMAADDR; // DMAADDR

    static constexpr uint32_t DTXFSTS4_RESET_VALUE = 0x200; // Reset value
    typedef bit_field_t<0, 0xffff> DTXFSTS4_INEPTFSAV; // INEPTFSAV


    static constexpr uint32_t DIEPCTL5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> DIEPCTL5_MPSIZ; // MPSIZ
    static constexpr uint32_t DIEPCTL5_USBAEP = 0x8000; // USBAEP
    static constexpr uint32_t DIEPCTL5_EONUM_DPIP = 0x10000; // EONUM_DPIP
    static constexpr uint32_t DIEPCTL5_NAKSTS = 0x20000; // NAKSTS
    typedef bit_field_t<18, 0x3> DIEPCTL5_EPTYP; // EPTYP
    static constexpr uint32_t DIEPCTL5_STALL = 0x200000; // STALL
    typedef bit_field_t<22, 0xf> DIEPCTL5_TXFNUM; // TXFNUM
    static constexpr uint32_t DIEPCTL5_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t DIEPCTL5_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t DIEPCTL5_SD0PID_SEVNFRM = 0x10000000; // SD0PID_SEVNFRM
    static constexpr uint32_t DIEPCTL5_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t DIEPCTL5_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t DIEPCTL5_EPENA = 0x80000000; // EPENA


    static constexpr uint32_t DIEPINT5_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DIEPINT5_XFRC = 0x1; // XFRC
    static constexpr uint32_t DIEPINT5_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DIEPINT5_TOC = 0x8; // TOC
    static constexpr uint32_t DIEPINT5_ITTXFE = 0x10; // ITTXFE
    static constexpr uint32_t DIEPINT5_INEPNM = 0x20; // INEPNM
    static constexpr uint32_t DIEPINT5_INEPNE = 0x40; // INEPNE
    static constexpr uint32_t DIEPINT5_TXFE = 0x80; // TXFE
    static constexpr uint32_t DIEPINT5_PKTDRPSTS = 0x800; // PKTDRPSTS
    static constexpr uint32_t DIEPINT5_NAK = 0x2000; // NAK


    static constexpr uint32_t DIEPTSIZ5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> DIEPTSIZ5_XFRSIZ; // XFRSIZ
    typedef bit_field_t<19, 0x3ff> DIEPTSIZ5_PKTCNT; // PKTCNT
    typedef bit_field_t<29, 0x3> DIEPTSIZ5_MCNT; // MCNT

    static constexpr uint32_t DIEPDMA5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DIEPDMA5_DMAADDR; // DMAADDR

    static constexpr uint32_t DTXFSTS5_RESET_VALUE = 0x200; // Reset value
    typedef bit_field_t<0, 0xffff> DTXFSTS5_INEPTFSAV; // INEPTFSAV


    static constexpr uint32_t DIEPINT6_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DIEPINT6_XFRC = 0x1; // XFRC
    static constexpr uint32_t DIEPINT6_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DIEPINT6_AHBERR = 0x4; // AHBERR
    static constexpr uint32_t DIEPINT6_TOC = 0x8; // TOC
    static constexpr uint32_t DIEPINT6_ITTXFE = 0x10; // ITTXFE
    static constexpr uint32_t DIEPINT6_INEPNM = 0x20; // INEPNM
    static constexpr uint32_t DIEPINT6_INEPNE = 0x40; // INEPNE
    static constexpr uint32_t DIEPINT6_TXFE = 0x80; // TXFE
    static constexpr uint32_t DIEPINT6_TXFIFOUDRN = 0x100; // TXFIFOUDRN
    static constexpr uint32_t DIEPINT6_BNA = 0x200; // BNA
    static constexpr uint32_t DIEPINT6_PKTDRPSTS = 0x800; // PKTDRPSTS
    static constexpr uint32_t DIEPINT6_NAK = 0x2000; // NAK


    static constexpr uint32_t DIEPTSIZ6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> DIEPTSIZ6_XFRSIZ; // XFRSIZ
    typedef bit_field_t<19, 0x3ff> DIEPTSIZ6_PKTCNT; // PKTCNT
    typedef bit_field_t<29, 0x3> DIEPTSIZ6_MCNT; // MCNT

    static constexpr uint32_t DIEPDMA6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DIEPDMA6_DMAADDR; // DMAADDR


    static constexpr uint32_t DIEPINT7_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DIEPINT7_XFRC = 0x1; // XFRC
    static constexpr uint32_t DIEPINT7_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DIEPINT7_AHBERR = 0x4; // AHBERR
    static constexpr uint32_t DIEPINT7_TOC = 0x8; // TOC
    static constexpr uint32_t DIEPINT7_ITTXFE = 0x10; // ITTXFE
    static constexpr uint32_t DIEPINT7_INEPNM = 0x20; // INEPNM
    static constexpr uint32_t DIEPINT7_INEPNE = 0x40; // INEPNE
    static constexpr uint32_t DIEPINT7_TXFE = 0x80; // TXFE
    static constexpr uint32_t DIEPINT7_TXFIFOUDRN = 0x100; // TXFIFOUDRN
    static constexpr uint32_t DIEPINT7_BNA = 0x200; // BNA
    static constexpr uint32_t DIEPINT7_PKTDRPSTS = 0x800; // PKTDRPSTS
    static constexpr uint32_t DIEPINT7_NAK = 0x2000; // NAK


    static constexpr uint32_t DIEPTSIZ7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> DIEPTSIZ7_XFRSIZ; // XFRSIZ
    typedef bit_field_t<19, 0x3ff> DIEPTSIZ7_PKTCNT; // PKTCNT
    typedef bit_field_t<29, 0x3> DIEPTSIZ7_MCNT; // MCNT

    static constexpr uint32_t DIEPDMA7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DIEPDMA7_DMAADDR; // DMAADDR


    static constexpr uint32_t DIEPINT8_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DIEPINT8_XFRC = 0x1; // XFRC
    static constexpr uint32_t DIEPINT8_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DIEPINT8_AHBERR = 0x4; // AHBERR
    static constexpr uint32_t DIEPINT8_TOC = 0x8; // TOC
    static constexpr uint32_t DIEPINT8_ITTXFE = 0x10; // ITTXFE
    static constexpr uint32_t DIEPINT8_INEPNM = 0x20; // INEPNM
    static constexpr uint32_t DIEPINT8_INEPNE = 0x40; // INEPNE
    static constexpr uint32_t DIEPINT8_TXFE = 0x80; // TXFE
    static constexpr uint32_t DIEPINT8_TXFIFOUDRN = 0x100; // TXFIFOUDRN
    static constexpr uint32_t DIEPINT8_BNA = 0x200; // BNA
    static constexpr uint32_t DIEPINT8_PKTDRPSTS = 0x800; // PKTDRPSTS
    static constexpr uint32_t DIEPINT8_NAK = 0x2000; // NAK


    static constexpr uint32_t DIEPTSIZ8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> DIEPTSIZ8_XFRSIZ; // XFRSIZ
    typedef bit_field_t<19, 0x3ff> DIEPTSIZ8_PKTCNT; // PKTCNT
    typedef bit_field_t<29, 0x3> DIEPTSIZ8_MCNT; // MCNT

    static constexpr uint32_t DIEPDMA8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DIEPDMA8_DMAADDR; // DMAADDR


    static constexpr uint32_t DOEPCTL0_RESET_VALUE = 0x8000; // Reset value
    typedef bit_field_t<0, 0x3> DOEPCTL0_MPSIZ; // MPSIZ
    static constexpr uint32_t DOEPCTL0_USBAEP = 0x8000; // USBAEP
    static constexpr uint32_t DOEPCTL0_NAKSTS = 0x20000; // NAKSTS
    typedef bit_field_t<18, 0x3> DOEPCTL0_EPTYP; // EPTYP
    static constexpr uint32_t DOEPCTL0_SNPM = 0x100000; // SNPM
    static constexpr uint32_t DOEPCTL0_STALL = 0x200000; // STALL
    static constexpr uint32_t DOEPCTL0_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t DOEPCTL0_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t DOEPCTL0_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t DOEPCTL0_EPENA = 0x80000000; // EPENA


    static constexpr uint32_t DOEPINT0_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DOEPINT0_XFRC = 0x1; // XFRC
    static constexpr uint32_t DOEPINT0_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DOEPINT0_AHBERR = 0x4; // AHBERR
    static constexpr uint32_t DOEPINT0_STUP = 0x8; // STUP
    static constexpr uint32_t DOEPINT0_OTEPDIS = 0x10; // OTEPDIS
    static constexpr uint32_t DOEPINT0_STSPHSRX = 0x20; // STSPHSRX
    static constexpr uint32_t DOEPINT0_B2BSTUP = 0x40; // B2BSTUP
    static constexpr uint32_t DOEPINT0_OUTPKTERR = 0x100; // OUTPKTERR
    static constexpr uint32_t DOEPINT0_BNA = 0x200; // BNA
    static constexpr uint32_t DOEPINT0_BERR = 0x1000; // BERR
    static constexpr uint32_t DOEPINT0_NAK = 0x2000; // NAK
    static constexpr uint32_t DOEPINT0_NYET = 0x4000; // NYET
    static constexpr uint32_t DOEPINT0_STPKTRX = 0x8000; // STPKTRX


    static constexpr uint32_t DOEPTSIZ0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> DOEPTSIZ0_XFRSIZ; // XFRSIZ
    static constexpr uint32_t DOEPTSIZ0_PKTCNT = 0x80000; // PKTCNT
    typedef bit_field_t<29, 0x3> DOEPTSIZ0_STUPCNT; // STUPCNT

    static constexpr uint32_t DOEPDMA0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DOEPDMA0_DMAADDR; // DMAADDR


    static constexpr uint32_t DOEPCTL1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> DOEPCTL1_MPSIZ; // MPSIZ
    static constexpr uint32_t DOEPCTL1_USBAEP = 0x8000; // USBAEP
    static constexpr uint32_t DOEPCTL1_EONUM_DPIP = 0x10000; // EONUM_DPIP
    static constexpr uint32_t DOEPCTL1_NAKSTS = 0x20000; // NAKSTS
    typedef bit_field_t<18, 0x3> DOEPCTL1_EPTYP; // EPTYP
    static constexpr uint32_t DOEPCTL1_SNPM = 0x100000; // SNPM
    static constexpr uint32_t DOEPCTL1_STALL = 0x200000; // STALL
    static constexpr uint32_t DOEPCTL1_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t DOEPCTL1_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t DOEPCTL1_SD0PID_SEVNFRM = 0x10000000; // SD0PID_SEVNFRM
    static constexpr uint32_t DOEPCTL1_SD1PID_SODDFRM = 0x20000000; // SD1PID_SODDFRM
    static constexpr uint32_t DOEPCTL1_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t DOEPCTL1_EPENA = 0x80000000; // EPENA


    static constexpr uint32_t DOEPINT1_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DOEPINT1_XFRC = 0x1; // XFRC
    static constexpr uint32_t DOEPINT1_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DOEPINT1_AHBERR = 0x4; // AHBERR
    static constexpr uint32_t DOEPINT1_STUP = 0x8; // STUP
    static constexpr uint32_t DOEPINT1_OTEPDIS = 0x10; // OTEPDIS
    static constexpr uint32_t DOEPINT1_STSPHSRX = 0x20; // STSPHSRX
    static constexpr uint32_t DOEPINT1_B2BSTUP = 0x40; // B2BSTUP
    static constexpr uint32_t DOEPINT1_OUTPKTERR = 0x100; // OUTPKTERR
    static constexpr uint32_t DOEPINT1_BNA = 0x200; // BNA
    static constexpr uint32_t DOEPINT1_BERR = 0x1000; // BERR
    static constexpr uint32_t DOEPINT1_NAK = 0x2000; // NAK
    static constexpr uint32_t DOEPINT1_NYET = 0x4000; // NYET
    static constexpr uint32_t DOEPINT1_STPKTRX = 0x8000; // STPKTRX


    static constexpr uint32_t DOEPTSIZ1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> DOEPTSIZ1_XFRSIZ; // XFRSIZ
    typedef bit_field_t<19, 0x3ff> DOEPTSIZ1_PKTCNT; // PKTCNT
    typedef bit_field_t<29, 0x3> DOEPTSIZ1_RXDPID_STUPCNT; // RXDPID_STUPCNT

    static constexpr uint32_t DOEPDMA1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DOEPDMA1_DMAADDR; // DMAADDR


    static constexpr uint32_t DOEPCTL2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> DOEPCTL2_MPSIZ; // MPSIZ
    static constexpr uint32_t DOEPCTL2_USBAEP = 0x8000; // USBAEP
    static constexpr uint32_t DOEPCTL2_EONUM_DPIP = 0x10000; // EONUM_DPIP
    static constexpr uint32_t DOEPCTL2_NAKSTS = 0x20000; // NAKSTS
    typedef bit_field_t<18, 0x3> DOEPCTL2_EPTYP; // EPTYP
    static constexpr uint32_t DOEPCTL2_SNPM = 0x100000; // SNPM
    static constexpr uint32_t DOEPCTL2_STALL = 0x200000; // STALL
    static constexpr uint32_t DOEPCTL2_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t DOEPCTL2_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t DOEPCTL2_SD0PID_SEVNFRM = 0x10000000; // SD0PID_SEVNFRM
    static constexpr uint32_t DOEPCTL2_SD1PID_SODDFRM = 0x20000000; // SD1PID_SODDFRM
    static constexpr uint32_t DOEPCTL2_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t DOEPCTL2_EPENA = 0x80000000; // EPENA


    static constexpr uint32_t DOEPINT2_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DOEPINT2_XFRC = 0x1; // XFRC
    static constexpr uint32_t DOEPINT2_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DOEPINT2_AHBERR = 0x4; // AHBERR
    static constexpr uint32_t DOEPINT2_STUP = 0x8; // STUP
    static constexpr uint32_t DOEPINT2_OTEPDIS = 0x10; // OTEPDIS
    static constexpr uint32_t DOEPINT2_STSPHSRX = 0x20; // STSPHSRX
    static constexpr uint32_t DOEPINT2_B2BSTUP = 0x40; // B2BSTUP
    static constexpr uint32_t DOEPINT2_OUTPKTERR = 0x100; // OUTPKTERR
    static constexpr uint32_t DOEPINT2_BNA = 0x200; // BNA
    static constexpr uint32_t DOEPINT2_BERR = 0x1000; // BERR
    static constexpr uint32_t DOEPINT2_NAK = 0x2000; // NAK
    static constexpr uint32_t DOEPINT2_NYET = 0x4000; // NYET
    static constexpr uint32_t DOEPINT2_STPKTRX = 0x8000; // STPKTRX


    static constexpr uint32_t DOEPTSIZ2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> DOEPTSIZ2_XFRSIZ; // XFRSIZ
    typedef bit_field_t<19, 0x3ff> DOEPTSIZ2_PKTCNT; // PKTCNT
    typedef bit_field_t<29, 0x3> DOEPTSIZ2_RXDPID_STUPCNT; // RXDPID_STUPCNT

    static constexpr uint32_t DOEPDMA2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DOEPDMA2_DMAADDR; // DMAADDR


    static constexpr uint32_t DOEPCTL3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> DOEPCTL3_MPSIZ; // MPSIZ
    static constexpr uint32_t DOEPCTL3_USBAEP = 0x8000; // USBAEP
    static constexpr uint32_t DOEPCTL3_EONUM_DPIP = 0x10000; // EONUM_DPIP
    static constexpr uint32_t DOEPCTL3_NAKSTS = 0x20000; // NAKSTS
    typedef bit_field_t<18, 0x3> DOEPCTL3_EPTYP; // EPTYP
    static constexpr uint32_t DOEPCTL3_SNPM = 0x100000; // SNPM
    static constexpr uint32_t DOEPCTL3_STALL = 0x200000; // STALL
    static constexpr uint32_t DOEPCTL3_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t DOEPCTL3_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t DOEPCTL3_SD0PID_SEVNFRM = 0x10000000; // SD0PID_SEVNFRM
    static constexpr uint32_t DOEPCTL3_SD1PID_SODDFRM = 0x20000000; // SD1PID_SODDFRM
    static constexpr uint32_t DOEPCTL3_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t DOEPCTL3_EPENA = 0x80000000; // EPENA


    static constexpr uint32_t DOEPINT3_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DOEPINT3_XFRC = 0x1; // XFRC
    static constexpr uint32_t DOEPINT3_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DOEPINT3_AHBERR = 0x4; // AHBERR
    static constexpr uint32_t DOEPINT3_STUP = 0x8; // STUP
    static constexpr uint32_t DOEPINT3_OTEPDIS = 0x10; // OTEPDIS
    static constexpr uint32_t DOEPINT3_STSPHSRX = 0x20; // STSPHSRX
    static constexpr uint32_t DOEPINT3_B2BSTUP = 0x40; // B2BSTUP
    static constexpr uint32_t DOEPINT3_OUTPKTERR = 0x100; // OUTPKTERR
    static constexpr uint32_t DOEPINT3_BNA = 0x200; // BNA
    static constexpr uint32_t DOEPINT3_BERR = 0x1000; // BERR
    static constexpr uint32_t DOEPINT3_NAK = 0x2000; // NAK
    static constexpr uint32_t DOEPINT3_NYET = 0x4000; // NYET
    static constexpr uint32_t DOEPINT3_STPKTRX = 0x8000; // STPKTRX


    static constexpr uint32_t DOEPTSIZ3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> DOEPTSIZ3_XFRSIZ; // XFRSIZ
    typedef bit_field_t<19, 0x3ff> DOEPTSIZ3_PKTCNT; // PKTCNT
    typedef bit_field_t<29, 0x3> DOEPTSIZ3_RXDPID_STUPCNT; // RXDPID_STUPCNT

    static constexpr uint32_t DOEPDMA3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DOEPDMA3_DMAADDR; // DMAADDR


    static constexpr uint32_t DOEPCTL4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> DOEPCTL4_MPSIZ; // MPSIZ
    static constexpr uint32_t DOEPCTL4_USBAEP = 0x8000; // USBAEP
    static constexpr uint32_t DOEPCTL4_EONUM_DPIP = 0x10000; // EONUM_DPIP
    static constexpr uint32_t DOEPCTL4_NAKSTS = 0x20000; // NAKSTS
    typedef bit_field_t<18, 0x3> DOEPCTL4_EPTYP; // EPTYP
    static constexpr uint32_t DOEPCTL4_SNPM = 0x100000; // SNPM
    static constexpr uint32_t DOEPCTL4_STALL = 0x200000; // STALL
    static constexpr uint32_t DOEPCTL4_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t DOEPCTL4_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t DOEPCTL4_SD0PID_SEVNFRM = 0x10000000; // SD0PID_SEVNFRM
    static constexpr uint32_t DOEPCTL4_SD1PID_SODDFRM = 0x20000000; // SD1PID_SODDFRM
    static constexpr uint32_t DOEPCTL4_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t DOEPCTL4_EPENA = 0x80000000; // EPENA


    static constexpr uint32_t DOEPINT4_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DOEPINT4_XFRC = 0x1; // XFRC
    static constexpr uint32_t DOEPINT4_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DOEPINT4_AHBERR = 0x4; // AHBERR
    static constexpr uint32_t DOEPINT4_STUP = 0x8; // STUP
    static constexpr uint32_t DOEPINT4_OTEPDIS = 0x10; // OTEPDIS
    static constexpr uint32_t DOEPINT4_STSPHSRX = 0x20; // STSPHSRX
    static constexpr uint32_t DOEPINT4_B2BSTUP = 0x40; // B2BSTUP
    static constexpr uint32_t DOEPINT4_OUTPKTERR = 0x100; // OUTPKTERR
    static constexpr uint32_t DOEPINT4_BNA = 0x200; // BNA
    static constexpr uint32_t DOEPINT4_BERR = 0x1000; // BERR
    static constexpr uint32_t DOEPINT4_NAK = 0x2000; // NAK
    static constexpr uint32_t DOEPINT4_NYET = 0x4000; // NYET
    static constexpr uint32_t DOEPINT4_STPKTRX = 0x8000; // STPKTRX


    static constexpr uint32_t DOEPTSIZ4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> DOEPTSIZ4_XFRSIZ; // XFRSIZ
    typedef bit_field_t<19, 0x3ff> DOEPTSIZ4_PKTCNT; // PKTCNT
    typedef bit_field_t<29, 0x3> DOEPTSIZ4_RXDPID_STUPCNT; // RXDPID_STUPCNT

    static constexpr uint32_t DOEPDMA4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DOEPDMA4_DMAADDR; // DMAADDR


    static constexpr uint32_t DOEPCTL5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> DOEPCTL5_MPSIZ; // MPSIZ
    static constexpr uint32_t DOEPCTL5_USBAEP = 0x8000; // USBAEP
    static constexpr uint32_t DOEPCTL5_EONUM_DPIP = 0x10000; // EONUM_DPIP
    static constexpr uint32_t DOEPCTL5_NAKSTS = 0x20000; // NAKSTS
    typedef bit_field_t<18, 0x3> DOEPCTL5_EPTYP; // EPTYP
    static constexpr uint32_t DOEPCTL5_SNPM = 0x100000; // SNPM
    static constexpr uint32_t DOEPCTL5_STALL = 0x200000; // STALL
    static constexpr uint32_t DOEPCTL5_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t DOEPCTL5_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t DOEPCTL5_SD0PID_SEVNFRM = 0x10000000; // SD0PID_SEVNFRM
    static constexpr uint32_t DOEPCTL5_SD1PID_SODDFRM = 0x20000000; // SD1PID_SODDFRM
    static constexpr uint32_t DOEPCTL5_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t DOEPCTL5_EPENA = 0x80000000; // EPENA


    static constexpr uint32_t DOEPINT5_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DOEPINT5_XFRC = 0x1; // XFRC
    static constexpr uint32_t DOEPINT5_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DOEPINT5_AHBERR = 0x4; // AHBERR
    static constexpr uint32_t DOEPINT5_STUP = 0x8; // STUP
    static constexpr uint32_t DOEPINT5_OTEPDIS = 0x10; // OTEPDIS
    static constexpr uint32_t DOEPINT5_STSPHSRX = 0x20; // STSPHSRX
    static constexpr uint32_t DOEPINT5_B2BSTUP = 0x40; // B2BSTUP
    static constexpr uint32_t DOEPINT5_OUTPKTERR = 0x100; // OUTPKTERR
    static constexpr uint32_t DOEPINT5_BNA = 0x200; // BNA
    static constexpr uint32_t DOEPINT5_BERR = 0x1000; // BERR
    static constexpr uint32_t DOEPINT5_NAK = 0x2000; // NAK
    static constexpr uint32_t DOEPINT5_NYET = 0x4000; // NYET
    static constexpr uint32_t DOEPINT5_STPKTRX = 0x8000; // STPKTRX


    static constexpr uint32_t DOEPTSIZ5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> DOEPTSIZ5_XFRSIZ; // XFRSIZ
    typedef bit_field_t<19, 0x3ff> DOEPTSIZ5_PKTCNT; // PKTCNT
    typedef bit_field_t<29, 0x3> DOEPTSIZ5_RXDPID_STUPCNT; // RXDPID_STUPCNT

    static constexpr uint32_t DOEPDMA5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DOEPDMA5_DMAADDR; // DMAADDR


    static constexpr uint32_t DOEPCTL6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> DOEPCTL6_MPSIZ; // MPSIZ
    static constexpr uint32_t DOEPCTL6_USBAEP = 0x8000; // USBAEP
    static constexpr uint32_t DOEPCTL6_EONUM_DPIP = 0x10000; // EONUM_DPIP
    static constexpr uint32_t DOEPCTL6_NAKSTS = 0x20000; // NAKSTS
    typedef bit_field_t<18, 0x3> DOEPCTL6_EPTYP; // EPTYP
    static constexpr uint32_t DOEPCTL6_SNPM = 0x100000; // SNPM
    static constexpr uint32_t DOEPCTL6_STALL = 0x200000; // STALL
    static constexpr uint32_t DOEPCTL6_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t DOEPCTL6_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t DOEPCTL6_SD0PID_SEVNFRM = 0x10000000; // SD0PID_SEVNFRM
    static constexpr uint32_t DOEPCTL6_SD1PID_SODDFRM = 0x20000000; // SD1PID_SODDFRM
    static constexpr uint32_t DOEPCTL6_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t DOEPCTL6_EPENA = 0x80000000; // EPENA


    static constexpr uint32_t DOEPINT6_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DOEPINT6_XFRC = 0x1; // XFRC
    static constexpr uint32_t DOEPINT6_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DOEPINT6_AHBERR = 0x4; // AHBERR
    static constexpr uint32_t DOEPINT6_STUP = 0x8; // STUP
    static constexpr uint32_t DOEPINT6_OTEPDIS = 0x10; // OTEPDIS
    static constexpr uint32_t DOEPINT6_STSPHSRX = 0x20; // STSPHSRX
    static constexpr uint32_t DOEPINT6_B2BSTUP = 0x40; // B2BSTUP
    static constexpr uint32_t DOEPINT6_OUTPKTERR = 0x100; // OUTPKTERR
    static constexpr uint32_t DOEPINT6_BNA = 0x200; // BNA
    static constexpr uint32_t DOEPINT6_BERR = 0x1000; // BERR
    static constexpr uint32_t DOEPINT6_NAK = 0x2000; // NAK
    static constexpr uint32_t DOEPINT6_NYET = 0x4000; // NYET
    static constexpr uint32_t DOEPINT6_STPKTRX = 0x8000; // STPKTRX


    static constexpr uint32_t DOEPTSIZ6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> DOEPTSIZ6_XFRSIZ; // XFRSIZ
    typedef bit_field_t<19, 0x3ff> DOEPTSIZ6_PKTCNT; // PKTCNT
    typedef bit_field_t<29, 0x3> DOEPTSIZ6_RXDPID_STUPCNT; // RXDPID_STUPCNT

    static constexpr uint32_t DOEPDMA6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DOEPDMA6_DMAADDR; // DMAADDR


    static constexpr uint32_t DOEPCTL7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> DOEPCTL7_MPSIZ; // MPSIZ
    static constexpr uint32_t DOEPCTL7_USBAEP = 0x8000; // USBAEP
    static constexpr uint32_t DOEPCTL7_EONUM_DPIP = 0x10000; // EONUM_DPIP
    static constexpr uint32_t DOEPCTL7_NAKSTS = 0x20000; // NAKSTS
    typedef bit_field_t<18, 0x3> DOEPCTL7_EPTYP; // EPTYP
    static constexpr uint32_t DOEPCTL7_SNPM = 0x100000; // SNPM
    static constexpr uint32_t DOEPCTL7_STALL = 0x200000; // STALL
    static constexpr uint32_t DOEPCTL7_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t DOEPCTL7_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t DOEPCTL7_SD0PID_SEVNFRM = 0x10000000; // SD0PID_SEVNFRM
    static constexpr uint32_t DOEPCTL7_SD1PID_SODDFRM = 0x20000000; // SD1PID_SODDFRM
    static constexpr uint32_t DOEPCTL7_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t DOEPCTL7_EPENA = 0x80000000; // EPENA


    static constexpr uint32_t DOEPINT7_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DOEPINT7_XFRC = 0x1; // XFRC
    static constexpr uint32_t DOEPINT7_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DOEPINT7_AHBERR = 0x4; // AHBERR
    static constexpr uint32_t DOEPINT7_STUP = 0x8; // STUP
    static constexpr uint32_t DOEPINT7_OTEPDIS = 0x10; // OTEPDIS
    static constexpr uint32_t DOEPINT7_STSPHSRX = 0x20; // STSPHSRX
    static constexpr uint32_t DOEPINT7_B2BSTUP = 0x40; // B2BSTUP
    static constexpr uint32_t DOEPINT7_OUTPKTERR = 0x100; // OUTPKTERR
    static constexpr uint32_t DOEPINT7_BNA = 0x200; // BNA
    static constexpr uint32_t DOEPINT7_BERR = 0x1000; // BERR
    static constexpr uint32_t DOEPINT7_NAK = 0x2000; // NAK
    static constexpr uint32_t DOEPINT7_NYET = 0x4000; // NYET
    static constexpr uint32_t DOEPINT7_STPKTRX = 0x8000; // STPKTRX


    static constexpr uint32_t DOEPTSIZ7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> DOEPTSIZ7_XFRSIZ; // XFRSIZ
    typedef bit_field_t<19, 0x3ff> DOEPTSIZ7_PKTCNT; // PKTCNT
    typedef bit_field_t<29, 0x3> DOEPTSIZ7_RXDPID_STUPCNT; // RXDPID_STUPCNT

    static constexpr uint32_t DOEPDMA7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DOEPDMA7_DMAADDR; // DMAADDR


    static constexpr uint32_t DOEPCTL8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> DOEPCTL8_MPSIZ; // MPSIZ
    static constexpr uint32_t DOEPCTL8_USBAEP = 0x8000; // USBAEP
    static constexpr uint32_t DOEPCTL8_EONUM_DPIP = 0x10000; // EONUM_DPIP
    static constexpr uint32_t DOEPCTL8_NAKSTS = 0x20000; // NAKSTS
    typedef bit_field_t<18, 0x3> DOEPCTL8_EPTYP; // EPTYP
    static constexpr uint32_t DOEPCTL8_SNPM = 0x100000; // SNPM
    static constexpr uint32_t DOEPCTL8_STALL = 0x200000; // STALL
    static constexpr uint32_t DOEPCTL8_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t DOEPCTL8_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t DOEPCTL8_SD0PID_SEVNFRM = 0x10000000; // SD0PID_SEVNFRM
    static constexpr uint32_t DOEPCTL8_SD1PID_SODDFRM = 0x20000000; // SD1PID_SODDFRM
    static constexpr uint32_t DOEPCTL8_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t DOEPCTL8_EPENA = 0x80000000; // EPENA


    static constexpr uint32_t DOEPINT8_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DOEPINT8_XFRC = 0x1; // XFRC
    static constexpr uint32_t DOEPINT8_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DOEPINT8_AHBERR = 0x4; // AHBERR
    static constexpr uint32_t DOEPINT8_STUP = 0x8; // STUP
    static constexpr uint32_t DOEPINT8_OTEPDIS = 0x10; // OTEPDIS
    static constexpr uint32_t DOEPINT8_STSPHSRX = 0x20; // STSPHSRX
    static constexpr uint32_t DOEPINT8_B2BSTUP = 0x40; // B2BSTUP
    static constexpr uint32_t DOEPINT8_OUTPKTERR = 0x100; // OUTPKTERR
    static constexpr uint32_t DOEPINT8_BNA = 0x200; // BNA
    static constexpr uint32_t DOEPINT8_BERR = 0x1000; // BERR
    static constexpr uint32_t DOEPINT8_NAK = 0x2000; // NAK
    static constexpr uint32_t DOEPINT8_NYET = 0x4000; // NYET
    static constexpr uint32_t DOEPINT8_STPKTRX = 0x8000; // STPKTRX


    static constexpr uint32_t DOEPTSIZ8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> DOEPTSIZ8_XFRSIZ; // XFRSIZ
    typedef bit_field_t<19, 0x3ff> DOEPTSIZ8_PKTCNT; // PKTCNT
    typedef bit_field_t<29, 0x3> DOEPTSIZ8_RXDPID_STUPCNT; // RXDPID_STUPCNT

    static constexpr uint32_t DOEPDMA8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DOEPDMA8_DMAADDR; // DMAADDR


    static constexpr uint32_t PCGCCTL_RESET_VALUE = 0x200b8000; // Reset value
    static constexpr uint32_t PCGCCTL_STPPCLK = 0x1; // STPPCLK
    static constexpr uint32_t PCGCCTL_GATEHCLK = 0x2; // GATEHCLK
    static constexpr uint32_t PCGCCTL_PHYSUSP = 0x10; // PHYSUSP
    static constexpr uint32_t PCGCCTL_ENL1GTG = 0x20; // ENL1GTG
    static constexpr uint32_t PCGCCTL_PHYSLEEP = 0x40; // PHYSLEEP
    static constexpr uint32_t PCGCCTL_SUSP = 0x80; // SUSP
};

template<>
struct peripheral_t<STM32U5xx, OTG_FS>
{
    static constexpr periph_t P = OTG_FS;
    using T = stm32u5xx_otg_fs_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_OTG_FS>
{
    static constexpr periph_t P = SEC_OTG_FS;
    using T = stm32u5xx_otg_fs_t;
    static T& V;
};

using otg_fs_t = peripheral_t<svd, OTG_FS>;
using sec_otg_fs_t = peripheral_t<svd, SEC_OTG_FS>;
