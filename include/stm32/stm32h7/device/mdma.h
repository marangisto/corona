#pragma once

////
//
//      STM32H7 MDMA peripherals
//
///

// MDMA: MDMA

struct stm32h723_mdma_t
{
    volatile uint32_t MDMA_GISR0; // MDMA Global Interrupt/Status Register
    reserved_t<0xf> _0x4;
    volatile uint32_t MDMA_C0ISR; // MDMA channel x interrupt/status register
    volatile uint32_t MDMA_C0IFCR; // MDMA channel x interrupt flag clear register
    volatile uint32_t MDMA_C0ESR; // MDMA Channel x error status register
    volatile uint32_t MDMA_C0CR; // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C0TCR; // This register is used to configure the concerned channel.
    volatile uint32_t MDMA_C0BNDTR; // MDMA Channel x block number of data register
    volatile uint32_t MDMA_C0SAR; // MDMA channel x source address register
    volatile uint32_t MDMA_C0DAR; // MDMA channel x destination address register
    volatile uint32_t MDMA_C0BRUR; // MDMA channel x Block Repeat address Update register
    volatile uint32_t MDMA_C0LAR; // MDMA channel x Link Address register
    volatile uint32_t MDMA_C0TBR; // MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x6c;
    volatile uint32_t MDMA_C0MAR; // MDMA channel x Mask address register
    volatile uint32_t MDMA_C0MDR; // MDMA channel x Mask Data register
    reserved_t<0x2> _0x78;
    volatile uint32_t MDMA_C1ISR; // MDMA channel x interrupt/status register
    volatile uint32_t MDMA_C1IFCR; // MDMA channel x interrupt flag clear register
    volatile uint32_t MDMA_C1ESR; // MDMA Channel x error status register
    volatile uint32_t MDMA_C1CR; // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C1TCR; // This register is used to configure the concerned channel.
    volatile uint32_t MDMA_C1BNDTR; // MDMA Channel x block number of data register
    volatile uint32_t MDMA_C1SAR; // MDMA channel x source address register
    volatile uint32_t MDMA_C1DAR; // MDMA channel x destination address register
    volatile uint32_t MDMA_C1BRUR; // MDMA channel x Block Repeat address Update register
    volatile uint32_t MDMA_C1LAR; // MDMA channel x Link Address register
    volatile uint32_t MDMA_C1TBR; // MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0xac;
    volatile uint32_t MDMA_C1MAR; // MDMA channel x Mask address register
    volatile uint32_t MDMA_C1MDR; // MDMA channel x Mask Data register
    reserved_t<0x2> _0xb8;
    volatile uint32_t MDMA_C2ISR; // MDMA channel x interrupt/status register
    volatile uint32_t MDMA_C2IFCR; // MDMA channel x interrupt flag clear register
    volatile uint32_t MDMA_C2ESR; // MDMA Channel x error status register
    volatile uint32_t MDMA_C2CR; // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C2TCR; // This register is used to configure the concerned channel.
    volatile uint32_t MDMA_C2BNDTR; // MDMA Channel x block number of data register
    volatile uint32_t MDMA_C2SAR; // MDMA channel x source address register
    volatile uint32_t MDMA_C2DAR; // MDMA channel x destination address register
    volatile uint32_t MDMA_C2BRUR; // MDMA channel x Block Repeat address Update register
    volatile uint32_t MDMA_C2LAR; // MDMA channel x Link Address register
    volatile uint32_t MDMA_C2TBR; // MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0xec;
    volatile uint32_t MDMA_C2MAR; // MDMA channel x Mask address register
    volatile uint32_t MDMA_C2MDR; // MDMA channel x Mask Data register
    reserved_t<0x2> _0xf8;
    volatile uint32_t MDMA_C3ISR; // MDMA channel x interrupt/status register
    volatile uint32_t MDMA_C3IFCR; // MDMA channel x interrupt flag clear register
    volatile uint32_t MDMA_C3ESR; // MDMA Channel x error status register
    volatile uint32_t MDMA_C3CR; // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C3TCR; // This register is used to configure the concerned channel.
    volatile uint32_t MDMA_C3BNDTR; // MDMA Channel x block number of data register
    volatile uint32_t MDMA_C3SAR; // MDMA channel x source address register
    volatile uint32_t MDMA_C3DAR; // MDMA channel x destination address register
    volatile uint32_t MDMA_C3BRUR; // MDMA channel x Block Repeat address Update register
    volatile uint32_t MDMA_C3LAR; // MDMA channel x Link Address register
    volatile uint32_t MDMA_C3TBR; // MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x12c;
    volatile uint32_t MDMA_C3MAR; // MDMA channel x Mask address register
    volatile uint32_t MDMA_C3MDR; // MDMA channel x Mask Data register
    reserved_t<0x2> _0x138;
    volatile uint32_t MDMA_C4ISR; // MDMA channel x interrupt/status register
    volatile uint32_t MDMA_C4IFCR; // MDMA channel x interrupt flag clear register
    volatile uint32_t MDMA_C4ESR; // MDMA Channel x error status register
    volatile uint32_t MDMA_C4CR; // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C4TCR; // This register is used to configure the concerned channel.
    volatile uint32_t MDMA_C4BNDTR; // MDMA Channel x block number of data register
    volatile uint32_t MDMA_C4SAR; // MDMA channel x source address register
    volatile uint32_t MDMA_C4DAR; // MDMA channel x destination address register
    volatile uint32_t MDMA_C4BRUR; // MDMA channel x Block Repeat address Update register
    volatile uint32_t MDMA_C4LAR; // MDMA channel x Link Address register
    volatile uint32_t MDMA_C4TBR; // MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x16c;
    volatile uint32_t MDMA_C4MAR; // MDMA channel x Mask address register
    volatile uint32_t MDMA_C4MDR; // MDMA channel x Mask Data register
    reserved_t<0x2> _0x178;
    volatile uint32_t MDMA_C5ISR; // MDMA channel x interrupt/status register
    volatile uint32_t MDMA_C5IFCR; // MDMA channel x interrupt flag clear register
    volatile uint32_t MDMA_C5ESR; // MDMA Channel x error status register
    volatile uint32_t MDMA_C5CR; // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C5TCR; // This register is used to configure the concerned channel.
    volatile uint32_t MDMA_C5BNDTR; // MDMA Channel x block number of data register
    volatile uint32_t MDMA_C5SAR; // MDMA channel x source address register
    volatile uint32_t MDMA_C5DAR; // MDMA channel x destination address register
    volatile uint32_t MDMA_C5BRUR; // MDMA channel x Block Repeat address Update register
    volatile uint32_t MDMA_C5LAR; // MDMA channel x Link Address register
    volatile uint32_t MDMA_C5TBR; // MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x1ac;
    volatile uint32_t MDMA_C5MAR; // MDMA channel x Mask address register
    volatile uint32_t MDMA_C5MDR; // MDMA channel x Mask Data register
    reserved_t<0x2> _0x1b8;
    volatile uint32_t MDMA_C6ISR; // MDMA channel x interrupt/status register
    volatile uint32_t MDMA_C6IFCR; // MDMA channel x interrupt flag clear register
    volatile uint32_t MDMA_C6ESR; // MDMA Channel x error status register
    volatile uint32_t MDMA_C6CR; // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C6TCR; // This register is used to configure the concerned channel.
    volatile uint32_t MDMA_C6BNDTR; // MDMA Channel x block number of data register
    volatile uint32_t MDMA_C6SAR; // MDMA channel x source address register
    volatile uint32_t MDMA_C6DAR; // MDMA channel x destination address register
    volatile uint32_t MDMA_C6BRUR; // MDMA channel x Block Repeat address Update register
    volatile uint32_t MDMA_C6LAR; // MDMA channel x Link Address register
    volatile uint32_t MDMA_C6TBR; // MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x1ec;
    volatile uint32_t MDMA_C6MAR; // MDMA channel x Mask address register
    volatile uint32_t MDMA_C6MDR; // MDMA channel x Mask Data register
    reserved_t<0x2> _0x1f8;
    volatile uint32_t MDMA_C7ISR; // MDMA channel x interrupt/status register
    volatile uint32_t MDMA_C7IFCR; // MDMA channel x interrupt flag clear register
    volatile uint32_t MDMA_C7ESR; // MDMA Channel x error status register
    volatile uint32_t MDMA_C7CR; // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C7TCR; // This register is used to configure the concerned channel.
    volatile uint32_t MDMA_C7BNDTR; // MDMA Channel x block number of data register
    volatile uint32_t MDMA_C7SAR; // MDMA channel x source address register
    volatile uint32_t MDMA_C7DAR; // MDMA channel x destination address register
    volatile uint32_t MDMA_C7BRUR; // MDMA channel x Block Repeat address Update register
    volatile uint32_t MDMA_C7LAR; // MDMA channel x Link Address register
    volatile uint32_t MDMA_C7TBR; // MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x22c;
    volatile uint32_t MDMA_C7MAR; // MDMA channel x Mask address register
    volatile uint32_t MDMA_C7MDR; // MDMA channel x Mask Data register
    reserved_t<0x2> _0x238;
    volatile uint32_t MDMA_C8ISR; // MDMA channel x interrupt/status register
    volatile uint32_t MDMA_C8IFCR; // MDMA channel x interrupt flag clear register
    volatile uint32_t MDMA_C8ESR; // MDMA Channel x error status register
    volatile uint32_t MDMA_C8CR; // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C8TCR; // This register is used to configure the concerned channel.
    volatile uint32_t MDMA_C8BNDTR; // MDMA Channel x block number of data register
    volatile uint32_t MDMA_C8SAR; // MDMA channel x source address register
    volatile uint32_t MDMA_C8DAR; // MDMA channel x destination address register
    volatile uint32_t MDMA_C8BRUR; // MDMA channel x Block Repeat address Update register
    volatile uint32_t MDMA_C8LAR; // MDMA channel x Link Address register
    volatile uint32_t MDMA_C8TBR; // MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x26c;
    volatile uint32_t MDMA_C8MAR; // MDMA channel x Mask address register
    volatile uint32_t MDMA_C8MDR; // MDMA channel x Mask Data register
    reserved_t<0x2> _0x278;
    volatile uint32_t MDMA_C9ISR; // MDMA channel x interrupt/status register
    volatile uint32_t MDMA_C9IFCR; // MDMA channel x interrupt flag clear register
    volatile uint32_t MDMA_C9ESR; // MDMA Channel x error status register
    volatile uint32_t MDMA_C9CR; // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C9TCR; // This register is used to configure the concerned channel.
    volatile uint32_t MDMA_C9BNDTR; // MDMA Channel x block number of data register
    volatile uint32_t MDMA_C9SAR; // MDMA channel x source address register
    volatile uint32_t MDMA_C9DAR; // MDMA channel x destination address register
    volatile uint32_t MDMA_C9BRUR; // MDMA channel x Block Repeat address Update register
    volatile uint32_t MDMA_C9LAR; // MDMA channel x Link Address register
    volatile uint32_t MDMA_C9TBR; // MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x2ac;
    volatile uint32_t MDMA_C9MAR; // MDMA channel x Mask address register
    volatile uint32_t MDMA_C9MDR; // MDMA channel x Mask Data register
    reserved_t<0x2> _0x2b8;
    volatile uint32_t MDMA_C10ISR; // MDMA channel x interrupt/status register
    volatile uint32_t MDMA_C10IFCR; // MDMA channel x interrupt flag clear register
    volatile uint32_t MDMA_C10ESR; // MDMA Channel x error status register
    volatile uint32_t MDMA_C10CR; // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C10TCR; // This register is used to configure the concerned channel.
    volatile uint32_t MDMA_C10BNDTR; // MDMA Channel x block number of data register
    volatile uint32_t MDMA_C10SAR; // MDMA channel x source address register
    volatile uint32_t MDMA_C10DAR; // MDMA channel x destination address register
    volatile uint32_t MDMA_C10BRUR; // MDMA channel x Block Repeat address Update register
    volatile uint32_t MDMA_C10LAR; // MDMA channel x Link Address register
    volatile uint32_t MDMA_C10TBR; // MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x2ec;
    volatile uint32_t MDMA_C10MAR; // MDMA channel x Mask address register
    volatile uint32_t MDMA_C10MDR; // MDMA channel x Mask Data register
    reserved_t<0x2> _0x2f8;
    volatile uint32_t MDMA_C11ISR; // MDMA channel x interrupt/status register
    volatile uint32_t MDMA_C11IFCR; // MDMA channel x interrupt flag clear register
    volatile uint32_t MDMA_C11ESR; // MDMA Channel x error status register
    volatile uint32_t MDMA_C11CR; // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C11TCR; // This register is used to configure the concerned channel.
    volatile uint32_t MDMA_C11BNDTR; // MDMA Channel x block number of data register
    volatile uint32_t MDMA_C11SAR; // MDMA channel x source address register
    volatile uint32_t MDMA_C11DAR; // MDMA channel x destination address register
    volatile uint32_t MDMA_C11BRUR; // MDMA channel x Block Repeat address Update register
    volatile uint32_t MDMA_C11LAR; // MDMA channel x Link Address register
    volatile uint32_t MDMA_C11TBR; // MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x32c;
    volatile uint32_t MDMA_C11MAR; // MDMA channel x Mask address register
    volatile uint32_t MDMA_C11MDR; // MDMA channel x Mask Data register
    reserved_t<0x2> _0x338;
    volatile uint32_t MDMA_C12ISR; // MDMA channel x interrupt/status register
    volatile uint32_t MDMA_C12IFCR; // MDMA channel x interrupt flag clear register
    volatile uint32_t MDMA_C12ESR; // MDMA Channel x error status register
    volatile uint32_t MDMA_C12CR; // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C12TCR; // This register is used to configure the concerned channel.
    volatile uint32_t MDMA_C12BNDTR; // MDMA Channel x block number of data register
    volatile uint32_t MDMA_C12SAR; // MDMA channel x source address register
    volatile uint32_t MDMA_C12DAR; // MDMA channel x destination address register
    volatile uint32_t MDMA_C12BRUR; // MDMA channel x Block Repeat address Update register
    volatile uint32_t MDMA_C12LAR; // MDMA channel x Link Address register
    volatile uint32_t MDMA_C12TBR; // MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x36c;
    volatile uint32_t MDMA_C12MAR; // MDMA channel x Mask address register
    volatile uint32_t MDMA_C12MDR; // MDMA channel x Mask Data register
    reserved_t<0x2> _0x378;
    volatile uint32_t MDMA_C13ISR; // MDMA channel x interrupt/status register
    volatile uint32_t MDMA_C13IFCR; // MDMA channel x interrupt flag clear register
    volatile uint32_t MDMA_C13ESR; // MDMA Channel x error status register
    volatile uint32_t MDMA_C13CR; // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C13TCR; // This register is used to configure the concerned channel.
    volatile uint32_t MDMA_C13BNDTR; // MDMA Channel x block number of data register
    volatile uint32_t MDMA_C13SAR; // MDMA channel x source address register
    volatile uint32_t MDMA_C13DAR; // MDMA channel x destination address register
    volatile uint32_t MDMA_C13BRUR; // MDMA channel x Block Repeat address Update register
    volatile uint32_t MDMA_C13LAR; // MDMA channel x Link Address register
    volatile uint32_t MDMA_C13TBR; // MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x3ac;
    volatile uint32_t MDMA_C13MAR; // MDMA channel x Mask address register
    volatile uint32_t MDMA_C13MDR; // MDMA channel x Mask Data register
    reserved_t<0x2> _0x3b8;
    volatile uint32_t MDMA_C14ISR; // MDMA channel x interrupt/status register
    volatile uint32_t MDMA_C14IFCR; // MDMA channel x interrupt flag clear register
    volatile uint32_t MDMA_C14ESR; // MDMA Channel x error status register
    volatile uint32_t MDMA_C14CR; // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C14TCR; // This register is used to configure the concerned channel.
    volatile uint32_t MDMA_C14BNDTR; // MDMA Channel x block number of data register
    volatile uint32_t MDMA_C14SAR; // MDMA channel x source address register
    volatile uint32_t MDMA_C14DAR; // MDMA channel x destination address register
    volatile uint32_t MDMA_C14BRUR; // MDMA channel x Block Repeat address Update register
    volatile uint32_t MDMA_C14LAR; // MDMA channel x Link Address register
    volatile uint32_t MDMA_C14TBR; // MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x3ec;
    volatile uint32_t MDMA_C14MAR; // MDMA channel x Mask address register
    volatile uint32_t MDMA_C14MDR; // MDMA channel x Mask Data register
    reserved_t<0x2> _0x3f8;
    volatile uint32_t MDMA_C15ISR; // MDMA channel x interrupt/status register
    volatile uint32_t MDMA_C15IFCR; // MDMA channel x interrupt flag clear register
    volatile uint32_t MDMA_C15ESR; // MDMA Channel x error status register
    volatile uint32_t MDMA_C15CR; // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C15TCR; // This register is used to configure the concerned channel.
    volatile uint32_t MDMA_C15BNDTR; // MDMA Channel x block number of data register
    volatile uint32_t MDMA_C15SAR; // MDMA channel x source address register
    volatile uint32_t MDMA_C15DAR; // MDMA channel x destination address register
    volatile uint32_t MDMA_C15BRUR; // MDMA channel x Block Repeat address Update register
    volatile uint32_t MDMA_C15LAR; // MDMA channel x Link Address register
    volatile uint32_t MDMA_C15TBR; // MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x42c;
    volatile uint32_t MDMA_C15MAR; // MDMA channel x Mask address register
    volatile uint32_t MDMA_C15MDR; // MDMA channel x Mask Data register

    static constexpr uint32_t MDMA_GISR0_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_GISR0_GIF0 = 0x1; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t MDMA_GISR0_GIF1 = 0x2; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t MDMA_GISR0_GIF2 = 0x4; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t MDMA_GISR0_GIF3 = 0x8; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t MDMA_GISR0_GIF4 = 0x10; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t MDMA_GISR0_GIF5 = 0x20; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t MDMA_GISR0_GIF6 = 0x40; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t MDMA_GISR0_GIF7 = 0x80; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t MDMA_GISR0_GIF8 = 0x100; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t MDMA_GISR0_GIF9 = 0x200; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t MDMA_GISR0_GIF10 = 0x400; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t MDMA_GISR0_GIF11 = 0x800; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t MDMA_GISR0_GIF12 = 0x1000; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t MDMA_GISR0_GIF13 = 0x2000; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t MDMA_GISR0_GIF14 = 0x4000; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t MDMA_GISR0_GIF15 = 0x8000; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)


    static constexpr uint32_t MDMA_C0ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C0ISR_TEIF0 = 0x1; // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C0ISR_CTCIF0 = 0x2; // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t MDMA_C0ISR_BRTIF0 = 0x4; // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C0ISR_BTIF0 = 0x8; // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C0ISR_TCIF0 = 0x10; // channel x buffer transfer complete
    static constexpr uint32_t MDMA_C0ISR_CRQA0 = 0x10000; // channel x request active flag

    static constexpr uint32_t MDMA_C0IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C0IFCR_CTEIF0 = 0x1; // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C0IFCR_CCTCIF0 = 0x2; // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C0IFCR_CBRTIF0 = 0x4; // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C0IFCR_CBTIF0 = 0x8; // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C0IFCR_CLTCIF0 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t MDMA_C0ESR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> MDMA_C0ESR_TEA; // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
    static constexpr uint32_t MDMA_C0ESR_TED = 0x80; // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t MDMA_C0ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C0ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C0ESR_ASE = 0x400; // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C0ESR_BSE = 0x800; // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t MDMA_C0CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C0CR_EN = 0x1; // channel enable
    static constexpr uint32_t MDMA_C0CR_TEIE = 0x2; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C0CR_CTCIE = 0x4; // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C0CR_BRTIE = 0x8; // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C0CR_BTIE = 0x10; // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C0CR_TCIE = 0x20; // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<6, 0x3> MDMA_C0CR_PL; // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C0CR_BEX = 0x1000; // byte Endianness exchange
    static constexpr uint32_t MDMA_C0CR_HEX = 0x2000; // Half word Endianes exchange
    static constexpr uint32_t MDMA_C0CR_WEX = 0x4000; // Word Endianness exchange
    static constexpr uint32_t MDMA_C0CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t MDMA_C0TCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> MDMA_C0TCR_SINC; // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    typedef bit_field_t<2, 0x3> MDMA_C0TCR_DINC; // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
    typedef bit_field_t<4, 0x3> MDMA_C0TCR_SSIZE; // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &amp;lt; SSIZE and SINC &amp;#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
    typedef bit_field_t<6, 0x3> MDMA_C0TCR_DSIZE; // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &amp;lt; DSIZE and DINC &amp;#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
    typedef bit_field_t<8, 0x3> MDMA_C0TCR_SINCOS; // source increment offset size
    typedef bit_field_t<10, 0x3> MDMA_C0TCR_DINCOS; // Destination increment offset
    typedef bit_field_t<12, 0x7> MDMA_C0TCR_SBURST; // source burst transfer configuration
    typedef bit_field_t<15, 0x7> MDMA_C0TCR_DBURST; // Destination burst transfer configuration
    typedef bit_field_t<18, 0x7f> MDMA_C0TCR_TLEN; // buffer transfer lengh
    static constexpr uint32_t MDMA_C0TCR_PKE = 0x2000000; // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    typedef bit_field_t<26, 0x3> MDMA_C0TCR_PAM; // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
    typedef bit_field_t<28, 0x3> MDMA_C0TCR_TRGM; // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C0TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C0TCR_BWM = 0x80000000; // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t MDMA_C0BNDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> MDMA_C0BNDTR_BNDT; // block number of data to transfer
    static constexpr uint32_t MDMA_C0BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C0BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    typedef bit_field_t<20, 0xfff> MDMA_C0BNDTR_BRC; // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.

    static constexpr uint32_t MDMA_C0SAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C0SAR_SAR; // source adr base

    static constexpr uint32_t MDMA_C0DAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C0DAR_DAR; // Destination adr base

    static constexpr uint32_t MDMA_C0BRUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDMA_C0BRUR_SUV; // source adresse update value
    typedef bit_field_t<16, 0xffff> MDMA_C0BRUR_DUV; // destination address update

    static constexpr uint32_t MDMA_C0LAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C0LAR_LAR; // Link address register

    static constexpr uint32_t MDMA_C0TBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> MDMA_C0TBR_TSEL; // Trigger selection
    static constexpr uint32_t MDMA_C0TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C0TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.


    static constexpr uint32_t MDMA_C0MAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C0MAR_MAR; // Mask address

    static constexpr uint32_t MDMA_C0MDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C0MDR_MDR; // Mask data


    static constexpr uint32_t MDMA_C1ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C1ISR_TEIF1 = 0x1; // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C1ISR_CTCIF1 = 0x2; // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t MDMA_C1ISR_BRTIF1 = 0x4; // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C1ISR_BTIF1 = 0x8; // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C1ISR_TCIF1 = 0x10; // channel x buffer transfer complete
    static constexpr uint32_t MDMA_C1ISR_CRQA1 = 0x10000; // channel x request active flag

    static constexpr uint32_t MDMA_C1IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C1IFCR_CTEIF1 = 0x1; // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C1IFCR_CCTCIF1 = 0x2; // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C1IFCR_CBRTIF1 = 0x4; // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C1IFCR_CBTIF1 = 0x8; // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C1IFCR_CLTCIF1 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t MDMA_C1ESR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> MDMA_C1ESR_TEA; // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
    static constexpr uint32_t MDMA_C1ESR_TED = 0x80; // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t MDMA_C1ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C1ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C1ESR_ASE = 0x400; // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C1ESR_BSE = 0x800; // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t MDMA_C1CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C1CR_EN = 0x1; // channel enable
    static constexpr uint32_t MDMA_C1CR_TEIE = 0x2; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C1CR_CTCIE = 0x4; // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C1CR_BRTIE = 0x8; // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C1CR_BTIE = 0x10; // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C1CR_TCIE = 0x20; // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<6, 0x3> MDMA_C1CR_PL; // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C1CR_BEX = 0x1000; // byte Endianness exchange
    static constexpr uint32_t MDMA_C1CR_HEX = 0x2000; // Half word Endianes exchange
    static constexpr uint32_t MDMA_C1CR_WEX = 0x4000; // Word Endianness exchange
    static constexpr uint32_t MDMA_C1CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t MDMA_C1TCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> MDMA_C1TCR_SINC; // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    typedef bit_field_t<2, 0x3> MDMA_C1TCR_DINC; // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
    typedef bit_field_t<4, 0x3> MDMA_C1TCR_SSIZE; // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &amp;lt; SSIZE and SINC &amp;#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
    typedef bit_field_t<6, 0x3> MDMA_C1TCR_DSIZE; // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &amp;lt; DSIZE and DINC &amp;#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
    typedef bit_field_t<8, 0x3> MDMA_C1TCR_SINCOS; // source increment offset size
    typedef bit_field_t<10, 0x3> MDMA_C1TCR_DINCOS; // Destination increment offset
    typedef bit_field_t<12, 0x7> MDMA_C1TCR_SBURST; // source burst transfer configuration
    typedef bit_field_t<15, 0x7> MDMA_C1TCR_DBURST; // Destination burst transfer configuration
    typedef bit_field_t<18, 0x7f> MDMA_C1TCR_TLEN; // buffer transfer lengh
    static constexpr uint32_t MDMA_C1TCR_PKE = 0x2000000; // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    typedef bit_field_t<26, 0x3> MDMA_C1TCR_PAM; // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
    typedef bit_field_t<28, 0x3> MDMA_C1TCR_TRGM; // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C1TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C1TCR_BWM = 0x80000000; // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t MDMA_C1BNDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> MDMA_C1BNDTR_BNDT; // block number of data to transfer
    static constexpr uint32_t MDMA_C1BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C1BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    typedef bit_field_t<20, 0xfff> MDMA_C1BNDTR_BRC; // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.

    static constexpr uint32_t MDMA_C1SAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C1SAR_SAR; // source adr base

    static constexpr uint32_t MDMA_C1DAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C1DAR_DAR; // Destination adr base

    static constexpr uint32_t MDMA_C1BRUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDMA_C1BRUR_SUV; // source adresse update value
    typedef bit_field_t<16, 0xffff> MDMA_C1BRUR_DUV; // destination address update

    static constexpr uint32_t MDMA_C1LAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C1LAR_LAR; // Link address register

    static constexpr uint32_t MDMA_C1TBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> MDMA_C1TBR_TSEL; // Trigger selection
    static constexpr uint32_t MDMA_C1TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C1TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.


    static constexpr uint32_t MDMA_C1MAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C1MAR_MAR; // Mask address

    static constexpr uint32_t MDMA_C1MDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C1MDR_MDR; // Mask data


    static constexpr uint32_t MDMA_C2ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C2ISR_TEIF2 = 0x1; // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C2ISR_CTCIF2 = 0x2; // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t MDMA_C2ISR_BRTIF2 = 0x4; // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C2ISR_BTIF2 = 0x8; // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C2ISR_TCIF2 = 0x10; // channel x buffer transfer complete
    static constexpr uint32_t MDMA_C2ISR_CRQA2 = 0x10000; // channel x request active flag

    static constexpr uint32_t MDMA_C2IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C2IFCR_CTEIF2 = 0x1; // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C2IFCR_CCTCIF2 = 0x2; // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C2IFCR_CBRTIF2 = 0x4; // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C2IFCR_CBTIF2 = 0x8; // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C2IFCR_CLTCIF2 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t MDMA_C2ESR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> MDMA_C2ESR_TEA; // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
    static constexpr uint32_t MDMA_C2ESR_TED = 0x80; // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t MDMA_C2ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C2ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C2ESR_ASE = 0x400; // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C2ESR_BSE = 0x800; // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t MDMA_C2CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C2CR_EN = 0x1; // channel enable
    static constexpr uint32_t MDMA_C2CR_TEIE = 0x2; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C2CR_CTCIE = 0x4; // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C2CR_BRTIE = 0x8; // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C2CR_BTIE = 0x10; // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C2CR_TCIE = 0x20; // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<6, 0x3> MDMA_C2CR_PL; // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C2CR_BEX = 0x1000; // byte Endianness exchange
    static constexpr uint32_t MDMA_C2CR_HEX = 0x2000; // Half word Endianes exchange
    static constexpr uint32_t MDMA_C2CR_WEX = 0x4000; // Word Endianness exchange
    static constexpr uint32_t MDMA_C2CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t MDMA_C2TCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> MDMA_C2TCR_SINC; // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    typedef bit_field_t<2, 0x3> MDMA_C2TCR_DINC; // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
    typedef bit_field_t<4, 0x3> MDMA_C2TCR_SSIZE; // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &amp;lt; SSIZE and SINC &amp;#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
    typedef bit_field_t<6, 0x3> MDMA_C2TCR_DSIZE; // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &amp;lt; DSIZE and DINC &amp;#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
    typedef bit_field_t<8, 0x3> MDMA_C2TCR_SINCOS; // source increment offset size
    typedef bit_field_t<10, 0x3> MDMA_C2TCR_DINCOS; // Destination increment offset
    typedef bit_field_t<12, 0x7> MDMA_C2TCR_SBURST; // source burst transfer configuration
    typedef bit_field_t<15, 0x7> MDMA_C2TCR_DBURST; // Destination burst transfer configuration
    typedef bit_field_t<18, 0x7f> MDMA_C2TCR_TLEN; // buffer transfer lengh
    static constexpr uint32_t MDMA_C2TCR_PKE = 0x2000000; // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    typedef bit_field_t<26, 0x3> MDMA_C2TCR_PAM; // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
    typedef bit_field_t<28, 0x3> MDMA_C2TCR_TRGM; // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C2TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C2TCR_BWM = 0x80000000; // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t MDMA_C2BNDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> MDMA_C2BNDTR_BNDT; // block number of data to transfer
    static constexpr uint32_t MDMA_C2BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C2BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    typedef bit_field_t<20, 0xfff> MDMA_C2BNDTR_BRC; // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.

    static constexpr uint32_t MDMA_C2SAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C2SAR_SAR; // source adr base

    static constexpr uint32_t MDMA_C2DAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C2DAR_DAR; // Destination adr base

    static constexpr uint32_t MDMA_C2BRUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDMA_C2BRUR_SUV; // source adresse update value
    typedef bit_field_t<16, 0xffff> MDMA_C2BRUR_DUV; // destination address update

    static constexpr uint32_t MDMA_C2LAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C2LAR_LAR; // Link address register

    static constexpr uint32_t MDMA_C2TBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> MDMA_C2TBR_TSEL; // Trigger selection
    static constexpr uint32_t MDMA_C2TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C2TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.


    static constexpr uint32_t MDMA_C2MAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C2MAR_MAR; // Mask address

    static constexpr uint32_t MDMA_C2MDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C2MDR_MDR; // Mask data


    static constexpr uint32_t MDMA_C3ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C3ISR_TEIF3 = 0x1; // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C3ISR_CTCIF3 = 0x2; // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t MDMA_C3ISR_BRTIF3 = 0x4; // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C3ISR_BTIF3 = 0x8; // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C3ISR_TCIF3 = 0x10; // channel x buffer transfer complete
    static constexpr uint32_t MDMA_C3ISR_CRQA3 = 0x10000; // channel x request active flag

    static constexpr uint32_t MDMA_C3IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C3IFCR_CTEIF3 = 0x1; // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C3IFCR_CCTCIF3 = 0x2; // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C3IFCR_CBRTIF3 = 0x4; // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C3IFCR_CBTIF3 = 0x8; // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C3IFCR_CLTCIF3 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t MDMA_C3ESR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> MDMA_C3ESR_TEA; // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
    static constexpr uint32_t MDMA_C3ESR_TED = 0x80; // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t MDMA_C3ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C3ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C3ESR_ASE = 0x400; // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C3ESR_BSE = 0x800; // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t MDMA_C3CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C3CR_EN = 0x1; // channel enable
    static constexpr uint32_t MDMA_C3CR_TEIE = 0x2; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C3CR_CTCIE = 0x4; // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C3CR_BRTIE = 0x8; // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C3CR_BTIE = 0x10; // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C3CR_TCIE = 0x20; // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<6, 0x3> MDMA_C3CR_PL; // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C3CR_BEX = 0x1000; // byte Endianness exchange
    static constexpr uint32_t MDMA_C3CR_HEX = 0x2000; // Half word Endianes exchange
    static constexpr uint32_t MDMA_C3CR_WEX = 0x4000; // Word Endianness exchange
    static constexpr uint32_t MDMA_C3CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t MDMA_C3TCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> MDMA_C3TCR_SINC; // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    typedef bit_field_t<2, 0x3> MDMA_C3TCR_DINC; // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
    typedef bit_field_t<4, 0x3> MDMA_C3TCR_SSIZE; // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &amp;lt; SSIZE and SINC &amp;#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
    typedef bit_field_t<6, 0x3> MDMA_C3TCR_DSIZE; // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &amp;lt; DSIZE and DINC &amp;#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
    typedef bit_field_t<8, 0x3> MDMA_C3TCR_SINCOS; // source increment offset size
    typedef bit_field_t<10, 0x3> MDMA_C3TCR_DINCOS; // Destination increment offset
    typedef bit_field_t<12, 0x7> MDMA_C3TCR_SBURST; // source burst transfer configuration
    typedef bit_field_t<15, 0x7> MDMA_C3TCR_DBURST; // Destination burst transfer configuration
    typedef bit_field_t<18, 0x7f> MDMA_C3TCR_TLEN; // buffer transfer lengh
    static constexpr uint32_t MDMA_C3TCR_PKE = 0x2000000; // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    typedef bit_field_t<26, 0x3> MDMA_C3TCR_PAM; // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
    typedef bit_field_t<28, 0x3> MDMA_C3TCR_TRGM; // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C3TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C3TCR_BWM = 0x80000000; // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t MDMA_C3BNDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> MDMA_C3BNDTR_BNDT; // block number of data to transfer
    static constexpr uint32_t MDMA_C3BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C3BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    typedef bit_field_t<20, 0xfff> MDMA_C3BNDTR_BRC; // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.

    static constexpr uint32_t MDMA_C3SAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C3SAR_SAR; // source adr base

    static constexpr uint32_t MDMA_C3DAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C3DAR_DAR; // Destination adr base

    static constexpr uint32_t MDMA_C3BRUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDMA_C3BRUR_SUV; // source adresse update value
    typedef bit_field_t<16, 0xffff> MDMA_C3BRUR_DUV; // destination address update

    static constexpr uint32_t MDMA_C3LAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C3LAR_LAR; // Link address register

    static constexpr uint32_t MDMA_C3TBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> MDMA_C3TBR_TSEL; // Trigger selection
    static constexpr uint32_t MDMA_C3TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C3TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.


    static constexpr uint32_t MDMA_C3MAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C3MAR_MAR; // Mask address

    static constexpr uint32_t MDMA_C3MDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C3MDR_MDR; // Mask data


    static constexpr uint32_t MDMA_C4ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C4ISR_TEIF4 = 0x1; // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C4ISR_CTCIF4 = 0x2; // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t MDMA_C4ISR_BRTIF4 = 0x4; // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C4ISR_BTIF4 = 0x8; // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C4ISR_TCIF4 = 0x10; // channel x buffer transfer complete
    static constexpr uint32_t MDMA_C4ISR_CRQA4 = 0x10000; // channel x request active flag

    static constexpr uint32_t MDMA_C4IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C4IFCR_CTEIF4 = 0x1; // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C4IFCR_CCTCIF4 = 0x2; // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C4IFCR_CBRTIF4 = 0x4; // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C4IFCR_CBTIF4 = 0x8; // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C4IFCR_CLTCIF4 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t MDMA_C4ESR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> MDMA_C4ESR_TEA; // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
    static constexpr uint32_t MDMA_C4ESR_TED = 0x80; // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t MDMA_C4ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C4ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C4ESR_ASE = 0x400; // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C4ESR_BSE = 0x800; // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t MDMA_C4CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C4CR_EN = 0x1; // channel enable
    static constexpr uint32_t MDMA_C4CR_TEIE = 0x2; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C4CR_CTCIE = 0x4; // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C4CR_BRTIE = 0x8; // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C4CR_BTIE = 0x10; // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C4CR_TCIE = 0x20; // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<6, 0x3> MDMA_C4CR_PL; // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C4CR_BEX = 0x1000; // byte Endianness exchange
    static constexpr uint32_t MDMA_C4CR_HEX = 0x2000; // Half word Endianes exchange
    static constexpr uint32_t MDMA_C4CR_WEX = 0x4000; // Word Endianness exchange
    static constexpr uint32_t MDMA_C4CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t MDMA_C4TCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> MDMA_C4TCR_SINC; // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    typedef bit_field_t<2, 0x3> MDMA_C4TCR_DINC; // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
    typedef bit_field_t<4, 0x3> MDMA_C4TCR_SSIZE; // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &amp;lt; SSIZE and SINC &amp;#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
    typedef bit_field_t<6, 0x3> MDMA_C4TCR_DSIZE; // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &amp;lt; DSIZE and DINC &amp;#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
    typedef bit_field_t<8, 0x3> MDMA_C4TCR_SINCOS; // source increment offset size
    typedef bit_field_t<10, 0x3> MDMA_C4TCR_DINCOS; // Destination increment offset
    typedef bit_field_t<12, 0x7> MDMA_C4TCR_SBURST; // source burst transfer configuration
    typedef bit_field_t<15, 0x7> MDMA_C4TCR_DBURST; // Destination burst transfer configuration
    typedef bit_field_t<18, 0x7f> MDMA_C4TCR_TLEN; // buffer transfer lengh
    static constexpr uint32_t MDMA_C4TCR_PKE = 0x2000000; // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    typedef bit_field_t<26, 0x3> MDMA_C4TCR_PAM; // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
    typedef bit_field_t<28, 0x3> MDMA_C4TCR_TRGM; // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C4TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C4TCR_BWM = 0x80000000; // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t MDMA_C4BNDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> MDMA_C4BNDTR_BNDT; // block number of data to transfer
    static constexpr uint32_t MDMA_C4BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C4BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    typedef bit_field_t<20, 0xfff> MDMA_C4BNDTR_BRC; // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.

    static constexpr uint32_t MDMA_C4SAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C4SAR_SAR; // source adr base

    static constexpr uint32_t MDMA_C4DAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C4DAR_DAR; // Destination adr base

    static constexpr uint32_t MDMA_C4BRUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDMA_C4BRUR_SUV; // source adresse update value
    typedef bit_field_t<16, 0xffff> MDMA_C4BRUR_DUV; // destination address update

    static constexpr uint32_t MDMA_C4LAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C4LAR_LAR; // Link address register

    static constexpr uint32_t MDMA_C4TBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> MDMA_C4TBR_TSEL; // Trigger selection
    static constexpr uint32_t MDMA_C4TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C4TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.


    static constexpr uint32_t MDMA_C4MAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C4MAR_MAR; // Mask address

    static constexpr uint32_t MDMA_C4MDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C4MDR_MDR; // Mask data


    static constexpr uint32_t MDMA_C5ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C5ISR_TEIF5 = 0x1; // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C5ISR_CTCIF5 = 0x2; // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t MDMA_C5ISR_BRTIF5 = 0x4; // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C5ISR_BTIF5 = 0x8; // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C5ISR_TCIF5 = 0x10; // channel x buffer transfer complete
    static constexpr uint32_t MDMA_C5ISR_CRQA5 = 0x10000; // channel x request active flag

    static constexpr uint32_t MDMA_C5IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C5IFCR_CTEIF5 = 0x1; // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C5IFCR_CCTCIF5 = 0x2; // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C5IFCR_CBRTIF5 = 0x4; // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C5IFCR_CBTIF5 = 0x8; // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C5IFCR_CLTCIF5 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t MDMA_C5ESR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> MDMA_C5ESR_TEA; // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
    static constexpr uint32_t MDMA_C5ESR_TED = 0x80; // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t MDMA_C5ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C5ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C5ESR_ASE = 0x400; // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C5ESR_BSE = 0x800; // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t MDMA_C5CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C5CR_EN = 0x1; // channel enable
    static constexpr uint32_t MDMA_C5CR_TEIE = 0x2; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C5CR_CTCIE = 0x4; // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C5CR_BRTIE = 0x8; // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C5CR_BTIE = 0x10; // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C5CR_TCIE = 0x20; // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<6, 0x3> MDMA_C5CR_PL; // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C5CR_BEX = 0x1000; // byte Endianness exchange
    static constexpr uint32_t MDMA_C5CR_HEX = 0x2000; // Half word Endianes exchange
    static constexpr uint32_t MDMA_C5CR_WEX = 0x4000; // Word Endianness exchange
    static constexpr uint32_t MDMA_C5CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t MDMA_C5TCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> MDMA_C5TCR_SINC; // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    typedef bit_field_t<2, 0x3> MDMA_C5TCR_DINC; // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
    typedef bit_field_t<4, 0x3> MDMA_C5TCR_SSIZE; // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &amp;lt; SSIZE and SINC &amp;#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
    typedef bit_field_t<6, 0x3> MDMA_C5TCR_DSIZE; // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &amp;lt; DSIZE and DINC &amp;#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
    typedef bit_field_t<8, 0x3> MDMA_C5TCR_SINCOS; // source increment offset size
    typedef bit_field_t<10, 0x3> MDMA_C5TCR_DINCOS; // Destination increment offset
    typedef bit_field_t<12, 0x7> MDMA_C5TCR_SBURST; // source burst transfer configuration
    typedef bit_field_t<15, 0x7> MDMA_C5TCR_DBURST; // Destination burst transfer configuration
    typedef bit_field_t<18, 0x7f> MDMA_C5TCR_TLEN; // buffer transfer lengh
    static constexpr uint32_t MDMA_C5TCR_PKE = 0x2000000; // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    typedef bit_field_t<26, 0x3> MDMA_C5TCR_PAM; // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
    typedef bit_field_t<28, 0x3> MDMA_C5TCR_TRGM; // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C5TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C5TCR_BWM = 0x80000000; // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t MDMA_C5BNDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> MDMA_C5BNDTR_BNDT; // block number of data to transfer
    static constexpr uint32_t MDMA_C5BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C5BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    typedef bit_field_t<20, 0xfff> MDMA_C5BNDTR_BRC; // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.

    static constexpr uint32_t MDMA_C5SAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C5SAR_SAR; // source adr base

    static constexpr uint32_t MDMA_C5DAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C5DAR_DAR; // Destination adr base

    static constexpr uint32_t MDMA_C5BRUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDMA_C5BRUR_SUV; // source adresse update value
    typedef bit_field_t<16, 0xffff> MDMA_C5BRUR_DUV; // destination address update

    static constexpr uint32_t MDMA_C5LAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C5LAR_LAR; // Link address register

    static constexpr uint32_t MDMA_C5TBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> MDMA_C5TBR_TSEL; // Trigger selection
    static constexpr uint32_t MDMA_C5TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C5TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.


    static constexpr uint32_t MDMA_C5MAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C5MAR_MAR; // Mask address

    static constexpr uint32_t MDMA_C5MDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C5MDR_MDR; // Mask data


    static constexpr uint32_t MDMA_C6ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C6ISR_TEIF6 = 0x1; // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C6ISR_CTCIF6 = 0x2; // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t MDMA_C6ISR_BRTIF6 = 0x4; // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C6ISR_BTIF6 = 0x8; // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C6ISR_TCIF6 = 0x10; // channel x buffer transfer complete
    static constexpr uint32_t MDMA_C6ISR_CRQA6 = 0x10000; // channel x request active flag

    static constexpr uint32_t MDMA_C6IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C6IFCR_CTEIF6 = 0x1; // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C6IFCR_CCTCIF6 = 0x2; // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C6IFCR_CBRTIF6 = 0x4; // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C6IFCR_CBTIF6 = 0x8; // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C6IFCR_CLTCIF6 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t MDMA_C6ESR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> MDMA_C6ESR_TEA; // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
    static constexpr uint32_t MDMA_C6ESR_TED = 0x80; // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t MDMA_C6ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C6ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C6ESR_ASE = 0x400; // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C6ESR_BSE = 0x800; // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t MDMA_C6CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C6CR_EN = 0x1; // channel enable
    static constexpr uint32_t MDMA_C6CR_TEIE = 0x2; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C6CR_CTCIE = 0x4; // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C6CR_BRTIE = 0x8; // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C6CR_BTIE = 0x10; // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C6CR_TCIE = 0x20; // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<6, 0x3> MDMA_C6CR_PL; // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C6CR_BEX = 0x1000; // byte Endianness exchange
    static constexpr uint32_t MDMA_C6CR_HEX = 0x2000; // Half word Endianes exchange
    static constexpr uint32_t MDMA_C6CR_WEX = 0x4000; // Word Endianness exchange
    static constexpr uint32_t MDMA_C6CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t MDMA_C6TCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> MDMA_C6TCR_SINC; // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    typedef bit_field_t<2, 0x3> MDMA_C6TCR_DINC; // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
    typedef bit_field_t<4, 0x3> MDMA_C6TCR_SSIZE; // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &amp;lt; SSIZE and SINC &amp;#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
    typedef bit_field_t<6, 0x3> MDMA_C6TCR_DSIZE; // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &amp;lt; DSIZE and DINC &amp;#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
    typedef bit_field_t<8, 0x3> MDMA_C6TCR_SINCOS; // source increment offset size
    typedef bit_field_t<10, 0x3> MDMA_C6TCR_DINCOS; // Destination increment offset
    typedef bit_field_t<12, 0x7> MDMA_C6TCR_SBURST; // source burst transfer configuration
    typedef bit_field_t<15, 0x7> MDMA_C6TCR_DBURST; // Destination burst transfer configuration
    typedef bit_field_t<18, 0x7f> MDMA_C6TCR_TLEN; // buffer transfer lengh
    static constexpr uint32_t MDMA_C6TCR_PKE = 0x2000000; // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    typedef bit_field_t<26, 0x3> MDMA_C6TCR_PAM; // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
    typedef bit_field_t<28, 0x3> MDMA_C6TCR_TRGM; // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C6TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C6TCR_BWM = 0x80000000; // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t MDMA_C6BNDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> MDMA_C6BNDTR_BNDT; // block number of data to transfer
    static constexpr uint32_t MDMA_C6BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C6BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    typedef bit_field_t<20, 0xfff> MDMA_C6BNDTR_BRC; // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0

    static constexpr uint32_t MDMA_C6SAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C6SAR_SAR; // source adr base

    static constexpr uint32_t MDMA_C6DAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C6DAR_DAR; // Destination adr base

    static constexpr uint32_t MDMA_C6BRUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDMA_C6BRUR_SUV; // source adresse update value
    typedef bit_field_t<16, 0xffff> MDMA_C6BRUR_DUV; // destination address update

    static constexpr uint32_t MDMA_C6LAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C6LAR_LAR; // Link address register

    static constexpr uint32_t MDMA_C6TBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> MDMA_C6TBR_TSEL; // Trigger selection
    static constexpr uint32_t MDMA_C6TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C6TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.


    static constexpr uint32_t MDMA_C6MAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C6MAR_MAR; // Mask address

    static constexpr uint32_t MDMA_C6MDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C6MDR_MDR; // Mask data


    static constexpr uint32_t MDMA_C7ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C7ISR_TEIF7 = 0x1; // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C7ISR_CTCIF7 = 0x2; // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t MDMA_C7ISR_BRTIF7 = 0x4; // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C7ISR_BTIF7 = 0x8; // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C7ISR_TCIF7 = 0x10; // channel x buffer transfer complete
    static constexpr uint32_t MDMA_C7ISR_CRQA7 = 0x10000; // channel x request active flag

    static constexpr uint32_t MDMA_C7IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C7IFCR_CTEIF7 = 0x1; // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C7IFCR_CCTCIF7 = 0x2; // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C7IFCR_CBRTIF7 = 0x4; // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C7IFCR_CBTIF7 = 0x8; // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C7IFCR_CLTCIF7 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t MDMA_C7ESR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> MDMA_C7ESR_TEA; // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
    static constexpr uint32_t MDMA_C7ESR_TED = 0x80; // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t MDMA_C7ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C7ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C7ESR_ASE = 0x400; // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C7ESR_BSE = 0x800; // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t MDMA_C7CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C7CR_EN = 0x1; // channel enable
    static constexpr uint32_t MDMA_C7CR_TEIE = 0x2; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C7CR_CTCIE = 0x4; // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C7CR_BRTIE = 0x8; // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C7CR_BTIE = 0x10; // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C7CR_TCIE = 0x20; // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<6, 0x3> MDMA_C7CR_PL; // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C7CR_BEX = 0x1000; // byte Endianness exchange
    static constexpr uint32_t MDMA_C7CR_HEX = 0x2000; // Half word Endianes exchange
    static constexpr uint32_t MDMA_C7CR_WEX = 0x4000; // Word Endianness exchange
    static constexpr uint32_t MDMA_C7CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t MDMA_C7TCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> MDMA_C7TCR_SINC; // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    typedef bit_field_t<2, 0x3> MDMA_C7TCR_DINC; // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
    typedef bit_field_t<4, 0x3> MDMA_C7TCR_SSIZE; // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &amp;lt; SSIZE and SINC &amp;#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
    typedef bit_field_t<6, 0x3> MDMA_C7TCR_DSIZE; // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &amp;lt; DSIZE and DINC &amp;#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
    typedef bit_field_t<8, 0x3> MDMA_C7TCR_SINCOS; // source increment offset size
    typedef bit_field_t<10, 0x3> MDMA_C7TCR_DINCOS; // Destination increment offset
    typedef bit_field_t<12, 0x7> MDMA_C7TCR_SBURST; // source burst transfer configuration
    typedef bit_field_t<15, 0x7> MDMA_C7TCR_DBURST; // Destination burst transfer configuration
    typedef bit_field_t<18, 0x7f> MDMA_C7TCR_TLEN; // buffer transfer lengh
    static constexpr uint32_t MDMA_C7TCR_PKE = 0x2000000; // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    typedef bit_field_t<26, 0x3> MDMA_C7TCR_PAM; // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
    typedef bit_field_t<28, 0x3> MDMA_C7TCR_TRGM; // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C7TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C7TCR_BWM = 0x80000000; // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t MDMA_C7BNDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> MDMA_C7BNDTR_BNDT; // block number of data to transfer
    static constexpr uint32_t MDMA_C7BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C7BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    typedef bit_field_t<20, 0xfff> MDMA_C7BNDTR_BRC; // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.

    static constexpr uint32_t MDMA_C7SAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C7SAR_SAR; // source adr base

    static constexpr uint32_t MDMA_C7DAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C7DAR_DAR; // Destination adr base

    static constexpr uint32_t MDMA_C7BRUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDMA_C7BRUR_SUV; // source adresse update value
    typedef bit_field_t<16, 0xffff> MDMA_C7BRUR_DUV; // destination address update

    static constexpr uint32_t MDMA_C7LAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C7LAR_LAR; // Link address register

    static constexpr uint32_t MDMA_C7TBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> MDMA_C7TBR_TSEL; // Trigger selection
    static constexpr uint32_t MDMA_C7TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C7TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.


    static constexpr uint32_t MDMA_C7MAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C7MAR_MAR; // Mask address

    static constexpr uint32_t MDMA_C7MDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C7MDR_MDR; // Mask data


    static constexpr uint32_t MDMA_C8ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C8ISR_TEIF8 = 0x1; // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C8ISR_CTCIF8 = 0x2; // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t MDMA_C8ISR_BRTIF8 = 0x4; // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C8ISR_BTIF8 = 0x8; // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C8ISR_TCIF8 = 0x10; // channel x buffer transfer complete
    static constexpr uint32_t MDMA_C8ISR_CRQA8 = 0x10000; // channel x request active flag

    static constexpr uint32_t MDMA_C8IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C8IFCR_CTEIF8 = 0x1; // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C8IFCR_CCTCIF8 = 0x2; // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C8IFCR_CBRTIF8 = 0x4; // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C8IFCR_CBTIF8 = 0x8; // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C8IFCR_CLTCIF8 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t MDMA_C8ESR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> MDMA_C8ESR_TEA; // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
    static constexpr uint32_t MDMA_C8ESR_TED = 0x80; // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t MDMA_C8ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C8ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C8ESR_ASE = 0x400; // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C8ESR_BSE = 0x800; // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t MDMA_C8CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C8CR_EN = 0x1; // channel enable
    static constexpr uint32_t MDMA_C8CR_TEIE = 0x2; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C8CR_CTCIE = 0x4; // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C8CR_BRTIE = 0x8; // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C8CR_BTIE = 0x10; // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C8CR_TCIE = 0x20; // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<6, 0x3> MDMA_C8CR_PL; // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C8CR_BEX = 0x1000; // byte Endianness exchange
    static constexpr uint32_t MDMA_C8CR_HEX = 0x2000; // Half word Endianes exchange
    static constexpr uint32_t MDMA_C8CR_WEX = 0x4000; // Word Endianness exchange
    static constexpr uint32_t MDMA_C8CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t MDMA_C8TCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> MDMA_C8TCR_SINC; // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    typedef bit_field_t<2, 0x3> MDMA_C8TCR_DINC; // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
    typedef bit_field_t<4, 0x3> MDMA_C8TCR_SSIZE; // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &amp;lt; SSIZE and SINC &amp;#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
    typedef bit_field_t<6, 0x3> MDMA_C8TCR_DSIZE; // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &amp;lt; DSIZE and DINC &amp;#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
    typedef bit_field_t<8, 0x3> MDMA_C8TCR_SINCOS; // source increment offset size
    typedef bit_field_t<10, 0x3> MDMA_C8TCR_DINCOS; // Destination increment offset
    typedef bit_field_t<12, 0x7> MDMA_C8TCR_SBURST; // source burst transfer configuration
    typedef bit_field_t<15, 0x7> MDMA_C8TCR_DBURST; // Destination burst transfer configuration
    typedef bit_field_t<18, 0x7f> MDMA_C8TCR_TLEN; // buffer transfer lengh
    static constexpr uint32_t MDMA_C8TCR_PKE = 0x2000000; // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    typedef bit_field_t<26, 0x3> MDMA_C8TCR_PAM; // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
    typedef bit_field_t<28, 0x3> MDMA_C8TCR_TRGM; // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C8TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C8TCR_BWM = 0x80000000; // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t MDMA_C8BNDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> MDMA_C8BNDTR_BNDT; // block number of data to transfer
    static constexpr uint32_t MDMA_C8BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C8BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    typedef bit_field_t<20, 0xfff> MDMA_C8BNDTR_BRC; // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.

    static constexpr uint32_t MDMA_C8SAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C8SAR_SAR; // source adr base

    static constexpr uint32_t MDMA_C8DAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C8DAR_DAR; // Destination adr base

    static constexpr uint32_t MDMA_C8BRUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDMA_C8BRUR_SUV; // source adresse update value
    typedef bit_field_t<16, 0xffff> MDMA_C8BRUR_DUV; // destination address update

    static constexpr uint32_t MDMA_C8LAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C8LAR_LAR; // Link address register

    static constexpr uint32_t MDMA_C8TBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> MDMA_C8TBR_TSEL; // Trigger selection
    static constexpr uint32_t MDMA_C8TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C8TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.


    static constexpr uint32_t MDMA_C8MAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C8MAR_MAR; // Mask address

    static constexpr uint32_t MDMA_C8MDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C8MDR_MDR; // Mask data


    static constexpr uint32_t MDMA_C9ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C9ISR_TEIF9 = 0x1; // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C9ISR_CTCIF9 = 0x2; // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t MDMA_C9ISR_BRTIF9 = 0x4; // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C9ISR_BTIF9 = 0x8; // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C9ISR_TCIF9 = 0x10; // channel x buffer transfer complete
    static constexpr uint32_t MDMA_C9ISR_CRQA9 = 0x10000; // channel x request active flag

    static constexpr uint32_t MDMA_C9IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C9IFCR_CTEIF9 = 0x1; // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C9IFCR_CCTCIF9 = 0x2; // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C9IFCR_CBRTIF9 = 0x4; // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C9IFCR_CBTIF9 = 0x8; // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C9IFCR_CLTCIF9 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t MDMA_C9ESR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> MDMA_C9ESR_TEA; // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
    static constexpr uint32_t MDMA_C9ESR_TED = 0x80; // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t MDMA_C9ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C9ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C9ESR_ASE = 0x400; // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C9ESR_BSE = 0x800; // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t MDMA_C9CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C9CR_EN = 0x1; // channel enable
    static constexpr uint32_t MDMA_C9CR_TEIE = 0x2; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C9CR_CTCIE = 0x4; // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C9CR_BRTIE = 0x8; // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C9CR_BTIE = 0x10; // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C9CR_TCIE = 0x20; // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<6, 0x3> MDMA_C9CR_PL; // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C9CR_BEX = 0x1000; // byte Endianness exchange
    static constexpr uint32_t MDMA_C9CR_HEX = 0x2000; // Half word Endianes exchange
    static constexpr uint32_t MDMA_C9CR_WEX = 0x4000; // Word Endianness exchange
    static constexpr uint32_t MDMA_C9CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t MDMA_C9TCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> MDMA_C9TCR_SINC; // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    typedef bit_field_t<2, 0x3> MDMA_C9TCR_DINC; // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
    typedef bit_field_t<4, 0x3> MDMA_C9TCR_SSIZE; // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &amp;lt; SSIZE and SINC &amp;#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
    typedef bit_field_t<6, 0x3> MDMA_C9TCR_DSIZE; // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &amp;lt; DSIZE and DINC &amp;#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
    typedef bit_field_t<8, 0x3> MDMA_C9TCR_SINCOS; // source increment offset size
    typedef bit_field_t<10, 0x3> MDMA_C9TCR_DINCOS; // Destination increment offset
    typedef bit_field_t<12, 0x7> MDMA_C9TCR_SBURST; // source burst transfer configuration
    typedef bit_field_t<15, 0x7> MDMA_C9TCR_DBURST; // Destination burst transfer configuration
    typedef bit_field_t<18, 0x7f> MDMA_C9TCR_TLEN; // buffer transfer lengh
    static constexpr uint32_t MDMA_C9TCR_PKE = 0x2000000; // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    typedef bit_field_t<26, 0x3> MDMA_C9TCR_PAM; // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
    typedef bit_field_t<28, 0x3> MDMA_C9TCR_TRGM; // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C9TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C9TCR_BWM = 0x80000000; // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t MDMA_C9BNDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> MDMA_C9BNDTR_BNDT; // block number of data to transfer
    static constexpr uint32_t MDMA_C9BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C9BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    typedef bit_field_t<20, 0xfff> MDMA_C9BNDTR_BRC; // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.

    static constexpr uint32_t MDMA_C9SAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C9SAR_SAR; // source adr base

    static constexpr uint32_t MDMA_C9DAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C9DAR_DAR; // Destination adr base

    static constexpr uint32_t MDMA_C9BRUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDMA_C9BRUR_SUV; // source adresse update value
    typedef bit_field_t<16, 0xffff> MDMA_C9BRUR_DUV; // destination address update

    static constexpr uint32_t MDMA_C9LAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C9LAR_LAR; // Link address register

    static constexpr uint32_t MDMA_C9TBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> MDMA_C9TBR_TSEL; // Trigger selection
    static constexpr uint32_t MDMA_C9TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C9TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.


    static constexpr uint32_t MDMA_C9MAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C9MAR_MAR; // Mask address

    static constexpr uint32_t MDMA_C9MDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C9MDR_MDR; // Mask data


    static constexpr uint32_t MDMA_C10ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C10ISR_TEIF10 = 0x1; // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C10ISR_CTCIF10 = 0x2; // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t MDMA_C10ISR_BRTIF10 = 0x4; // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C10ISR_BTIF10 = 0x8; // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C10ISR_TCIF10 = 0x10; // channel x buffer transfer complete
    static constexpr uint32_t MDMA_C10ISR_CRQA10 = 0x10000; // channel x request active flag

    static constexpr uint32_t MDMA_C10IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C10IFCR_CTEIF10 = 0x1; // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C10IFCR_CCTCIF10 = 0x2; // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C10IFCR_CBRTIF10 = 0x4; // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C10IFCR_CBTIF10 = 0x8; // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C10IFCR_CLTCIF10 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t MDMA_C10ESR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> MDMA_C10ESR_TEA; // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
    static constexpr uint32_t MDMA_C10ESR_TED = 0x80; // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t MDMA_C10ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C10ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C10ESR_ASE = 0x400; // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C10ESR_BSE = 0x800; // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t MDMA_C10CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C10CR_EN = 0x1; // channel enable
    static constexpr uint32_t MDMA_C10CR_TEIE = 0x2; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C10CR_CTCIE = 0x4; // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C10CR_BRTIE = 0x8; // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C10CR_BTIE = 0x10; // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C10CR_TCIE = 0x20; // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<6, 0x3> MDMA_C10CR_PL; // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C10CR_BEX = 0x1000; // byte Endianness exchange
    static constexpr uint32_t MDMA_C10CR_HEX = 0x2000; // Half word Endianes exchange
    static constexpr uint32_t MDMA_C10CR_WEX = 0x4000; // Word Endianness exchange
    static constexpr uint32_t MDMA_C10CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t MDMA_C10TCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> MDMA_C10TCR_SINC; // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    typedef bit_field_t<2, 0x3> MDMA_C10TCR_DINC; // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
    typedef bit_field_t<4, 0x3> MDMA_C10TCR_SSIZE; // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &amp;lt; SSIZE and SINC &amp;#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
    typedef bit_field_t<6, 0x3> MDMA_C10TCR_DSIZE; // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &amp;lt; DSIZE and DINC &amp;#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
    typedef bit_field_t<8, 0x3> MDMA_C10TCR_SINCOS; // source increment offset size
    typedef bit_field_t<10, 0x3> MDMA_C10TCR_DINCOS; // Destination increment offset
    typedef bit_field_t<12, 0x7> MDMA_C10TCR_SBURST; // source burst transfer configuration
    typedef bit_field_t<15, 0x7> MDMA_C10TCR_DBURST; // Destination burst transfer configuration
    typedef bit_field_t<18, 0x7f> MDMA_C10TCR_TLEN; // buffer transfer lengh
    static constexpr uint32_t MDMA_C10TCR_PKE = 0x2000000; // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    typedef bit_field_t<26, 0x3> MDMA_C10TCR_PAM; // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
    typedef bit_field_t<28, 0x3> MDMA_C10TCR_TRGM; // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C10TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C10TCR_BWM = 0x80000000; // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t MDMA_C10BNDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> MDMA_C10BNDTR_BNDT; // block number of data to transfer
    static constexpr uint32_t MDMA_C10BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C10BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    typedef bit_field_t<20, 0xfff> MDMA_C10BNDTR_BRC; // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.

    static constexpr uint32_t MDMA_C10SAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C10SAR_SAR; // source adr base

    static constexpr uint32_t MDMA_C10DAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C10DAR_DAR; // Destination adr base

    static constexpr uint32_t MDMA_C10BRUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDMA_C10BRUR_SUV; // source adresse update value
    typedef bit_field_t<16, 0xffff> MDMA_C10BRUR_DUV; // destination address update

    static constexpr uint32_t MDMA_C10LAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C10LAR_LAR; // Link address register

    static constexpr uint32_t MDMA_C10TBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> MDMA_C10TBR_TSEL; // Trigger selection
    static constexpr uint32_t MDMA_C10TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C10TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.


    static constexpr uint32_t MDMA_C10MAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C10MAR_MAR; // Mask address

    static constexpr uint32_t MDMA_C10MDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C10MDR_MDR; // Mask data


    static constexpr uint32_t MDMA_C11ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C11ISR_TEIF11 = 0x1; // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C11ISR_CTCIF11 = 0x2; // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t MDMA_C11ISR_BRTIF11 = 0x4; // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C11ISR_BTIF11 = 0x8; // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C11ISR_TCIF11 = 0x10; // channel x buffer transfer complete
    static constexpr uint32_t MDMA_C11ISR_CRQA11 = 0x10000; // channel x request active flag

    static constexpr uint32_t MDMA_C11IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C11IFCR_CTEIF11 = 0x1; // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C11IFCR_CCTCIF11 = 0x2; // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C11IFCR_CBRTIF11 = 0x4; // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C11IFCR_CBTIF11 = 0x8; // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C11IFCR_CLTCIF11 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t MDMA_C11ESR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> MDMA_C11ESR_TEA; // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
    static constexpr uint32_t MDMA_C11ESR_TED = 0x80; // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t MDMA_C11ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C11ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C11ESR_ASE = 0x400; // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C11ESR_BSE = 0x800; // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t MDMA_C11CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C11CR_EN = 0x1; // channel enable
    static constexpr uint32_t MDMA_C11CR_TEIE = 0x2; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C11CR_CTCIE = 0x4; // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C11CR_BRTIE = 0x8; // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C11CR_BTIE = 0x10; // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C11CR_TCIE = 0x20; // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<6, 0x3> MDMA_C11CR_PL; // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C11CR_BEX = 0x1000; // byte Endianness exchange
    static constexpr uint32_t MDMA_C11CR_HEX = 0x2000; // Half word Endianes exchange
    static constexpr uint32_t MDMA_C11CR_WEX = 0x4000; // Word Endianness exchange
    static constexpr uint32_t MDMA_C11CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t MDMA_C11TCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> MDMA_C11TCR_SINC; // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    typedef bit_field_t<2, 0x3> MDMA_C11TCR_DINC; // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
    typedef bit_field_t<4, 0x3> MDMA_C11TCR_SSIZE; // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &amp;lt; SSIZE and SINC &amp;#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
    typedef bit_field_t<6, 0x3> MDMA_C11TCR_DSIZE; // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &amp;lt; DSIZE and DINC &amp;#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
    typedef bit_field_t<8, 0x3> MDMA_C11TCR_SINCOS; // source increment offset size
    typedef bit_field_t<10, 0x3> MDMA_C11TCR_DINCOS; // Destination increment offset
    typedef bit_field_t<12, 0x7> MDMA_C11TCR_SBURST; // source burst transfer configuration
    typedef bit_field_t<15, 0x7> MDMA_C11TCR_DBURST; // Destination burst transfer configuration
    typedef bit_field_t<18, 0x7f> MDMA_C11TCR_TLEN; // buffer transfer lengh
    static constexpr uint32_t MDMA_C11TCR_PKE = 0x2000000; // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    typedef bit_field_t<26, 0x3> MDMA_C11TCR_PAM; // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
    typedef bit_field_t<28, 0x3> MDMA_C11TCR_TRGM; // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C11TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C11TCR_BWM = 0x80000000; // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t MDMA_C11BNDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> MDMA_C11BNDTR_BNDT; // block number of data to transfer
    static constexpr uint32_t MDMA_C11BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C11BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    typedef bit_field_t<20, 0xfff> MDMA_C11BNDTR_BRC; // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.

    static constexpr uint32_t MDMA_C11SAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C11SAR_SAR; // source adr base

    static constexpr uint32_t MDMA_C11DAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C11DAR_DAR; // Destination adr base

    static constexpr uint32_t MDMA_C11BRUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDMA_C11BRUR_SUV; // source adresse update value
    typedef bit_field_t<16, 0xffff> MDMA_C11BRUR_DUV; // destination address update

    static constexpr uint32_t MDMA_C11LAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C11LAR_LAR; // Link address register

    static constexpr uint32_t MDMA_C11TBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> MDMA_C11TBR_TSEL; // Trigger selection
    static constexpr uint32_t MDMA_C11TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C11TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.


    static constexpr uint32_t MDMA_C11MAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C11MAR_MAR; // Mask address

    static constexpr uint32_t MDMA_C11MDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C11MDR_MDR; // Mask data


    static constexpr uint32_t MDMA_C12ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C12ISR_TEIF12 = 0x1; // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C12ISR_CTCIF12 = 0x2; // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t MDMA_C12ISR_BRTIF12 = 0x4; // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C12ISR_BTIF12 = 0x8; // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C12ISR_TCIF12 = 0x10; // channel x buffer transfer complete
    static constexpr uint32_t MDMA_C12ISR_CRQA12 = 0x10000; // channel x request active flag

    static constexpr uint32_t MDMA_C12IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C12IFCR_CTEIF12 = 0x1; // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C12IFCR_CCTCIF12 = 0x2; // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C12IFCR_CBRTIF12 = 0x4; // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C12IFCR_CBTIF12 = 0x8; // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C12IFCR_CLTCIF12 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t MDMA_C12ESR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> MDMA_C12ESR_TEA; // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
    static constexpr uint32_t MDMA_C12ESR_TED = 0x80; // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t MDMA_C12ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C12ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C12ESR_ASE = 0x400; // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C12ESR_BSE = 0x800; // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t MDMA_C12CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C12CR_EN = 0x1; // channel enable
    static constexpr uint32_t MDMA_C12CR_TEIE = 0x2; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C12CR_CTCIE = 0x4; // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C12CR_BRTIE = 0x8; // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C12CR_BTIE = 0x10; // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C12CR_TCIE = 0x20; // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<6, 0x3> MDMA_C12CR_PL; // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C12CR_BEX = 0x1000; // byte Endianness exchange
    static constexpr uint32_t MDMA_C12CR_HEX = 0x2000; // Half word Endianes exchange
    static constexpr uint32_t MDMA_C12CR_WEX = 0x4000; // Word Endianness exchange
    static constexpr uint32_t MDMA_C12CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t MDMA_C12TCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> MDMA_C12TCR_SINC; // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    typedef bit_field_t<2, 0x3> MDMA_C12TCR_DINC; // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
    typedef bit_field_t<4, 0x3> MDMA_C12TCR_SSIZE; // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &amp;lt; SSIZE and SINC &amp;#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
    typedef bit_field_t<6, 0x3> MDMA_C12TCR_DSIZE; // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &amp;lt; DSIZE and DINC &amp;#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
    typedef bit_field_t<8, 0x3> MDMA_C12TCR_SINCOS; // source increment offset size
    typedef bit_field_t<10, 0x3> MDMA_C12TCR_DINCOS; // Destination increment offset
    typedef bit_field_t<12, 0x7> MDMA_C12TCR_SBURST; // source burst transfer configuration
    typedef bit_field_t<15, 0x7> MDMA_C12TCR_DBURST; // Destination burst transfer configuration
    typedef bit_field_t<18, 0x7f> MDMA_C12TCR_TLEN; // buffer transfer lengh
    static constexpr uint32_t MDMA_C12TCR_PKE = 0x2000000; // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    typedef bit_field_t<26, 0x3> MDMA_C12TCR_PAM; // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
    typedef bit_field_t<28, 0x3> MDMA_C12TCR_TRGM; // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C12TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C12TCR_BWM = 0x80000000; // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t MDMA_C12BNDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> MDMA_C12BNDTR_BNDT; // block number of data to transfer
    static constexpr uint32_t MDMA_C12BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C12BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    typedef bit_field_t<20, 0xfff> MDMA_C12BNDTR_BRC; // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.

    static constexpr uint32_t MDMA_C12SAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C12SAR_SAR; // source adr base

    static constexpr uint32_t MDMA_C12DAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C12DAR_DAR; // Destination adr base

    static constexpr uint32_t MDMA_C12BRUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDMA_C12BRUR_SUV; // source adresse update value
    typedef bit_field_t<16, 0xffff> MDMA_C12BRUR_DUV; // destination address update

    static constexpr uint32_t MDMA_C12LAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C12LAR_LAR; // Link address register

    static constexpr uint32_t MDMA_C12TBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> MDMA_C12TBR_TSEL; // Trigger selection
    static constexpr uint32_t MDMA_C12TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C12TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.


    static constexpr uint32_t MDMA_C12MAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C12MAR_MAR; // Mask address

    static constexpr uint32_t MDMA_C12MDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C12MDR_MDR; // Mask data


    static constexpr uint32_t MDMA_C13ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C13ISR_TEIF13 = 0x1; // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C13ISR_CTCIF13 = 0x2; // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t MDMA_C13ISR_BRTIF13 = 0x4; // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C13ISR_BTIF13 = 0x8; // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C13ISR_TCIF13 = 0x10; // channel x buffer transfer complete
    static constexpr uint32_t MDMA_C13ISR_CRQA13 = 0x10000; // channel x request active flag

    static constexpr uint32_t MDMA_C13IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C13IFCR_CTEIF13 = 0x1; // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C13IFCR_CCTCIF13 = 0x2; // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C13IFCR_CBRTIF13 = 0x4; // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C13IFCR_CBTIF13 = 0x8; // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C13IFCR_CLTCIF13 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t MDMA_C13ESR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> MDMA_C13ESR_TEA; // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
    static constexpr uint32_t MDMA_C13ESR_TED = 0x80; // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t MDMA_C13ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C13ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C13ESR_ASE = 0x400; // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C13ESR_BSE = 0x800; // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t MDMA_C13CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C13CR_EN = 0x1; // channel enable
    static constexpr uint32_t MDMA_C13CR_TEIE = 0x2; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C13CR_CTCIE = 0x4; // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C13CR_BRTIE = 0x8; // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C13CR_BTIE = 0x10; // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C13CR_TCIE = 0x20; // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<6, 0x3> MDMA_C13CR_PL; // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C13CR_BEX = 0x1000; // byte Endianness exchange
    static constexpr uint32_t MDMA_C13CR_HEX = 0x2000; // Half word Endianes exchange
    static constexpr uint32_t MDMA_C13CR_WEX = 0x4000; // Word Endianness exchange
    static constexpr uint32_t MDMA_C13CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t MDMA_C13TCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> MDMA_C13TCR_SINC; // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    typedef bit_field_t<2, 0x3> MDMA_C13TCR_DINC; // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
    typedef bit_field_t<4, 0x3> MDMA_C13TCR_SSIZE; // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &amp;lt; SSIZE and SINC &amp;#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
    typedef bit_field_t<6, 0x3> MDMA_C13TCR_DSIZE; // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &amp;lt; DSIZE and DINC &amp;#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
    typedef bit_field_t<8, 0x3> MDMA_C13TCR_SINCOS; // source increment offset size
    typedef bit_field_t<10, 0x3> MDMA_C13TCR_DINCOS; // Destination increment offset
    typedef bit_field_t<12, 0x7> MDMA_C13TCR_SBURST; // source burst transfer configuration
    typedef bit_field_t<15, 0x7> MDMA_C13TCR_DBURST; // Destination burst transfer configuration
    typedef bit_field_t<18, 0x7f> MDMA_C13TCR_TLEN; // buffer transfer lengh
    static constexpr uint32_t MDMA_C13TCR_PKE = 0x2000000; // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    typedef bit_field_t<26, 0x3> MDMA_C13TCR_PAM; // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
    typedef bit_field_t<28, 0x3> MDMA_C13TCR_TRGM; // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C13TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C13TCR_BWM = 0x80000000; // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t MDMA_C13BNDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> MDMA_C13BNDTR_BNDT; // block number of data to transfer
    static constexpr uint32_t MDMA_C13BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C13BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    typedef bit_field_t<20, 0xfff> MDMA_C13BNDTR_BRC; // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.

    static constexpr uint32_t MDMA_C13SAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C13SAR_SAR; // source adr base

    static constexpr uint32_t MDMA_C13DAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C13DAR_DAR; // Destination adr base

    static constexpr uint32_t MDMA_C13BRUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDMA_C13BRUR_SUV; // source adresse update value
    typedef bit_field_t<16, 0xffff> MDMA_C13BRUR_DUV; // destination address update

    static constexpr uint32_t MDMA_C13LAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C13LAR_LAR; // Link address register

    static constexpr uint32_t MDMA_C13TBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> MDMA_C13TBR_TSEL; // Trigger selection
    static constexpr uint32_t MDMA_C13TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C13TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.


    static constexpr uint32_t MDMA_C13MAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C13MAR_MAR; // Mask address

    static constexpr uint32_t MDMA_C13MDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C13MDR_MDR; // Mask data


    static constexpr uint32_t MDMA_C14ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C14ISR_TEIF14 = 0x1; // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C14ISR_CTCIF14 = 0x2; // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t MDMA_C14ISR_BRTIF14 = 0x4; // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C14ISR_BTIF14 = 0x8; // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C14ISR_TCIF14 = 0x10; // channel x buffer transfer complete
    static constexpr uint32_t MDMA_C14ISR_CRQA14 = 0x10000; // channel x request active flag

    static constexpr uint32_t MDMA_C14IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C14IFCR_CTEIF14 = 0x1; // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C14IFCR_CCTCIF14 = 0x2; // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C14IFCR_CBRTIF14 = 0x4; // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C14IFCR_CBTIF14 = 0x8; // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C14IFCR_CLTCIF14 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t MDMA_C14ESR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> MDMA_C14ESR_TEA; // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
    static constexpr uint32_t MDMA_C14ESR_TED = 0x80; // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t MDMA_C14ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C14ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C14ESR_ASE = 0x400; // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C14ESR_BSE = 0x800; // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t MDMA_C14CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C14CR_EN = 0x1; // channel enable
    static constexpr uint32_t MDMA_C14CR_TEIE = 0x2; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C14CR_CTCIE = 0x4; // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C14CR_BRTIE = 0x8; // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C14CR_BTIE = 0x10; // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C14CR_TCIE = 0x20; // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<6, 0x3> MDMA_C14CR_PL; // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C14CR_BEX = 0x1000; // byte Endianness exchange
    static constexpr uint32_t MDMA_C14CR_HEX = 0x2000; // Half word Endianes exchange
    static constexpr uint32_t MDMA_C14CR_WEX = 0x4000; // Word Endianness exchange
    static constexpr uint32_t MDMA_C14CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t MDMA_C14TCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> MDMA_C14TCR_SINC; // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    typedef bit_field_t<2, 0x3> MDMA_C14TCR_DINC; // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
    typedef bit_field_t<4, 0x3> MDMA_C14TCR_SSIZE; // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &amp;lt; SSIZE and SINC &amp;#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
    typedef bit_field_t<6, 0x3> MDMA_C14TCR_DSIZE; // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &amp;lt; DSIZE and DINC &amp;#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
    typedef bit_field_t<8, 0x3> MDMA_C14TCR_SINCOS; // source increment offset size
    typedef bit_field_t<10, 0x3> MDMA_C14TCR_DINCOS; // Destination increment offset
    typedef bit_field_t<12, 0x7> MDMA_C14TCR_SBURST; // source burst transfer configuration
    typedef bit_field_t<15, 0x7> MDMA_C14TCR_DBURST; // Destination burst transfer configuration
    typedef bit_field_t<18, 0x7f> MDMA_C14TCR_TLEN; // buffer transfer lengh
    static constexpr uint32_t MDMA_C14TCR_PKE = 0x2000000; // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    typedef bit_field_t<26, 0x3> MDMA_C14TCR_PAM; // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
    typedef bit_field_t<28, 0x3> MDMA_C14TCR_TRGM; // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C14TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C14TCR_BWM = 0x80000000; // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t MDMA_C14BNDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> MDMA_C14BNDTR_BNDT; // block number of data to transfer
    static constexpr uint32_t MDMA_C14BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C14BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    typedef bit_field_t<20, 0xfff> MDMA_C14BNDTR_BRC; // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.

    static constexpr uint32_t MDMA_C14SAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C14SAR_SAR; // source adr base

    static constexpr uint32_t MDMA_C14DAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C14DAR_DAR; // Destination adr base

    static constexpr uint32_t MDMA_C14BRUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDMA_C14BRUR_SUV; // source adresse update value
    typedef bit_field_t<16, 0xffff> MDMA_C14BRUR_DUV; // destination address update

    static constexpr uint32_t MDMA_C14LAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C14LAR_LAR; // Link address register

    static constexpr uint32_t MDMA_C14TBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> MDMA_C14TBR_TSEL; // Trigger selection
    static constexpr uint32_t MDMA_C14TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C14TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.


    static constexpr uint32_t MDMA_C14MAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C14MAR_MAR; // Mask address

    static constexpr uint32_t MDMA_C14MDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C14MDR_MDR; // Mask data


    static constexpr uint32_t MDMA_C15ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C15ISR_TEIF15 = 0x1; // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C15ISR_CTCIF15 = 0x2; // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t MDMA_C15ISR_BRTIF15 = 0x4; // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C15ISR_BTIF15 = 0x8; // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C15ISR_TCIF15 = 0x10; // channel x buffer transfer complete
    static constexpr uint32_t MDMA_C15ISR_CRQA15 = 0x10000; // channel x request active flag

    static constexpr uint32_t MDMA_C15IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C15IFCR_CTEIF15 = 0x1; // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C15IFCR_CCTCIF15 = 0x2; // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C15IFCR_CBRTIF15 = 0x4; // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C15IFCR_CBTIF15 = 0x8; // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C15IFCR_CLTCIF15 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t MDMA_C15ESR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> MDMA_C15ESR_TEA; // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
    static constexpr uint32_t MDMA_C15ESR_TED = 0x80; // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t MDMA_C15ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C15ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C15ESR_ASE = 0x400; // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C15ESR_BSE = 0x800; // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t MDMA_C15CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDMA_C15CR_EN = 0x1; // channel enable
    static constexpr uint32_t MDMA_C15CR_TEIE = 0x2; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C15CR_CTCIE = 0x4; // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C15CR_BRTIE = 0x8; // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C15CR_BTIE = 0x10; // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C15CR_TCIE = 0x20; // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<6, 0x3> MDMA_C15CR_PL; // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C15CR_BEX = 0x1000; // byte Endianness exchange
    static constexpr uint32_t MDMA_C15CR_HEX = 0x2000; // Half word Endianes exchange
    static constexpr uint32_t MDMA_C15CR_WEX = 0x4000; // Word Endianness exchange
    static constexpr uint32_t MDMA_C15CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t MDMA_C15TCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> MDMA_C15TCR_SINC; // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    typedef bit_field_t<2, 0x3> MDMA_C15TCR_DINC; // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
    typedef bit_field_t<4, 0x3> MDMA_C15TCR_SSIZE; // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &amp;lt; SSIZE and SINC &amp;#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
    typedef bit_field_t<6, 0x3> MDMA_C15TCR_DSIZE; // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &amp;lt; DSIZE and DINC &amp;#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
    typedef bit_field_t<8, 0x3> MDMA_C15TCR_SINCOS; // source increment offset size
    typedef bit_field_t<10, 0x3> MDMA_C15TCR_DINCOS; // Destination increment offset
    typedef bit_field_t<12, 0x7> MDMA_C15TCR_SBURST; // source burst transfer configuration
    typedef bit_field_t<15, 0x7> MDMA_C15TCR_DBURST; // Destination burst transfer configuration
    typedef bit_field_t<18, 0x7f> MDMA_C15TCR_TLEN; // buffer transfer lengh
    static constexpr uint32_t MDMA_C15TCR_PKE = 0x2000000; // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    typedef bit_field_t<26, 0x3> MDMA_C15TCR_PAM; // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
    typedef bit_field_t<28, 0x3> MDMA_C15TCR_TRGM; // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C15TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C15TCR_BWM = 0x80000000; // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t MDMA_C15BNDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> MDMA_C15BNDTR_BNDT; // block number of data to transfer
    static constexpr uint32_t MDMA_C15BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C15BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    typedef bit_field_t<20, 0xfff> MDMA_C15BNDTR_BRC; // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.

    static constexpr uint32_t MDMA_C15SAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C15SAR_SAR; // source adr base

    static constexpr uint32_t MDMA_C15DAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C15DAR_DAR; // Destination adr base

    static constexpr uint32_t MDMA_C15BRUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDMA_C15BRUR_SUV; // source adresse update value
    typedef bit_field_t<16, 0xffff> MDMA_C15BRUR_DUV; // destination address update

    static constexpr uint32_t MDMA_C15LAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C15LAR_LAR; // Link address register

    static constexpr uint32_t MDMA_C15TBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> MDMA_C15TBR_TSEL; // Trigger selection
    static constexpr uint32_t MDMA_C15TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C15TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.


    static constexpr uint32_t MDMA_C15MAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C15MAR_MAR; // Mask address

    static constexpr uint32_t MDMA_C15MDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDMA_C15MDR_MDR; // Mask data
};

// MDMA: MDMA

struct stm32h7a3x_mdma_t
{
    volatile uint32_t GISR0; // MDMA Global Interrupt/Status Register
    reserved_t<0xf> _0x4;
    volatile uint32_t C0ISR; // MDMA channel x interrupt/status register
    volatile uint32_t C0IFCR; // MDMA channel x interrupt flag clear register
    volatile uint32_t C0ESR; // MDMA Channel x error status register
    volatile uint32_t C0CR; // This register is used to control the concerned channel.
    volatile uint32_t C0TCR; // This register is used to configure the concerned channel.
    volatile uint32_t C0BNDTR; // MDMA Channel x block number of data register
    volatile uint32_t C0SAR; // MDMA channel x source address register
    volatile uint32_t C0DAR; // MDMA channel x destination address register
    volatile uint32_t C0BRUR; // MDMA channel x Block Repeat address Update register
    volatile uint32_t C0LAR; // MDMA channel x Link Address register
    volatile uint32_t C0TBR; // MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x6c;
    volatile uint32_t C0MAR; // MDMA channel x Mask address register
    volatile uint32_t C0MDR; // MDMA channel x Mask Data register
    reserved_t<0x2> _0x78;
    volatile uint32_t C1ISR; // MDMA channel x interrupt/status register
    volatile uint32_t C1IFCR; // MDMA channel x interrupt flag clear register
    volatile uint32_t C1ESR; // MDMA Channel x error status register
    volatile uint32_t C1CR; // This register is used to control the concerned channel.
    volatile uint32_t C1TCR; // This register is used to configure the concerned channel.
    volatile uint32_t C1BNDTR; // MDMA Channel x block number of data register
    volatile uint32_t C1SAR; // MDMA channel x source address register
    volatile uint32_t C1DAR; // MDMA channel x destination address register
    volatile uint32_t C1BRUR; // MDMA channel x Block Repeat address Update register
    volatile uint32_t C1LAR; // MDMA channel x Link Address register
    volatile uint32_t C1TBR; // MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0xac;
    volatile uint32_t C1MAR; // MDMA channel x Mask address register
    volatile uint32_t C1MDR; // MDMA channel x Mask Data register
    reserved_t<0x2> _0xb8;
    volatile uint32_t C2ISR; // MDMA channel x interrupt/status register
    volatile uint32_t C2IFCR; // MDMA channel x interrupt flag clear register
    volatile uint32_t C2ESR; // MDMA Channel x error status register
    volatile uint32_t C2CR; // This register is used to control the concerned channel.
    volatile uint32_t C2TCR; // This register is used to configure the concerned channel.
    volatile uint32_t C2BNDTR; // MDMA Channel x block number of data register
    volatile uint32_t C2SAR; // MDMA channel x source address register
    volatile uint32_t C2DAR; // MDMA channel x destination address register
    volatile uint32_t C2BRUR; // MDMA channel x Block Repeat address Update register
    volatile uint32_t C2LAR; // MDMA channel x Link Address register
    volatile uint32_t C2TBR; // MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0xec;
    volatile uint32_t C2MAR; // MDMA channel x Mask address register
    volatile uint32_t C2MDR; // MDMA channel x Mask Data register
    reserved_t<0x2> _0xf8;
    volatile uint32_t C3ISR; // MDMA channel x interrupt/status register
    volatile uint32_t C3IFCR; // MDMA channel x interrupt flag clear register
    volatile uint32_t C3ESR; // MDMA Channel x error status register
    volatile uint32_t C3CR; // This register is used to control the concerned channel.
    volatile uint32_t C3TCR; // This register is used to configure the concerned channel.
    volatile uint32_t C3BNDTR; // MDMA Channel x block number of data register
    volatile uint32_t C3SAR; // MDMA channel x source address register
    volatile uint32_t C3DAR; // MDMA channel x destination address register
    volatile uint32_t C3BRUR; // MDMA channel x Block Repeat address Update register
    volatile uint32_t C3LAR; // MDMA channel x Link Address register
    volatile uint32_t C3TBR; // MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x12c;
    volatile uint32_t C3MAR; // MDMA channel x Mask address register
    volatile uint32_t C3MDR; // MDMA channel x Mask Data register
    reserved_t<0x2> _0x138;
    volatile uint32_t C4ISR; // MDMA channel x interrupt/status register
    volatile uint32_t C4IFCR; // MDMA channel x interrupt flag clear register
    volatile uint32_t C4ESR; // MDMA Channel x error status register
    volatile uint32_t C4CR; // This register is used to control the concerned channel.
    volatile uint32_t C4TCR; // This register is used to configure the concerned channel.
    volatile uint32_t C4BNDTR; // MDMA Channel x block number of data register
    volatile uint32_t C4SAR; // MDMA channel x source address register
    volatile uint32_t C4DAR; // MDMA channel x destination address register
    volatile uint32_t C4BRUR; // MDMA channel x Block Repeat address Update register
    volatile uint32_t C4LAR; // MDMA channel x Link Address register
    volatile uint32_t C4TBR; // MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x16c;
    volatile uint32_t C4MAR; // MDMA channel x Mask address register
    volatile uint32_t C4MDR; // MDMA channel x Mask Data register
    reserved_t<0x2> _0x178;
    volatile uint32_t C5ISR; // MDMA channel x interrupt/status register
    volatile uint32_t C5IFCR; // MDMA channel x interrupt flag clear register
    volatile uint32_t C5ESR; // MDMA Channel x error status register
    volatile uint32_t C5CR; // This register is used to control the concerned channel.
    volatile uint32_t C5TCR; // This register is used to configure the concerned channel.
    volatile uint32_t C5BNDTR; // MDMA Channel x block number of data register
    volatile uint32_t C5SAR; // MDMA channel x source address register
    volatile uint32_t C5DAR; // MDMA channel x destination address register
    volatile uint32_t C5BRUR; // MDMA channel x Block Repeat address Update register
    volatile uint32_t C5LAR; // MDMA channel x Link Address register
    volatile uint32_t C5TBR; // MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x1ac;
    volatile uint32_t C5MAR; // MDMA channel x Mask address register
    volatile uint32_t C5MDR; // MDMA channel x Mask Data register
    reserved_t<0x2> _0x1b8;
    volatile uint32_t C6ISR; // MDMA channel x interrupt/status register
    volatile uint32_t C6IFCR; // MDMA channel x interrupt flag clear register
    volatile uint32_t C6ESR; // MDMA Channel x error status register
    volatile uint32_t C6CR; // This register is used to control the concerned channel.
    volatile uint32_t C6TCR; // This register is used to configure the concerned channel.
    volatile uint32_t C6BNDTR; // MDMA Channel x block number of data register
    volatile uint32_t C6SAR; // MDMA channel x source address register
    volatile uint32_t C6DAR; // MDMA channel x destination address register
    volatile uint32_t C6BRUR; // MDMA channel x Block Repeat address Update register
    volatile uint32_t C6LAR; // MDMA channel x Link Address register
    volatile uint32_t C6TBR; // MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x1ec;
    volatile uint32_t C6MAR; // MDMA channel x Mask address register
    volatile uint32_t C6MDR; // MDMA channel x Mask Data register
    reserved_t<0x2> _0x1f8;
    volatile uint32_t C7ISR; // MDMA channel x interrupt/status register
    volatile uint32_t C7IFCR; // MDMA channel x interrupt flag clear register
    volatile uint32_t C7ESR; // MDMA Channel x error status register
    volatile uint32_t C7CR; // This register is used to control the concerned channel.
    volatile uint32_t C7TCR; // This register is used to configure the concerned channel.
    volatile uint32_t C7BNDTR; // MDMA Channel x block number of data register
    volatile uint32_t C7SAR; // MDMA channel x source address register
    volatile uint32_t C7DAR; // MDMA channel x destination address register
    volatile uint32_t C7BRUR; // MDMA channel x Block Repeat address Update register
    volatile uint32_t C7LAR; // MDMA channel x Link Address register
    volatile uint32_t C7TBR; // MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x22c;
    volatile uint32_t C7MAR; // MDMA channel x Mask address register
    volatile uint32_t C7MDR; // MDMA channel x Mask Data register
    reserved_t<0x2> _0x238;
    volatile uint32_t C8ISR; // MDMA channel x interrupt/status register
    volatile uint32_t C8IFCR; // MDMA channel x interrupt flag clear register
    volatile uint32_t C8ESR; // MDMA Channel x error status register
    volatile uint32_t C8CR; // This register is used to control the concerned channel.
    volatile uint32_t C8TCR; // This register is used to configure the concerned channel.
    volatile uint32_t C8BNDTR; // MDMA Channel x block number of data register
    volatile uint32_t C8SAR; // MDMA channel x source address register
    volatile uint32_t C8DAR; // MDMA channel x destination address register
    volatile uint32_t C8BRUR; // MDMA channel x Block Repeat address Update register
    volatile uint32_t C8LAR; // MDMA channel x Link Address register
    volatile uint32_t C8TBR; // MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x26c;
    volatile uint32_t C8MAR; // MDMA channel x Mask address register
    volatile uint32_t C8MDR; // MDMA channel x Mask Data register
    reserved_t<0x2> _0x278;
    volatile uint32_t C9ISR; // MDMA channel x interrupt/status register
    volatile uint32_t C9IFCR; // MDMA channel x interrupt flag clear register
    volatile uint32_t C9ESR; // MDMA Channel x error status register
    volatile uint32_t C9CR; // This register is used to control the concerned channel.
    volatile uint32_t C9TCR; // This register is used to configure the concerned channel.
    volatile uint32_t C9BNDTR; // MDMA Channel x block number of data register
    volatile uint32_t C9SAR; // MDMA channel x source address register
    volatile uint32_t C9DAR; // MDMA channel x destination address register
    volatile uint32_t C9BRUR; // MDMA channel x Block Repeat address Update register
    volatile uint32_t C9LAR; // MDMA channel x Link Address register
    volatile uint32_t C9TBR; // MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x2ac;
    volatile uint32_t C9MAR; // MDMA channel x Mask address register
    volatile uint32_t C9MDR; // MDMA channel x Mask Data register
    reserved_t<0x2> _0x2b8;
    volatile uint32_t C10ISR; // MDMA channel x interrupt/status register
    volatile uint32_t C10IFCR; // MDMA channel x interrupt flag clear register
    volatile uint32_t C10ESR; // MDMA Channel x error status register
    volatile uint32_t C10CR; // This register is used to control the concerned channel.
    volatile uint32_t C10TCR; // This register is used to configure the concerned channel.
    volatile uint32_t C10BNDTR; // MDMA Channel x block number of data register
    volatile uint32_t C10SAR; // MDMA channel x source address register
    volatile uint32_t C10DAR; // MDMA channel x destination address register
    volatile uint32_t C10BRUR; // MDMA channel x Block Repeat address Update register
    volatile uint32_t C10LAR; // MDMA channel x Link Address register
    volatile uint32_t C10TBR; // MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x2ec;
    volatile uint32_t C10MAR; // MDMA channel x Mask address register
    volatile uint32_t C10MDR; // MDMA channel x Mask Data register
    reserved_t<0x2> _0x2f8;
    volatile uint32_t C11ISR; // MDMA channel x interrupt/status register
    volatile uint32_t C11IFCR; // MDMA channel x interrupt flag clear register
    volatile uint32_t C11ESR; // MDMA Channel x error status register
    volatile uint32_t C11CR; // This register is used to control the concerned channel.
    volatile uint32_t C11TCR; // This register is used to configure the concerned channel.
    volatile uint32_t C11BNDTR; // MDMA Channel x block number of data register
    volatile uint32_t C11SAR; // MDMA channel x source address register
    volatile uint32_t C11DAR; // MDMA channel x destination address register
    volatile uint32_t C11BRUR; // MDMA channel x Block Repeat address Update register
    volatile uint32_t C11LAR; // MDMA channel x Link Address register
    volatile uint32_t C11TBR; // MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x32c;
    volatile uint32_t C11MAR; // MDMA channel x Mask address register
    volatile uint32_t C11MDR; // MDMA channel x Mask Data register
    reserved_t<0x2> _0x338;
    volatile uint32_t C12ISR; // MDMA channel x interrupt/status register
    volatile uint32_t C12IFCR; // MDMA channel x interrupt flag clear register
    volatile uint32_t C12ESR; // MDMA Channel x error status register
    volatile uint32_t C12CR; // This register is used to control the concerned channel.
    volatile uint32_t C12TCR; // This register is used to configure the concerned channel.
    volatile uint32_t C12BNDTR; // MDMA Channel x block number of data register
    volatile uint32_t C12SAR; // MDMA channel x source address register
    volatile uint32_t C12DAR; // MDMA channel x destination address register
    volatile uint32_t C12BRUR; // MDMA channel x Block Repeat address Update register
    volatile uint32_t C12LAR; // MDMA channel x Link Address register
    volatile uint32_t C12TBR; // MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x36c;
    volatile uint32_t C12MAR; // MDMA channel x Mask address register
    volatile uint32_t C12MDR; // MDMA channel x Mask Data register
    reserved_t<0x2> _0x378;
    volatile uint32_t C13ISR; // MDMA channel x interrupt/status register
    volatile uint32_t C13IFCR; // MDMA channel x interrupt flag clear register
    volatile uint32_t C13ESR; // MDMA Channel x error status register
    volatile uint32_t C13CR; // This register is used to control the concerned channel.
    volatile uint32_t C13TCR; // This register is used to configure the concerned channel.
    volatile uint32_t C13BNDTR; // MDMA Channel x block number of data register
    volatile uint32_t C13SAR; // MDMA channel x source address register
    volatile uint32_t C13DAR; // MDMA channel x destination address register
    volatile uint32_t C13BRUR; // MDMA channel x Block Repeat address Update register
    volatile uint32_t C13LAR; // MDMA channel x Link Address register
    volatile uint32_t C13TBR; // MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x3ac;
    volatile uint32_t C13MAR; // MDMA channel x Mask address register
    volatile uint32_t C13MDR; // MDMA channel x Mask Data register
    reserved_t<0x2> _0x3b8;
    volatile uint32_t C14ISR; // MDMA channel x interrupt/status register
    volatile uint32_t C14IFCR; // MDMA channel x interrupt flag clear register
    volatile uint32_t C14ESR; // MDMA Channel x error status register
    volatile uint32_t C14CR; // This register is used to control the concerned channel.
    volatile uint32_t C14TCR; // This register is used to configure the concerned channel.
    volatile uint32_t C14BNDTR; // MDMA Channel x block number of data register
    volatile uint32_t C14SAR; // MDMA channel x source address register
    volatile uint32_t C14DAR; // MDMA channel x destination address register
    volatile uint32_t C14BRUR; // MDMA channel x Block Repeat address Update register
    volatile uint32_t C14LAR; // MDMA channel x Link Address register
    volatile uint32_t C14TBR; // MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x3ec;
    volatile uint32_t C14MAR; // MDMA channel x Mask address register
    volatile uint32_t C14MDR; // MDMA channel x Mask Data register
    reserved_t<0x2> _0x3f8;
    volatile uint32_t C15ISR; // MDMA channel x interrupt/status register
    volatile uint32_t C15IFCR; // MDMA channel x interrupt flag clear register
    volatile uint32_t C15ESR; // MDMA Channel x error status register
    volatile uint32_t C15CR; // This register is used to control the concerned channel.
    volatile uint32_t C15TCR; // This register is used to configure the concerned channel.
    volatile uint32_t C15BNDTR; // MDMA Channel x block number of data register
    volatile uint32_t C15SAR; // MDMA channel x source address register
    volatile uint32_t C15DAR; // MDMA channel x destination address register
    volatile uint32_t C15BRUR; // MDMA channel x Block Repeat address Update register
    volatile uint32_t C15LAR; // MDMA channel x Link Address register
    volatile uint32_t C15TBR; // MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x42c;
    volatile uint32_t C15MAR; // MDMA channel x Mask address register
    volatile uint32_t C15MDR; // MDMA channel x Mask Data register

    static constexpr uint32_t GISR0_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t GISR0_GIF0 = 0x1; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t GISR0_GIF1 = 0x2; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t GISR0_GIF2 = 0x4; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t GISR0_GIF3 = 0x8; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t GISR0_GIF4 = 0x10; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t GISR0_GIF5 = 0x20; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t GISR0_GIF6 = 0x40; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t GISR0_GIF7 = 0x80; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t GISR0_GIF8 = 0x100; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t GISR0_GIF9 = 0x200; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t GISR0_GIF10 = 0x400; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t GISR0_GIF11 = 0x800; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t GISR0_GIF12 = 0x1000; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t GISR0_GIF13 = 0x2000; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t GISR0_GIF14 = 0x4000; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t GISR0_GIF15 = 0x8000; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)


    static constexpr uint32_t C0ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C0ISR_TEIF0 = 0x1; // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C0ISR_CTCIF0 = 0x2; // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t C0ISR_BRTIF0 = 0x4; // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C0ISR_BTIF0 = 0x8; // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C0ISR_TCIF0 = 0x10; // channel x buffer transfer complete
    static constexpr uint32_t C0ISR_CRQA0 = 0x10000; // channel x request active flag

    static constexpr uint32_t C0IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C0IFCR_CTEIF0 = 0x1; // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t C0IFCR_CCTCIF0 = 0x2; // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t C0IFCR_CBRTIF0 = 0x4; // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t C0IFCR_CBTIF0 = 0x8; // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t C0IFCR_CLTCIF0 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t C0ESR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> C0ESR_TEA; // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
    static constexpr uint32_t C0ESR_TED = 0x80; // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t C0ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C0ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C0ESR_ASE = 0x400; // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C0ESR_BSE = 0x800; // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t C0CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C0CR_EN = 0x1; // channel enable
    static constexpr uint32_t C0CR_TEIE = 0x2; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C0CR_CTCIE = 0x4; // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C0CR_BRTIE = 0x8; // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C0CR_BTIE = 0x10; // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C0CR_TCIE = 0x20; // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<6, 0x3> C0CR_PL; // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C0CR_BEX = 0x1000; // byte Endianness exchange
    static constexpr uint32_t C0CR_HEX = 0x2000; // Half word Endianes exchange
    static constexpr uint32_t C0CR_WEX = 0x4000; // Word Endianness exchange
    static constexpr uint32_t C0CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t C0TCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> C0TCR_SINC; // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    typedef bit_field_t<2, 0x3> C0TCR_DINC; // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
    typedef bit_field_t<4, 0x3> C0TCR_SSIZE; // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &amp;lt; SSIZE and SINC &amp;#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
    typedef bit_field_t<6, 0x3> C0TCR_DSIZE; // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &amp;lt; DSIZE and DINC &amp;#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
    typedef bit_field_t<8, 0x3> C0TCR_SINCOS; // source increment offset size
    typedef bit_field_t<10, 0x3> C0TCR_DINCOS; // Destination increment offset
    typedef bit_field_t<12, 0x7> C0TCR_SBURST; // source burst transfer configuration
    typedef bit_field_t<15, 0x7> C0TCR_DBURST; // Destination burst transfer configuration
    typedef bit_field_t<18, 0x7f> C0TCR_TLEN; // buffer transfer lengh
    static constexpr uint32_t C0TCR_PKE = 0x2000000; // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    typedef bit_field_t<26, 0x3> C0TCR_PAM; // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
    typedef bit_field_t<28, 0x3> C0TCR_TRGM; // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C0TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C0TCR_BWM = 0x80000000; // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t C0BNDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> C0BNDTR_BNDT; // block number of data to transfer
    static constexpr uint32_t C0BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C0BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    typedef bit_field_t<20, 0xfff> C0BNDTR_BRC; // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.

    static constexpr uint32_t C0SAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C0SAR_SAR; // source adr base

    static constexpr uint32_t C0DAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C0DAR_DAR; // Destination adr base

    static constexpr uint32_t C0BRUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> C0BRUR_SUV; // source adresse update value
    typedef bit_field_t<16, 0xffff> C0BRUR_DUV; // destination address update

    static constexpr uint32_t C0LAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C0LAR_LAR; // Link address register

    static constexpr uint32_t C0TBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> C0TBR_TSEL; // Trigger selection
    static constexpr uint32_t C0TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C0TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.


    static constexpr uint32_t C0MAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C0MAR_MAR; // Mask address

    static constexpr uint32_t C0MDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C0MDR_MDR; // Mask data


    static constexpr uint32_t C1ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1ISR_TEIF1 = 0x1; // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C1ISR_CTCIF1 = 0x2; // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t C1ISR_BRTIF1 = 0x4; // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C1ISR_BTIF1 = 0x8; // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C1ISR_TCIF1 = 0x10; // channel x buffer transfer complete
    static constexpr uint32_t C1ISR_CRQA1 = 0x10000; // channel x request active flag

    static constexpr uint32_t C1IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1IFCR_CTEIF1 = 0x1; // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t C1IFCR_CCTCIF1 = 0x2; // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t C1IFCR_CBRTIF1 = 0x4; // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t C1IFCR_CBTIF1 = 0x8; // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t C1IFCR_CLTCIF1 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t C1ESR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> C1ESR_TEA; // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
    static constexpr uint32_t C1ESR_TED = 0x80; // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t C1ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C1ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C1ESR_ASE = 0x400; // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C1ESR_BSE = 0x800; // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t C1CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1CR_EN = 0x1; // channel enable
    static constexpr uint32_t C1CR_TEIE = 0x2; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C1CR_CTCIE = 0x4; // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C1CR_BRTIE = 0x8; // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C1CR_BTIE = 0x10; // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C1CR_TCIE = 0x20; // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<6, 0x3> C1CR_PL; // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C1CR_BEX = 0x1000; // byte Endianness exchange
    static constexpr uint32_t C1CR_HEX = 0x2000; // Half word Endianes exchange
    static constexpr uint32_t C1CR_WEX = 0x4000; // Word Endianness exchange
    static constexpr uint32_t C1CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t C1TCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> C1TCR_SINC; // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    typedef bit_field_t<2, 0x3> C1TCR_DINC; // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
    typedef bit_field_t<4, 0x3> C1TCR_SSIZE; // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &amp;lt; SSIZE and SINC &amp;#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
    typedef bit_field_t<6, 0x3> C1TCR_DSIZE; // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &amp;lt; DSIZE and DINC &amp;#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
    typedef bit_field_t<8, 0x3> C1TCR_SINCOS; // source increment offset size
    typedef bit_field_t<10, 0x3> C1TCR_DINCOS; // Destination increment offset
    typedef bit_field_t<12, 0x7> C1TCR_SBURST; // source burst transfer configuration
    typedef bit_field_t<15, 0x7> C1TCR_DBURST; // Destination burst transfer configuration
    typedef bit_field_t<18, 0x7f> C1TCR_TLEN; // buffer transfer lengh
    static constexpr uint32_t C1TCR_PKE = 0x2000000; // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    typedef bit_field_t<26, 0x3> C1TCR_PAM; // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
    typedef bit_field_t<28, 0x3> C1TCR_TRGM; // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C1TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C1TCR_BWM = 0x80000000; // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t C1BNDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> C1BNDTR_BNDT; // block number of data to transfer
    static constexpr uint32_t C1BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C1BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    typedef bit_field_t<20, 0xfff> C1BNDTR_BRC; // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.

    static constexpr uint32_t C1SAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C1SAR_SAR; // source adr base

    static constexpr uint32_t C1DAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C1DAR_DAR; // Destination adr base

    static constexpr uint32_t C1BRUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> C1BRUR_SUV; // source adresse update value
    typedef bit_field_t<16, 0xffff> C1BRUR_DUV; // destination address update

    static constexpr uint32_t C1LAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C1LAR_LAR; // Link address register

    static constexpr uint32_t C1TBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> C1TBR_TSEL; // Trigger selection
    static constexpr uint32_t C1TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C1TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.


    static constexpr uint32_t C1MAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C1MAR_MAR; // Mask address

    static constexpr uint32_t C1MDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C1MDR_MDR; // Mask data


    static constexpr uint32_t C2ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C2ISR_TEIF2 = 0x1; // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C2ISR_CTCIF2 = 0x2; // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t C2ISR_BRTIF2 = 0x4; // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C2ISR_BTIF2 = 0x8; // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C2ISR_TCIF2 = 0x10; // channel x buffer transfer complete
    static constexpr uint32_t C2ISR_CRQA2 = 0x10000; // channel x request active flag

    static constexpr uint32_t C2IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C2IFCR_CTEIF2 = 0x1; // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t C2IFCR_CCTCIF2 = 0x2; // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t C2IFCR_CBRTIF2 = 0x4; // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t C2IFCR_CBTIF2 = 0x8; // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t C2IFCR_CLTCIF2 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t C2ESR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> C2ESR_TEA; // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
    static constexpr uint32_t C2ESR_TED = 0x80; // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t C2ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C2ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C2ESR_ASE = 0x400; // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C2ESR_BSE = 0x800; // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t C2CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C2CR_EN = 0x1; // channel enable
    static constexpr uint32_t C2CR_TEIE = 0x2; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C2CR_CTCIE = 0x4; // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C2CR_BRTIE = 0x8; // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C2CR_BTIE = 0x10; // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C2CR_TCIE = 0x20; // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<6, 0x3> C2CR_PL; // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C2CR_BEX = 0x1000; // byte Endianness exchange
    static constexpr uint32_t C2CR_HEX = 0x2000; // Half word Endianes exchange
    static constexpr uint32_t C2CR_WEX = 0x4000; // Word Endianness exchange
    static constexpr uint32_t C2CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t C2TCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> C2TCR_SINC; // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    typedef bit_field_t<2, 0x3> C2TCR_DINC; // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
    typedef bit_field_t<4, 0x3> C2TCR_SSIZE; // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &amp;lt; SSIZE and SINC &amp;#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
    typedef bit_field_t<6, 0x3> C2TCR_DSIZE; // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &amp;lt; DSIZE and DINC &amp;#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
    typedef bit_field_t<8, 0x3> C2TCR_SINCOS; // source increment offset size
    typedef bit_field_t<10, 0x3> C2TCR_DINCOS; // Destination increment offset
    typedef bit_field_t<12, 0x7> C2TCR_SBURST; // source burst transfer configuration
    typedef bit_field_t<15, 0x7> C2TCR_DBURST; // Destination burst transfer configuration
    typedef bit_field_t<18, 0x7f> C2TCR_TLEN; // buffer transfer lengh
    static constexpr uint32_t C2TCR_PKE = 0x2000000; // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    typedef bit_field_t<26, 0x3> C2TCR_PAM; // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
    typedef bit_field_t<28, 0x3> C2TCR_TRGM; // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C2TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C2TCR_BWM = 0x80000000; // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t C2BNDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> C2BNDTR_BNDT; // block number of data to transfer
    static constexpr uint32_t C2BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C2BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    typedef bit_field_t<20, 0xfff> C2BNDTR_BRC; // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.

    static constexpr uint32_t C2SAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C2SAR_SAR; // source adr base

    static constexpr uint32_t C2DAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C2DAR_DAR; // Destination adr base

    static constexpr uint32_t C2BRUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> C2BRUR_SUV; // source adresse update value
    typedef bit_field_t<16, 0xffff> C2BRUR_DUV; // destination address update

    static constexpr uint32_t C2LAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C2LAR_LAR; // Link address register

    static constexpr uint32_t C2TBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> C2TBR_TSEL; // Trigger selection
    static constexpr uint32_t C2TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C2TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.


    static constexpr uint32_t C2MAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C2MAR_MAR; // Mask address

    static constexpr uint32_t C2MDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C2MDR_MDR; // Mask data


    static constexpr uint32_t C3ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C3ISR_TEIF3 = 0x1; // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C3ISR_CTCIF3 = 0x2; // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t C3ISR_BRTIF3 = 0x4; // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C3ISR_BTIF3 = 0x8; // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C3ISR_TCIF3 = 0x10; // channel x buffer transfer complete
    static constexpr uint32_t C3ISR_CRQA3 = 0x10000; // channel x request active flag

    static constexpr uint32_t C3IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C3IFCR_CTEIF3 = 0x1; // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t C3IFCR_CCTCIF3 = 0x2; // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t C3IFCR_CBRTIF3 = 0x4; // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t C3IFCR_CBTIF3 = 0x8; // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t C3IFCR_CLTCIF3 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t C3ESR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> C3ESR_TEA; // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
    static constexpr uint32_t C3ESR_TED = 0x80; // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t C3ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C3ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C3ESR_ASE = 0x400; // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C3ESR_BSE = 0x800; // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t C3CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C3CR_EN = 0x1; // channel enable
    static constexpr uint32_t C3CR_TEIE = 0x2; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C3CR_CTCIE = 0x4; // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C3CR_BRTIE = 0x8; // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C3CR_BTIE = 0x10; // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C3CR_TCIE = 0x20; // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<6, 0x3> C3CR_PL; // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C3CR_BEX = 0x1000; // byte Endianness exchange
    static constexpr uint32_t C3CR_HEX = 0x2000; // Half word Endianes exchange
    static constexpr uint32_t C3CR_WEX = 0x4000; // Word Endianness exchange
    static constexpr uint32_t C3CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t C3TCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> C3TCR_SINC; // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    typedef bit_field_t<2, 0x3> C3TCR_DINC; // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
    typedef bit_field_t<4, 0x3> C3TCR_SSIZE; // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &amp;lt; SSIZE and SINC &amp;#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
    typedef bit_field_t<6, 0x3> C3TCR_DSIZE; // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &amp;lt; DSIZE and DINC &amp;#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
    typedef bit_field_t<8, 0x3> C3TCR_SINCOS; // source increment offset size
    typedef bit_field_t<10, 0x3> C3TCR_DINCOS; // Destination increment offset
    typedef bit_field_t<12, 0x7> C3TCR_SBURST; // source burst transfer configuration
    typedef bit_field_t<15, 0x7> C3TCR_DBURST; // Destination burst transfer configuration
    typedef bit_field_t<18, 0x7f> C3TCR_TLEN; // buffer transfer lengh
    static constexpr uint32_t C3TCR_PKE = 0x2000000; // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    typedef bit_field_t<26, 0x3> C3TCR_PAM; // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
    typedef bit_field_t<28, 0x3> C3TCR_TRGM; // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C3TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C3TCR_BWM = 0x80000000; // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t C3BNDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> C3BNDTR_BNDT; // block number of data to transfer
    static constexpr uint32_t C3BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C3BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    typedef bit_field_t<20, 0xfff> C3BNDTR_BRC; // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.

    static constexpr uint32_t C3SAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C3SAR_SAR; // source adr base

    static constexpr uint32_t C3DAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C3DAR_DAR; // Destination adr base

    static constexpr uint32_t C3BRUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> C3BRUR_SUV; // source adresse update value
    typedef bit_field_t<16, 0xffff> C3BRUR_DUV; // destination address update

    static constexpr uint32_t C3LAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C3LAR_LAR; // Link address register

    static constexpr uint32_t C3TBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> C3TBR_TSEL; // Trigger selection
    static constexpr uint32_t C3TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C3TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.


    static constexpr uint32_t C3MAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C3MAR_MAR; // Mask address

    static constexpr uint32_t C3MDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C3MDR_MDR; // Mask data


    static constexpr uint32_t C4ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C4ISR_TEIF4 = 0x1; // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C4ISR_CTCIF4 = 0x2; // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t C4ISR_BRTIF4 = 0x4; // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C4ISR_BTIF4 = 0x8; // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C4ISR_TCIF4 = 0x10; // channel x buffer transfer complete
    static constexpr uint32_t C4ISR_CRQA4 = 0x10000; // channel x request active flag

    static constexpr uint32_t C4IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C4IFCR_CTEIF4 = 0x1; // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t C4IFCR_CCTCIF4 = 0x2; // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t C4IFCR_CBRTIF4 = 0x4; // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t C4IFCR_CBTIF4 = 0x8; // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t C4IFCR_CLTCIF4 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t C4ESR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> C4ESR_TEA; // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
    static constexpr uint32_t C4ESR_TED = 0x80; // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t C4ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C4ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C4ESR_ASE = 0x400; // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C4ESR_BSE = 0x800; // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t C4CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C4CR_EN = 0x1; // channel enable
    static constexpr uint32_t C4CR_TEIE = 0x2; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C4CR_CTCIE = 0x4; // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C4CR_BRTIE = 0x8; // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C4CR_BTIE = 0x10; // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C4CR_TCIE = 0x20; // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<6, 0x3> C4CR_PL; // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C4CR_BEX = 0x1000; // byte Endianness exchange
    static constexpr uint32_t C4CR_HEX = 0x2000; // Half word Endianes exchange
    static constexpr uint32_t C4CR_WEX = 0x4000; // Word Endianness exchange
    static constexpr uint32_t C4CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t C4TCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> C4TCR_SINC; // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    typedef bit_field_t<2, 0x3> C4TCR_DINC; // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
    typedef bit_field_t<4, 0x3> C4TCR_SSIZE; // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &amp;lt; SSIZE and SINC &amp;#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
    typedef bit_field_t<6, 0x3> C4TCR_DSIZE; // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &amp;lt; DSIZE and DINC &amp;#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
    typedef bit_field_t<8, 0x3> C4TCR_SINCOS; // source increment offset size
    typedef bit_field_t<10, 0x3> C4TCR_DINCOS; // Destination increment offset
    typedef bit_field_t<12, 0x7> C4TCR_SBURST; // source burst transfer configuration
    typedef bit_field_t<15, 0x7> C4TCR_DBURST; // Destination burst transfer configuration
    typedef bit_field_t<18, 0x7f> C4TCR_TLEN; // buffer transfer lengh
    static constexpr uint32_t C4TCR_PKE = 0x2000000; // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    typedef bit_field_t<26, 0x3> C4TCR_PAM; // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
    typedef bit_field_t<28, 0x3> C4TCR_TRGM; // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C4TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C4TCR_BWM = 0x80000000; // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t C4BNDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> C4BNDTR_BNDT; // block number of data to transfer
    static constexpr uint32_t C4BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C4BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    typedef bit_field_t<20, 0xfff> C4BNDTR_BRC; // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.

    static constexpr uint32_t C4SAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C4SAR_SAR; // source adr base

    static constexpr uint32_t C4DAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C4DAR_DAR; // Destination adr base

    static constexpr uint32_t C4BRUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> C4BRUR_SUV; // source adresse update value
    typedef bit_field_t<16, 0xffff> C4BRUR_DUV; // destination address update

    static constexpr uint32_t C4LAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C4LAR_LAR; // Link address register

    static constexpr uint32_t C4TBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> C4TBR_TSEL; // Trigger selection
    static constexpr uint32_t C4TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C4TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.


    static constexpr uint32_t C4MAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C4MAR_MAR; // Mask address

    static constexpr uint32_t C4MDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C4MDR_MDR; // Mask data


    static constexpr uint32_t C5ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C5ISR_TEIF5 = 0x1; // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C5ISR_CTCIF5 = 0x2; // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t C5ISR_BRTIF5 = 0x4; // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C5ISR_BTIF5 = 0x8; // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C5ISR_TCIF5 = 0x10; // channel x buffer transfer complete
    static constexpr uint32_t C5ISR_CRQA5 = 0x10000; // channel x request active flag

    static constexpr uint32_t C5IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C5IFCR_CTEIF5 = 0x1; // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t C5IFCR_CCTCIF5 = 0x2; // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t C5IFCR_CBRTIF5 = 0x4; // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t C5IFCR_CBTIF5 = 0x8; // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t C5IFCR_CLTCIF5 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t C5ESR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> C5ESR_TEA; // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
    static constexpr uint32_t C5ESR_TED = 0x80; // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t C5ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C5ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C5ESR_ASE = 0x400; // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C5ESR_BSE = 0x800; // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t C5CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C5CR_EN = 0x1; // channel enable
    static constexpr uint32_t C5CR_TEIE = 0x2; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C5CR_CTCIE = 0x4; // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C5CR_BRTIE = 0x8; // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C5CR_BTIE = 0x10; // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C5CR_TCIE = 0x20; // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<6, 0x3> C5CR_PL; // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C5CR_BEX = 0x1000; // byte Endianness exchange
    static constexpr uint32_t C5CR_HEX = 0x2000; // Half word Endianes exchange
    static constexpr uint32_t C5CR_WEX = 0x4000; // Word Endianness exchange
    static constexpr uint32_t C5CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t C5TCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> C5TCR_SINC; // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    typedef bit_field_t<2, 0x3> C5TCR_DINC; // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
    typedef bit_field_t<4, 0x3> C5TCR_SSIZE; // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &amp;lt; SSIZE and SINC &amp;#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
    typedef bit_field_t<6, 0x3> C5TCR_DSIZE; // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &amp;lt; DSIZE and DINC &amp;#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
    typedef bit_field_t<8, 0x3> C5TCR_SINCOS; // source increment offset size
    typedef bit_field_t<10, 0x3> C5TCR_DINCOS; // Destination increment offset
    typedef bit_field_t<12, 0x7> C5TCR_SBURST; // source burst transfer configuration
    typedef bit_field_t<15, 0x7> C5TCR_DBURST; // Destination burst transfer configuration
    typedef bit_field_t<18, 0x7f> C5TCR_TLEN; // buffer transfer lengh
    static constexpr uint32_t C5TCR_PKE = 0x2000000; // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    typedef bit_field_t<26, 0x3> C5TCR_PAM; // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
    typedef bit_field_t<28, 0x3> C5TCR_TRGM; // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C5TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C5TCR_BWM = 0x80000000; // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t C5BNDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> C5BNDTR_BNDT; // block number of data to transfer
    static constexpr uint32_t C5BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C5BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    typedef bit_field_t<20, 0xfff> C5BNDTR_BRC; // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.

    static constexpr uint32_t C5SAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C5SAR_SAR; // source adr base

    static constexpr uint32_t C5DAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C5DAR_DAR; // Destination adr base

    static constexpr uint32_t C5BRUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> C5BRUR_SUV; // source adresse update value
    typedef bit_field_t<16, 0xffff> C5BRUR_DUV; // destination address update

    static constexpr uint32_t C5LAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C5LAR_LAR; // Link address register

    static constexpr uint32_t C5TBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> C5TBR_TSEL; // Trigger selection
    static constexpr uint32_t C5TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C5TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.


    static constexpr uint32_t C5MAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C5MAR_MAR; // Mask address

    static constexpr uint32_t C5MDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C5MDR_MDR; // Mask data


    static constexpr uint32_t C6ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C6ISR_TEIF6 = 0x1; // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C6ISR_CTCIF6 = 0x2; // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t C6ISR_BRTIF6 = 0x4; // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C6ISR_BTIF6 = 0x8; // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C6ISR_TCIF6 = 0x10; // channel x buffer transfer complete
    static constexpr uint32_t C6ISR_CRQA6 = 0x10000; // channel x request active flag

    static constexpr uint32_t C6IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C6IFCR_CTEIF6 = 0x1; // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t C6IFCR_CCTCIF6 = 0x2; // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t C6IFCR_CBRTIF6 = 0x4; // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t C6IFCR_CBTIF6 = 0x8; // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t C6IFCR_CLTCIF6 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t C6ESR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> C6ESR_TEA; // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
    static constexpr uint32_t C6ESR_TED = 0x80; // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t C6ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C6ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C6ESR_ASE = 0x400; // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C6ESR_BSE = 0x800; // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t C6CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C6CR_EN = 0x1; // channel enable
    static constexpr uint32_t C6CR_TEIE = 0x2; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C6CR_CTCIE = 0x4; // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C6CR_BRTIE = 0x8; // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C6CR_BTIE = 0x10; // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C6CR_TCIE = 0x20; // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<6, 0x3> C6CR_PL; // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C6CR_BEX = 0x1000; // byte Endianness exchange
    static constexpr uint32_t C6CR_HEX = 0x2000; // Half word Endianes exchange
    static constexpr uint32_t C6CR_WEX = 0x4000; // Word Endianness exchange
    static constexpr uint32_t C6CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t C6TCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> C6TCR_SINC; // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    typedef bit_field_t<2, 0x3> C6TCR_DINC; // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
    typedef bit_field_t<4, 0x3> C6TCR_SSIZE; // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &amp;lt; SSIZE and SINC &amp;#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
    typedef bit_field_t<6, 0x3> C6TCR_DSIZE; // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &amp;lt; DSIZE and DINC &amp;#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
    typedef bit_field_t<8, 0x3> C6TCR_SINCOS; // source increment offset size
    typedef bit_field_t<10, 0x3> C6TCR_DINCOS; // Destination increment offset
    typedef bit_field_t<12, 0x7> C6TCR_SBURST; // source burst transfer configuration
    typedef bit_field_t<15, 0x7> C6TCR_DBURST; // Destination burst transfer configuration
    typedef bit_field_t<18, 0x7f> C6TCR_TLEN; // buffer transfer lengh
    static constexpr uint32_t C6TCR_PKE = 0x2000000; // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    typedef bit_field_t<26, 0x3> C6TCR_PAM; // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
    typedef bit_field_t<28, 0x3> C6TCR_TRGM; // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C6TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C6TCR_BWM = 0x80000000; // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t C6BNDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> C6BNDTR_BNDT; // block number of data to transfer
    static constexpr uint32_t C6BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C6BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    typedef bit_field_t<20, 0xfff> C6BNDTR_BRC; // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0

    static constexpr uint32_t C6SAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C6SAR_SAR; // source adr base

    static constexpr uint32_t C6DAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C6DAR_DAR; // Destination adr base

    static constexpr uint32_t C6BRUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> C6BRUR_SUV; // source adresse update value
    typedef bit_field_t<16, 0xffff> C6BRUR_DUV; // destination address update

    static constexpr uint32_t C6LAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C6LAR_LAR; // Link address register

    static constexpr uint32_t C6TBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> C6TBR_TSEL; // Trigger selection
    static constexpr uint32_t C6TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C6TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.


    static constexpr uint32_t C6MAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C6MAR_MAR; // Mask address

    static constexpr uint32_t C6MDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C6MDR_MDR; // Mask data


    static constexpr uint32_t C7ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C7ISR_TEIF7 = 0x1; // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C7ISR_CTCIF7 = 0x2; // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t C7ISR_BRTIF7 = 0x4; // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C7ISR_BTIF7 = 0x8; // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C7ISR_TCIF7 = 0x10; // channel x buffer transfer complete
    static constexpr uint32_t C7ISR_CRQA7 = 0x10000; // channel x request active flag

    static constexpr uint32_t C7IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C7IFCR_CTEIF7 = 0x1; // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t C7IFCR_CCTCIF7 = 0x2; // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t C7IFCR_CBRTIF7 = 0x4; // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t C7IFCR_CBTIF7 = 0x8; // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t C7IFCR_CLTCIF7 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t C7ESR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> C7ESR_TEA; // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
    static constexpr uint32_t C7ESR_TED = 0x80; // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t C7ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C7ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C7ESR_ASE = 0x400; // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C7ESR_BSE = 0x800; // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t C7CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C7CR_EN = 0x1; // channel enable
    static constexpr uint32_t C7CR_TEIE = 0x2; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C7CR_CTCIE = 0x4; // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C7CR_BRTIE = 0x8; // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C7CR_BTIE = 0x10; // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C7CR_TCIE = 0x20; // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<6, 0x3> C7CR_PL; // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C7CR_BEX = 0x1000; // byte Endianness exchange
    static constexpr uint32_t C7CR_HEX = 0x2000; // Half word Endianes exchange
    static constexpr uint32_t C7CR_WEX = 0x4000; // Word Endianness exchange
    static constexpr uint32_t C7CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t C7TCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> C7TCR_SINC; // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    typedef bit_field_t<2, 0x3> C7TCR_DINC; // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
    typedef bit_field_t<4, 0x3> C7TCR_SSIZE; // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &amp;lt; SSIZE and SINC &amp;#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
    typedef bit_field_t<6, 0x3> C7TCR_DSIZE; // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &amp;lt; DSIZE and DINC &amp;#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
    typedef bit_field_t<8, 0x3> C7TCR_SINCOS; // source increment offset size
    typedef bit_field_t<10, 0x3> C7TCR_DINCOS; // Destination increment offset
    typedef bit_field_t<12, 0x7> C7TCR_SBURST; // source burst transfer configuration
    typedef bit_field_t<15, 0x7> C7TCR_DBURST; // Destination burst transfer configuration
    typedef bit_field_t<18, 0x7f> C7TCR_TLEN; // buffer transfer lengh
    static constexpr uint32_t C7TCR_PKE = 0x2000000; // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    typedef bit_field_t<26, 0x3> C7TCR_PAM; // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
    typedef bit_field_t<28, 0x3> C7TCR_TRGM; // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C7TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C7TCR_BWM = 0x80000000; // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t C7BNDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> C7BNDTR_BNDT; // block number of data to transfer
    static constexpr uint32_t C7BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C7BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    typedef bit_field_t<20, 0xfff> C7BNDTR_BRC; // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.

    static constexpr uint32_t C7SAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C7SAR_SAR; // source adr base

    static constexpr uint32_t C7DAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C7DAR_DAR; // Destination adr base

    static constexpr uint32_t C7BRUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> C7BRUR_SUV; // source adresse update value
    typedef bit_field_t<16, 0xffff> C7BRUR_DUV; // destination address update

    static constexpr uint32_t C7LAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C7LAR_LAR; // Link address register

    static constexpr uint32_t C7TBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> C7TBR_TSEL; // Trigger selection
    static constexpr uint32_t C7TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C7TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.


    static constexpr uint32_t C7MAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C7MAR_MAR; // Mask address

    static constexpr uint32_t C7MDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C7MDR_MDR; // Mask data


    static constexpr uint32_t C8ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C8ISR_TEIF8 = 0x1; // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C8ISR_CTCIF8 = 0x2; // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t C8ISR_BRTIF8 = 0x4; // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C8ISR_BTIF8 = 0x8; // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C8ISR_TCIF8 = 0x10; // channel x buffer transfer complete
    static constexpr uint32_t C8ISR_CRQA8 = 0x10000; // channel x request active flag

    static constexpr uint32_t C8IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C8IFCR_CTEIF8 = 0x1; // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t C8IFCR_CCTCIF8 = 0x2; // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t C8IFCR_CBRTIF8 = 0x4; // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t C8IFCR_CBTIF8 = 0x8; // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t C8IFCR_CLTCIF8 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t C8ESR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> C8ESR_TEA; // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
    static constexpr uint32_t C8ESR_TED = 0x80; // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t C8ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C8ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C8ESR_ASE = 0x400; // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C8ESR_BSE = 0x800; // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t C8CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C8CR_EN = 0x1; // channel enable
    static constexpr uint32_t C8CR_TEIE = 0x2; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C8CR_CTCIE = 0x4; // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C8CR_BRTIE = 0x8; // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C8CR_BTIE = 0x10; // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C8CR_TCIE = 0x20; // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<6, 0x3> C8CR_PL; // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C8CR_BEX = 0x1000; // byte Endianness exchange
    static constexpr uint32_t C8CR_HEX = 0x2000; // Half word Endianes exchange
    static constexpr uint32_t C8CR_WEX = 0x4000; // Word Endianness exchange
    static constexpr uint32_t C8CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t C8TCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> C8TCR_SINC; // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    typedef bit_field_t<2, 0x3> C8TCR_DINC; // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
    typedef bit_field_t<4, 0x3> C8TCR_SSIZE; // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &amp;lt; SSIZE and SINC &amp;#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
    typedef bit_field_t<6, 0x3> C8TCR_DSIZE; // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &amp;lt; DSIZE and DINC &amp;#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
    typedef bit_field_t<8, 0x3> C8TCR_SINCOS; // source increment offset size
    typedef bit_field_t<10, 0x3> C8TCR_DINCOS; // Destination increment offset
    typedef bit_field_t<12, 0x7> C8TCR_SBURST; // source burst transfer configuration
    typedef bit_field_t<15, 0x7> C8TCR_DBURST; // Destination burst transfer configuration
    typedef bit_field_t<18, 0x7f> C8TCR_TLEN; // buffer transfer lengh
    static constexpr uint32_t C8TCR_PKE = 0x2000000; // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    typedef bit_field_t<26, 0x3> C8TCR_PAM; // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
    typedef bit_field_t<28, 0x3> C8TCR_TRGM; // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C8TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C8TCR_BWM = 0x80000000; // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t C8BNDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> C8BNDTR_BNDT; // block number of data to transfer
    static constexpr uint32_t C8BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C8BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    typedef bit_field_t<20, 0xfff> C8BNDTR_BRC; // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.

    static constexpr uint32_t C8SAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C8SAR_SAR; // source adr base

    static constexpr uint32_t C8DAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C8DAR_DAR; // Destination adr base

    static constexpr uint32_t C8BRUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> C8BRUR_SUV; // source adresse update value
    typedef bit_field_t<16, 0xffff> C8BRUR_DUV; // destination address update

    static constexpr uint32_t C8LAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C8LAR_LAR; // Link address register

    static constexpr uint32_t C8TBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> C8TBR_TSEL; // Trigger selection
    static constexpr uint32_t C8TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C8TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.


    static constexpr uint32_t C8MAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C8MAR_MAR; // Mask address

    static constexpr uint32_t C8MDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C8MDR_MDR; // Mask data


    static constexpr uint32_t C9ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C9ISR_TEIF9 = 0x1; // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C9ISR_CTCIF9 = 0x2; // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t C9ISR_BRTIF9 = 0x4; // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C9ISR_BTIF9 = 0x8; // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C9ISR_TCIF9 = 0x10; // channel x buffer transfer complete
    static constexpr uint32_t C9ISR_CRQA9 = 0x10000; // channel x request active flag

    static constexpr uint32_t C9IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C9IFCR_CTEIF9 = 0x1; // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t C9IFCR_CCTCIF9 = 0x2; // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t C9IFCR_CBRTIF9 = 0x4; // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t C9IFCR_CBTIF9 = 0x8; // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t C9IFCR_CLTCIF9 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t C9ESR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> C9ESR_TEA; // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
    static constexpr uint32_t C9ESR_TED = 0x80; // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t C9ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C9ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C9ESR_ASE = 0x400; // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C9ESR_BSE = 0x800; // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t C9CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C9CR_EN = 0x1; // channel enable
    static constexpr uint32_t C9CR_TEIE = 0x2; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C9CR_CTCIE = 0x4; // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C9CR_BRTIE = 0x8; // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C9CR_BTIE = 0x10; // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C9CR_TCIE = 0x20; // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<6, 0x3> C9CR_PL; // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C9CR_BEX = 0x1000; // byte Endianness exchange
    static constexpr uint32_t C9CR_HEX = 0x2000; // Half word Endianes exchange
    static constexpr uint32_t C9CR_WEX = 0x4000; // Word Endianness exchange
    static constexpr uint32_t C9CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t C9TCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> C9TCR_SINC; // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    typedef bit_field_t<2, 0x3> C9TCR_DINC; // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
    typedef bit_field_t<4, 0x3> C9TCR_SSIZE; // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &amp;lt; SSIZE and SINC &amp;#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
    typedef bit_field_t<6, 0x3> C9TCR_DSIZE; // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &amp;lt; DSIZE and DINC &amp;#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
    typedef bit_field_t<8, 0x3> C9TCR_SINCOS; // source increment offset size
    typedef bit_field_t<10, 0x3> C9TCR_DINCOS; // Destination increment offset
    typedef bit_field_t<12, 0x7> C9TCR_SBURST; // source burst transfer configuration
    typedef bit_field_t<15, 0x7> C9TCR_DBURST; // Destination burst transfer configuration
    typedef bit_field_t<18, 0x7f> C9TCR_TLEN; // buffer transfer lengh
    static constexpr uint32_t C9TCR_PKE = 0x2000000; // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    typedef bit_field_t<26, 0x3> C9TCR_PAM; // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
    typedef bit_field_t<28, 0x3> C9TCR_TRGM; // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C9TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C9TCR_BWM = 0x80000000; // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t C9BNDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> C9BNDTR_BNDT; // block number of data to transfer
    static constexpr uint32_t C9BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C9BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    typedef bit_field_t<20, 0xfff> C9BNDTR_BRC; // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.

    static constexpr uint32_t C9SAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C9SAR_SAR; // source adr base

    static constexpr uint32_t C9DAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C9DAR_DAR; // Destination adr base

    static constexpr uint32_t C9BRUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> C9BRUR_SUV; // source adresse update value
    typedef bit_field_t<16, 0xffff> C9BRUR_DUV; // destination address update

    static constexpr uint32_t C9LAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C9LAR_LAR; // Link address register

    static constexpr uint32_t C9TBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> C9TBR_TSEL; // Trigger selection
    static constexpr uint32_t C9TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C9TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.


    static constexpr uint32_t C9MAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C9MAR_MAR; // Mask address

    static constexpr uint32_t C9MDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C9MDR_MDR; // Mask data


    static constexpr uint32_t C10ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C10ISR_TEIF10 = 0x1; // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C10ISR_CTCIF10 = 0x2; // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t C10ISR_BRTIF10 = 0x4; // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C10ISR_BTIF10 = 0x8; // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C10ISR_TCIF10 = 0x10; // channel x buffer transfer complete
    static constexpr uint32_t C10ISR_CRQA10 = 0x10000; // channel x request active flag

    static constexpr uint32_t C10IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C10IFCR_CTEIF10 = 0x1; // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t C10IFCR_CCTCIF10 = 0x2; // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t C10IFCR_CBRTIF10 = 0x4; // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t C10IFCR_CBTIF10 = 0x8; // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t C10IFCR_CLTCIF10 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t C10ESR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> C10ESR_TEA; // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
    static constexpr uint32_t C10ESR_TED = 0x80; // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t C10ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C10ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C10ESR_ASE = 0x400; // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C10ESR_BSE = 0x800; // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t C10CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C10CR_EN = 0x1; // channel enable
    static constexpr uint32_t C10CR_TEIE = 0x2; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C10CR_CTCIE = 0x4; // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C10CR_BRTIE = 0x8; // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C10CR_BTIE = 0x10; // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C10CR_TCIE = 0x20; // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<6, 0x3> C10CR_PL; // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C10CR_BEX = 0x1000; // byte Endianness exchange
    static constexpr uint32_t C10CR_HEX = 0x2000; // Half word Endianes exchange
    static constexpr uint32_t C10CR_WEX = 0x4000; // Word Endianness exchange
    static constexpr uint32_t C10CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t C10TCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> C10TCR_SINC; // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    typedef bit_field_t<2, 0x3> C10TCR_DINC; // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
    typedef bit_field_t<4, 0x3> C10TCR_SSIZE; // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &amp;lt; SSIZE and SINC &amp;#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
    typedef bit_field_t<6, 0x3> C10TCR_DSIZE; // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &amp;lt; DSIZE and DINC &amp;#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
    typedef bit_field_t<8, 0x3> C10TCR_SINCOS; // source increment offset size
    typedef bit_field_t<10, 0x3> C10TCR_DINCOS; // Destination increment offset
    typedef bit_field_t<12, 0x7> C10TCR_SBURST; // source burst transfer configuration
    typedef bit_field_t<15, 0x7> C10TCR_DBURST; // Destination burst transfer configuration
    typedef bit_field_t<18, 0x7f> C10TCR_TLEN; // buffer transfer lengh
    static constexpr uint32_t C10TCR_PKE = 0x2000000; // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    typedef bit_field_t<26, 0x3> C10TCR_PAM; // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
    typedef bit_field_t<28, 0x3> C10TCR_TRGM; // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C10TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C10TCR_BWM = 0x80000000; // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t C10BNDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> C10BNDTR_BNDT; // block number of data to transfer
    static constexpr uint32_t C10BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C10BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    typedef bit_field_t<20, 0xfff> C10BNDTR_BRC; // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.

    static constexpr uint32_t C10SAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C10SAR_SAR; // source adr base

    static constexpr uint32_t C10DAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C10DAR_DAR; // Destination adr base

    static constexpr uint32_t C10BRUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> C10BRUR_SUV; // source adresse update value
    typedef bit_field_t<16, 0xffff> C10BRUR_DUV; // destination address update

    static constexpr uint32_t C10LAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C10LAR_LAR; // Link address register

    static constexpr uint32_t C10TBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> C10TBR_TSEL; // Trigger selection
    static constexpr uint32_t C10TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C10TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.


    static constexpr uint32_t C10MAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C10MAR_MAR; // Mask address

    static constexpr uint32_t C10MDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C10MDR_MDR; // Mask data


    static constexpr uint32_t C11ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C11ISR_TEIF11 = 0x1; // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C11ISR_CTCIF11 = 0x2; // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t C11ISR_BRTIF11 = 0x4; // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C11ISR_BTIF11 = 0x8; // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C11ISR_TCIF11 = 0x10; // channel x buffer transfer complete
    static constexpr uint32_t C11ISR_CRQA11 = 0x10000; // channel x request active flag

    static constexpr uint32_t C11IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C11IFCR_CTEIF11 = 0x1; // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t C11IFCR_CCTCIF11 = 0x2; // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t C11IFCR_CBRTIF11 = 0x4; // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t C11IFCR_CBTIF11 = 0x8; // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t C11IFCR_CLTCIF11 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t C11ESR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> C11ESR_TEA; // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
    static constexpr uint32_t C11ESR_TED = 0x80; // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t C11ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C11ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C11ESR_ASE = 0x400; // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C11ESR_BSE = 0x800; // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t C11CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C11CR_EN = 0x1; // channel enable
    static constexpr uint32_t C11CR_TEIE = 0x2; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C11CR_CTCIE = 0x4; // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C11CR_BRTIE = 0x8; // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C11CR_BTIE = 0x10; // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C11CR_TCIE = 0x20; // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<6, 0x3> C11CR_PL; // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C11CR_BEX = 0x1000; // byte Endianness exchange
    static constexpr uint32_t C11CR_HEX = 0x2000; // Half word Endianes exchange
    static constexpr uint32_t C11CR_WEX = 0x4000; // Word Endianness exchange
    static constexpr uint32_t C11CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t C11TCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> C11TCR_SINC; // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    typedef bit_field_t<2, 0x3> C11TCR_DINC; // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
    typedef bit_field_t<4, 0x3> C11TCR_SSIZE; // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &amp;lt; SSIZE and SINC &amp;#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
    typedef bit_field_t<6, 0x3> C11TCR_DSIZE; // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &amp;lt; DSIZE and DINC &amp;#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
    typedef bit_field_t<8, 0x3> C11TCR_SINCOS; // source increment offset size
    typedef bit_field_t<10, 0x3> C11TCR_DINCOS; // Destination increment offset
    typedef bit_field_t<12, 0x7> C11TCR_SBURST; // source burst transfer configuration
    typedef bit_field_t<15, 0x7> C11TCR_DBURST; // Destination burst transfer configuration
    typedef bit_field_t<18, 0x7f> C11TCR_TLEN; // buffer transfer lengh
    static constexpr uint32_t C11TCR_PKE = 0x2000000; // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    typedef bit_field_t<26, 0x3> C11TCR_PAM; // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
    typedef bit_field_t<28, 0x3> C11TCR_TRGM; // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C11TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C11TCR_BWM = 0x80000000; // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t C11BNDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> C11BNDTR_BNDT; // block number of data to transfer
    static constexpr uint32_t C11BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C11BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    typedef bit_field_t<20, 0xfff> C11BNDTR_BRC; // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.

    static constexpr uint32_t C11SAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C11SAR_SAR; // source adr base

    static constexpr uint32_t C11DAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C11DAR_DAR; // Destination adr base

    static constexpr uint32_t C11BRUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> C11BRUR_SUV; // source adresse update value
    typedef bit_field_t<16, 0xffff> C11BRUR_DUV; // destination address update

    static constexpr uint32_t C11LAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C11LAR_LAR; // Link address register

    static constexpr uint32_t C11TBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> C11TBR_TSEL; // Trigger selection
    static constexpr uint32_t C11TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C11TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.


    static constexpr uint32_t C11MAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C11MAR_MAR; // Mask address

    static constexpr uint32_t C11MDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C11MDR_MDR; // Mask data


    static constexpr uint32_t C12ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C12ISR_TEIF12 = 0x1; // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C12ISR_CTCIF12 = 0x2; // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t C12ISR_BRTIF12 = 0x4; // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C12ISR_BTIF12 = 0x8; // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C12ISR_TCIF12 = 0x10; // channel x buffer transfer complete
    static constexpr uint32_t C12ISR_CRQA12 = 0x10000; // channel x request active flag

    static constexpr uint32_t C12IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C12IFCR_CTEIF12 = 0x1; // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t C12IFCR_CCTCIF12 = 0x2; // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t C12IFCR_CBRTIF12 = 0x4; // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t C12IFCR_CBTIF12 = 0x8; // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t C12IFCR_CLTCIF12 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t C12ESR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> C12ESR_TEA; // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
    static constexpr uint32_t C12ESR_TED = 0x80; // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t C12ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C12ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C12ESR_ASE = 0x400; // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C12ESR_BSE = 0x800; // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t C12CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C12CR_EN = 0x1; // channel enable
    static constexpr uint32_t C12CR_TEIE = 0x2; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C12CR_CTCIE = 0x4; // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C12CR_BRTIE = 0x8; // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C12CR_BTIE = 0x10; // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C12CR_TCIE = 0x20; // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<6, 0x3> C12CR_PL; // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C12CR_BEX = 0x1000; // byte Endianness exchange
    static constexpr uint32_t C12CR_HEX = 0x2000; // Half word Endianes exchange
    static constexpr uint32_t C12CR_WEX = 0x4000; // Word Endianness exchange
    static constexpr uint32_t C12CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t C12TCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> C12TCR_SINC; // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    typedef bit_field_t<2, 0x3> C12TCR_DINC; // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
    typedef bit_field_t<4, 0x3> C12TCR_SSIZE; // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &amp;lt; SSIZE and SINC &amp;#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
    typedef bit_field_t<6, 0x3> C12TCR_DSIZE; // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &amp;lt; DSIZE and DINC &amp;#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
    typedef bit_field_t<8, 0x3> C12TCR_SINCOS; // source increment offset size
    typedef bit_field_t<10, 0x3> C12TCR_DINCOS; // Destination increment offset
    typedef bit_field_t<12, 0x7> C12TCR_SBURST; // source burst transfer configuration
    typedef bit_field_t<15, 0x7> C12TCR_DBURST; // Destination burst transfer configuration
    typedef bit_field_t<18, 0x7f> C12TCR_TLEN; // buffer transfer lengh
    static constexpr uint32_t C12TCR_PKE = 0x2000000; // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    typedef bit_field_t<26, 0x3> C12TCR_PAM; // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
    typedef bit_field_t<28, 0x3> C12TCR_TRGM; // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C12TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C12TCR_BWM = 0x80000000; // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t C12BNDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> C12BNDTR_BNDT; // block number of data to transfer
    static constexpr uint32_t C12BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C12BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    typedef bit_field_t<20, 0xfff> C12BNDTR_BRC; // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.

    static constexpr uint32_t C12SAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C12SAR_SAR; // source adr base

    static constexpr uint32_t C12DAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C12DAR_DAR; // Destination adr base

    static constexpr uint32_t C12BRUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> C12BRUR_SUV; // source adresse update value
    typedef bit_field_t<16, 0xffff> C12BRUR_DUV; // destination address update

    static constexpr uint32_t C12LAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C12LAR_LAR; // Link address register

    static constexpr uint32_t C12TBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> C12TBR_TSEL; // Trigger selection
    static constexpr uint32_t C12TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C12TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.


    static constexpr uint32_t C12MAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C12MAR_MAR; // Mask address

    static constexpr uint32_t C12MDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C12MDR_MDR; // Mask data


    static constexpr uint32_t C13ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C13ISR_TEIF13 = 0x1; // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C13ISR_CTCIF13 = 0x2; // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t C13ISR_BRTIF13 = 0x4; // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C13ISR_BTIF13 = 0x8; // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C13ISR_TCIF13 = 0x10; // channel x buffer transfer complete
    static constexpr uint32_t C13ISR_CRQA13 = 0x10000; // channel x request active flag

    static constexpr uint32_t C13IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C13IFCR_CTEIF13 = 0x1; // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t C13IFCR_CCTCIF13 = 0x2; // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t C13IFCR_CBRTIF13 = 0x4; // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t C13IFCR_CBTIF13 = 0x8; // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t C13IFCR_CLTCIF13 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t C13ESR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> C13ESR_TEA; // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
    static constexpr uint32_t C13ESR_TED = 0x80; // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t C13ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C13ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C13ESR_ASE = 0x400; // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C13ESR_BSE = 0x800; // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t C13CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C13CR_EN = 0x1; // channel enable
    static constexpr uint32_t C13CR_TEIE = 0x2; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C13CR_CTCIE = 0x4; // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C13CR_BRTIE = 0x8; // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C13CR_BTIE = 0x10; // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C13CR_TCIE = 0x20; // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<6, 0x3> C13CR_PL; // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C13CR_BEX = 0x1000; // byte Endianness exchange
    static constexpr uint32_t C13CR_HEX = 0x2000; // Half word Endianes exchange
    static constexpr uint32_t C13CR_WEX = 0x4000; // Word Endianness exchange
    static constexpr uint32_t C13CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t C13TCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> C13TCR_SINC; // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    typedef bit_field_t<2, 0x3> C13TCR_DINC; // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
    typedef bit_field_t<4, 0x3> C13TCR_SSIZE; // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &amp;lt; SSIZE and SINC &amp;#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
    typedef bit_field_t<6, 0x3> C13TCR_DSIZE; // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &amp;lt; DSIZE and DINC &amp;#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
    typedef bit_field_t<8, 0x3> C13TCR_SINCOS; // source increment offset size
    typedef bit_field_t<10, 0x3> C13TCR_DINCOS; // Destination increment offset
    typedef bit_field_t<12, 0x7> C13TCR_SBURST; // source burst transfer configuration
    typedef bit_field_t<15, 0x7> C13TCR_DBURST; // Destination burst transfer configuration
    typedef bit_field_t<18, 0x7f> C13TCR_TLEN; // buffer transfer lengh
    static constexpr uint32_t C13TCR_PKE = 0x2000000; // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    typedef bit_field_t<26, 0x3> C13TCR_PAM; // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
    typedef bit_field_t<28, 0x3> C13TCR_TRGM; // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C13TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C13TCR_BWM = 0x80000000; // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t C13BNDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> C13BNDTR_BNDT; // block number of data to transfer
    static constexpr uint32_t C13BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C13BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    typedef bit_field_t<20, 0xfff> C13BNDTR_BRC; // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.

    static constexpr uint32_t C13SAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C13SAR_SAR; // source adr base

    static constexpr uint32_t C13DAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C13DAR_DAR; // Destination adr base

    static constexpr uint32_t C13BRUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> C13BRUR_SUV; // source adresse update value
    typedef bit_field_t<16, 0xffff> C13BRUR_DUV; // destination address update

    static constexpr uint32_t C13LAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C13LAR_LAR; // Link address register

    static constexpr uint32_t C13TBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> C13TBR_TSEL; // Trigger selection
    static constexpr uint32_t C13TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C13TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.


    static constexpr uint32_t C13MAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C13MAR_MAR; // Mask address

    static constexpr uint32_t C13MDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C13MDR_MDR; // Mask data


    static constexpr uint32_t C14ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C14ISR_TEIF14 = 0x1; // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C14ISR_CTCIF14 = 0x2; // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t C14ISR_BRTIF14 = 0x4; // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C14ISR_BTIF14 = 0x8; // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C14ISR_TCIF14 = 0x10; // channel x buffer transfer complete
    static constexpr uint32_t C14ISR_CRQA14 = 0x10000; // channel x request active flag

    static constexpr uint32_t C14IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C14IFCR_CTEIF14 = 0x1; // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t C14IFCR_CCTCIF14 = 0x2; // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t C14IFCR_CBRTIF14 = 0x4; // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t C14IFCR_CBTIF14 = 0x8; // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t C14IFCR_CLTCIF14 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t C14ESR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> C14ESR_TEA; // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
    static constexpr uint32_t C14ESR_TED = 0x80; // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t C14ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C14ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C14ESR_ASE = 0x400; // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C14ESR_BSE = 0x800; // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t C14CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C14CR_EN = 0x1; // channel enable
    static constexpr uint32_t C14CR_TEIE = 0x2; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C14CR_CTCIE = 0x4; // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C14CR_BRTIE = 0x8; // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C14CR_BTIE = 0x10; // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C14CR_TCIE = 0x20; // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<6, 0x3> C14CR_PL; // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C14CR_BEX = 0x1000; // byte Endianness exchange
    static constexpr uint32_t C14CR_HEX = 0x2000; // Half word Endianes exchange
    static constexpr uint32_t C14CR_WEX = 0x4000; // Word Endianness exchange
    static constexpr uint32_t C14CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t C14TCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> C14TCR_SINC; // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    typedef bit_field_t<2, 0x3> C14TCR_DINC; // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
    typedef bit_field_t<4, 0x3> C14TCR_SSIZE; // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &amp;lt; SSIZE and SINC &amp;#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
    typedef bit_field_t<6, 0x3> C14TCR_DSIZE; // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &amp;lt; DSIZE and DINC &amp;#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
    typedef bit_field_t<8, 0x3> C14TCR_SINCOS; // source increment offset size
    typedef bit_field_t<10, 0x3> C14TCR_DINCOS; // Destination increment offset
    typedef bit_field_t<12, 0x7> C14TCR_SBURST; // source burst transfer configuration
    typedef bit_field_t<15, 0x7> C14TCR_DBURST; // Destination burst transfer configuration
    typedef bit_field_t<18, 0x7f> C14TCR_TLEN; // buffer transfer lengh
    static constexpr uint32_t C14TCR_PKE = 0x2000000; // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    typedef bit_field_t<26, 0x3> C14TCR_PAM; // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
    typedef bit_field_t<28, 0x3> C14TCR_TRGM; // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C14TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C14TCR_BWM = 0x80000000; // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t C14BNDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> C14BNDTR_BNDT; // block number of data to transfer
    static constexpr uint32_t C14BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C14BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    typedef bit_field_t<20, 0xfff> C14BNDTR_BRC; // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.

    static constexpr uint32_t C14SAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C14SAR_SAR; // source adr base

    static constexpr uint32_t C14DAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C14DAR_DAR; // Destination adr base

    static constexpr uint32_t C14BRUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> C14BRUR_SUV; // source adresse update value
    typedef bit_field_t<16, 0xffff> C14BRUR_DUV; // destination address update

    static constexpr uint32_t C14LAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C14LAR_LAR; // Link address register

    static constexpr uint32_t C14TBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> C14TBR_TSEL; // Trigger selection
    static constexpr uint32_t C14TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C14TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.


    static constexpr uint32_t C14MAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C14MAR_MAR; // Mask address

    static constexpr uint32_t C14MDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C14MDR_MDR; // Mask data


    static constexpr uint32_t C15ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C15ISR_TEIF15 = 0x1; // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C15ISR_CTCIF15 = 0x2; // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t C15ISR_BRTIF15 = 0x4; // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C15ISR_BTIF15 = 0x8; // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C15ISR_TCIF15 = 0x10; // channel x buffer transfer complete
    static constexpr uint32_t C15ISR_CRQA15 = 0x10000; // channel x request active flag

    static constexpr uint32_t C15IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C15IFCR_CTEIF15 = 0x1; // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t C15IFCR_CCTCIF15 = 0x2; // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t C15IFCR_CBRTIF15 = 0x4; // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t C15IFCR_CBTIF15 = 0x8; // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t C15IFCR_CLTCIF15 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t C15ESR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> C15ESR_TEA; // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
    static constexpr uint32_t C15ESR_TED = 0x80; // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t C15ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C15ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C15ESR_ASE = 0x400; // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C15ESR_BSE = 0x800; // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t C15CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C15CR_EN = 0x1; // channel enable
    static constexpr uint32_t C15CR_TEIE = 0x2; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C15CR_CTCIE = 0x4; // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C15CR_BRTIE = 0x8; // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C15CR_BTIE = 0x10; // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C15CR_TCIE = 0x20; // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<6, 0x3> C15CR_PL; // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C15CR_BEX = 0x1000; // byte Endianness exchange
    static constexpr uint32_t C15CR_HEX = 0x2000; // Half word Endianes exchange
    static constexpr uint32_t C15CR_WEX = 0x4000; // Word Endianness exchange
    static constexpr uint32_t C15CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t C15TCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> C15TCR_SINC; // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    typedef bit_field_t<2, 0x3> C15TCR_DINC; // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
    typedef bit_field_t<4, 0x3> C15TCR_SSIZE; // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &amp;lt; SSIZE and SINC &amp;#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
    typedef bit_field_t<6, 0x3> C15TCR_DSIZE; // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &amp;lt; DSIZE and DINC &amp;#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
    typedef bit_field_t<8, 0x3> C15TCR_SINCOS; // source increment offset size
    typedef bit_field_t<10, 0x3> C15TCR_DINCOS; // Destination increment offset
    typedef bit_field_t<12, 0x7> C15TCR_SBURST; // source burst transfer configuration
    typedef bit_field_t<15, 0x7> C15TCR_DBURST; // Destination burst transfer configuration
    typedef bit_field_t<18, 0x7f> C15TCR_TLEN; // buffer transfer lengh
    static constexpr uint32_t C15TCR_PKE = 0x2000000; // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    typedef bit_field_t<26, 0x3> C15TCR_PAM; // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
    typedef bit_field_t<28, 0x3> C15TCR_TRGM; // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C15TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C15TCR_BWM = 0x80000000; // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t C15BNDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> C15BNDTR_BNDT; // block number of data to transfer
    static constexpr uint32_t C15BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C15BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    typedef bit_field_t<20, 0xfff> C15BNDTR_BRC; // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.

    static constexpr uint32_t C15SAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C15SAR_SAR; // source adr base

    static constexpr uint32_t C15DAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C15DAR_DAR; // Destination adr base

    static constexpr uint32_t C15BRUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> C15BRUR_SUV; // source adresse update value
    typedef bit_field_t<16, 0xffff> C15BRUR_DUV; // destination address update

    static constexpr uint32_t C15LAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C15LAR_LAR; // Link address register

    static constexpr uint32_t C15TBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> C15TBR_TSEL; // Trigger selection
    static constexpr uint32_t C15TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C15TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.


    static constexpr uint32_t C15MAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C15MAR_MAR; // Mask address

    static constexpr uint32_t C15MDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C15MDR_MDR; // Mask data
};

template<>
struct peripheral_t<STM32H723, MDMA>
{
    static constexpr periph_t P = MDMA;
    using T = stm32h723_mdma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H725, MDMA>
{
    static constexpr periph_t P = MDMA;
    using T = stm32h723_mdma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, MDMA>
{
    static constexpr periph_t P = MDMA;
    using T = stm32h723_mdma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, MDMA>
{
    static constexpr periph_t P = MDMA;
    using T = stm32h723_mdma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, MDMA>
{
    static constexpr periph_t P = MDMA;
    using T = stm32h723_mdma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, MDMA>
{
    static constexpr periph_t P = MDMA;
    using T = stm32h723_mdma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, MDMA>
{
    static constexpr periph_t P = MDMA;
    using T = stm32h723_mdma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, MDMA>
{
    static constexpr periph_t P = MDMA;
    using T = stm32h723_mdma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, MDMA>
{
    static constexpr periph_t P = MDMA;
    using T = stm32h723_mdma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, MDMA>
{
    static constexpr periph_t P = MDMA;
    using T = stm32h723_mdma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, MDMA>
{
    static constexpr periph_t P = MDMA;
    using T = stm32h723_mdma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, MDMA>
{
    static constexpr periph_t P = MDMA;
    using T = stm32h723_mdma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, MDMA>
{
    static constexpr periph_t P = MDMA;
    using T = stm32h723_mdma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, MDMA>
{
    static constexpr periph_t P = MDMA;
    using T = stm32h723_mdma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, MDMA>
{
    static constexpr periph_t P = MDMA;
    using T = stm32h723_mdma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, MDMA>
{
    static constexpr periph_t P = MDMA;
    using T = stm32h723_mdma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, MDMA>
{
    static constexpr periph_t P = MDMA;
    using T = stm32h723_mdma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, MDMA>
{
    static constexpr periph_t P = MDMA;
    using T = stm32h7a3x_mdma_t;
    static T& V;
};

using mdma_t = peripheral_t<svd, MDMA>;

template<int INST> struct mdma_traits {};

template<> struct mdma_traits<0>
{
    using mdma = mdma_t;
    static constexpr clock_source_t CLOCK = AHB_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB3ENR |= RCC::T::AHB3ENR_MDMAEN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB3ENR &= ~RCC::T::AHB3ENR_MDMAEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB3RSTR |= RCC::T::AHB3RSTR_MDMARST;
    }
};
