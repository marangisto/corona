#pragma once

////
//
//      STM32H7 MDMA peripherals
//
////

////
//
//      MDMA
//
////

struct stm32h742x_mdma_t
{
    volatile uint32_t MDMA_GISR0;    // [read-only] MDMA Global Interrupt/Status Register
    reserved_t<0xf> _0x40;
    volatile uint32_t MDMA_C0ISR;    // [read-only] MDMA channel x interrupt/status register
    volatile uint32_t MDMA_C0IFCR;   // [write-only] MDMA channel x interrupt flag clear register
    volatile uint32_t MDMA_C0ESR;    // [read-only] MDMA Channel x error status register
    volatile uint32_t MDMA_C0CR;     // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C0TCR;    // [read-write] This register is used to configure the concerned channel.
    volatile uint32_t MDMA_C0BNDTR;  // [read-write] MDMA Channel x block number of data register
    volatile uint32_t MDMA_C0SAR;    // [read-write] MDMA channel x source address register
    volatile uint32_t MDMA_C0DAR;    // [read-write] MDMA channel x destination address register
    volatile uint32_t MDMA_C0BRUR;   // [read-write] MDMA channel x Block Repeat address Update register
    volatile uint32_t MDMA_C0LAR;    // [read-write] MDMA channel x Link Address register
    volatile uint32_t MDMA_C0TBR;    // [read-write] MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x70;
    volatile uint32_t MDMA_C0MAR;    // [read-write] MDMA channel x Mask address register
    volatile uint32_t MDMA_C0MDR;    // [read-write] MDMA channel x Mask Data register
    reserved_t<0x2> _0x80;
    volatile uint32_t MDMA_C1ISR;    // [read-only] MDMA channel x interrupt/status register
    volatile uint32_t MDMA_C1IFCR;   // [write-only] MDMA channel x interrupt flag clear register
    volatile uint32_t MDMA_C1ESR;    // [read-only] MDMA Channel x error status register
    volatile uint32_t MDMA_C1CR;     // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C1TCR;    // [read-write] This register is used to configure the concerned channel.
    volatile uint32_t MDMA_C1BNDTR;  // [read-write] MDMA Channel x block number of data register
    volatile uint32_t MDMA_C1SAR;    // [read-write] MDMA channel x source address register
    volatile uint32_t MDMA_C1DAR;    // [read-write] MDMA channel x destination address register
    volatile uint32_t MDMA_C1BRUR;   // [read-write] MDMA channel x Block Repeat address Update register
    volatile uint32_t MDMA_C1LAR;    // [read-write] MDMA channel x Link Address register
    volatile uint32_t MDMA_C1TBR;    // [read-write] MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0xb0;
    volatile uint32_t MDMA_C1MAR;    // [read-write] MDMA channel x Mask address register
    volatile uint32_t MDMA_C1MDR;    // [read-write] MDMA channel x Mask Data register
    reserved_t<0x2> _0xc0;
    volatile uint32_t MDMA_C2ISR;    // [read-only] MDMA channel x interrupt/status register
    volatile uint32_t MDMA_C2IFCR;   // [write-only] MDMA channel x interrupt flag clear register
    volatile uint32_t MDMA_C2ESR;    // [read-only] MDMA Channel x error status register
    volatile uint32_t MDMA_C2CR;     // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C2TCR;    // [read-write] This register is used to configure the concerned channel.
    volatile uint32_t MDMA_C2BNDTR;  // [read-write] MDMA Channel x block number of data register
    volatile uint32_t MDMA_C2SAR;    // [read-write] MDMA channel x source address register
    volatile uint32_t MDMA_C2DAR;    // [read-write] MDMA channel x destination address register
    volatile uint32_t MDMA_C2BRUR;   // [read-write] MDMA channel x Block Repeat address Update register
    volatile uint32_t MDMA_C2LAR;    // [read-write] MDMA channel x Link Address register
    volatile uint32_t MDMA_C2TBR;    // [read-write] MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0xf0;
    volatile uint32_t MDMA_C2MAR;    // [read-write] MDMA channel x Mask address register
    volatile uint32_t MDMA_C2MDR;    // [read-write] MDMA channel x Mask Data register
    reserved_t<0x2> _0x100;
    volatile uint32_t MDMA_C3ISR;    // [read-only] MDMA channel x interrupt/status register
    volatile uint32_t MDMA_C3IFCR;   // [write-only] MDMA channel x interrupt flag clear register
    volatile uint32_t MDMA_C3ESR;    // [read-only] MDMA Channel x error status register
    volatile uint32_t MDMA_C3CR;     // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C3TCR;    // [read-write] This register is used to configure the concerned channel.
    volatile uint32_t MDMA_C3BNDTR;  // [read-write] MDMA Channel x block number of data register
    volatile uint32_t MDMA_C3SAR;    // [read-write] MDMA channel x source address register
    volatile uint32_t MDMA_C3DAR;    // [read-write] MDMA channel x destination address register
    volatile uint32_t MDMA_C3BRUR;   // [read-write] MDMA channel x Block Repeat address Update register
    volatile uint32_t MDMA_C3LAR;    // [read-write] MDMA channel x Link Address register
    volatile uint32_t MDMA_C3TBR;    // [read-write] MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x130;
    volatile uint32_t MDMA_C3MAR;    // [read-write] MDMA channel x Mask address register
    volatile uint32_t MDMA_C3MDR;    // [read-write] MDMA channel x Mask Data register
    reserved_t<0x2> _0x140;
    volatile uint32_t MDMA_C4ISR;    // [read-only] MDMA channel x interrupt/status register
    volatile uint32_t MDMA_C4IFCR;   // [write-only] MDMA channel x interrupt flag clear register
    volatile uint32_t MDMA_C4ESR;    // [read-only] MDMA Channel x error status register
    volatile uint32_t MDMA_C4CR;     // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C4TCR;    // [read-write] This register is used to configure the concerned channel.
    volatile uint32_t MDMA_C4BNDTR;  // [read-write] MDMA Channel x block number of data register
    volatile uint32_t MDMA_C4SAR;    // [read-write] MDMA channel x source address register
    volatile uint32_t MDMA_C4DAR;    // [read-write] MDMA channel x destination address register
    volatile uint32_t MDMA_C4BRUR;   // [read-write] MDMA channel x Block Repeat address Update register
    volatile uint32_t MDMA_C4LAR;    // [read-write] MDMA channel x Link Address register
    volatile uint32_t MDMA_C4TBR;    // [read-write] MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x170;
    volatile uint32_t MDMA_C4MAR;    // [read-write] MDMA channel x Mask address register
    volatile uint32_t MDMA_C4MDR;    // [read-write] MDMA channel x Mask Data register
    reserved_t<0x2> _0x180;
    volatile uint32_t MDMA_C5ISR;    // [read-only] MDMA channel x interrupt/status register
    volatile uint32_t MDMA_C5IFCR;   // [write-only] MDMA channel x interrupt flag clear register
    volatile uint32_t MDMA_C5ESR;    // [read-only] MDMA Channel x error status register
    volatile uint32_t MDMA_C5CR;     // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C5TCR;    // [read-write] This register is used to configure the concerned channel.
    volatile uint32_t MDMA_C5BNDTR;  // [read-write] MDMA Channel x block number of data register
    volatile uint32_t MDMA_C5SAR;    // [read-write] MDMA channel x source address register
    volatile uint32_t MDMA_C5DAR;    // [read-write] MDMA channel x destination address register
    volatile uint32_t MDMA_C5BRUR;   // [read-write] MDMA channel x Block Repeat address Update register
    volatile uint32_t MDMA_C5LAR;    // [read-write] MDMA channel x Link Address register
    volatile uint32_t MDMA_C5TBR;    // [read-write] MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x1b0;
    volatile uint32_t MDMA_C5MAR;    // [read-write] MDMA channel x Mask address register
    volatile uint32_t MDMA_C5MDR;    // [read-write] MDMA channel x Mask Data register
    reserved_t<0x2> _0x1c0;
    volatile uint32_t MDMA_C6ISR;    // [read-only] MDMA channel x interrupt/status register
    volatile uint32_t MDMA_C6IFCR;   // [write-only] MDMA channel x interrupt flag clear register
    volatile uint32_t MDMA_C6ESR;    // [read-only] MDMA Channel x error status register
    volatile uint32_t MDMA_C6CR;     // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C6TCR;    // [read-write] This register is used to configure the concerned channel.
    volatile uint32_t MDMA_C6BNDTR;  // [read-write] MDMA Channel x block number of data register
    volatile uint32_t MDMA_C6SAR;    // [read-write] MDMA channel x source address register
    volatile uint32_t MDMA_C6DAR;    // [read-write] MDMA channel x destination address register
    volatile uint32_t MDMA_C6BRUR;   // [read-write] MDMA channel x Block Repeat address Update register
    volatile uint32_t MDMA_C6LAR;    // [read-write] MDMA channel x Link Address register
    volatile uint32_t MDMA_C6TBR;    // [read-write] MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x1f0;
    volatile uint32_t MDMA_C6MAR;    // [read-write] MDMA channel x Mask address register
    volatile uint32_t MDMA_C6MDR;    // [read-write] MDMA channel x Mask Data register
    reserved_t<0x2> _0x200;
    volatile uint32_t MDMA_C7ISR;    // [read-only] MDMA channel x interrupt/status register
    volatile uint32_t MDMA_C7IFCR;   // [write-only] MDMA channel x interrupt flag clear register
    volatile uint32_t MDMA_C7ESR;    // [read-only] MDMA Channel x error status register
    volatile uint32_t MDMA_C7CR;     // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C7TCR;    // [read-write] This register is used to configure the concerned channel.
    volatile uint32_t MDMA_C7BNDTR;  // [read-write] MDMA Channel x block number of data register
    volatile uint32_t MDMA_C7SAR;    // [read-write] MDMA channel x source address register
    volatile uint32_t MDMA_C7DAR;    // [read-write] MDMA channel x destination address register
    volatile uint32_t MDMA_C7BRUR;   // [read-write] MDMA channel x Block Repeat address Update register
    volatile uint32_t MDMA_C7LAR;    // [read-write] MDMA channel x Link Address register
    volatile uint32_t MDMA_C7TBR;    // [read-write] MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x230;
    volatile uint32_t MDMA_C7MAR;    // [read-write] MDMA channel x Mask address register
    volatile uint32_t MDMA_C7MDR;    // [read-write] MDMA channel x Mask Data register
    reserved_t<0x2> _0x240;
    volatile uint32_t MDMA_C8ISR;    // [read-only] MDMA channel x interrupt/status register
    volatile uint32_t MDMA_C8IFCR;   // [write-only] MDMA channel x interrupt flag clear register
    volatile uint32_t MDMA_C8ESR;    // [read-only] MDMA Channel x error status register
    volatile uint32_t MDMA_C8CR;     // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C8TCR;    // [read-write] This register is used to configure the concerned channel.
    volatile uint32_t MDMA_C8BNDTR;  // [read-write] MDMA Channel x block number of data register
    volatile uint32_t MDMA_C8SAR;    // [read-write] MDMA channel x source address register
    volatile uint32_t MDMA_C8DAR;    // [read-write] MDMA channel x destination address register
    volatile uint32_t MDMA_C8BRUR;   // [read-write] MDMA channel x Block Repeat address Update register
    volatile uint32_t MDMA_C8LAR;    // [read-write] MDMA channel x Link Address register
    volatile uint32_t MDMA_C8TBR;    // [read-write] MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x270;
    volatile uint32_t MDMA_C8MAR;    // [read-write] MDMA channel x Mask address register
    volatile uint32_t MDMA_C8MDR;    // [read-write] MDMA channel x Mask Data register
    reserved_t<0x2> _0x280;
    volatile uint32_t MDMA_C9ISR;    // [read-only] MDMA channel x interrupt/status register
    volatile uint32_t MDMA_C9IFCR;   // [write-only] MDMA channel x interrupt flag clear register
    volatile uint32_t MDMA_C9ESR;    // [read-only] MDMA Channel x error status register
    volatile uint32_t MDMA_C9CR;     // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C9TCR;    // [read-write] This register is used to configure the concerned channel.
    volatile uint32_t MDMA_C9BNDTR;  // [read-write] MDMA Channel x block number of data register
    volatile uint32_t MDMA_C9SAR;    // [read-write] MDMA channel x source address register
    volatile uint32_t MDMA_C9DAR;    // [read-write] MDMA channel x destination address register
    volatile uint32_t MDMA_C9BRUR;   // [read-write] MDMA channel x Block Repeat address Update register
    volatile uint32_t MDMA_C9LAR;    // [read-write] MDMA channel x Link Address register
    volatile uint32_t MDMA_C9TBR;    // [read-write] MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x2b0;
    volatile uint32_t MDMA_C9MAR;    // [read-write] MDMA channel x Mask address register
    volatile uint32_t MDMA_C9MDR;    // [read-write] MDMA channel x Mask Data register
    reserved_t<0x2> _0x2c0;
    volatile uint32_t MDMA_C10ISR;   // [read-only] MDMA channel x interrupt/status register
    volatile uint32_t MDMA_C10IFCR;  // [write-only] MDMA channel x interrupt flag clear register
    volatile uint32_t MDMA_C10ESR;   // [read-only] MDMA Channel x error status register
    volatile uint32_t MDMA_C10CR;    // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C10TCR;   // [read-write] This register is used to configure the concerned channel.
    volatile uint32_t MDMA_C10BNDTR; // [read-write] MDMA Channel x block number of data register
    volatile uint32_t MDMA_C10SAR;   // [read-write] MDMA channel x source address register
    volatile uint32_t MDMA_C10DAR;   // [read-write] MDMA channel x destination address register
    volatile uint32_t MDMA_C10BRUR;  // [read-write] MDMA channel x Block Repeat address Update register
    volatile uint32_t MDMA_C10LAR;   // [read-write] MDMA channel x Link Address register
    volatile uint32_t MDMA_C10TBR;   // [read-write] MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x2f0;
    volatile uint32_t MDMA_C10MAR;   // [read-write] MDMA channel x Mask address register
    volatile uint32_t MDMA_C10MDR;   // [read-write] MDMA channel x Mask Data register
    reserved_t<0x2> _0x300;
    volatile uint32_t MDMA_C11ISR;   // [read-only] MDMA channel x interrupt/status register
    volatile uint32_t MDMA_C11IFCR;  // [write-only] MDMA channel x interrupt flag clear register
    volatile uint32_t MDMA_C11ESR;   // [read-only] MDMA Channel x error status register
    volatile uint32_t MDMA_C11CR;    // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C11TCR;   // [read-write] This register is used to configure the concerned channel.
    volatile uint32_t MDMA_C11BNDTR; // [read-write] MDMA Channel x block number of data register
    volatile uint32_t MDMA_C11SAR;   // [read-write] MDMA channel x source address register
    volatile uint32_t MDMA_C11DAR;   // [read-write] MDMA channel x destination address register
    volatile uint32_t MDMA_C11BRUR;  // [read-write] MDMA channel x Block Repeat address Update register
    volatile uint32_t MDMA_C11LAR;   // [read-write] MDMA channel x Link Address register
    volatile uint32_t MDMA_C11TBR;   // [read-write] MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x330;
    volatile uint32_t MDMA_C11MAR;   // [read-write] MDMA channel x Mask address register
    volatile uint32_t MDMA_C11MDR;   // [read-write] MDMA channel x Mask Data register
    reserved_t<0x2> _0x340;
    volatile uint32_t MDMA_C12ISR;   // [read-only] MDMA channel x interrupt/status register
    volatile uint32_t MDMA_C12IFCR;  // [write-only] MDMA channel x interrupt flag clear register
    volatile uint32_t MDMA_C12ESR;   // [read-only] MDMA Channel x error status register
    volatile uint32_t MDMA_C12CR;    // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C12TCR;   // [read-write] This register is used to configure the concerned channel.
    volatile uint32_t MDMA_C12BNDTR; // [read-write] MDMA Channel x block number of data register
    volatile uint32_t MDMA_C12SAR;   // [read-write] MDMA channel x source address register
    volatile uint32_t MDMA_C12DAR;   // [read-write] MDMA channel x destination address register
    volatile uint32_t MDMA_C12BRUR;  // [read-write] MDMA channel x Block Repeat address Update register
    volatile uint32_t MDMA_C12LAR;   // [read-write] MDMA channel x Link Address register
    volatile uint32_t MDMA_C12TBR;   // [read-write] MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x370;
    volatile uint32_t MDMA_C12MAR;   // [read-write] MDMA channel x Mask address register
    volatile uint32_t MDMA_C12MDR;   // [read-write] MDMA channel x Mask Data register
    reserved_t<0x2> _0x380;
    volatile uint32_t MDMA_C13ISR;   // [read-only] MDMA channel x interrupt/status register
    volatile uint32_t MDMA_C13IFCR;  // [write-only] MDMA channel x interrupt flag clear register
    volatile uint32_t MDMA_C13ESR;   // [read-only] MDMA Channel x error status register
    volatile uint32_t MDMA_C13CR;    // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C13TCR;   // [read-write] This register is used to configure the concerned channel.
    volatile uint32_t MDMA_C13BNDTR; // [read-write] MDMA Channel x block number of data register
    volatile uint32_t MDMA_C13SAR;   // [read-write] MDMA channel x source address register
    volatile uint32_t MDMA_C13DAR;   // [read-write] MDMA channel x destination address register
    volatile uint32_t MDMA_C13BRUR;  // [read-write] MDMA channel x Block Repeat address Update register
    volatile uint32_t MDMA_C13LAR;   // [read-write] MDMA channel x Link Address register
    volatile uint32_t MDMA_C13TBR;   // [read-write] MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x3b0;
    volatile uint32_t MDMA_C13MAR;   // [read-write] MDMA channel x Mask address register
    volatile uint32_t MDMA_C13MDR;   // [read-write] MDMA channel x Mask Data register
    reserved_t<0x2> _0x3c0;
    volatile uint32_t MDMA_C14ISR;   // [read-only] MDMA channel x interrupt/status register
    volatile uint32_t MDMA_C14IFCR;  // [write-only] MDMA channel x interrupt flag clear register
    volatile uint32_t MDMA_C14ESR;   // [read-only] MDMA Channel x error status register
    volatile uint32_t MDMA_C14CR;    // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C14TCR;   // [read-write] This register is used to configure the concerned channel.
    volatile uint32_t MDMA_C14BNDTR; // [read-write] MDMA Channel x block number of data register
    volatile uint32_t MDMA_C14SAR;   // [read-write] MDMA channel x source address register
    volatile uint32_t MDMA_C14DAR;   // [read-write] MDMA channel x destination address register
    volatile uint32_t MDMA_C14BRUR;  // [read-write] MDMA channel x Block Repeat address Update register
    volatile uint32_t MDMA_C14LAR;   // [read-write] MDMA channel x Link Address register
    volatile uint32_t MDMA_C14TBR;   // [read-write] MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x3f0;
    volatile uint32_t MDMA_C14MAR;   // [read-write] MDMA channel x Mask address register
    volatile uint32_t MDMA_C14MDR;   // [read-write] MDMA channel x Mask Data register
    reserved_t<0x2> _0x400;
    volatile uint32_t MDMA_C15ISR;   // [read-only] MDMA channel x interrupt/status register
    volatile uint32_t MDMA_C15IFCR;  // [write-only] MDMA channel x interrupt flag clear register
    volatile uint32_t MDMA_C15ESR;   // [read-only] MDMA Channel x error status register
    volatile uint32_t MDMA_C15CR;    // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C15TCR;   // [read-write] This register is used to configure the concerned channel.
    volatile uint32_t MDMA_C15BNDTR; // [read-write] MDMA Channel x block number of data register
    volatile uint32_t MDMA_C15SAR;   // [read-write] MDMA channel x source address register
    volatile uint32_t MDMA_C15DAR;   // [read-write] MDMA channel x destination address register
    volatile uint32_t MDMA_C15BRUR;  // [read-write] MDMA channel x Block Repeat address Update register
    volatile uint32_t MDMA_C15LAR;   // [read-write] MDMA channel x Link Address register
    volatile uint32_t MDMA_C15TBR;   // [read-write] MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x430;
    volatile uint32_t MDMA_C15MAR;   // [read-write] MDMA channel x Mask address register
    volatile uint32_t MDMA_C15MDR;   // [read-write] MDMA channel x Mask Data register

    static constexpr uint32_t MDMA_GISR0_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_GISR0_GIF0 = 0x1;     // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t MDMA_GISR0_GIF1 = 0x2;     // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t MDMA_GISR0_GIF2 = 0x4;     // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t MDMA_GISR0_GIF3 = 0x8;     // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t MDMA_GISR0_GIF4 = 0x10;    // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t MDMA_GISR0_GIF5 = 0x20;    // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t MDMA_GISR0_GIF6 = 0x40;    // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t MDMA_GISR0_GIF7 = 0x80;    // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t MDMA_GISR0_GIF8 = 0x100;   // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t MDMA_GISR0_GIF9 = 0x200;   // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t MDMA_GISR0_GIF10 = 0x400;  // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t MDMA_GISR0_GIF11 = 0x800;  // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t MDMA_GISR0_GIF12 = 0x1000; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t MDMA_GISR0_GIF13 = 0x2000; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t MDMA_GISR0_GIF14 = 0x4000; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t MDMA_GISR0_GIF15 = 0x8000; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)

    static constexpr uint32_t MDMA_C0ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C0ISR_TEIF0 = 0x1;     // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C0ISR_CTCIF0 = 0x2;    // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t MDMA_C0ISR_BRTIF0 = 0x4;    // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C0ISR_BTIF0 = 0x8;     // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C0ISR_TCIF0 = 0x10;    // channel x buffer transfer complete
    static constexpr uint32_t MDMA_C0ISR_CRQA0 = 0x10000; // channel x request active flag

    static constexpr uint32_t MDMA_C0IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C0IFCR_CTEIF0 = 0x1;   // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C0IFCR_CCTCIF0 = 0x2;  // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C0IFCR_CBRTIF0 = 0x4;  // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C0IFCR_CBTIF0 = 0x8;   // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C0IFCR_CLTCIF0 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t MDMA_C0ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C0ESR_TEA =         // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C0ESR_TED = 0x80;   // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t MDMA_C0ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C0ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C0ESR_ASE = 0x400;  // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C0ESR_BSE = 0x800;  // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t MDMA_C0CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C0CR_EN = 0x1;       // channel enable
    static constexpr uint32_t MDMA_C0CR_TEIE = 0x2;     // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C0CR_CTCIE = 0x4;    // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C0CR_BRTIE = 0x8;    // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C0CR_BTIE = 0x10;    // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C0CR_TCIE = 0x20;    // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    template<uint32_t X>
    static constexpr uint32_t MDMA_C0CR_PL =            // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C0CR_BEX = 0x1000;   // byte Endianness exchange
    static constexpr uint32_t MDMA_C0CR_HEX = 0x2000;   // Half word Endianes exchange
    static constexpr uint32_t MDMA_C0CR_WEX = 0x4000;   // Word Endianness exchange
    static constexpr uint32_t MDMA_C0CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t MDMA_C0TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C0TCR_SINC =             // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C0TCR_DINC =             // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C0TCR_SSIZE =            // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C0TCR_DSIZE =            // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C0TCR_SINCOS =           // source increment offset size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C0TCR_DINCOS =           // Destination increment offset
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C0TCR_SBURST =           // source burst transfer configuration
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C0TCR_DBURST =           // Destination burst transfer configuration
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C0TCR_TLEN =             // buffer transfer lengh
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C0TCR_PKE = 0x2000000;   // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    template<uint32_t X>
    static constexpr uint32_t MDMA_C0TCR_PAM =              // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C0TCR_TRGM =             // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C0TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C0TCR_BWM = 0x80000000;  // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t MDMA_C0BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C0BNDTR_BNDT =           // block number of data to transfer
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C0BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C0BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    template<uint32_t X>
    static constexpr uint32_t MDMA_C0BNDTR_BRC =            // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C0SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C0DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C0BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C0BRUR_SUV =   // source adresse update value
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C0BRUR_DUV =   // destination address update
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C0LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C0TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C0TBR_TSEL =          // Trigger selection
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C0TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C0TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.

    static constexpr uint32_t MDMA_C0MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C0MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C1ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C1ISR_TEIF1 = 0x1;     // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C1ISR_CTCIF1 = 0x2;    // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t MDMA_C1ISR_BRTIF1 = 0x4;    // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C1ISR_BTIF1 = 0x8;     // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C1ISR_TCIF1 = 0x10;    // channel x buffer transfer complete
    static constexpr uint32_t MDMA_C1ISR_CRQA1 = 0x10000; // channel x request active flag

    static constexpr uint32_t MDMA_C1IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C1IFCR_CTEIF1 = 0x1;   // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C1IFCR_CCTCIF1 = 0x2;  // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C1IFCR_CBRTIF1 = 0x4;  // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C1IFCR_CBTIF1 = 0x8;   // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C1IFCR_CLTCIF1 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t MDMA_C1ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C1ESR_TEA =         // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C1ESR_TED = 0x80;   // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t MDMA_C1ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C1ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C1ESR_ASE = 0x400;  // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C1ESR_BSE = 0x800;  // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t MDMA_C1CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C1CR_EN = 0x1;       // channel enable
    static constexpr uint32_t MDMA_C1CR_TEIE = 0x2;     // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C1CR_CTCIE = 0x4;    // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C1CR_BRTIE = 0x8;    // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C1CR_BTIE = 0x10;    // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C1CR_TCIE = 0x20;    // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    template<uint32_t X>
    static constexpr uint32_t MDMA_C1CR_PL =            // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C1CR_BEX = 0x1000;   // byte Endianness exchange
    static constexpr uint32_t MDMA_C1CR_HEX = 0x2000;   // Half word Endianes exchange
    static constexpr uint32_t MDMA_C1CR_WEX = 0x4000;   // Word Endianness exchange
    static constexpr uint32_t MDMA_C1CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t MDMA_C1TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C1TCR_SINC =             // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C1TCR_DINC =             // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C1TCR_SSIZE =            // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C1TCR_DSIZE =            // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C1TCR_SINCOS =           // source increment offset size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C1TCR_DINCOS =           // Destination increment offset
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C1TCR_SBURST =           // source burst transfer configuration
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C1TCR_DBURST =           // Destination burst transfer configuration
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C1TCR_TLEN =             // buffer transfer lengh
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C1TCR_PKE = 0x2000000;   // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    template<uint32_t X>
    static constexpr uint32_t MDMA_C1TCR_PAM =              // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C1TCR_TRGM =             // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C1TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C1TCR_BWM = 0x80000000;  // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t MDMA_C1BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C1BNDTR_BNDT =           // block number of data to transfer
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C1BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C1BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    template<uint32_t X>
    static constexpr uint32_t MDMA_C1BNDTR_BRC =            // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C1SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C1DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C1BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C1BRUR_SUV =   // source adresse update value
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C1BRUR_DUV =   // destination address update
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C1LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C1TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C1TBR_TSEL =          // Trigger selection
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C1TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C1TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.

    static constexpr uint32_t MDMA_C1MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C1MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C2ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C2ISR_TEIF2 = 0x1;     // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C2ISR_CTCIF2 = 0x2;    // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t MDMA_C2ISR_BRTIF2 = 0x4;    // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C2ISR_BTIF2 = 0x8;     // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C2ISR_TCIF2 = 0x10;    // channel x buffer transfer complete
    static constexpr uint32_t MDMA_C2ISR_CRQA2 = 0x10000; // channel x request active flag

    static constexpr uint32_t MDMA_C2IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C2IFCR_CTEIF2 = 0x1;   // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C2IFCR_CCTCIF2 = 0x2;  // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C2IFCR_CBRTIF2 = 0x4;  // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C2IFCR_CBTIF2 = 0x8;   // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C2IFCR_CLTCIF2 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t MDMA_C2ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C2ESR_TEA =         // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C2ESR_TED = 0x80;   // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t MDMA_C2ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C2ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C2ESR_ASE = 0x400;  // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C2ESR_BSE = 0x800;  // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t MDMA_C2CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C2CR_EN = 0x1;       // channel enable
    static constexpr uint32_t MDMA_C2CR_TEIE = 0x2;     // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C2CR_CTCIE = 0x4;    // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C2CR_BRTIE = 0x8;    // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C2CR_BTIE = 0x10;    // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C2CR_TCIE = 0x20;    // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    template<uint32_t X>
    static constexpr uint32_t MDMA_C2CR_PL =            // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C2CR_BEX = 0x1000;   // byte Endianness exchange
    static constexpr uint32_t MDMA_C2CR_HEX = 0x2000;   // Half word Endianes exchange
    static constexpr uint32_t MDMA_C2CR_WEX = 0x4000;   // Word Endianness exchange
    static constexpr uint32_t MDMA_C2CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t MDMA_C2TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C2TCR_SINC =             // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C2TCR_DINC =             // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C2TCR_SSIZE =            // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C2TCR_DSIZE =            // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C2TCR_SINCOS =           // source increment offset size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C2TCR_DINCOS =           // Destination increment offset
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C2TCR_SBURST =           // source burst transfer configuration
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C2TCR_DBURST =           // Destination burst transfer configuration
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C2TCR_TLEN =             // buffer transfer lengh
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C2TCR_PKE = 0x2000000;   // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    template<uint32_t X>
    static constexpr uint32_t MDMA_C2TCR_PAM =              // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C2TCR_TRGM =             // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C2TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C2TCR_BWM = 0x80000000;  // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t MDMA_C2BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C2BNDTR_BNDT =           // block number of data to transfer
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C2BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C2BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    template<uint32_t X>
    static constexpr uint32_t MDMA_C2BNDTR_BRC =            // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C2SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C2DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C2BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C2BRUR_SUV =   // source adresse update value
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C2BRUR_DUV =   // destination address update
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C2LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C2TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C2TBR_TSEL =          // Trigger selection
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C2TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C2TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.

    static constexpr uint32_t MDMA_C2MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C2MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C3ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C3ISR_TEIF3 = 0x1;     // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C3ISR_CTCIF3 = 0x2;    // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t MDMA_C3ISR_BRTIF3 = 0x4;    // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C3ISR_BTIF3 = 0x8;     // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C3ISR_TCIF3 = 0x10;    // channel x buffer transfer complete
    static constexpr uint32_t MDMA_C3ISR_CRQA3 = 0x10000; // channel x request active flag

    static constexpr uint32_t MDMA_C3IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C3IFCR_CTEIF3 = 0x1;   // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C3IFCR_CCTCIF3 = 0x2;  // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C3IFCR_CBRTIF3 = 0x4;  // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C3IFCR_CBTIF3 = 0x8;   // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C3IFCR_CLTCIF3 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t MDMA_C3ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C3ESR_TEA =         // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C3ESR_TED = 0x80;   // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t MDMA_C3ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C3ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C3ESR_ASE = 0x400;  // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C3ESR_BSE = 0x800;  // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t MDMA_C3CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C3CR_EN = 0x1;       // channel enable
    static constexpr uint32_t MDMA_C3CR_TEIE = 0x2;     // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C3CR_CTCIE = 0x4;    // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C3CR_BRTIE = 0x8;    // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C3CR_BTIE = 0x10;    // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C3CR_TCIE = 0x20;    // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    template<uint32_t X>
    static constexpr uint32_t MDMA_C3CR_PL =            // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C3CR_BEX = 0x1000;   // byte Endianness exchange
    static constexpr uint32_t MDMA_C3CR_HEX = 0x2000;   // Half word Endianes exchange
    static constexpr uint32_t MDMA_C3CR_WEX = 0x4000;   // Word Endianness exchange
    static constexpr uint32_t MDMA_C3CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t MDMA_C3TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C3TCR_SINC =             // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C3TCR_DINC =             // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C3TCR_SSIZE =            // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C3TCR_DSIZE =            // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C3TCR_SINCOS =           // source increment offset size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C3TCR_DINCOS =           // Destination increment offset
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C3TCR_SBURST =           // source burst transfer configuration
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C3TCR_DBURST =           // Destination burst transfer configuration
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C3TCR_TLEN =             // buffer transfer lengh
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C3TCR_PKE = 0x2000000;   // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    template<uint32_t X>
    static constexpr uint32_t MDMA_C3TCR_PAM =              // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C3TCR_TRGM =             // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C3TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C3TCR_BWM = 0x80000000;  // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t MDMA_C3BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C3BNDTR_BNDT =           // block number of data to transfer
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C3BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C3BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    template<uint32_t X>
    static constexpr uint32_t MDMA_C3BNDTR_BRC =            // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C3SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C3DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C3BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C3BRUR_SUV =   // source adresse update value
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C3BRUR_DUV =   // destination address update
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C3LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C3TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C3TBR_TSEL =          // Trigger selection
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C3TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C3TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.

    static constexpr uint32_t MDMA_C3MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C3MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C4ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C4ISR_TEIF4 = 0x1;     // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C4ISR_CTCIF4 = 0x2;    // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t MDMA_C4ISR_BRTIF4 = 0x4;    // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C4ISR_BTIF4 = 0x8;     // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C4ISR_TCIF4 = 0x10;    // channel x buffer transfer complete
    static constexpr uint32_t MDMA_C4ISR_CRQA4 = 0x10000; // channel x request active flag

    static constexpr uint32_t MDMA_C4IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C4IFCR_CTEIF4 = 0x1;   // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C4IFCR_CCTCIF4 = 0x2;  // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C4IFCR_CBRTIF4 = 0x4;  // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C4IFCR_CBTIF4 = 0x8;   // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C4IFCR_CLTCIF4 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t MDMA_C4ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C4ESR_TEA =         // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C4ESR_TED = 0x80;   // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t MDMA_C4ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C4ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C4ESR_ASE = 0x400;  // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C4ESR_BSE = 0x800;  // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t MDMA_C4CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C4CR_EN = 0x1;       // channel enable
    static constexpr uint32_t MDMA_C4CR_TEIE = 0x2;     // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C4CR_CTCIE = 0x4;    // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C4CR_BRTIE = 0x8;    // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C4CR_BTIE = 0x10;    // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C4CR_TCIE = 0x20;    // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    template<uint32_t X>
    static constexpr uint32_t MDMA_C4CR_PL =            // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C4CR_BEX = 0x1000;   // byte Endianness exchange
    static constexpr uint32_t MDMA_C4CR_HEX = 0x2000;   // Half word Endianes exchange
    static constexpr uint32_t MDMA_C4CR_WEX = 0x4000;   // Word Endianness exchange
    static constexpr uint32_t MDMA_C4CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t MDMA_C4TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C4TCR_SINC =             // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C4TCR_DINC =             // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C4TCR_SSIZE =            // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C4TCR_DSIZE =            // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C4TCR_SINCOS =           // source increment offset size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C4TCR_DINCOS =           // Destination increment offset
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C4TCR_SBURST =           // source burst transfer configuration
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C4TCR_DBURST =           // Destination burst transfer configuration
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C4TCR_TLEN =             // buffer transfer lengh
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C4TCR_PKE = 0x2000000;   // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    template<uint32_t X>
    static constexpr uint32_t MDMA_C4TCR_PAM =              // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C4TCR_TRGM =             // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C4TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C4TCR_BWM = 0x80000000;  // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t MDMA_C4BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C4BNDTR_BNDT =           // block number of data to transfer
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C4BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C4BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    template<uint32_t X>
    static constexpr uint32_t MDMA_C4BNDTR_BRC =            // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C4SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C4DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C4BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C4BRUR_SUV =   // source adresse update value
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C4BRUR_DUV =   // destination address update
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C4LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C4TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C4TBR_TSEL =          // Trigger selection
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C4TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C4TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.

    static constexpr uint32_t MDMA_C4MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C4MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C5ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C5ISR_TEIF5 = 0x1;     // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C5ISR_CTCIF5 = 0x2;    // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t MDMA_C5ISR_BRTIF5 = 0x4;    // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C5ISR_BTIF5 = 0x8;     // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C5ISR_TCIF5 = 0x10;    // channel x buffer transfer complete
    static constexpr uint32_t MDMA_C5ISR_CRQA5 = 0x10000; // channel x request active flag

    static constexpr uint32_t MDMA_C5IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C5IFCR_CTEIF5 = 0x1;   // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C5IFCR_CCTCIF5 = 0x2;  // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C5IFCR_CBRTIF5 = 0x4;  // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C5IFCR_CBTIF5 = 0x8;   // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C5IFCR_CLTCIF5 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t MDMA_C5ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C5ESR_TEA =         // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C5ESR_TED = 0x80;   // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t MDMA_C5ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C5ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C5ESR_ASE = 0x400;  // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C5ESR_BSE = 0x800;  // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t MDMA_C5CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C5CR_EN = 0x1;       // channel enable
    static constexpr uint32_t MDMA_C5CR_TEIE = 0x2;     // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C5CR_CTCIE = 0x4;    // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C5CR_BRTIE = 0x8;    // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C5CR_BTIE = 0x10;    // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C5CR_TCIE = 0x20;    // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    template<uint32_t X>
    static constexpr uint32_t MDMA_C5CR_PL =            // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C5CR_BEX = 0x1000;   // byte Endianness exchange
    static constexpr uint32_t MDMA_C5CR_HEX = 0x2000;   // Half word Endianes exchange
    static constexpr uint32_t MDMA_C5CR_WEX = 0x4000;   // Word Endianness exchange
    static constexpr uint32_t MDMA_C5CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t MDMA_C5TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C5TCR_SINC =             // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C5TCR_DINC =             // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C5TCR_SSIZE =            // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C5TCR_DSIZE =            // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C5TCR_SINCOS =           // source increment offset size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C5TCR_DINCOS =           // Destination increment offset
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C5TCR_SBURST =           // source burst transfer configuration
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C5TCR_DBURST =           // Destination burst transfer configuration
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C5TCR_TLEN =             // buffer transfer lengh
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C5TCR_PKE = 0x2000000;   // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    template<uint32_t X>
    static constexpr uint32_t MDMA_C5TCR_PAM =              // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C5TCR_TRGM =             // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C5TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C5TCR_BWM = 0x80000000;  // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t MDMA_C5BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C5BNDTR_BNDT =           // block number of data to transfer
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C5BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C5BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    template<uint32_t X>
    static constexpr uint32_t MDMA_C5BNDTR_BRC =            // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C5SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C5DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C5BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C5BRUR_SUV =   // source adresse update value
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C5BRUR_DUV =   // destination address update
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C5LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C5TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C5TBR_TSEL =          // Trigger selection
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C5TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C5TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.

    static constexpr uint32_t MDMA_C5MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C5MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C6ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C6ISR_TEIF6 = 0x1;     // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C6ISR_CTCIF6 = 0x2;    // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t MDMA_C6ISR_BRTIF6 = 0x4;    // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C6ISR_BTIF6 = 0x8;     // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C6ISR_TCIF6 = 0x10;    // channel x buffer transfer complete
    static constexpr uint32_t MDMA_C6ISR_CRQA6 = 0x10000; // channel x request active flag

    static constexpr uint32_t MDMA_C6IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C6IFCR_CTEIF6 = 0x1;   // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C6IFCR_CCTCIF6 = 0x2;  // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C6IFCR_CBRTIF6 = 0x4;  // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C6IFCR_CBTIF6 = 0x8;   // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C6IFCR_CLTCIF6 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t MDMA_C6ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C6ESR_TEA =         // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C6ESR_TED = 0x80;   // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t MDMA_C6ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C6ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C6ESR_ASE = 0x400;  // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C6ESR_BSE = 0x800;  // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t MDMA_C6CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C6CR_EN = 0x1;       // channel enable
    static constexpr uint32_t MDMA_C6CR_TEIE = 0x2;     // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C6CR_CTCIE = 0x4;    // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C6CR_BRTIE = 0x8;    // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C6CR_BTIE = 0x10;    // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C6CR_TCIE = 0x20;    // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    template<uint32_t X>
    static constexpr uint32_t MDMA_C6CR_PL =            // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C6CR_BEX = 0x1000;   // byte Endianness exchange
    static constexpr uint32_t MDMA_C6CR_HEX = 0x2000;   // Half word Endianes exchange
    static constexpr uint32_t MDMA_C6CR_WEX = 0x4000;   // Word Endianness exchange
    static constexpr uint32_t MDMA_C6CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t MDMA_C6TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C6TCR_SINC =             // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C6TCR_DINC =             // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C6TCR_SSIZE =            // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C6TCR_DSIZE =            // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C6TCR_SINCOS =           // source increment offset size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C6TCR_DINCOS =           // Destination increment offset
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C6TCR_SBURST =           // source burst transfer configuration
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C6TCR_DBURST =           // Destination burst transfer configuration
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C6TCR_TLEN =             // buffer transfer lengh
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C6TCR_PKE = 0x2000000;   // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    template<uint32_t X>
    static constexpr uint32_t MDMA_C6TCR_PAM =              // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C6TCR_TRGM =             // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C6TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C6TCR_BWM = 0x80000000;  // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t MDMA_C6BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C6BNDTR_BNDT =           // block number of data to transfer
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C6BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C6BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    template<uint32_t X>
    static constexpr uint32_t MDMA_C6BNDTR_BRC =            // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C6SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C6DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C6BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C6BRUR_SUV =   // source adresse update value
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C6BRUR_DUV =   // destination address update
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C6LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C6TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C6TBR_TSEL =          // Trigger selection
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C6TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C6TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.

    static constexpr uint32_t MDMA_C6MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C6MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C7ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C7ISR_TEIF7 = 0x1;     // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C7ISR_CTCIF7 = 0x2;    // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t MDMA_C7ISR_BRTIF7 = 0x4;    // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C7ISR_BTIF7 = 0x8;     // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C7ISR_TCIF7 = 0x10;    // channel x buffer transfer complete
    static constexpr uint32_t MDMA_C7ISR_CRQA7 = 0x10000; // channel x request active flag

    static constexpr uint32_t MDMA_C7IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C7IFCR_CTEIF7 = 0x1;   // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C7IFCR_CCTCIF7 = 0x2;  // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C7IFCR_CBRTIF7 = 0x4;  // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C7IFCR_CBTIF7 = 0x8;   // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C7IFCR_CLTCIF7 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t MDMA_C7ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C7ESR_TEA =         // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C7ESR_TED = 0x80;   // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t MDMA_C7ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C7ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C7ESR_ASE = 0x400;  // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C7ESR_BSE = 0x800;  // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t MDMA_C7CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C7CR_EN = 0x1;       // channel enable
    static constexpr uint32_t MDMA_C7CR_TEIE = 0x2;     // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C7CR_CTCIE = 0x4;    // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C7CR_BRTIE = 0x8;    // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C7CR_BTIE = 0x10;    // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C7CR_TCIE = 0x20;    // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    template<uint32_t X>
    static constexpr uint32_t MDMA_C7CR_PL =            // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C7CR_BEX = 0x1000;   // byte Endianness exchange
    static constexpr uint32_t MDMA_C7CR_HEX = 0x2000;   // Half word Endianes exchange
    static constexpr uint32_t MDMA_C7CR_WEX = 0x4000;   // Word Endianness exchange
    static constexpr uint32_t MDMA_C7CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t MDMA_C7TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C7TCR_SINC =             // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C7TCR_DINC =             // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C7TCR_SSIZE =            // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C7TCR_DSIZE =            // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C7TCR_SINCOS =           // source increment offset size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C7TCR_DINCOS =           // Destination increment offset
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C7TCR_SBURST =           // source burst transfer configuration
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C7TCR_DBURST =           // Destination burst transfer configuration
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C7TCR_TLEN =             // buffer transfer lengh
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C7TCR_PKE = 0x2000000;   // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    template<uint32_t X>
    static constexpr uint32_t MDMA_C7TCR_PAM =              // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C7TCR_TRGM =             // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C7TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C7TCR_BWM = 0x80000000;  // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t MDMA_C7BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C7BNDTR_BNDT =           // block number of data to transfer
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C7BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C7BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    template<uint32_t X>
    static constexpr uint32_t MDMA_C7BNDTR_BRC =            // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C7SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C7DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C7BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C7BRUR_SUV =   // source adresse update value
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C7BRUR_DUV =   // destination address update
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C7LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C7TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C7TBR_TSEL =          // Trigger selection
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C7TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C7TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.

    static constexpr uint32_t MDMA_C7MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C7MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C8ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C8ISR_TEIF8 = 0x1;     // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C8ISR_CTCIF8 = 0x2;    // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t MDMA_C8ISR_BRTIF8 = 0x4;    // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C8ISR_BTIF8 = 0x8;     // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C8ISR_TCIF8 = 0x10;    // channel x buffer transfer complete
    static constexpr uint32_t MDMA_C8ISR_CRQA8 = 0x10000; // channel x request active flag

    static constexpr uint32_t MDMA_C8IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C8IFCR_CTEIF8 = 0x1;   // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C8IFCR_CCTCIF8 = 0x2;  // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C8IFCR_CBRTIF8 = 0x4;  // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C8IFCR_CBTIF8 = 0x8;   // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C8IFCR_CLTCIF8 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t MDMA_C8ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C8ESR_TEA =         // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C8ESR_TED = 0x80;   // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t MDMA_C8ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C8ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C8ESR_ASE = 0x400;  // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C8ESR_BSE = 0x800;  // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t MDMA_C8CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C8CR_EN = 0x1;       // channel enable
    static constexpr uint32_t MDMA_C8CR_TEIE = 0x2;     // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C8CR_CTCIE = 0x4;    // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C8CR_BRTIE = 0x8;    // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C8CR_BTIE = 0x10;    // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C8CR_TCIE = 0x20;    // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    template<uint32_t X>
    static constexpr uint32_t MDMA_C8CR_PL =            // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C8CR_BEX = 0x1000;   // byte Endianness exchange
    static constexpr uint32_t MDMA_C8CR_HEX = 0x2000;   // Half word Endianes exchange
    static constexpr uint32_t MDMA_C8CR_WEX = 0x4000;   // Word Endianness exchange
    static constexpr uint32_t MDMA_C8CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t MDMA_C8TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C8TCR_SINC =             // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C8TCR_DINC =             // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C8TCR_SSIZE =            // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C8TCR_DSIZE =            // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C8TCR_SINCOS =           // source increment offset size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C8TCR_DINCOS =           // Destination increment offset
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C8TCR_SBURST =           // source burst transfer configuration
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C8TCR_DBURST =           // Destination burst transfer configuration
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C8TCR_TLEN =             // buffer transfer lengh
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C8TCR_PKE = 0x2000000;   // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    template<uint32_t X>
    static constexpr uint32_t MDMA_C8TCR_PAM =              // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C8TCR_TRGM =             // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C8TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C8TCR_BWM = 0x80000000;  // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t MDMA_C8BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C8BNDTR_BNDT =           // block number of data to transfer
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C8BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C8BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    template<uint32_t X>
    static constexpr uint32_t MDMA_C8BNDTR_BRC =            // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C8SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C8DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C8BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C8BRUR_SUV =   // source adresse update value
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C8BRUR_DUV =   // destination address update
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C8LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C8TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C8TBR_TSEL =          // Trigger selection
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C8TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C8TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.

    static constexpr uint32_t MDMA_C8MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C8MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C9ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C9ISR_TEIF9 = 0x1;     // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C9ISR_CTCIF9 = 0x2;    // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t MDMA_C9ISR_BRTIF9 = 0x4;    // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C9ISR_BTIF9 = 0x8;     // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C9ISR_TCIF9 = 0x10;    // channel x buffer transfer complete
    static constexpr uint32_t MDMA_C9ISR_CRQA9 = 0x10000; // channel x request active flag

    static constexpr uint32_t MDMA_C9IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C9IFCR_CTEIF9 = 0x1;   // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C9IFCR_CCTCIF9 = 0x2;  // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C9IFCR_CBRTIF9 = 0x4;  // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C9IFCR_CBTIF9 = 0x8;   // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C9IFCR_CLTCIF9 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t MDMA_C9ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C9ESR_TEA =         // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C9ESR_TED = 0x80;   // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t MDMA_C9ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C9ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C9ESR_ASE = 0x400;  // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C9ESR_BSE = 0x800;  // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t MDMA_C9CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C9CR_EN = 0x1;       // channel enable
    static constexpr uint32_t MDMA_C9CR_TEIE = 0x2;     // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C9CR_CTCIE = 0x4;    // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C9CR_BRTIE = 0x8;    // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C9CR_BTIE = 0x10;    // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C9CR_TCIE = 0x20;    // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    template<uint32_t X>
    static constexpr uint32_t MDMA_C9CR_PL =            // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C9CR_BEX = 0x1000;   // byte Endianness exchange
    static constexpr uint32_t MDMA_C9CR_HEX = 0x2000;   // Half word Endianes exchange
    static constexpr uint32_t MDMA_C9CR_WEX = 0x4000;   // Word Endianness exchange
    static constexpr uint32_t MDMA_C9CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t MDMA_C9TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C9TCR_SINC =             // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C9TCR_DINC =             // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C9TCR_SSIZE =            // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C9TCR_DSIZE =            // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C9TCR_SINCOS =           // source increment offset size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C9TCR_DINCOS =           // Destination increment offset
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C9TCR_SBURST =           // source burst transfer configuration
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C9TCR_DBURST =           // Destination burst transfer configuration
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C9TCR_TLEN =             // buffer transfer lengh
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C9TCR_PKE = 0x2000000;   // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    template<uint32_t X>
    static constexpr uint32_t MDMA_C9TCR_PAM =              // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C9TCR_TRGM =             // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C9TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C9TCR_BWM = 0x80000000;  // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t MDMA_C9BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C9BNDTR_BNDT =           // block number of data to transfer
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C9BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C9BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    template<uint32_t X>
    static constexpr uint32_t MDMA_C9BNDTR_BRC =            // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C9SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C9DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C9BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C9BRUR_SUV =   // source adresse update value
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C9BRUR_DUV =   // destination address update
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C9LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C9TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C9TBR_TSEL =          // Trigger selection
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C9TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C9TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.

    static constexpr uint32_t MDMA_C9MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C9MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C10ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C10ISR_TEIF10 = 0x1;     // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C10ISR_CTCIF10 = 0x2;    // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t MDMA_C10ISR_BRTIF10 = 0x4;    // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C10ISR_BTIF10 = 0x8;     // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C10ISR_TCIF10 = 0x10;    // channel x buffer transfer complete
    static constexpr uint32_t MDMA_C10ISR_CRQA10 = 0x10000; // channel x request active flag

    static constexpr uint32_t MDMA_C10IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C10IFCR_CTEIF10 = 0x1;   // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C10IFCR_CCTCIF10 = 0x2;  // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C10IFCR_CBRTIF10 = 0x4;  // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C10IFCR_CBTIF10 = 0x8;   // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C10IFCR_CLTCIF10 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t MDMA_C10ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C10ESR_TEA =         // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C10ESR_TED = 0x80;   // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t MDMA_C10ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C10ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C10ESR_ASE = 0x400;  // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C10ESR_BSE = 0x800;  // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t MDMA_C10CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C10CR_EN = 0x1;       // channel enable
    static constexpr uint32_t MDMA_C10CR_TEIE = 0x2;     // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C10CR_CTCIE = 0x4;    // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C10CR_BRTIE = 0x8;    // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C10CR_BTIE = 0x10;    // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C10CR_TCIE = 0x20;    // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    template<uint32_t X>
    static constexpr uint32_t MDMA_C10CR_PL =            // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C10CR_BEX = 0x1000;   // byte Endianness exchange
    static constexpr uint32_t MDMA_C10CR_HEX = 0x2000;   // Half word Endianes exchange
    static constexpr uint32_t MDMA_C10CR_WEX = 0x4000;   // Word Endianness exchange
    static constexpr uint32_t MDMA_C10CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t MDMA_C10TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C10TCR_SINC =             // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C10TCR_DINC =             // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C10TCR_SSIZE =            // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C10TCR_DSIZE =            // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C10TCR_SINCOS =           // source increment offset size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C10TCR_DINCOS =           // Destination increment offset
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C10TCR_SBURST =           // source burst transfer configuration
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C10TCR_DBURST =           // Destination burst transfer configuration
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C10TCR_TLEN =             // buffer transfer lengh
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C10TCR_PKE = 0x2000000;   // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    template<uint32_t X>
    static constexpr uint32_t MDMA_C10TCR_PAM =              // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C10TCR_TRGM =             // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C10TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C10TCR_BWM = 0x80000000;  // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t MDMA_C10BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C10BNDTR_BNDT =           // block number of data to transfer
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C10BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C10BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    template<uint32_t X>
    static constexpr uint32_t MDMA_C10BNDTR_BRC =            // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C10SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C10DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C10BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C10BRUR_SUV =   // source adresse update value
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C10BRUR_DUV =   // destination address update
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C10LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C10TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C10TBR_TSEL =          // Trigger selection
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C10TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C10TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.

    static constexpr uint32_t MDMA_C10MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C10MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C11ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C11ISR_TEIF11 = 0x1;     // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C11ISR_CTCIF11 = 0x2;    // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t MDMA_C11ISR_BRTIF11 = 0x4;    // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C11ISR_BTIF11 = 0x8;     // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C11ISR_TCIF11 = 0x10;    // channel x buffer transfer complete
    static constexpr uint32_t MDMA_C11ISR_CRQA11 = 0x10000; // channel x request active flag

    static constexpr uint32_t MDMA_C11IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C11IFCR_CTEIF11 = 0x1;   // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C11IFCR_CCTCIF11 = 0x2;  // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C11IFCR_CBRTIF11 = 0x4;  // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C11IFCR_CBTIF11 = 0x8;   // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C11IFCR_CLTCIF11 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t MDMA_C11ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C11ESR_TEA =         // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C11ESR_TED = 0x80;   // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t MDMA_C11ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C11ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C11ESR_ASE = 0x400;  // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C11ESR_BSE = 0x800;  // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t MDMA_C11CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C11CR_EN = 0x1;       // channel enable
    static constexpr uint32_t MDMA_C11CR_TEIE = 0x2;     // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C11CR_CTCIE = 0x4;    // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C11CR_BRTIE = 0x8;    // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C11CR_BTIE = 0x10;    // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C11CR_TCIE = 0x20;    // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    template<uint32_t X>
    static constexpr uint32_t MDMA_C11CR_PL =            // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C11CR_BEX = 0x1000;   // byte Endianness exchange
    static constexpr uint32_t MDMA_C11CR_HEX = 0x2000;   // Half word Endianes exchange
    static constexpr uint32_t MDMA_C11CR_WEX = 0x4000;   // Word Endianness exchange
    static constexpr uint32_t MDMA_C11CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t MDMA_C11TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C11TCR_SINC =             // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C11TCR_DINC =             // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C11TCR_SSIZE =            // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C11TCR_DSIZE =            // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C11TCR_SINCOS =           // source increment offset size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C11TCR_DINCOS =           // Destination increment offset
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C11TCR_SBURST =           // source burst transfer configuration
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C11TCR_DBURST =           // Destination burst transfer configuration
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C11TCR_TLEN =             // buffer transfer lengh
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C11TCR_PKE = 0x2000000;   // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    template<uint32_t X>
    static constexpr uint32_t MDMA_C11TCR_PAM =              // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C11TCR_TRGM =             // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C11TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C11TCR_BWM = 0x80000000;  // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t MDMA_C11BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C11BNDTR_BNDT =           // block number of data to transfer
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C11BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C11BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    template<uint32_t X>
    static constexpr uint32_t MDMA_C11BNDTR_BRC =            // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C11SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C11DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C11BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C11BRUR_SUV =   // source adresse update value
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C11BRUR_DUV =   // destination address update
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C11LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C11TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C11TBR_TSEL =          // Trigger selection
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C11TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C11TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.

    static constexpr uint32_t MDMA_C11MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C11MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C12ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C12ISR_TEIF12 = 0x1;     // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C12ISR_CTCIF12 = 0x2;    // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t MDMA_C12ISR_BRTIF12 = 0x4;    // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C12ISR_BTIF12 = 0x8;     // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C12ISR_TCIF12 = 0x10;    // channel x buffer transfer complete
    static constexpr uint32_t MDMA_C12ISR_CRQA12 = 0x10000; // channel x request active flag

    static constexpr uint32_t MDMA_C12IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C12IFCR_CTEIF12 = 0x1;   // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C12IFCR_CCTCIF12 = 0x2;  // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C12IFCR_CBRTIF12 = 0x4;  // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C12IFCR_CBTIF12 = 0x8;   // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C12IFCR_CLTCIF12 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t MDMA_C12ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C12ESR_TEA =         // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C12ESR_TED = 0x80;   // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t MDMA_C12ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C12ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C12ESR_ASE = 0x400;  // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C12ESR_BSE = 0x800;  // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t MDMA_C12CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C12CR_EN = 0x1;       // channel enable
    static constexpr uint32_t MDMA_C12CR_TEIE = 0x2;     // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C12CR_CTCIE = 0x4;    // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C12CR_BRTIE = 0x8;    // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C12CR_BTIE = 0x10;    // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C12CR_TCIE = 0x20;    // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    template<uint32_t X>
    static constexpr uint32_t MDMA_C12CR_PL =            // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C12CR_BEX = 0x1000;   // byte Endianness exchange
    static constexpr uint32_t MDMA_C12CR_HEX = 0x2000;   // Half word Endianes exchange
    static constexpr uint32_t MDMA_C12CR_WEX = 0x4000;   // Word Endianness exchange
    static constexpr uint32_t MDMA_C12CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t MDMA_C12TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C12TCR_SINC =             // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C12TCR_DINC =             // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C12TCR_SSIZE =            // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C12TCR_DSIZE =            // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C12TCR_SINCOS =           // source increment offset size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C12TCR_DINCOS =           // Destination increment offset
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C12TCR_SBURST =           // source burst transfer configuration
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C12TCR_DBURST =           // Destination burst transfer configuration
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C12TCR_TLEN =             // buffer transfer lengh
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C12TCR_PKE = 0x2000000;   // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    template<uint32_t X>
    static constexpr uint32_t MDMA_C12TCR_PAM =              // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C12TCR_TRGM =             // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C12TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C12TCR_BWM = 0x80000000;  // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t MDMA_C12BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C12BNDTR_BNDT =           // block number of data to transfer
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C12BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C12BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    template<uint32_t X>
    static constexpr uint32_t MDMA_C12BNDTR_BRC =            // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C12SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C12DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C12BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C12BRUR_SUV =   // source adresse update value
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C12BRUR_DUV =   // destination address update
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C12LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C12TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C12TBR_TSEL =          // Trigger selection
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C12TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C12TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.

    static constexpr uint32_t MDMA_C12MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C12MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C13ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C13ISR_TEIF13 = 0x1;     // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C13ISR_CTCIF13 = 0x2;    // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t MDMA_C13ISR_BRTIF13 = 0x4;    // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C13ISR_BTIF13 = 0x8;     // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C13ISR_TCIF13 = 0x10;    // channel x buffer transfer complete
    static constexpr uint32_t MDMA_C13ISR_CRQA13 = 0x10000; // channel x request active flag

    static constexpr uint32_t MDMA_C13IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C13IFCR_CTEIF13 = 0x1;   // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C13IFCR_CCTCIF13 = 0x2;  // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C13IFCR_CBRTIF13 = 0x4;  // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C13IFCR_CBTIF13 = 0x8;   // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C13IFCR_CLTCIF13 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t MDMA_C13ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C13ESR_TEA =         // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C13ESR_TED = 0x80;   // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t MDMA_C13ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C13ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C13ESR_ASE = 0x400;  // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C13ESR_BSE = 0x800;  // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t MDMA_C13CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C13CR_EN = 0x1;       // channel enable
    static constexpr uint32_t MDMA_C13CR_TEIE = 0x2;     // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C13CR_CTCIE = 0x4;    // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C13CR_BRTIE = 0x8;    // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C13CR_BTIE = 0x10;    // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C13CR_TCIE = 0x20;    // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    template<uint32_t X>
    static constexpr uint32_t MDMA_C13CR_PL =            // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C13CR_BEX = 0x1000;   // byte Endianness exchange
    static constexpr uint32_t MDMA_C13CR_HEX = 0x2000;   // Half word Endianes exchange
    static constexpr uint32_t MDMA_C13CR_WEX = 0x4000;   // Word Endianness exchange
    static constexpr uint32_t MDMA_C13CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t MDMA_C13TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C13TCR_SINC =             // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C13TCR_DINC =             // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C13TCR_SSIZE =            // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C13TCR_DSIZE =            // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C13TCR_SINCOS =           // source increment offset size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C13TCR_DINCOS =           // Destination increment offset
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C13TCR_SBURST =           // source burst transfer configuration
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C13TCR_DBURST =           // Destination burst transfer configuration
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C13TCR_TLEN =             // buffer transfer lengh
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C13TCR_PKE = 0x2000000;   // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    template<uint32_t X>
    static constexpr uint32_t MDMA_C13TCR_PAM =              // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C13TCR_TRGM =             // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C13TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C13TCR_BWM = 0x80000000;  // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t MDMA_C13BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C13BNDTR_BNDT =           // block number of data to transfer
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C13BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C13BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    template<uint32_t X>
    static constexpr uint32_t MDMA_C13BNDTR_BRC =            // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C13SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C13DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C13BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C13BRUR_SUV =   // source adresse update value
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C13BRUR_DUV =   // destination address update
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C13LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C13TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C13TBR_TSEL =          // Trigger selection
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C13TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C13TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.

    static constexpr uint32_t MDMA_C13MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C13MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C14ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C14ISR_TEIF14 = 0x1;     // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C14ISR_CTCIF14 = 0x2;    // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t MDMA_C14ISR_BRTIF14 = 0x4;    // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C14ISR_BTIF14 = 0x8;     // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C14ISR_TCIF14 = 0x10;    // channel x buffer transfer complete
    static constexpr uint32_t MDMA_C14ISR_CRQA14 = 0x10000; // channel x request active flag

    static constexpr uint32_t MDMA_C14IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C14IFCR_CTEIF14 = 0x1;   // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C14IFCR_CCTCIF14 = 0x2;  // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C14IFCR_CBRTIF14 = 0x4;  // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C14IFCR_CBTIF14 = 0x8;   // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C14IFCR_CLTCIF14 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t MDMA_C14ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C14ESR_TEA =         // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C14ESR_TED = 0x80;   // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t MDMA_C14ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C14ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C14ESR_ASE = 0x400;  // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C14ESR_BSE = 0x800;  // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t MDMA_C14CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C14CR_EN = 0x1;       // channel enable
    static constexpr uint32_t MDMA_C14CR_TEIE = 0x2;     // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C14CR_CTCIE = 0x4;    // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C14CR_BRTIE = 0x8;    // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C14CR_BTIE = 0x10;    // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C14CR_TCIE = 0x20;    // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    template<uint32_t X>
    static constexpr uint32_t MDMA_C14CR_PL =            // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C14CR_BEX = 0x1000;   // byte Endianness exchange
    static constexpr uint32_t MDMA_C14CR_HEX = 0x2000;   // Half word Endianes exchange
    static constexpr uint32_t MDMA_C14CR_WEX = 0x4000;   // Word Endianness exchange
    static constexpr uint32_t MDMA_C14CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t MDMA_C14TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C14TCR_SINC =             // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C14TCR_DINC =             // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C14TCR_SSIZE =            // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C14TCR_DSIZE =            // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C14TCR_SINCOS =           // source increment offset size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C14TCR_DINCOS =           // Destination increment offset
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C14TCR_SBURST =           // source burst transfer configuration
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C14TCR_DBURST =           // Destination burst transfer configuration
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C14TCR_TLEN =             // buffer transfer lengh
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C14TCR_PKE = 0x2000000;   // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    template<uint32_t X>
    static constexpr uint32_t MDMA_C14TCR_PAM =              // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C14TCR_TRGM =             // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C14TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C14TCR_BWM = 0x80000000;  // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t MDMA_C14BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C14BNDTR_BNDT =           // block number of data to transfer
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C14BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C14BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    template<uint32_t X>
    static constexpr uint32_t MDMA_C14BNDTR_BRC =            // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C14SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C14DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C14BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C14BRUR_SUV =   // source adresse update value
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C14BRUR_DUV =   // destination address update
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C14LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C14TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C14TBR_TSEL =          // Trigger selection
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C14TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C14TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.

    static constexpr uint32_t MDMA_C14MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C14MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C15ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C15ISR_TEIF15 = 0x1;     // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C15ISR_CTCIF15 = 0x2;    // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t MDMA_C15ISR_BRTIF15 = 0x4;    // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C15ISR_BTIF15 = 0x8;     // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C15ISR_TCIF15 = 0x10;    // channel x buffer transfer complete
    static constexpr uint32_t MDMA_C15ISR_CRQA15 = 0x10000; // channel x request active flag

    static constexpr uint32_t MDMA_C15IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C15IFCR_CTEIF15 = 0x1;   // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C15IFCR_CCTCIF15 = 0x2;  // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C15IFCR_CBRTIF15 = 0x4;  // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C15IFCR_CBTIF15 = 0x8;   // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t MDMA_C15IFCR_CLTCIF15 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t MDMA_C15ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C15ESR_TEA =         // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C15ESR_TED = 0x80;   // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t MDMA_C15ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C15ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C15ESR_ASE = 0x400;  // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t MDMA_C15ESR_BSE = 0x800;  // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t MDMA_C15CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C15CR_EN = 0x1;       // channel enable
    static constexpr uint32_t MDMA_C15CR_TEIE = 0x2;     // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C15CR_CTCIE = 0x4;    // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C15CR_BRTIE = 0x8;    // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C15CR_BTIE = 0x10;    // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t MDMA_C15CR_TCIE = 0x20;    // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    template<uint32_t X>
    static constexpr uint32_t MDMA_C15CR_PL =            // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C15CR_BEX = 0x1000;   // byte Endianness exchange
    static constexpr uint32_t MDMA_C15CR_HEX = 0x2000;   // Half word Endianes exchange
    static constexpr uint32_t MDMA_C15CR_WEX = 0x4000;   // Word Endianness exchange
    static constexpr uint32_t MDMA_C15CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t MDMA_C15TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C15TCR_SINC =             // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C15TCR_DINC =             // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C15TCR_SSIZE =            // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C15TCR_DSIZE =            // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C15TCR_SINCOS =           // source increment offset size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C15TCR_DINCOS =           // Destination increment offset
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C15TCR_SBURST =           // source burst transfer configuration
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C15TCR_DBURST =           // Destination burst transfer configuration
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C15TCR_TLEN =             // buffer transfer lengh
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C15TCR_PKE = 0x2000000;   // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    template<uint32_t X>
    static constexpr uint32_t MDMA_C15TCR_PAM =              // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C15TCR_TRGM =             // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C15TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C15TCR_BWM = 0x80000000;  // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t MDMA_C15BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C15BNDTR_BNDT =           // block number of data to transfer
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C15BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C15BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    template<uint32_t X>
    static constexpr uint32_t MDMA_C15BNDTR_BRC =            // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C15SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C15DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C15BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C15BRUR_SUV =   // source adresse update value
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C15BRUR_DUV =   // destination address update
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C15LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C15TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C15TBR_TSEL =          // Trigger selection
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C15TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t MDMA_C15TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.

    static constexpr uint32_t MDMA_C15MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C15MDR_RESET_VALUE = 0x0;
};


////
//
//      MDMA
//
////

struct stm32h7a3x_mdma_t
{
    volatile uint32_t GISR0;    // [read-only] MDMA Global Interrupt/Status Register
    reserved_t<0xf> _0x40;
    volatile uint32_t C0ISR;    // [read-only] MDMA channel x interrupt/status register
    volatile uint32_t C0IFCR;   // [write-only] MDMA channel x interrupt flag clear register
    volatile uint32_t C0ESR;    // [read-only] MDMA Channel x error status register
    volatile uint32_t C0CR;     // This register is used to control the concerned channel.
    volatile uint32_t C0TCR;    // [read-write] This register is used to configure the concerned channel.
    volatile uint32_t C0BNDTR;  // [read-write] MDMA Channel x block number of data register
    volatile uint32_t C0SAR;    // [read-write] MDMA channel x source address register
    volatile uint32_t C0DAR;    // [read-write] MDMA channel x destination address register
    volatile uint32_t C0BRUR;   // [read-write] MDMA channel x Block Repeat address Update register
    volatile uint32_t C0LAR;    // [read-write] MDMA channel x Link Address register
    volatile uint32_t C0TBR;    // [read-write] MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x70;
    volatile uint32_t C0MAR;    // [read-write] MDMA channel x Mask address register
    volatile uint32_t C0MDR;    // [read-write] MDMA channel x Mask Data register
    reserved_t<0x2> _0x80;
    volatile uint32_t C1ISR;    // [read-only] MDMA channel x interrupt/status register
    volatile uint32_t C1IFCR;   // [write-only] MDMA channel x interrupt flag clear register
    volatile uint32_t C1ESR;    // [read-only] MDMA Channel x error status register
    volatile uint32_t C1CR;     // This register is used to control the concerned channel.
    volatile uint32_t C1TCR;    // [read-write] This register is used to configure the concerned channel.
    volatile uint32_t C1BNDTR;  // [read-write] MDMA Channel x block number of data register
    volatile uint32_t C1SAR;    // [read-write] MDMA channel x source address register
    volatile uint32_t C1DAR;    // [read-write] MDMA channel x destination address register
    volatile uint32_t C1BRUR;   // [read-write] MDMA channel x Block Repeat address Update register
    volatile uint32_t C1LAR;    // [read-write] MDMA channel x Link Address register
    volatile uint32_t C1TBR;    // [read-write] MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0xb0;
    volatile uint32_t C1MAR;    // [read-write] MDMA channel x Mask address register
    volatile uint32_t C1MDR;    // [read-write] MDMA channel x Mask Data register
    reserved_t<0x2> _0xc0;
    volatile uint32_t C2ISR;    // [read-only] MDMA channel x interrupt/status register
    volatile uint32_t C2IFCR;   // [write-only] MDMA channel x interrupt flag clear register
    volatile uint32_t C2ESR;    // [read-only] MDMA Channel x error status register
    volatile uint32_t C2CR;     // This register is used to control the concerned channel.
    volatile uint32_t C2TCR;    // [read-write] This register is used to configure the concerned channel.
    volatile uint32_t C2BNDTR;  // [read-write] MDMA Channel x block number of data register
    volatile uint32_t C2SAR;    // [read-write] MDMA channel x source address register
    volatile uint32_t C2DAR;    // [read-write] MDMA channel x destination address register
    volatile uint32_t C2BRUR;   // [read-write] MDMA channel x Block Repeat address Update register
    volatile uint32_t C2LAR;    // [read-write] MDMA channel x Link Address register
    volatile uint32_t C2TBR;    // [read-write] MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0xf0;
    volatile uint32_t C2MAR;    // [read-write] MDMA channel x Mask address register
    volatile uint32_t C2MDR;    // [read-write] MDMA channel x Mask Data register
    reserved_t<0x2> _0x100;
    volatile uint32_t C3ISR;    // [read-only] MDMA channel x interrupt/status register
    volatile uint32_t C3IFCR;   // [write-only] MDMA channel x interrupt flag clear register
    volatile uint32_t C3ESR;    // [read-only] MDMA Channel x error status register
    volatile uint32_t C3CR;     // This register is used to control the concerned channel.
    volatile uint32_t C3TCR;    // [read-write] This register is used to configure the concerned channel.
    volatile uint32_t C3BNDTR;  // [read-write] MDMA Channel x block number of data register
    volatile uint32_t C3SAR;    // [read-write] MDMA channel x source address register
    volatile uint32_t C3DAR;    // [read-write] MDMA channel x destination address register
    volatile uint32_t C3BRUR;   // [read-write] MDMA channel x Block Repeat address Update register
    volatile uint32_t C3LAR;    // [read-write] MDMA channel x Link Address register
    volatile uint32_t C3TBR;    // [read-write] MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x130;
    volatile uint32_t C3MAR;    // [read-write] MDMA channel x Mask address register
    volatile uint32_t C3MDR;    // [read-write] MDMA channel x Mask Data register
    reserved_t<0x2> _0x140;
    volatile uint32_t C4ISR;    // [read-only] MDMA channel x interrupt/status register
    volatile uint32_t C4IFCR;   // [write-only] MDMA channel x interrupt flag clear register
    volatile uint32_t C4ESR;    // [read-only] MDMA Channel x error status register
    volatile uint32_t C4CR;     // This register is used to control the concerned channel.
    volatile uint32_t C4TCR;    // [read-write] This register is used to configure the concerned channel.
    volatile uint32_t C4BNDTR;  // [read-write] MDMA Channel x block number of data register
    volatile uint32_t C4SAR;    // [read-write] MDMA channel x source address register
    volatile uint32_t C4DAR;    // [read-write] MDMA channel x destination address register
    volatile uint32_t C4BRUR;   // [read-write] MDMA channel x Block Repeat address Update register
    volatile uint32_t C4LAR;    // [read-write] MDMA channel x Link Address register
    volatile uint32_t C4TBR;    // [read-write] MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x170;
    volatile uint32_t C4MAR;    // [read-write] MDMA channel x Mask address register
    volatile uint32_t C4MDR;    // [read-write] MDMA channel x Mask Data register
    reserved_t<0x2> _0x180;
    volatile uint32_t C5ISR;    // [read-only] MDMA channel x interrupt/status register
    volatile uint32_t C5IFCR;   // [write-only] MDMA channel x interrupt flag clear register
    volatile uint32_t C5ESR;    // [read-only] MDMA Channel x error status register
    volatile uint32_t C5CR;     // This register is used to control the concerned channel.
    volatile uint32_t C5TCR;    // [read-write] This register is used to configure the concerned channel.
    volatile uint32_t C5BNDTR;  // [read-write] MDMA Channel x block number of data register
    volatile uint32_t C5SAR;    // [read-write] MDMA channel x source address register
    volatile uint32_t C5DAR;    // [read-write] MDMA channel x destination address register
    volatile uint32_t C5BRUR;   // [read-write] MDMA channel x Block Repeat address Update register
    volatile uint32_t C5LAR;    // [read-write] MDMA channel x Link Address register
    volatile uint32_t C5TBR;    // [read-write] MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x1b0;
    volatile uint32_t C5MAR;    // [read-write] MDMA channel x Mask address register
    volatile uint32_t C5MDR;    // [read-write] MDMA channel x Mask Data register
    reserved_t<0x2> _0x1c0;
    volatile uint32_t C6ISR;    // [read-only] MDMA channel x interrupt/status register
    volatile uint32_t C6IFCR;   // [write-only] MDMA channel x interrupt flag clear register
    volatile uint32_t C6ESR;    // [read-only] MDMA Channel x error status register
    volatile uint32_t C6CR;     // This register is used to control the concerned channel.
    volatile uint32_t C6TCR;    // [read-write] This register is used to configure the concerned channel.
    volatile uint32_t C6BNDTR;  // [read-write] MDMA Channel x block number of data register
    volatile uint32_t C6SAR;    // [read-write] MDMA channel x source address register
    volatile uint32_t C6DAR;    // [read-write] MDMA channel x destination address register
    volatile uint32_t C6BRUR;   // [read-write] MDMA channel x Block Repeat address Update register
    volatile uint32_t C6LAR;    // [read-write] MDMA channel x Link Address register
    volatile uint32_t C6TBR;    // [read-write] MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x1f0;
    volatile uint32_t C6MAR;    // [read-write] MDMA channel x Mask address register
    volatile uint32_t C6MDR;    // [read-write] MDMA channel x Mask Data register
    reserved_t<0x2> _0x200;
    volatile uint32_t C7ISR;    // [read-only] MDMA channel x interrupt/status register
    volatile uint32_t C7IFCR;   // [write-only] MDMA channel x interrupt flag clear register
    volatile uint32_t C7ESR;    // [read-only] MDMA Channel x error status register
    volatile uint32_t C7CR;     // This register is used to control the concerned channel.
    volatile uint32_t C7TCR;    // [read-write] This register is used to configure the concerned channel.
    volatile uint32_t C7BNDTR;  // [read-write] MDMA Channel x block number of data register
    volatile uint32_t C7SAR;    // [read-write] MDMA channel x source address register
    volatile uint32_t C7DAR;    // [read-write] MDMA channel x destination address register
    volatile uint32_t C7BRUR;   // [read-write] MDMA channel x Block Repeat address Update register
    volatile uint32_t C7LAR;    // [read-write] MDMA channel x Link Address register
    volatile uint32_t C7TBR;    // [read-write] MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x230;
    volatile uint32_t C7MAR;    // [read-write] MDMA channel x Mask address register
    volatile uint32_t C7MDR;    // [read-write] MDMA channel x Mask Data register
    reserved_t<0x2> _0x240;
    volatile uint32_t C8ISR;    // [read-only] MDMA channel x interrupt/status register
    volatile uint32_t C8IFCR;   // [write-only] MDMA channel x interrupt flag clear register
    volatile uint32_t C8ESR;    // [read-only] MDMA Channel x error status register
    volatile uint32_t C8CR;     // This register is used to control the concerned channel.
    volatile uint32_t C8TCR;    // [read-write] This register is used to configure the concerned channel.
    volatile uint32_t C8BNDTR;  // [read-write] MDMA Channel x block number of data register
    volatile uint32_t C8SAR;    // [read-write] MDMA channel x source address register
    volatile uint32_t C8DAR;    // [read-write] MDMA channel x destination address register
    volatile uint32_t C8BRUR;   // [read-write] MDMA channel x Block Repeat address Update register
    volatile uint32_t C8LAR;    // [read-write] MDMA channel x Link Address register
    volatile uint32_t C8TBR;    // [read-write] MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x270;
    volatile uint32_t C8MAR;    // [read-write] MDMA channel x Mask address register
    volatile uint32_t C8MDR;    // [read-write] MDMA channel x Mask Data register
    reserved_t<0x2> _0x280;
    volatile uint32_t C9ISR;    // [read-only] MDMA channel x interrupt/status register
    volatile uint32_t C9IFCR;   // [write-only] MDMA channel x interrupt flag clear register
    volatile uint32_t C9ESR;    // [read-only] MDMA Channel x error status register
    volatile uint32_t C9CR;     // This register is used to control the concerned channel.
    volatile uint32_t C9TCR;    // [read-write] This register is used to configure the concerned channel.
    volatile uint32_t C9BNDTR;  // [read-write] MDMA Channel x block number of data register
    volatile uint32_t C9SAR;    // [read-write] MDMA channel x source address register
    volatile uint32_t C9DAR;    // [read-write] MDMA channel x destination address register
    volatile uint32_t C9BRUR;   // [read-write] MDMA channel x Block Repeat address Update register
    volatile uint32_t C9LAR;    // [read-write] MDMA channel x Link Address register
    volatile uint32_t C9TBR;    // [read-write] MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x2b0;
    volatile uint32_t C9MAR;    // [read-write] MDMA channel x Mask address register
    volatile uint32_t C9MDR;    // [read-write] MDMA channel x Mask Data register
    reserved_t<0x2> _0x2c0;
    volatile uint32_t C10ISR;   // [read-only] MDMA channel x interrupt/status register
    volatile uint32_t C10IFCR;  // [write-only] MDMA channel x interrupt flag clear register
    volatile uint32_t C10ESR;   // [read-only] MDMA Channel x error status register
    volatile uint32_t C10CR;    // This register is used to control the concerned channel.
    volatile uint32_t C10TCR;   // [read-write] This register is used to configure the concerned channel.
    volatile uint32_t C10BNDTR; // [read-write] MDMA Channel x block number of data register
    volatile uint32_t C10SAR;   // [read-write] MDMA channel x source address register
    volatile uint32_t C10DAR;   // [read-write] MDMA channel x destination address register
    volatile uint32_t C10BRUR;  // [read-write] MDMA channel x Block Repeat address Update register
    volatile uint32_t C10LAR;   // [read-write] MDMA channel x Link Address register
    volatile uint32_t C10TBR;   // [read-write] MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x2f0;
    volatile uint32_t C10MAR;   // [read-write] MDMA channel x Mask address register
    volatile uint32_t C10MDR;   // [read-write] MDMA channel x Mask Data register
    reserved_t<0x2> _0x300;
    volatile uint32_t C11ISR;   // [read-only] MDMA channel x interrupt/status register
    volatile uint32_t C11IFCR;  // [write-only] MDMA channel x interrupt flag clear register
    volatile uint32_t C11ESR;   // [read-only] MDMA Channel x error status register
    volatile uint32_t C11CR;    // This register is used to control the concerned channel.
    volatile uint32_t C11TCR;   // [read-write] This register is used to configure the concerned channel.
    volatile uint32_t C11BNDTR; // [read-write] MDMA Channel x block number of data register
    volatile uint32_t C11SAR;   // [read-write] MDMA channel x source address register
    volatile uint32_t C11DAR;   // [read-write] MDMA channel x destination address register
    volatile uint32_t C11BRUR;  // [read-write] MDMA channel x Block Repeat address Update register
    volatile uint32_t C11LAR;   // [read-write] MDMA channel x Link Address register
    volatile uint32_t C11TBR;   // [read-write] MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x330;
    volatile uint32_t C11MAR;   // [read-write] MDMA channel x Mask address register
    volatile uint32_t C11MDR;   // [read-write] MDMA channel x Mask Data register
    reserved_t<0x2> _0x340;
    volatile uint32_t C12ISR;   // [read-only] MDMA channel x interrupt/status register
    volatile uint32_t C12IFCR;  // [write-only] MDMA channel x interrupt flag clear register
    volatile uint32_t C12ESR;   // [read-only] MDMA Channel x error status register
    volatile uint32_t C12CR;    // This register is used to control the concerned channel.
    volatile uint32_t C12TCR;   // [read-write] This register is used to configure the concerned channel.
    volatile uint32_t C12BNDTR; // [read-write] MDMA Channel x block number of data register
    volatile uint32_t C12SAR;   // [read-write] MDMA channel x source address register
    volatile uint32_t C12DAR;   // [read-write] MDMA channel x destination address register
    volatile uint32_t C12BRUR;  // [read-write] MDMA channel x Block Repeat address Update register
    volatile uint32_t C12LAR;   // [read-write] MDMA channel x Link Address register
    volatile uint32_t C12TBR;   // [read-write] MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x370;
    volatile uint32_t C12MAR;   // [read-write] MDMA channel x Mask address register
    volatile uint32_t C12MDR;   // [read-write] MDMA channel x Mask Data register
    reserved_t<0x2> _0x380;
    volatile uint32_t C13ISR;   // [read-only] MDMA channel x interrupt/status register
    volatile uint32_t C13IFCR;  // [write-only] MDMA channel x interrupt flag clear register
    volatile uint32_t C13ESR;   // [read-only] MDMA Channel x error status register
    volatile uint32_t C13CR;    // This register is used to control the concerned channel.
    volatile uint32_t C13TCR;   // [read-write] This register is used to configure the concerned channel.
    volatile uint32_t C13BNDTR; // [read-write] MDMA Channel x block number of data register
    volatile uint32_t C13SAR;   // [read-write] MDMA channel x source address register
    volatile uint32_t C13DAR;   // [read-write] MDMA channel x destination address register
    volatile uint32_t C13BRUR;  // [read-write] MDMA channel x Block Repeat address Update register
    volatile uint32_t C13LAR;   // [read-write] MDMA channel x Link Address register
    volatile uint32_t C13TBR;   // [read-write] MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x3b0;
    volatile uint32_t C13MAR;   // [read-write] MDMA channel x Mask address register
    volatile uint32_t C13MDR;   // [read-write] MDMA channel x Mask Data register
    reserved_t<0x2> _0x3c0;
    volatile uint32_t C14ISR;   // [read-only] MDMA channel x interrupt/status register
    volatile uint32_t C14IFCR;  // [write-only] MDMA channel x interrupt flag clear register
    volatile uint32_t C14ESR;   // [read-only] MDMA Channel x error status register
    volatile uint32_t C14CR;    // This register is used to control the concerned channel.
    volatile uint32_t C14TCR;   // [read-write] This register is used to configure the concerned channel.
    volatile uint32_t C14BNDTR; // [read-write] MDMA Channel x block number of data register
    volatile uint32_t C14SAR;   // [read-write] MDMA channel x source address register
    volatile uint32_t C14DAR;   // [read-write] MDMA channel x destination address register
    volatile uint32_t C14BRUR;  // [read-write] MDMA channel x Block Repeat address Update register
    volatile uint32_t C14LAR;   // [read-write] MDMA channel x Link Address register
    volatile uint32_t C14TBR;   // [read-write] MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x3f0;
    volatile uint32_t C14MAR;   // [read-write] MDMA channel x Mask address register
    volatile uint32_t C14MDR;   // [read-write] MDMA channel x Mask Data register
    reserved_t<0x2> _0x400;
    volatile uint32_t C15ISR;   // [read-only] MDMA channel x interrupt/status register
    volatile uint32_t C15IFCR;  // [write-only] MDMA channel x interrupt flag clear register
    volatile uint32_t C15ESR;   // [read-only] MDMA Channel x error status register
    volatile uint32_t C15CR;    // This register is used to control the concerned channel.
    volatile uint32_t C15TCR;   // [read-write] This register is used to configure the concerned channel.
    volatile uint32_t C15BNDTR; // [read-write] MDMA Channel x block number of data register
    volatile uint32_t C15SAR;   // [read-write] MDMA channel x source address register
    volatile uint32_t C15DAR;   // [read-write] MDMA channel x destination address register
    volatile uint32_t C15BRUR;  // [read-write] MDMA channel x Block Repeat address Update register
    volatile uint32_t C15LAR;   // [read-write] MDMA channel x Link Address register
    volatile uint32_t C15TBR;   // [read-write] MDMA channel x Trigger and Bus selection Register
    reserved_t<0x1> _0x430;
    volatile uint32_t C15MAR;   // [read-write] MDMA channel x Mask address register
    volatile uint32_t C15MDR;   // [read-write] MDMA channel x Mask Data register

    static constexpr uint32_t GISR0_RESET_VALUE = 0x0;
    static constexpr uint32_t GISR0_GIF0 = 0x1;     // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t GISR0_GIF1 = 0x2;     // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t GISR0_GIF2 = 0x4;     // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t GISR0_GIF3 = 0x8;     // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t GISR0_GIF4 = 0x10;    // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t GISR0_GIF5 = 0x20;    // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t GISR0_GIF6 = 0x40;    // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t GISR0_GIF7 = 0x80;    // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t GISR0_GIF8 = 0x100;   // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t GISR0_GIF9 = 0x200;   // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t GISR0_GIF10 = 0x400;  // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t GISR0_GIF11 = 0x800;  // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t GISR0_GIF12 = 0x1000; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t GISR0_GIF13 = 0x2000; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t GISR0_GIF14 = 0x4000; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)
    static constexpr uint32_t GISR0_GIF15 = 0x8000; // Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx)

    static constexpr uint32_t C0ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t C0ISR_TEIF0 = 0x1;     // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C0ISR_CTCIF0 = 0x2;    // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t C0ISR_BRTIF0 = 0x4;    // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C0ISR_BTIF0 = 0x8;     // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C0ISR_TCIF0 = 0x10;    // channel x buffer transfer complete
    static constexpr uint32_t C0ISR_CRQA0 = 0x10000; // channel x request active flag

    static constexpr uint32_t C0IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t C0IFCR_CTEIF0 = 0x1;   // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t C0IFCR_CCTCIF0 = 0x2;  // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t C0IFCR_CBRTIF0 = 0x4;  // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t C0IFCR_CBTIF0 = 0x8;   // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t C0IFCR_CLTCIF0 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t C0ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C0ESR_TEA =         // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t C0ESR_TED = 0x80;   // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t C0ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C0ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C0ESR_ASE = 0x400;  // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C0ESR_BSE = 0x800;  // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t C0CR_RESET_VALUE = 0x0;
    static constexpr uint32_t C0CR_EN = 0x1;       // channel enable
    static constexpr uint32_t C0CR_TEIE = 0x2;     // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C0CR_CTCIE = 0x4;    // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C0CR_BRTIE = 0x8;    // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C0CR_BTIE = 0x10;    // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C0CR_TCIE = 0x20;    // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    template<uint32_t X>
    static constexpr uint32_t C0CR_PL =            // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t C0CR_BEX = 0x1000;   // byte Endianness exchange
    static constexpr uint32_t C0CR_HEX = 0x2000;   // Half word Endianes exchange
    static constexpr uint32_t C0CR_WEX = 0x4000;   // Word Endianness exchange
    static constexpr uint32_t C0CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t C0TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C0TCR_SINC =             // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C0TCR_DINC =             // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C0TCR_SSIZE =            // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C0TCR_DSIZE =            // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C0TCR_SINCOS =           // source increment offset size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C0TCR_DINCOS =           // Destination increment offset
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C0TCR_SBURST =           // source burst transfer configuration
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C0TCR_DBURST =           // Destination burst transfer configuration
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C0TCR_TLEN =             // buffer transfer lengh
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t C0TCR_PKE = 0x2000000;   // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    template<uint32_t X>
    static constexpr uint32_t C0TCR_PAM =              // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C0TCR_TRGM =             // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t C0TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C0TCR_BWM = 0x80000000;  // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t C0BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C0BNDTR_BNDT =           // block number of data to transfer
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t C0BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C0BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    template<uint32_t X>
    static constexpr uint32_t C0BNDTR_BRC =            // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t C0SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C0DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C0BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C0BRUR_SUV =   // source adresse update value
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C0BRUR_DUV =   // destination address update
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t C0LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C0TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C0TBR_TSEL =          // Trigger selection
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t C0TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C0TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.

    static constexpr uint32_t C0MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C0MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t C1ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t C1ISR_TEIF1 = 0x1;     // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C1ISR_CTCIF1 = 0x2;    // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t C1ISR_BRTIF1 = 0x4;    // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C1ISR_BTIF1 = 0x8;     // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C1ISR_TCIF1 = 0x10;    // channel x buffer transfer complete
    static constexpr uint32_t C1ISR_CRQA1 = 0x10000; // channel x request active flag

    static constexpr uint32_t C1IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t C1IFCR_CTEIF1 = 0x1;   // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t C1IFCR_CCTCIF1 = 0x2;  // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t C1IFCR_CBRTIF1 = 0x4;  // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t C1IFCR_CBTIF1 = 0x8;   // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t C1IFCR_CLTCIF1 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t C1ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C1ESR_TEA =         // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t C1ESR_TED = 0x80;   // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t C1ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C1ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C1ESR_ASE = 0x400;  // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C1ESR_BSE = 0x800;  // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t C1CR_RESET_VALUE = 0x0;
    static constexpr uint32_t C1CR_EN = 0x1;       // channel enable
    static constexpr uint32_t C1CR_TEIE = 0x2;     // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C1CR_CTCIE = 0x4;    // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C1CR_BRTIE = 0x8;    // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C1CR_BTIE = 0x10;    // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C1CR_TCIE = 0x20;    // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    template<uint32_t X>
    static constexpr uint32_t C1CR_PL =            // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t C1CR_BEX = 0x1000;   // byte Endianness exchange
    static constexpr uint32_t C1CR_HEX = 0x2000;   // Half word Endianes exchange
    static constexpr uint32_t C1CR_WEX = 0x4000;   // Word Endianness exchange
    static constexpr uint32_t C1CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t C1TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C1TCR_SINC =             // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C1TCR_DINC =             // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C1TCR_SSIZE =            // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C1TCR_DSIZE =            // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C1TCR_SINCOS =           // source increment offset size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C1TCR_DINCOS =           // Destination increment offset
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C1TCR_SBURST =           // source burst transfer configuration
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C1TCR_DBURST =           // Destination burst transfer configuration
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C1TCR_TLEN =             // buffer transfer lengh
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t C1TCR_PKE = 0x2000000;   // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    template<uint32_t X>
    static constexpr uint32_t C1TCR_PAM =              // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C1TCR_TRGM =             // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t C1TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C1TCR_BWM = 0x80000000;  // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t C1BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C1BNDTR_BNDT =           // block number of data to transfer
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t C1BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C1BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    template<uint32_t X>
    static constexpr uint32_t C1BNDTR_BRC =            // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t C1SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C1DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C1BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C1BRUR_SUV =   // source adresse update value
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C1BRUR_DUV =   // destination address update
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t C1LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C1TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C1TBR_TSEL =          // Trigger selection
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t C1TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C1TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.

    static constexpr uint32_t C1MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C1MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t C2ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t C2ISR_TEIF2 = 0x1;     // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C2ISR_CTCIF2 = 0x2;    // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t C2ISR_BRTIF2 = 0x4;    // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C2ISR_BTIF2 = 0x8;     // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C2ISR_TCIF2 = 0x10;    // channel x buffer transfer complete
    static constexpr uint32_t C2ISR_CRQA2 = 0x10000; // channel x request active flag

    static constexpr uint32_t C2IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t C2IFCR_CTEIF2 = 0x1;   // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t C2IFCR_CCTCIF2 = 0x2;  // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t C2IFCR_CBRTIF2 = 0x4;  // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t C2IFCR_CBTIF2 = 0x8;   // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t C2IFCR_CLTCIF2 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t C2ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C2ESR_TEA =         // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t C2ESR_TED = 0x80;   // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t C2ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C2ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C2ESR_ASE = 0x400;  // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C2ESR_BSE = 0x800;  // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t C2CR_RESET_VALUE = 0x0;
    static constexpr uint32_t C2CR_EN = 0x1;       // channel enable
    static constexpr uint32_t C2CR_TEIE = 0x2;     // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C2CR_CTCIE = 0x4;    // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C2CR_BRTIE = 0x8;    // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C2CR_BTIE = 0x10;    // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C2CR_TCIE = 0x20;    // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    template<uint32_t X>
    static constexpr uint32_t C2CR_PL =            // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t C2CR_BEX = 0x1000;   // byte Endianness exchange
    static constexpr uint32_t C2CR_HEX = 0x2000;   // Half word Endianes exchange
    static constexpr uint32_t C2CR_WEX = 0x4000;   // Word Endianness exchange
    static constexpr uint32_t C2CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t C2TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C2TCR_SINC =             // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C2TCR_DINC =             // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C2TCR_SSIZE =            // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C2TCR_DSIZE =            // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C2TCR_SINCOS =           // source increment offset size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C2TCR_DINCOS =           // Destination increment offset
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C2TCR_SBURST =           // source burst transfer configuration
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C2TCR_DBURST =           // Destination burst transfer configuration
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C2TCR_TLEN =             // buffer transfer lengh
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t C2TCR_PKE = 0x2000000;   // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    template<uint32_t X>
    static constexpr uint32_t C2TCR_PAM =              // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C2TCR_TRGM =             // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t C2TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C2TCR_BWM = 0x80000000;  // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t C2BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C2BNDTR_BNDT =           // block number of data to transfer
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t C2BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C2BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    template<uint32_t X>
    static constexpr uint32_t C2BNDTR_BRC =            // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t C2SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C2DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C2BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C2BRUR_SUV =   // source adresse update value
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C2BRUR_DUV =   // destination address update
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t C2LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C2TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C2TBR_TSEL =          // Trigger selection
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t C2TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C2TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.

    static constexpr uint32_t C2MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C2MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t C3ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t C3ISR_TEIF3 = 0x1;     // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C3ISR_CTCIF3 = 0x2;    // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t C3ISR_BRTIF3 = 0x4;    // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C3ISR_BTIF3 = 0x8;     // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C3ISR_TCIF3 = 0x10;    // channel x buffer transfer complete
    static constexpr uint32_t C3ISR_CRQA3 = 0x10000; // channel x request active flag

    static constexpr uint32_t C3IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t C3IFCR_CTEIF3 = 0x1;   // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t C3IFCR_CCTCIF3 = 0x2;  // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t C3IFCR_CBRTIF3 = 0x4;  // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t C3IFCR_CBTIF3 = 0x8;   // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t C3IFCR_CLTCIF3 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t C3ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C3ESR_TEA =         // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t C3ESR_TED = 0x80;   // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t C3ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C3ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C3ESR_ASE = 0x400;  // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C3ESR_BSE = 0x800;  // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t C3CR_RESET_VALUE = 0x0;
    static constexpr uint32_t C3CR_EN = 0x1;       // channel enable
    static constexpr uint32_t C3CR_TEIE = 0x2;     // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C3CR_CTCIE = 0x4;    // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C3CR_BRTIE = 0x8;    // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C3CR_BTIE = 0x10;    // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C3CR_TCIE = 0x20;    // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    template<uint32_t X>
    static constexpr uint32_t C3CR_PL =            // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t C3CR_BEX = 0x1000;   // byte Endianness exchange
    static constexpr uint32_t C3CR_HEX = 0x2000;   // Half word Endianes exchange
    static constexpr uint32_t C3CR_WEX = 0x4000;   // Word Endianness exchange
    static constexpr uint32_t C3CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t C3TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C3TCR_SINC =             // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C3TCR_DINC =             // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C3TCR_SSIZE =            // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C3TCR_DSIZE =            // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C3TCR_SINCOS =           // source increment offset size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C3TCR_DINCOS =           // Destination increment offset
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C3TCR_SBURST =           // source burst transfer configuration
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C3TCR_DBURST =           // Destination burst transfer configuration
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C3TCR_TLEN =             // buffer transfer lengh
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t C3TCR_PKE = 0x2000000;   // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    template<uint32_t X>
    static constexpr uint32_t C3TCR_PAM =              // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C3TCR_TRGM =             // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t C3TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C3TCR_BWM = 0x80000000;  // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t C3BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C3BNDTR_BNDT =           // block number of data to transfer
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t C3BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C3BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    template<uint32_t X>
    static constexpr uint32_t C3BNDTR_BRC =            // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t C3SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C3DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C3BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C3BRUR_SUV =   // source adresse update value
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C3BRUR_DUV =   // destination address update
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t C3LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C3TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C3TBR_TSEL =          // Trigger selection
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t C3TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C3TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.

    static constexpr uint32_t C3MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C3MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t C4ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t C4ISR_TEIF4 = 0x1;     // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C4ISR_CTCIF4 = 0x2;    // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t C4ISR_BRTIF4 = 0x4;    // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C4ISR_BTIF4 = 0x8;     // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C4ISR_TCIF4 = 0x10;    // channel x buffer transfer complete
    static constexpr uint32_t C4ISR_CRQA4 = 0x10000; // channel x request active flag

    static constexpr uint32_t C4IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t C4IFCR_CTEIF4 = 0x1;   // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t C4IFCR_CCTCIF4 = 0x2;  // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t C4IFCR_CBRTIF4 = 0x4;  // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t C4IFCR_CBTIF4 = 0x8;   // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t C4IFCR_CLTCIF4 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t C4ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C4ESR_TEA =         // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t C4ESR_TED = 0x80;   // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t C4ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C4ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C4ESR_ASE = 0x400;  // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C4ESR_BSE = 0x800;  // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t C4CR_RESET_VALUE = 0x0;
    static constexpr uint32_t C4CR_EN = 0x1;       // channel enable
    static constexpr uint32_t C4CR_TEIE = 0x2;     // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C4CR_CTCIE = 0x4;    // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C4CR_BRTIE = 0x8;    // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C4CR_BTIE = 0x10;    // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C4CR_TCIE = 0x20;    // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    template<uint32_t X>
    static constexpr uint32_t C4CR_PL =            // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t C4CR_BEX = 0x1000;   // byte Endianness exchange
    static constexpr uint32_t C4CR_HEX = 0x2000;   // Half word Endianes exchange
    static constexpr uint32_t C4CR_WEX = 0x4000;   // Word Endianness exchange
    static constexpr uint32_t C4CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t C4TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C4TCR_SINC =             // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C4TCR_DINC =             // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C4TCR_SSIZE =            // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C4TCR_DSIZE =            // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C4TCR_SINCOS =           // source increment offset size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C4TCR_DINCOS =           // Destination increment offset
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C4TCR_SBURST =           // source burst transfer configuration
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C4TCR_DBURST =           // Destination burst transfer configuration
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C4TCR_TLEN =             // buffer transfer lengh
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t C4TCR_PKE = 0x2000000;   // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    template<uint32_t X>
    static constexpr uint32_t C4TCR_PAM =              // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C4TCR_TRGM =             // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t C4TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C4TCR_BWM = 0x80000000;  // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t C4BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C4BNDTR_BNDT =           // block number of data to transfer
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t C4BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C4BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    template<uint32_t X>
    static constexpr uint32_t C4BNDTR_BRC =            // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t C4SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C4DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C4BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C4BRUR_SUV =   // source adresse update value
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C4BRUR_DUV =   // destination address update
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t C4LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C4TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C4TBR_TSEL =          // Trigger selection
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t C4TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C4TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.

    static constexpr uint32_t C4MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C4MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t C5ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t C5ISR_TEIF5 = 0x1;     // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C5ISR_CTCIF5 = 0x2;    // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t C5ISR_BRTIF5 = 0x4;    // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C5ISR_BTIF5 = 0x8;     // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C5ISR_TCIF5 = 0x10;    // channel x buffer transfer complete
    static constexpr uint32_t C5ISR_CRQA5 = 0x10000; // channel x request active flag

    static constexpr uint32_t C5IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t C5IFCR_CTEIF5 = 0x1;   // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t C5IFCR_CCTCIF5 = 0x2;  // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t C5IFCR_CBRTIF5 = 0x4;  // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t C5IFCR_CBTIF5 = 0x8;   // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t C5IFCR_CLTCIF5 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t C5ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C5ESR_TEA =         // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t C5ESR_TED = 0x80;   // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t C5ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C5ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C5ESR_ASE = 0x400;  // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C5ESR_BSE = 0x800;  // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t C5CR_RESET_VALUE = 0x0;
    static constexpr uint32_t C5CR_EN = 0x1;       // channel enable
    static constexpr uint32_t C5CR_TEIE = 0x2;     // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C5CR_CTCIE = 0x4;    // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C5CR_BRTIE = 0x8;    // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C5CR_BTIE = 0x10;    // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C5CR_TCIE = 0x20;    // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    template<uint32_t X>
    static constexpr uint32_t C5CR_PL =            // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t C5CR_BEX = 0x1000;   // byte Endianness exchange
    static constexpr uint32_t C5CR_HEX = 0x2000;   // Half word Endianes exchange
    static constexpr uint32_t C5CR_WEX = 0x4000;   // Word Endianness exchange
    static constexpr uint32_t C5CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t C5TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C5TCR_SINC =             // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C5TCR_DINC =             // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C5TCR_SSIZE =            // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C5TCR_DSIZE =            // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C5TCR_SINCOS =           // source increment offset size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C5TCR_DINCOS =           // Destination increment offset
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C5TCR_SBURST =           // source burst transfer configuration
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C5TCR_DBURST =           // Destination burst transfer configuration
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C5TCR_TLEN =             // buffer transfer lengh
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t C5TCR_PKE = 0x2000000;   // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    template<uint32_t X>
    static constexpr uint32_t C5TCR_PAM =              // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C5TCR_TRGM =             // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t C5TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C5TCR_BWM = 0x80000000;  // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t C5BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C5BNDTR_BNDT =           // block number of data to transfer
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t C5BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C5BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    template<uint32_t X>
    static constexpr uint32_t C5BNDTR_BRC =            // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t C5SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C5DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C5BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C5BRUR_SUV =   // source adresse update value
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C5BRUR_DUV =   // destination address update
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t C5LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C5TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C5TBR_TSEL =          // Trigger selection
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t C5TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C5TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.

    static constexpr uint32_t C5MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C5MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t C6ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t C6ISR_TEIF6 = 0x1;     // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C6ISR_CTCIF6 = 0x2;    // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t C6ISR_BRTIF6 = 0x4;    // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C6ISR_BTIF6 = 0x8;     // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C6ISR_TCIF6 = 0x10;    // channel x buffer transfer complete
    static constexpr uint32_t C6ISR_CRQA6 = 0x10000; // channel x request active flag

    static constexpr uint32_t C6IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t C6IFCR_CTEIF6 = 0x1;   // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t C6IFCR_CCTCIF6 = 0x2;  // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t C6IFCR_CBRTIF6 = 0x4;  // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t C6IFCR_CBTIF6 = 0x8;   // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t C6IFCR_CLTCIF6 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t C6ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C6ESR_TEA =         // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t C6ESR_TED = 0x80;   // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t C6ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C6ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C6ESR_ASE = 0x400;  // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C6ESR_BSE = 0x800;  // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t C6CR_RESET_VALUE = 0x0;
    static constexpr uint32_t C6CR_EN = 0x1;       // channel enable
    static constexpr uint32_t C6CR_TEIE = 0x2;     // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C6CR_CTCIE = 0x4;    // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C6CR_BRTIE = 0x8;    // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C6CR_BTIE = 0x10;    // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C6CR_TCIE = 0x20;    // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    template<uint32_t X>
    static constexpr uint32_t C6CR_PL =            // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t C6CR_BEX = 0x1000;   // byte Endianness exchange
    static constexpr uint32_t C6CR_HEX = 0x2000;   // Half word Endianes exchange
    static constexpr uint32_t C6CR_WEX = 0x4000;   // Word Endianness exchange
    static constexpr uint32_t C6CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t C6TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C6TCR_SINC =             // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C6TCR_DINC =             // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C6TCR_SSIZE =            // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C6TCR_DSIZE =            // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C6TCR_SINCOS =           // source increment offset size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C6TCR_DINCOS =           // Destination increment offset
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C6TCR_SBURST =           // source burst transfer configuration
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C6TCR_DBURST =           // Destination burst transfer configuration
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C6TCR_TLEN =             // buffer transfer lengh
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t C6TCR_PKE = 0x2000000;   // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    template<uint32_t X>
    static constexpr uint32_t C6TCR_PAM =              // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C6TCR_TRGM =             // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t C6TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C6TCR_BWM = 0x80000000;  // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t C6BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C6BNDTR_BNDT =           // block number of data to transfer
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t C6BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C6BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    template<uint32_t X>
    static constexpr uint32_t C6BNDTR_BRC =            // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t C6SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C6DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C6BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C6BRUR_SUV =   // source adresse update value
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C6BRUR_DUV =   // destination address update
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t C6LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C6TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C6TBR_TSEL =          // Trigger selection
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t C6TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C6TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.

    static constexpr uint32_t C6MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C6MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t C7ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t C7ISR_TEIF7 = 0x1;     // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C7ISR_CTCIF7 = 0x2;    // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t C7ISR_BRTIF7 = 0x4;    // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C7ISR_BTIF7 = 0x8;     // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C7ISR_TCIF7 = 0x10;    // channel x buffer transfer complete
    static constexpr uint32_t C7ISR_CRQA7 = 0x10000; // channel x request active flag

    static constexpr uint32_t C7IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t C7IFCR_CTEIF7 = 0x1;   // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t C7IFCR_CCTCIF7 = 0x2;  // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t C7IFCR_CBRTIF7 = 0x4;  // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t C7IFCR_CBTIF7 = 0x8;   // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t C7IFCR_CLTCIF7 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t C7ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C7ESR_TEA =         // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t C7ESR_TED = 0x80;   // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t C7ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C7ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C7ESR_ASE = 0x400;  // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C7ESR_BSE = 0x800;  // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t C7CR_RESET_VALUE = 0x0;
    static constexpr uint32_t C7CR_EN = 0x1;       // channel enable
    static constexpr uint32_t C7CR_TEIE = 0x2;     // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C7CR_CTCIE = 0x4;    // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C7CR_BRTIE = 0x8;    // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C7CR_BTIE = 0x10;    // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C7CR_TCIE = 0x20;    // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    template<uint32_t X>
    static constexpr uint32_t C7CR_PL =            // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t C7CR_BEX = 0x1000;   // byte Endianness exchange
    static constexpr uint32_t C7CR_HEX = 0x2000;   // Half word Endianes exchange
    static constexpr uint32_t C7CR_WEX = 0x4000;   // Word Endianness exchange
    static constexpr uint32_t C7CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t C7TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C7TCR_SINC =             // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C7TCR_DINC =             // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C7TCR_SSIZE =            // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C7TCR_DSIZE =            // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C7TCR_SINCOS =           // source increment offset size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C7TCR_DINCOS =           // Destination increment offset
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C7TCR_SBURST =           // source burst transfer configuration
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C7TCR_DBURST =           // Destination burst transfer configuration
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C7TCR_TLEN =             // buffer transfer lengh
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t C7TCR_PKE = 0x2000000;   // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    template<uint32_t X>
    static constexpr uint32_t C7TCR_PAM =              // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C7TCR_TRGM =             // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t C7TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C7TCR_BWM = 0x80000000;  // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t C7BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C7BNDTR_BNDT =           // block number of data to transfer
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t C7BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C7BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    template<uint32_t X>
    static constexpr uint32_t C7BNDTR_BRC =            // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t C7SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C7DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C7BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C7BRUR_SUV =   // source adresse update value
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C7BRUR_DUV =   // destination address update
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t C7LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C7TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C7TBR_TSEL =          // Trigger selection
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t C7TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C7TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.

    static constexpr uint32_t C7MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C7MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t C8ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t C8ISR_TEIF8 = 0x1;     // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C8ISR_CTCIF8 = 0x2;    // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t C8ISR_BRTIF8 = 0x4;    // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C8ISR_BTIF8 = 0x8;     // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C8ISR_TCIF8 = 0x10;    // channel x buffer transfer complete
    static constexpr uint32_t C8ISR_CRQA8 = 0x10000; // channel x request active flag

    static constexpr uint32_t C8IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t C8IFCR_CTEIF8 = 0x1;   // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t C8IFCR_CCTCIF8 = 0x2;  // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t C8IFCR_CBRTIF8 = 0x4;  // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t C8IFCR_CBTIF8 = 0x8;   // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t C8IFCR_CLTCIF8 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t C8ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C8ESR_TEA =         // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t C8ESR_TED = 0x80;   // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t C8ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C8ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C8ESR_ASE = 0x400;  // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C8ESR_BSE = 0x800;  // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t C8CR_RESET_VALUE = 0x0;
    static constexpr uint32_t C8CR_EN = 0x1;       // channel enable
    static constexpr uint32_t C8CR_TEIE = 0x2;     // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C8CR_CTCIE = 0x4;    // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C8CR_BRTIE = 0x8;    // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C8CR_BTIE = 0x10;    // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C8CR_TCIE = 0x20;    // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    template<uint32_t X>
    static constexpr uint32_t C8CR_PL =            // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t C8CR_BEX = 0x1000;   // byte Endianness exchange
    static constexpr uint32_t C8CR_HEX = 0x2000;   // Half word Endianes exchange
    static constexpr uint32_t C8CR_WEX = 0x4000;   // Word Endianness exchange
    static constexpr uint32_t C8CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t C8TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C8TCR_SINC =             // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C8TCR_DINC =             // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C8TCR_SSIZE =            // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C8TCR_DSIZE =            // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C8TCR_SINCOS =           // source increment offset size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C8TCR_DINCOS =           // Destination increment offset
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C8TCR_SBURST =           // source burst transfer configuration
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C8TCR_DBURST =           // Destination burst transfer configuration
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C8TCR_TLEN =             // buffer transfer lengh
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t C8TCR_PKE = 0x2000000;   // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    template<uint32_t X>
    static constexpr uint32_t C8TCR_PAM =              // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C8TCR_TRGM =             // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t C8TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C8TCR_BWM = 0x80000000;  // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t C8BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C8BNDTR_BNDT =           // block number of data to transfer
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t C8BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C8BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    template<uint32_t X>
    static constexpr uint32_t C8BNDTR_BRC =            // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t C8SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C8DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C8BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C8BRUR_SUV =   // source adresse update value
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C8BRUR_DUV =   // destination address update
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t C8LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C8TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C8TBR_TSEL =          // Trigger selection
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t C8TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C8TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.

    static constexpr uint32_t C8MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C8MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t C9ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t C9ISR_TEIF9 = 0x1;     // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C9ISR_CTCIF9 = 0x2;    // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t C9ISR_BRTIF9 = 0x4;    // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C9ISR_BTIF9 = 0x8;     // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C9ISR_TCIF9 = 0x10;    // channel x buffer transfer complete
    static constexpr uint32_t C9ISR_CRQA9 = 0x10000; // channel x request active flag

    static constexpr uint32_t C9IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t C9IFCR_CTEIF9 = 0x1;   // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t C9IFCR_CCTCIF9 = 0x2;  // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t C9IFCR_CBRTIF9 = 0x4;  // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t C9IFCR_CBTIF9 = 0x8;   // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t C9IFCR_CLTCIF9 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t C9ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C9ESR_TEA =         // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t C9ESR_TED = 0x80;   // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t C9ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C9ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C9ESR_ASE = 0x400;  // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C9ESR_BSE = 0x800;  // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t C9CR_RESET_VALUE = 0x0;
    static constexpr uint32_t C9CR_EN = 0x1;       // channel enable
    static constexpr uint32_t C9CR_TEIE = 0x2;     // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C9CR_CTCIE = 0x4;    // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C9CR_BRTIE = 0x8;    // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C9CR_BTIE = 0x10;    // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C9CR_TCIE = 0x20;    // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    template<uint32_t X>
    static constexpr uint32_t C9CR_PL =            // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t C9CR_BEX = 0x1000;   // byte Endianness exchange
    static constexpr uint32_t C9CR_HEX = 0x2000;   // Half word Endianes exchange
    static constexpr uint32_t C9CR_WEX = 0x4000;   // Word Endianness exchange
    static constexpr uint32_t C9CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t C9TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C9TCR_SINC =             // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C9TCR_DINC =             // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C9TCR_SSIZE =            // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C9TCR_DSIZE =            // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C9TCR_SINCOS =           // source increment offset size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C9TCR_DINCOS =           // Destination increment offset
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C9TCR_SBURST =           // source burst transfer configuration
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C9TCR_DBURST =           // Destination burst transfer configuration
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C9TCR_TLEN =             // buffer transfer lengh
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t C9TCR_PKE = 0x2000000;   // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    template<uint32_t X>
    static constexpr uint32_t C9TCR_PAM =              // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C9TCR_TRGM =             // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t C9TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C9TCR_BWM = 0x80000000;  // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t C9BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C9BNDTR_BNDT =           // block number of data to transfer
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t C9BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C9BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    template<uint32_t X>
    static constexpr uint32_t C9BNDTR_BRC =            // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t C9SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C9DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C9BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C9BRUR_SUV =   // source adresse update value
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C9BRUR_DUV =   // destination address update
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t C9LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C9TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C9TBR_TSEL =          // Trigger selection
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t C9TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C9TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.

    static constexpr uint32_t C9MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C9MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t C10ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t C10ISR_TEIF10 = 0x1;     // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C10ISR_CTCIF10 = 0x2;    // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t C10ISR_BRTIF10 = 0x4;    // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C10ISR_BTIF10 = 0x8;     // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C10ISR_TCIF10 = 0x10;    // channel x buffer transfer complete
    static constexpr uint32_t C10ISR_CRQA10 = 0x10000; // channel x request active flag

    static constexpr uint32_t C10IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t C10IFCR_CTEIF10 = 0x1;   // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t C10IFCR_CCTCIF10 = 0x2;  // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t C10IFCR_CBRTIF10 = 0x4;  // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t C10IFCR_CBTIF10 = 0x8;   // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t C10IFCR_CLTCIF10 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t C10ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C10ESR_TEA =         // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t C10ESR_TED = 0x80;   // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t C10ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C10ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C10ESR_ASE = 0x400;  // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C10ESR_BSE = 0x800;  // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t C10CR_RESET_VALUE = 0x0;
    static constexpr uint32_t C10CR_EN = 0x1;       // channel enable
    static constexpr uint32_t C10CR_TEIE = 0x2;     // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C10CR_CTCIE = 0x4;    // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C10CR_BRTIE = 0x8;    // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C10CR_BTIE = 0x10;    // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C10CR_TCIE = 0x20;    // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    template<uint32_t X>
    static constexpr uint32_t C10CR_PL =            // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t C10CR_BEX = 0x1000;   // byte Endianness exchange
    static constexpr uint32_t C10CR_HEX = 0x2000;   // Half word Endianes exchange
    static constexpr uint32_t C10CR_WEX = 0x4000;   // Word Endianness exchange
    static constexpr uint32_t C10CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t C10TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C10TCR_SINC =             // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C10TCR_DINC =             // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C10TCR_SSIZE =            // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C10TCR_DSIZE =            // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C10TCR_SINCOS =           // source increment offset size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C10TCR_DINCOS =           // Destination increment offset
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C10TCR_SBURST =           // source burst transfer configuration
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C10TCR_DBURST =           // Destination burst transfer configuration
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C10TCR_TLEN =             // buffer transfer lengh
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t C10TCR_PKE = 0x2000000;   // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    template<uint32_t X>
    static constexpr uint32_t C10TCR_PAM =              // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C10TCR_TRGM =             // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t C10TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C10TCR_BWM = 0x80000000;  // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t C10BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C10BNDTR_BNDT =           // block number of data to transfer
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t C10BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C10BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    template<uint32_t X>
    static constexpr uint32_t C10BNDTR_BRC =            // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t C10SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C10DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C10BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C10BRUR_SUV =   // source adresse update value
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C10BRUR_DUV =   // destination address update
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t C10LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C10TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C10TBR_TSEL =          // Trigger selection
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t C10TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C10TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.

    static constexpr uint32_t C10MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C10MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t C11ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t C11ISR_TEIF11 = 0x1;     // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C11ISR_CTCIF11 = 0x2;    // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t C11ISR_BRTIF11 = 0x4;    // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C11ISR_BTIF11 = 0x8;     // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C11ISR_TCIF11 = 0x10;    // channel x buffer transfer complete
    static constexpr uint32_t C11ISR_CRQA11 = 0x10000; // channel x request active flag

    static constexpr uint32_t C11IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t C11IFCR_CTEIF11 = 0x1;   // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t C11IFCR_CCTCIF11 = 0x2;  // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t C11IFCR_CBRTIF11 = 0x4;  // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t C11IFCR_CBTIF11 = 0x8;   // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t C11IFCR_CLTCIF11 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t C11ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C11ESR_TEA =         // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t C11ESR_TED = 0x80;   // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t C11ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C11ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C11ESR_ASE = 0x400;  // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C11ESR_BSE = 0x800;  // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t C11CR_RESET_VALUE = 0x0;
    static constexpr uint32_t C11CR_EN = 0x1;       // channel enable
    static constexpr uint32_t C11CR_TEIE = 0x2;     // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C11CR_CTCIE = 0x4;    // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C11CR_BRTIE = 0x8;    // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C11CR_BTIE = 0x10;    // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C11CR_TCIE = 0x20;    // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    template<uint32_t X>
    static constexpr uint32_t C11CR_PL =            // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t C11CR_BEX = 0x1000;   // byte Endianness exchange
    static constexpr uint32_t C11CR_HEX = 0x2000;   // Half word Endianes exchange
    static constexpr uint32_t C11CR_WEX = 0x4000;   // Word Endianness exchange
    static constexpr uint32_t C11CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t C11TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C11TCR_SINC =             // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C11TCR_DINC =             // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C11TCR_SSIZE =            // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C11TCR_DSIZE =            // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C11TCR_SINCOS =           // source increment offset size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C11TCR_DINCOS =           // Destination increment offset
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C11TCR_SBURST =           // source burst transfer configuration
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C11TCR_DBURST =           // Destination burst transfer configuration
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C11TCR_TLEN =             // buffer transfer lengh
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t C11TCR_PKE = 0x2000000;   // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    template<uint32_t X>
    static constexpr uint32_t C11TCR_PAM =              // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C11TCR_TRGM =             // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t C11TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C11TCR_BWM = 0x80000000;  // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t C11BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C11BNDTR_BNDT =           // block number of data to transfer
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t C11BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C11BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    template<uint32_t X>
    static constexpr uint32_t C11BNDTR_BRC =            // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t C11SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C11DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C11BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C11BRUR_SUV =   // source adresse update value
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C11BRUR_DUV =   // destination address update
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t C11LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C11TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C11TBR_TSEL =          // Trigger selection
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t C11TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C11TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.

    static constexpr uint32_t C11MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C11MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t C12ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t C12ISR_TEIF12 = 0x1;     // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C12ISR_CTCIF12 = 0x2;    // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t C12ISR_BRTIF12 = 0x4;    // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C12ISR_BTIF12 = 0x8;     // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C12ISR_TCIF12 = 0x10;    // channel x buffer transfer complete
    static constexpr uint32_t C12ISR_CRQA12 = 0x10000; // channel x request active flag

    static constexpr uint32_t C12IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t C12IFCR_CTEIF12 = 0x1;   // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t C12IFCR_CCTCIF12 = 0x2;  // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t C12IFCR_CBRTIF12 = 0x4;  // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t C12IFCR_CBTIF12 = 0x8;   // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t C12IFCR_CLTCIF12 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t C12ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C12ESR_TEA =         // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t C12ESR_TED = 0x80;   // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t C12ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C12ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C12ESR_ASE = 0x400;  // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C12ESR_BSE = 0x800;  // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t C12CR_RESET_VALUE = 0x0;
    static constexpr uint32_t C12CR_EN = 0x1;       // channel enable
    static constexpr uint32_t C12CR_TEIE = 0x2;     // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C12CR_CTCIE = 0x4;    // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C12CR_BRTIE = 0x8;    // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C12CR_BTIE = 0x10;    // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C12CR_TCIE = 0x20;    // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    template<uint32_t X>
    static constexpr uint32_t C12CR_PL =            // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t C12CR_BEX = 0x1000;   // byte Endianness exchange
    static constexpr uint32_t C12CR_HEX = 0x2000;   // Half word Endianes exchange
    static constexpr uint32_t C12CR_WEX = 0x4000;   // Word Endianness exchange
    static constexpr uint32_t C12CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t C12TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C12TCR_SINC =             // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C12TCR_DINC =             // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C12TCR_SSIZE =            // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C12TCR_DSIZE =            // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C12TCR_SINCOS =           // source increment offset size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C12TCR_DINCOS =           // Destination increment offset
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C12TCR_SBURST =           // source burst transfer configuration
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C12TCR_DBURST =           // Destination burst transfer configuration
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C12TCR_TLEN =             // buffer transfer lengh
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t C12TCR_PKE = 0x2000000;   // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    template<uint32_t X>
    static constexpr uint32_t C12TCR_PAM =              // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C12TCR_TRGM =             // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t C12TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C12TCR_BWM = 0x80000000;  // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t C12BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C12BNDTR_BNDT =           // block number of data to transfer
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t C12BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C12BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    template<uint32_t X>
    static constexpr uint32_t C12BNDTR_BRC =            // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t C12SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C12DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C12BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C12BRUR_SUV =   // source adresse update value
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C12BRUR_DUV =   // destination address update
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t C12LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C12TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C12TBR_TSEL =          // Trigger selection
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t C12TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C12TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.

    static constexpr uint32_t C12MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C12MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t C13ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t C13ISR_TEIF13 = 0x1;     // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C13ISR_CTCIF13 = 0x2;    // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t C13ISR_BRTIF13 = 0x4;    // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C13ISR_BTIF13 = 0x8;     // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C13ISR_TCIF13 = 0x10;    // channel x buffer transfer complete
    static constexpr uint32_t C13ISR_CRQA13 = 0x10000; // channel x request active flag

    static constexpr uint32_t C13IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t C13IFCR_CTEIF13 = 0x1;   // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t C13IFCR_CCTCIF13 = 0x2;  // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t C13IFCR_CBRTIF13 = 0x4;  // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t C13IFCR_CBTIF13 = 0x8;   // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t C13IFCR_CLTCIF13 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t C13ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C13ESR_TEA =         // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t C13ESR_TED = 0x80;   // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t C13ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C13ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C13ESR_ASE = 0x400;  // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C13ESR_BSE = 0x800;  // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t C13CR_RESET_VALUE = 0x0;
    static constexpr uint32_t C13CR_EN = 0x1;       // channel enable
    static constexpr uint32_t C13CR_TEIE = 0x2;     // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C13CR_CTCIE = 0x4;    // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C13CR_BRTIE = 0x8;    // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C13CR_BTIE = 0x10;    // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C13CR_TCIE = 0x20;    // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    template<uint32_t X>
    static constexpr uint32_t C13CR_PL =            // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t C13CR_BEX = 0x1000;   // byte Endianness exchange
    static constexpr uint32_t C13CR_HEX = 0x2000;   // Half word Endianes exchange
    static constexpr uint32_t C13CR_WEX = 0x4000;   // Word Endianness exchange
    static constexpr uint32_t C13CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t C13TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C13TCR_SINC =             // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C13TCR_DINC =             // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C13TCR_SSIZE =            // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C13TCR_DSIZE =            // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C13TCR_SINCOS =           // source increment offset size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C13TCR_DINCOS =           // Destination increment offset
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C13TCR_SBURST =           // source burst transfer configuration
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C13TCR_DBURST =           // Destination burst transfer configuration
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C13TCR_TLEN =             // buffer transfer lengh
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t C13TCR_PKE = 0x2000000;   // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    template<uint32_t X>
    static constexpr uint32_t C13TCR_PAM =              // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C13TCR_TRGM =             // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t C13TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C13TCR_BWM = 0x80000000;  // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t C13BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C13BNDTR_BNDT =           // block number of data to transfer
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t C13BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C13BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    template<uint32_t X>
    static constexpr uint32_t C13BNDTR_BRC =            // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t C13SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C13DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C13BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C13BRUR_SUV =   // source adresse update value
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C13BRUR_DUV =   // destination address update
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t C13LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C13TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C13TBR_TSEL =          // Trigger selection
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t C13TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C13TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.

    static constexpr uint32_t C13MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C13MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t C14ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t C14ISR_TEIF14 = 0x1;     // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C14ISR_CTCIF14 = 0x2;    // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t C14ISR_BRTIF14 = 0x4;    // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C14ISR_BTIF14 = 0x8;     // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C14ISR_TCIF14 = 0x10;    // channel x buffer transfer complete
    static constexpr uint32_t C14ISR_CRQA14 = 0x10000; // channel x request active flag

    static constexpr uint32_t C14IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t C14IFCR_CTEIF14 = 0x1;   // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t C14IFCR_CCTCIF14 = 0x2;  // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t C14IFCR_CBRTIF14 = 0x4;  // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t C14IFCR_CBTIF14 = 0x8;   // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t C14IFCR_CLTCIF14 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t C14ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C14ESR_TEA =         // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t C14ESR_TED = 0x80;   // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t C14ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C14ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C14ESR_ASE = 0x400;  // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C14ESR_BSE = 0x800;  // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t C14CR_RESET_VALUE = 0x0;
    static constexpr uint32_t C14CR_EN = 0x1;       // channel enable
    static constexpr uint32_t C14CR_TEIE = 0x2;     // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C14CR_CTCIE = 0x4;    // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C14CR_BRTIE = 0x8;    // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C14CR_BTIE = 0x10;    // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C14CR_TCIE = 0x20;    // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    template<uint32_t X>
    static constexpr uint32_t C14CR_PL =            // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t C14CR_BEX = 0x1000;   // byte Endianness exchange
    static constexpr uint32_t C14CR_HEX = 0x2000;   // Half word Endianes exchange
    static constexpr uint32_t C14CR_WEX = 0x4000;   // Word Endianness exchange
    static constexpr uint32_t C14CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t C14TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C14TCR_SINC =             // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C14TCR_DINC =             // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C14TCR_SSIZE =            // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C14TCR_DSIZE =            // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C14TCR_SINCOS =           // source increment offset size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C14TCR_DINCOS =           // Destination increment offset
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C14TCR_SBURST =           // source burst transfer configuration
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C14TCR_DBURST =           // Destination burst transfer configuration
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C14TCR_TLEN =             // buffer transfer lengh
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t C14TCR_PKE = 0x2000000;   // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    template<uint32_t X>
    static constexpr uint32_t C14TCR_PAM =              // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C14TCR_TRGM =             // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t C14TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C14TCR_BWM = 0x80000000;  // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t C14BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C14BNDTR_BNDT =           // block number of data to transfer
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t C14BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C14BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    template<uint32_t X>
    static constexpr uint32_t C14BNDTR_BRC =            // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t C14SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C14DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C14BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C14BRUR_SUV =   // source adresse update value
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C14BRUR_DUV =   // destination address update
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t C14LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C14TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C14TBR_TSEL =          // Trigger selection
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t C14TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C14TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.

    static constexpr uint32_t C14MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C14MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t C15ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t C15ISR_TEIF15 = 0x1;     // Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C15ISR_CTCIF15 = 0x2;    // Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0.
    static constexpr uint32_t C15ISR_BRTIF15 = 0x4;    // Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C15ISR_BTIF15 = 0x8;     // Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register.
    static constexpr uint32_t C15ISR_TCIF15 = 0x10;    // channel x buffer transfer complete
    static constexpr uint32_t C15ISR_CRQA15 = 0x10000; // channel x request active flag

    static constexpr uint32_t C15IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t C15IFCR_CTEIF15 = 0x1;   // Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register
    static constexpr uint32_t C15IFCR_CCTCIF15 = 0x2;  // Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register
    static constexpr uint32_t C15IFCR_CBRTIF15 = 0x4;  // Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register
    static constexpr uint32_t C15IFCR_CBTIF15 = 0x8;   // Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register
    static constexpr uint32_t C15IFCR_CLTCIF15 = 0x10; // CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register

    static constexpr uint32_t C15ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C15ESR_TEA =         // Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t C15ESR_TED = 0x80;   // Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error.
    static constexpr uint32_t C15ESR_TELD = 0x100; // Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C15ESR_TEMD = 0x200; // Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C15ESR_ASE = 0x400;  // Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.
    static constexpr uint32_t C15ESR_BSE = 0x800;  // Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register.

    static constexpr uint32_t C15CR_RESET_VALUE = 0x0;
    static constexpr uint32_t C15CR_EN = 0x1;       // channel enable
    static constexpr uint32_t C15CR_TEIE = 0x2;     // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C15CR_CTCIE = 0x4;    // Channel Transfer Complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C15CR_BRTIE = 0x8;    // Block Repeat transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C15CR_BTIE = 0x10;    // Block Transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t C15CR_TCIE = 0x20;    // buffer Transfer Complete interrupt enable This bit is set and cleared by software.
    template<uint32_t X>
    static constexpr uint32_t C15CR_PL =            // Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t C15CR_BEX = 0x1000;   // byte Endianness exchange
    static constexpr uint32_t C15CR_HEX = 0x2000;   // Half word Endianes exchange
    static constexpr uint32_t C15CR_WEX = 0x4000;   // Word Endianness exchange
    static constexpr uint32_t C15CR_SWRQ = 0x10000; // SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access).

    static constexpr uint32_t C15TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C15TCR_SINC =             // Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C15TCR_DINC =             // Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C15TCR_SSIZE =            // Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C15TCR_DSIZE =            // Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C15TCR_SINCOS =           // source increment offset size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C15TCR_DINCOS =           // Destination increment offset
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C15TCR_SBURST =           // source burst transfer configuration
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C15TCR_DBURST =           // Destination burst transfer configuration
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C15TCR_TLEN =             // buffer transfer lengh
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t C15TCR_PKE = 0x2000000;   // PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0
    template<uint32_t X>
    static constexpr uint32_t C15TCR_PAM =              // Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C15TCR_TRGM =             // Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t C15TCR_SWRM = 0x40000000; // SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C15TCR_BWM = 0x80000000;  // Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable.

    static constexpr uint32_t C15BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C15BNDTR_BNDT =           // block number of data to transfer
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t C15BNDTR_BRSUM = 0x40000; // Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0.
    static constexpr uint32_t C15BNDTR_BRDUM = 0x80000; // Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0.
    template<uint32_t X>
    static constexpr uint32_t C15BNDTR_BRC =            // Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t C15SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C15DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C15BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C15BRUR_SUV =   // source adresse update value
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C15BRUR_DUV =   // destination address update
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t C15LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C15TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C15TBR_TSEL =          // Trigger selection
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t C15TBR_SBUS = 0x10000; // Source BUS select This bit is protected and can be written only if EN is 0.
    static constexpr uint32_t C15TBR_DBUS = 0x20000; // Destination BUS slect This bit is protected and can be written only if EN is 0.

    static constexpr uint32_t C15MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t C15MDR_RESET_VALUE = 0x0;
};


template<>
struct peripheral_t<STM32H742x, MDMA>
{
    typedef stm32h742x_mdma_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, MDMA>
{
    typedef stm32h742x_mdma_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, MDMA>
{
    typedef stm32h742x_mdma_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, MDMA>
{
    typedef stm32h742x_mdma_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, MDMA>
{
    typedef stm32h742x_mdma_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, MDMA>
{
    typedef stm32h742x_mdma_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, MDMA>
{
    typedef stm32h742x_mdma_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, MDMA>
{
    typedef stm32h742x_mdma_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, MDMA>
{
    typedef stm32h742x_mdma_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, MDMA>
{
    typedef stm32h742x_mdma_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, MDMA>
{
    typedef stm32h742x_mdma_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, MDMA>
{
    typedef stm32h742x_mdma_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, MDMA>
{
    typedef stm32h742x_mdma_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, MDMA>
{
    typedef stm32h742x_mdma_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, MDMA>
{
    typedef stm32h7a3x_mdma_t T;
    static T& V;
};

using mdma_t = peripheral_t<mcu_svd, MDMA>;

