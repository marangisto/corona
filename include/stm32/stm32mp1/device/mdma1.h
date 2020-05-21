#pragma once

////
//
//      STM32MP1 MDMA1 peripherals
//
////

////
//
//      MDMA1
//
////

struct stm32mp15xxx_mdma_t
{
    volatile uint32_t MDMA_GISR0;    // [read-only] MDMA global interrupt/status register
    reserved_t<0x1> _0x8;
    volatile uint32_t MDMA_SGISR0;   // [read-only] MDMA secure global interrupt/status register
    reserved_t<0xd> _0x40;
    volatile uint32_t MDMA_C0ISR;    // [read-only] MDMA channel 0 interrupt/status register
    volatile uint32_t MDMA_C0IFCR;   // [write-only] MDMA channel 0 interrupt flag clear register
    volatile uint32_t MDMA_C0ESR;    // [read-only] MDMA channel 0 error status register
    volatile uint32_t MDMA_C0CR;     // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C0TCR;    // [read-write] This register is used to configure the concerned channel. In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    volatile uint32_t MDMA_C0BNDTR;  // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x04).
    volatile uint32_t MDMA_C0SAR;    // [read-write] In Linked List mode, at the end of a Block (single or last Block in repeated Block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x08).
    volatile uint32_t MDMA_C0DAR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x0C). M
    volatile uint32_t MDMA_C0BRUR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x10).
    volatile uint32_t MDMA_C0LAR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x14). The new value is only taken into account after all registers are updated, for the next end of block.
    volatile uint32_t MDMA_C0TBR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x18).
    reserved_t<0x1> _0x70;
    volatile uint32_t MDMA_C0MAR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x20).
    volatile uint32_t MDMA_C0MDR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x24).
    reserved_t<0x2> _0x80;
    volatile uint32_t MDMA_C1ISR;    // [read-only] MDMA channel 1 interrupt/status register
    volatile uint32_t MDMA_C1IFCR;   // [write-only] MDMA channel 1 interrupt flag clear register
    volatile uint32_t MDMA_C1ESR;    // [read-only] MDMA channel 1 error status register
    volatile uint32_t MDMA_C1CR;     // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C1TCR;    // [read-write] This register is used to configure the concerned channel. In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    volatile uint32_t MDMA_C1BNDTR;  // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x04).
    volatile uint32_t MDMA_C1SAR;    // [read-write] In Linked List mode, at the end of a Block (single or last Block in repeated Block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x08).
    volatile uint32_t MDMA_C1DAR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x0C). M
    volatile uint32_t MDMA_C1BRUR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x10).
    volatile uint32_t MDMA_C1LAR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x14). The new value is only taken into account after all registers are updated, for the next end of block.
    volatile uint32_t MDMA_C1TBR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x18).
    reserved_t<0x1> _0xb0;
    volatile uint32_t MDMA_C1MAR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x20).
    volatile uint32_t MDMA_C1MDR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x24).
    reserved_t<0x2> _0xc0;
    volatile uint32_t MDMA_C2ISR;    // [read-only] MDMA channel 2 interrupt/status register
    volatile uint32_t MDMA_C2IFCR;   // [write-only] MDMA channel 2 interrupt flag clear register
    volatile uint32_t MDMA_C2ESR;    // [read-only] MDMA channel 2 error status register
    volatile uint32_t MDMA_C2CR;     // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C2TCR;    // [read-write] This register is used to configure the concerned channel. In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    volatile uint32_t MDMA_C2BNDTR;  // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x04).
    volatile uint32_t MDMA_C2SAR;    // [read-write] In Linked List mode, at the end of a Block (single or last Block in repeated Block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x08).
    volatile uint32_t MDMA_C2DAR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x0C). M
    volatile uint32_t MDMA_C2BRUR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x10).
    volatile uint32_t MDMA_C2LAR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x14). The new value is only taken into account after all registers are updated, for the next end of block.
    volatile uint32_t MDMA_C2TBR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x18).
    reserved_t<0x1> _0xf0;
    volatile uint32_t MDMA_C2MAR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x20).
    volatile uint32_t MDMA_C2MDR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x24).
    reserved_t<0x2> _0x100;
    volatile uint32_t MDMA_C3ISR;    // [read-only] MDMA channel 3 interrupt/status register
    volatile uint32_t MDMA_C3IFCR;   // [write-only] MDMA channel 3 interrupt flag clear register
    volatile uint32_t MDMA_C3ESR;    // [read-only] MDMA channel 3 error status register
    volatile uint32_t MDMA_C3CR;     // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C3TCR;    // [read-write] This register is used to configure the concerned channel. In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    volatile uint32_t MDMA_C3BNDTR;  // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x04).
    volatile uint32_t MDMA_C3SAR;    // [read-write] In Linked List mode, at the end of a Block (single or last Block in repeated Block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x08).
    volatile uint32_t MDMA_C3DAR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x0C). M
    volatile uint32_t MDMA_C3BRUR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x10).
    volatile uint32_t MDMA_C3LAR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x14). The new value is only taken into account after all registers are updated, for the next end of block.
    volatile uint32_t MDMA_C3TBR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x18).
    reserved_t<0x1> _0x130;
    volatile uint32_t MDMA_C3MAR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x20).
    volatile uint32_t MDMA_C3MDR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x24).
    reserved_t<0x2> _0x140;
    volatile uint32_t MDMA_C4ISR;    // [read-only] MDMA channel 4 interrupt/status register
    volatile uint32_t MDMA_C4IFCR;   // [write-only] MDMA channel 4 interrupt flag clear register
    volatile uint32_t MDMA_C4ESR;    // [read-only] MDMA channel 4 error status register
    volatile uint32_t MDMA_C4CR;     // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C4TCR;    // [read-write] This register is used to configure the concerned channel. In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    volatile uint32_t MDMA_C4BNDTR;  // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x04).
    volatile uint32_t MDMA_C4SAR;    // [read-write] In Linked List mode, at the end of a Block (single or last Block in repeated Block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x08).
    volatile uint32_t MDMA_C4DAR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x0C). M
    volatile uint32_t MDMA_C4BRUR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x10).
    volatile uint32_t MDMA_C4LAR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x14). The new value is only taken into account after all registers are updated, for the next end of block.
    volatile uint32_t MDMA_C4TBR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x18).
    reserved_t<0x1> _0x170;
    volatile uint32_t MDMA_C4MAR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x20).
    volatile uint32_t MDMA_C4MDR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x24).
    reserved_t<0x2> _0x180;
    volatile uint32_t MDMA_C5ISR;    // [read-only] MDMA channel 5 interrupt/status register
    volatile uint32_t MDMA_C5IFCR;   // [write-only] MDMA channel 5 interrupt flag clear register
    volatile uint32_t MDMA_C5ESR;    // [read-only] MDMA channel 5 error status register
    volatile uint32_t MDMA_C5CR;     // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C5TCR;    // [read-write] This register is used to configure the concerned channel. In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    volatile uint32_t MDMA_C5BNDTR;  // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x04).
    volatile uint32_t MDMA_C5SAR;    // [read-write] In Linked List mode, at the end of a Block (single or last Block in repeated Block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x08).
    volatile uint32_t MDMA_C5DAR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x0C). M
    volatile uint32_t MDMA_C5BRUR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x10).
    volatile uint32_t MDMA_C5LAR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x14). The new value is only taken into account after all registers are updated, for the next end of block.
    volatile uint32_t MDMA_C5TBR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x18).
    reserved_t<0x1> _0x1b0;
    volatile uint32_t MDMA_C5MAR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x20).
    volatile uint32_t MDMA_C5MDR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x24).
    reserved_t<0x2> _0x1c0;
    volatile uint32_t MDMA_C6ISR;    // [read-only] MDMA channel 6 interrupt/status register
    volatile uint32_t MDMA_C6IFCR;   // [write-only] MDMA channel 6 interrupt flag clear register
    volatile uint32_t MDMA_C6ESR;    // [read-only] MDMA channel 6 error status register
    volatile uint32_t MDMA_C6CR;     // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C6TCR;    // [read-write] This register is used to configure the concerned channel. In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    volatile uint32_t MDMA_C6BNDTR;  // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x04).
    volatile uint32_t MDMA_C6SAR;    // [read-write] In Linked List mode, at the end of a Block (single or last Block in repeated Block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x08).
    volatile uint32_t MDMA_C6DAR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x0C). M
    volatile uint32_t MDMA_C6BRUR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x10).
    volatile uint32_t MDMA_C6LAR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x14). The new value is only taken into account after all registers are updated, for the next end of block.
    volatile uint32_t MDMA_C6TBR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x18).
    reserved_t<0x1> _0x1f0;
    volatile uint32_t MDMA_C6MAR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x20).
    volatile uint32_t MDMA_C6MDR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x24).
    reserved_t<0x2> _0x200;
    volatile uint32_t MDMA_C7ISR;    // [read-only] MDMA channel 7 interrupt/status register
    volatile uint32_t MDMA_C7IFCR;   // [write-only] MDMA channel 7 interrupt flag clear register
    volatile uint32_t MDMA_C7ESR;    // [read-only] MDMA channel 7 error status register
    volatile uint32_t MDMA_C7CR;     // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C7TCR;    // [read-write] This register is used to configure the concerned channel. In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    volatile uint32_t MDMA_C7BNDTR;  // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x04).
    volatile uint32_t MDMA_C7SAR;    // [read-write] In Linked List mode, at the end of a Block (single or last Block in repeated Block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x08).
    volatile uint32_t MDMA_C7DAR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x0C). M
    volatile uint32_t MDMA_C7BRUR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x10).
    volatile uint32_t MDMA_C7LAR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x14). The new value is only taken into account after all registers are updated, for the next end of block.
    volatile uint32_t MDMA_C7TBR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x18).
    reserved_t<0x1> _0x230;
    volatile uint32_t MDMA_C7MAR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x20).
    volatile uint32_t MDMA_C7MDR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x24).
    reserved_t<0x2> _0x240;
    volatile uint32_t MDMA_C8ISR;    // [read-only] MDMA channel 8 interrupt/status register
    volatile uint32_t MDMA_C8IFCR;   // [write-only] MDMA channel 8 interrupt flag clear register
    volatile uint32_t MDMA_C8ESR;    // [read-only] MDMA channel 8 error status register
    volatile uint32_t MDMA_C8CR;     // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C8TCR;    // [read-write] This register is used to configure the concerned channel. In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    volatile uint32_t MDMA_C8BNDTR;  // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x04).
    volatile uint32_t MDMA_C8SAR;    // [read-write] In Linked List mode, at the end of a Block (single or last Block in repeated Block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x08).
    volatile uint32_t MDMA_C8DAR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x0C). M
    volatile uint32_t MDMA_C8BRUR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x10).
    volatile uint32_t MDMA_C8LAR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x14). The new value is only taken into account after all registers are updated, for the next end of block.
    volatile uint32_t MDMA_C8TBR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x18).
    reserved_t<0x1> _0x270;
    volatile uint32_t MDMA_C8MAR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x20).
    volatile uint32_t MDMA_C8MDR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x24).
    reserved_t<0x2> _0x280;
    volatile uint32_t MDMA_C9ISR;    // [read-only] MDMA channel 9 interrupt/status register
    volatile uint32_t MDMA_C9IFCR;   // [write-only] MDMA channel 9 interrupt flag clear register
    volatile uint32_t MDMA_C9ESR;    // [read-only] MDMA channel 9 error status register
    volatile uint32_t MDMA_C9CR;     // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C9TCR;    // [read-write] This register is used to configure the concerned channel. In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    volatile uint32_t MDMA_C9BNDTR;  // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x04).
    volatile uint32_t MDMA_C9SAR;    // [read-write] In Linked List mode, at the end of a Block (single or last Block in repeated Block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x08).
    volatile uint32_t MDMA_C9DAR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x0C). M
    volatile uint32_t MDMA_C9BRUR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x10).
    volatile uint32_t MDMA_C9LAR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x14). The new value is only taken into account after all registers are updated, for the next end of block.
    volatile uint32_t MDMA_C9TBR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x18).
    reserved_t<0x1> _0x2b0;
    volatile uint32_t MDMA_C9MAR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x20).
    volatile uint32_t MDMA_C9MDR;    // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x24).
    reserved_t<0x2> _0x2c0;
    volatile uint32_t MDMA_C10ISR;   // [read-only] MDMA channel 10 interrupt/status register
    volatile uint32_t MDMA_C10IFCR;  // [write-only] MDMA channel 10 interrupt flag clear register
    volatile uint32_t MDMA_C10ESR;   // [read-only] MDMA channel 10 error status register
    volatile uint32_t MDMA_C10CR;    // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C10TCR;   // [read-write] This register is used to configure the concerned channel. In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    volatile uint32_t MDMA_C10BNDTR; // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x04).
    volatile uint32_t MDMA_C10SAR;   // [read-write] In Linked List mode, at the end of a Block (single or last Block in repeated Block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x08).
    volatile uint32_t MDMA_C10DAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x0C). M
    volatile uint32_t MDMA_C10BRUR;  // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x10).
    volatile uint32_t MDMA_C10LAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x14). The new value is only taken into account after all registers are updated, for the next end of block.
    volatile uint32_t MDMA_C10TBR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x18).
    reserved_t<0x1> _0x2f0;
    volatile uint32_t MDMA_C10MAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x20).
    volatile uint32_t MDMA_C10MDR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x24).
    reserved_t<0x2> _0x300;
    volatile uint32_t MDMA_C11ISR;   // [read-only] MDMA channel 11 interrupt/status register
    volatile uint32_t MDMA_C11IFCR;  // [write-only] MDMA channel 11 interrupt flag clear register
    volatile uint32_t MDMA_C11ESR;   // [read-only] MDMA channel 11 error status register
    volatile uint32_t MDMA_C11CR;    // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C11TCR;   // [read-write] This register is used to configure the concerned channel. In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    volatile uint32_t MDMA_C11BNDTR; // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x04).
    volatile uint32_t MDMA_C11SAR;   // [read-write] In Linked List mode, at the end of a Block (single or last Block in repeated Block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x08).
    volatile uint32_t MDMA_C11DAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x0C). M
    volatile uint32_t MDMA_C11BRUR;  // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x10).
    volatile uint32_t MDMA_C11LAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x14). The new value is only taken into account after all registers are updated, for the next end of block.
    volatile uint32_t MDMA_C11TBR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x18).
    reserved_t<0x1> _0x330;
    volatile uint32_t MDMA_C11MAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x20).
    volatile uint32_t MDMA_C11MDR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x24).
    reserved_t<0x2> _0x340;
    volatile uint32_t MDMA_C12ISR;   // [read-only] MDMA channel 12 interrupt/status register
    volatile uint32_t MDMA_C12IFCR;  // [write-only] MDMA channel 12 interrupt flag clear register
    volatile uint32_t MDMA_C12ESR;   // [read-only] MDMA channel 12 error status register
    volatile uint32_t MDMA_C12CR;    // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C12TCR;   // [read-write] This register is used to configure the concerned channel. In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    volatile uint32_t MDMA_C12BNDTR; // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x04).
    volatile uint32_t MDMA_C12SAR;   // [read-write] In Linked List mode, at the end of a Block (single or last Block in repeated Block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x08).
    volatile uint32_t MDMA_C12DAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x0C). M
    volatile uint32_t MDMA_C12BRUR;  // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x10).
    volatile uint32_t MDMA_C12LAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x14). The new value is only taken into account after all registers are updated, for the next end of block.
    volatile uint32_t MDMA_C12TBR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x18).
    reserved_t<0x1> _0x370;
    volatile uint32_t MDMA_C12MAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x20).
    volatile uint32_t MDMA_C12MDR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x24).
    reserved_t<0x2> _0x380;
    volatile uint32_t MDMA_C13ISR;   // [read-only] MDMA channel 13 interrupt/status register
    volatile uint32_t MDMA_C13IFCR;  // [write-only] MDMA channel 13 interrupt flag clear register
    volatile uint32_t MDMA_C13ESR;   // [read-only] MDMA channel 13 error status register
    volatile uint32_t MDMA_C13CR;    // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C13TCR;   // [read-write] This register is used to configure the concerned channel. In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    volatile uint32_t MDMA_C13BNDTR; // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x04).
    volatile uint32_t MDMA_C13SAR;   // [read-write] In Linked List mode, at the end of a Block (single or last Block in repeated Block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x08).
    volatile uint32_t MDMA_C13DAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x0C). M
    volatile uint32_t MDMA_C13BRUR;  // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x10).
    volatile uint32_t MDMA_C13LAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x14). The new value is only taken into account after all registers are updated, for the next end of block.
    volatile uint32_t MDMA_C13TBR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x18).
    reserved_t<0x1> _0x3b0;
    volatile uint32_t MDMA_C13MAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x20).
    volatile uint32_t MDMA_C13MDR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x24).
    reserved_t<0x2> _0x3c0;
    volatile uint32_t MDMA_C14ISR;   // [read-only] MDMA channel 14 interrupt/status register
    volatile uint32_t MDMA_C14IFCR;  // [write-only] MDMA channel 14 interrupt flag clear register
    volatile uint32_t MDMA_C14ESR;   // [read-only] MDMA channel 14 error status register
    volatile uint32_t MDMA_C14CR;    // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C14TCR;   // [read-write] This register is used to configure the concerned channel. In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    volatile uint32_t MDMA_C14BNDTR; // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x04).
    volatile uint32_t MDMA_C14SAR;   // [read-write] In Linked List mode, at the end of a Block (single or last Block in repeated Block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x08).
    volatile uint32_t MDMA_C14DAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x0C). M
    volatile uint32_t MDMA_C14BRUR;  // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x10).
    volatile uint32_t MDMA_C14LAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x14). The new value is only taken into account after all registers are updated, for the next end of block.
    volatile uint32_t MDMA_C14TBR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x18).
    reserved_t<0x1> _0x3f0;
    volatile uint32_t MDMA_C14MAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x20).
    volatile uint32_t MDMA_C14MDR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x24).
    reserved_t<0x2> _0x400;
    volatile uint32_t MDMA_C15ISR;   // [read-only] MDMA channel 15 interrupt/status register
    volatile uint32_t MDMA_C15IFCR;  // [write-only] MDMA channel 15 interrupt flag clear register
    volatile uint32_t MDMA_C15ESR;   // [read-only] MDMA channel 15 error status register
    volatile uint32_t MDMA_C15CR;    // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C15TCR;   // [read-write] This register is used to configure the concerned channel. In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    volatile uint32_t MDMA_C15BNDTR; // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x04).
    volatile uint32_t MDMA_C15SAR;   // [read-write] In Linked List mode, at the end of a Block (single or last Block in repeated Block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x08).
    volatile uint32_t MDMA_C15DAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x0C). M
    volatile uint32_t MDMA_C15BRUR;  // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x10).
    volatile uint32_t MDMA_C15LAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x14). The new value is only taken into account after all registers are updated, for the next end of block.
    volatile uint32_t MDMA_C15TBR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x18).
    reserved_t<0x1> _0x430;
    volatile uint32_t MDMA_C15MAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x20).
    volatile uint32_t MDMA_C15MDR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x24).
    reserved_t<0x2> _0x440;
    volatile uint32_t MDMA_C16ISR;   // [read-only] MDMA channel 16 interrupt/status register
    volatile uint32_t MDMA_C16IFCR;  // [write-only] MDMA channel 16 interrupt flag clear register
    volatile uint32_t MDMA_C16ESR;   // [read-only] MDMA channel 16 error status register
    volatile uint32_t MDMA_C16CR;    // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C16TCR;   // [read-write] This register is used to configure the concerned channel. In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    volatile uint32_t MDMA_C16BNDTR; // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x04).
    volatile uint32_t MDMA_C16SAR;   // [read-write] In Linked List mode, at the end of a Block (single or last Block in repeated Block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x08).
    volatile uint32_t MDMA_C16DAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x0C). M
    volatile uint32_t MDMA_C16BRUR;  // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x10).
    volatile uint32_t MDMA_C16LAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x14). The new value is only taken into account after all registers are updated, for the next end of block.
    volatile uint32_t MDMA_C16TBR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x18).
    reserved_t<0x1> _0x470;
    volatile uint32_t MDMA_C16MAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x20).
    volatile uint32_t MDMA_C16MDR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x24).
    reserved_t<0x2> _0x480;
    volatile uint32_t MDMA_C17ISR;   // [read-only] MDMA channel 17 interrupt/status register
    volatile uint32_t MDMA_C17IFCR;  // [write-only] MDMA channel 17 interrupt flag clear register
    volatile uint32_t MDMA_C17ESR;   // [read-only] MDMA channel 17 error status register
    volatile uint32_t MDMA_C17CR;    // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C17TCR;   // [read-write] This register is used to configure the concerned channel. In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    volatile uint32_t MDMA_C17BNDTR; // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x04).
    volatile uint32_t MDMA_C17SAR;   // [read-write] In Linked List mode, at the end of a Block (single or last Block in repeated Block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x08).
    volatile uint32_t MDMA_C17DAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x0C). M
    volatile uint32_t MDMA_C17BRUR;  // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x10).
    volatile uint32_t MDMA_C17LAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x14). The new value is only taken into account after all registers are updated, for the next end of block.
    volatile uint32_t MDMA_C17TBR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x18).
    reserved_t<0x1> _0x4b0;
    volatile uint32_t MDMA_C17MAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x20).
    volatile uint32_t MDMA_C17MDR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x24).
    reserved_t<0x2> _0x4c0;
    volatile uint32_t MDMA_C18ISR;   // [read-only] MDMA channel 18 interrupt/status register
    volatile uint32_t MDMA_C18IFCR;  // [write-only] MDMA channel 18 interrupt flag clear register
    volatile uint32_t MDMA_C18ESR;   // [read-only] MDMA channel 18 error status register
    volatile uint32_t MDMA_C18CR;    // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C18TCR;   // [read-write] This register is used to configure the concerned channel. In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    volatile uint32_t MDMA_C18BNDTR; // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x04).
    volatile uint32_t MDMA_C18SAR;   // [read-write] In Linked List mode, at the end of a Block (single or last Block in repeated Block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x08).
    volatile uint32_t MDMA_C18DAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x0C). M
    volatile uint32_t MDMA_C18BRUR;  // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x10).
    volatile uint32_t MDMA_C18LAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x14). The new value is only taken into account after all registers are updated, for the next end of block.
    volatile uint32_t MDMA_C18TBR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x18).
    reserved_t<0x1> _0x4f0;
    volatile uint32_t MDMA_C18MAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x20).
    volatile uint32_t MDMA_C18MDR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x24).
    reserved_t<0x2> _0x500;
    volatile uint32_t MDMA_C19ISR;   // [read-only] MDMA channel 19 interrupt/status register
    volatile uint32_t MDMA_C19IFCR;  // [write-only] MDMA channel 19 interrupt flag clear register
    volatile uint32_t MDMA_C19ESR;   // [read-only] MDMA channel 19 error status register
    volatile uint32_t MDMA_C19CR;    // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C19TCR;   // [read-write] This register is used to configure the concerned channel. In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    volatile uint32_t MDMA_C19BNDTR; // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x04).
    volatile uint32_t MDMA_C19SAR;   // [read-write] In Linked List mode, at the end of a Block (single or last Block in repeated Block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x08).
    volatile uint32_t MDMA_C19DAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x0C). M
    volatile uint32_t MDMA_C19BRUR;  // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x10).
    volatile uint32_t MDMA_C19LAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x14). The new value is only taken into account after all registers are updated, for the next end of block.
    volatile uint32_t MDMA_C19TBR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x18).
    reserved_t<0x1> _0x530;
    volatile uint32_t MDMA_C19MAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x20).
    volatile uint32_t MDMA_C19MDR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x24).
    reserved_t<0x2> _0x540;
    volatile uint32_t MDMA_C20ISR;   // [read-only] MDMA channel 20 interrupt/status register
    volatile uint32_t MDMA_C20IFCR;  // [write-only] MDMA channel 20 interrupt flag clear register
    volatile uint32_t MDMA_C20ESR;   // [read-only] MDMA channel 20 error status register
    volatile uint32_t MDMA_C20CR;    // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C20TCR;   // [read-write] This register is used to configure the concerned channel. In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    volatile uint32_t MDMA_C20BNDTR; // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x04).
    volatile uint32_t MDMA_C20SAR;   // [read-write] In Linked List mode, at the end of a Block (single or last Block in repeated Block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x08).
    volatile uint32_t MDMA_C20DAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x0C). M
    volatile uint32_t MDMA_C20BRUR;  // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x10).
    volatile uint32_t MDMA_C20LAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x14). The new value is only taken into account after all registers are updated, for the next end of block.
    volatile uint32_t MDMA_C20TBR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x18).
    reserved_t<0x1> _0x570;
    volatile uint32_t MDMA_C20MAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x20).
    volatile uint32_t MDMA_C20MDR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x24).
    reserved_t<0x2> _0x580;
    volatile uint32_t MDMA_C21ISR;   // [read-only] MDMA channel 21 interrupt/status register
    volatile uint32_t MDMA_C21IFCR;  // [write-only] MDMA channel 21 interrupt flag clear register
    volatile uint32_t MDMA_C21ESR;   // [read-only] MDMA channel 21 error status register
    volatile uint32_t MDMA_C21CR;    // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C21TCR;   // [read-write] This register is used to configure the concerned channel. In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    volatile uint32_t MDMA_C21BNDTR; // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x04).
    volatile uint32_t MDMA_C21SAR;   // [read-write] In Linked List mode, at the end of a Block (single or last Block in repeated Block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x08).
    volatile uint32_t MDMA_C21DAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x0C). M
    volatile uint32_t MDMA_C21BRUR;  // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x10).
    volatile uint32_t MDMA_C21LAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x14). The new value is only taken into account after all registers are updated, for the next end of block.
    volatile uint32_t MDMA_C21TBR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x18).
    reserved_t<0x1> _0x5b0;
    volatile uint32_t MDMA_C21MAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x20).
    volatile uint32_t MDMA_C21MDR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x24).
    reserved_t<0x2> _0x5c0;
    volatile uint32_t MDMA_C22ISR;   // [read-only] MDMA channel 22 interrupt/status register
    volatile uint32_t MDMA_C22IFCR;  // [write-only] MDMA channel 22 interrupt flag clear register
    volatile uint32_t MDMA_C22ESR;   // [read-only] MDMA channel 22 error status register
    volatile uint32_t MDMA_C22CR;    // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C22TCR;   // [read-write] This register is used to configure the concerned channel. In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    volatile uint32_t MDMA_C22BNDTR; // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x04).
    volatile uint32_t MDMA_C22SAR;   // [read-write] In Linked List mode, at the end of a Block (single or last Block in repeated Block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x08).
    volatile uint32_t MDMA_C22DAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x0C). M
    volatile uint32_t MDMA_C22BRUR;  // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x10).
    volatile uint32_t MDMA_C22LAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x14). The new value is only taken into account after all registers are updated, for the next end of block.
    volatile uint32_t MDMA_C22TBR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x18).
    reserved_t<0x1> _0x5f0;
    volatile uint32_t MDMA_C22MAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x20).
    volatile uint32_t MDMA_C22MDR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x24).
    reserved_t<0x2> _0x600;
    volatile uint32_t MDMA_C23ISR;   // [read-only] MDMA channel 23 interrupt/status register
    volatile uint32_t MDMA_C23IFCR;  // [write-only] MDMA channel 23 interrupt flag clear register
    volatile uint32_t MDMA_C23ESR;   // [read-only] MDMA channel 23 error status register
    volatile uint32_t MDMA_C23CR;    // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C23TCR;   // [read-write] This register is used to configure the concerned channel. In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    volatile uint32_t MDMA_C23BNDTR; // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x04).
    volatile uint32_t MDMA_C23SAR;   // [read-write] In Linked List mode, at the end of a Block (single or last Block in repeated Block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x08).
    volatile uint32_t MDMA_C23DAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x0C). M
    volatile uint32_t MDMA_C23BRUR;  // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x10).
    volatile uint32_t MDMA_C23LAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x14). The new value is only taken into account after all registers are updated, for the next end of block.
    volatile uint32_t MDMA_C23TBR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x18).
    reserved_t<0x1> _0x630;
    volatile uint32_t MDMA_C23MAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x20).
    volatile uint32_t MDMA_C23MDR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x24).
    reserved_t<0x2> _0x640;
    volatile uint32_t MDMA_C24ISR;   // [read-only] MDMA channel 24 interrupt/status register
    volatile uint32_t MDMA_C24IFCR;  // [write-only] MDMA channel 24 interrupt flag clear register
    volatile uint32_t MDMA_C24ESR;   // [read-only] MDMA channel 24 error status register
    volatile uint32_t MDMA_C24CR;    // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C24TCR;   // [read-write] This register is used to configure the concerned channel. In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    volatile uint32_t MDMA_C24BNDTR; // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x04).
    volatile uint32_t MDMA_C24SAR;   // [read-write] In Linked List mode, at the end of a Block (single or last Block in repeated Block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x08).
    volatile uint32_t MDMA_C24DAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x0C). M
    volatile uint32_t MDMA_C24BRUR;  // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x10).
    volatile uint32_t MDMA_C24LAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x14). The new value is only taken into account after all registers are updated, for the next end of block.
    volatile uint32_t MDMA_C24TBR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x18).
    reserved_t<0x1> _0x670;
    volatile uint32_t MDMA_C24MAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x20).
    volatile uint32_t MDMA_C24MDR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x24).
    reserved_t<0x2> _0x680;
    volatile uint32_t MDMA_C25ISR;   // [read-only] MDMA channel 25 interrupt/status register
    volatile uint32_t MDMA_C25IFCR;  // [write-only] MDMA channel 25 interrupt flag clear register
    volatile uint32_t MDMA_C25ESR;   // [read-only] MDMA channel 25 error status register
    volatile uint32_t MDMA_C25CR;    // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C25TCR;   // [read-write] This register is used to configure the concerned channel. In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    volatile uint32_t MDMA_C25BNDTR; // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x04).
    volatile uint32_t MDMA_C25SAR;   // [read-write] In Linked List mode, at the end of a Block (single or last Block in repeated Block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x08).
    volatile uint32_t MDMA_C25DAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x0C). M
    volatile uint32_t MDMA_C25BRUR;  // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x10).
    volatile uint32_t MDMA_C25LAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x14). The new value is only taken into account after all registers are updated, for the next end of block.
    volatile uint32_t MDMA_C25TBR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x18).
    reserved_t<0x1> _0x6b0;
    volatile uint32_t MDMA_C25MAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x20).
    volatile uint32_t MDMA_C25MDR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x24).
    reserved_t<0x2> _0x6c0;
    volatile uint32_t MDMA_C26ISR;   // [read-only] MDMA channel 26 interrupt/status register
    volatile uint32_t MDMA_C26IFCR;  // [write-only] MDMA channel 26 interrupt flag clear register
    volatile uint32_t MDMA_C26ESR;   // [read-only] MDMA channel 26 error status register
    volatile uint32_t MDMA_C26CR;    // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C26TCR;   // [read-write] This register is used to configure the concerned channel. In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    volatile uint32_t MDMA_C26BNDTR; // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x04).
    volatile uint32_t MDMA_C26SAR;   // [read-write] In Linked List mode, at the end of a Block (single or last Block in repeated Block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x08).
    volatile uint32_t MDMA_C26DAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x0C). M
    volatile uint32_t MDMA_C26BRUR;  // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x10).
    volatile uint32_t MDMA_C26LAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x14). The new value is only taken into account after all registers are updated, for the next end of block.
    volatile uint32_t MDMA_C26TBR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x18).
    reserved_t<0x1> _0x6f0;
    volatile uint32_t MDMA_C26MAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x20).
    volatile uint32_t MDMA_C26MDR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x24).
    reserved_t<0x2> _0x700;
    volatile uint32_t MDMA_C27ISR;   // [read-only] MDMA channel 27 interrupt/status register
    volatile uint32_t MDMA_C27IFCR;  // [write-only] MDMA channel 27 interrupt flag clear register
    volatile uint32_t MDMA_C27ESR;   // [read-only] MDMA channel 27 error status register
    volatile uint32_t MDMA_C27CR;    // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C27TCR;   // [read-write] This register is used to configure the concerned channel. In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    volatile uint32_t MDMA_C27BNDTR; // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x04).
    volatile uint32_t MDMA_C27SAR;   // [read-write] In Linked List mode, at the end of a Block (single or last Block in repeated Block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x08).
    volatile uint32_t MDMA_C27DAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x0C). M
    volatile uint32_t MDMA_C27BRUR;  // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x10).
    volatile uint32_t MDMA_C27LAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x14). The new value is only taken into account after all registers are updated, for the next end of block.
    volatile uint32_t MDMA_C27TBR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x18).
    reserved_t<0x1> _0x730;
    volatile uint32_t MDMA_C27MAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x20).
    volatile uint32_t MDMA_C27MDR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x24).
    reserved_t<0x2> _0x740;
    volatile uint32_t MDMA_C28ISR;   // [read-only] MDMA channel 28 interrupt/status register
    volatile uint32_t MDMA_C28IFCR;  // [write-only] MDMA channel 28 interrupt flag clear register
    volatile uint32_t MDMA_C28ESR;   // [read-only] MDMA channel 28 error status register
    volatile uint32_t MDMA_C28CR;    // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C28TCR;   // [read-write] This register is used to configure the concerned channel. In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    volatile uint32_t MDMA_C28BNDTR; // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x04).
    volatile uint32_t MDMA_C28SAR;   // [read-write] In Linked List mode, at the end of a Block (single or last Block in repeated Block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x08).
    volatile uint32_t MDMA_C28DAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x0C). M
    volatile uint32_t MDMA_C28BRUR;  // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x10).
    volatile uint32_t MDMA_C28LAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x14). The new value is only taken into account after all registers are updated, for the next end of block.
    volatile uint32_t MDMA_C28TBR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x18).
    reserved_t<0x1> _0x770;
    volatile uint32_t MDMA_C28MAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x20).
    volatile uint32_t MDMA_C28MDR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x24).
    reserved_t<0x2> _0x780;
    volatile uint32_t MDMA_C29ISR;   // [read-only] MDMA channel 29 interrupt/status register
    volatile uint32_t MDMA_C29IFCR;  // [write-only] MDMA channel 29 interrupt flag clear register
    volatile uint32_t MDMA_C29ESR;   // [read-only] MDMA channel 29 error status register
    volatile uint32_t MDMA_C29CR;    // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C29TCR;   // [read-write] This register is used to configure the concerned channel. In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    volatile uint32_t MDMA_C29BNDTR; // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x04).
    volatile uint32_t MDMA_C29SAR;   // [read-write] In Linked List mode, at the end of a Block (single or last Block in repeated Block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x08).
    volatile uint32_t MDMA_C29DAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x0C). M
    volatile uint32_t MDMA_C29BRUR;  // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x10).
    volatile uint32_t MDMA_C29LAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x14). The new value is only taken into account after all registers are updated, for the next end of block.
    volatile uint32_t MDMA_C29TBR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x18).
    reserved_t<0x1> _0x7b0;
    volatile uint32_t MDMA_C29MAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x20).
    volatile uint32_t MDMA_C29MDR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x24).
    reserved_t<0x2> _0x7c0;
    volatile uint32_t MDMA_C30ISR;   // [read-only] MDMA channel 30 interrupt/status register
    volatile uint32_t MDMA_C30IFCR;  // [write-only] MDMA channel 30 interrupt flag clear register
    volatile uint32_t MDMA_C30ESR;   // [read-only] MDMA channel 30 error status register
    volatile uint32_t MDMA_C30CR;    // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C30TCR;   // [read-write] This register is used to configure the concerned channel. In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    volatile uint32_t MDMA_C30BNDTR; // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x04).
    volatile uint32_t MDMA_C30SAR;   // [read-write] In Linked List mode, at the end of a Block (single or last Block in repeated Block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x08).
    volatile uint32_t MDMA_C30DAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x0C). M
    volatile uint32_t MDMA_C30BRUR;  // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x10).
    volatile uint32_t MDMA_C30LAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x14). The new value is only taken into account after all registers are updated, for the next end of block.
    volatile uint32_t MDMA_C30TBR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x18).
    reserved_t<0x1> _0x7f0;
    volatile uint32_t MDMA_C30MAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x20).
    volatile uint32_t MDMA_C30MDR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x24).
    reserved_t<0x2> _0x800;
    volatile uint32_t MDMA_C31ISR;   // [read-only] MDMA channel 31 interrupt/status register
    volatile uint32_t MDMA_C31IFCR;  // [write-only] MDMA channel 31 interrupt flag clear register
    volatile uint32_t MDMA_C31ESR;   // [read-only] MDMA channel 31 error status register
    volatile uint32_t MDMA_C31CR;    // This register is used to control the concerned channel.
    volatile uint32_t MDMA_C31TCR;   // [read-write] This register is used to configure the concerned channel. In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
    volatile uint32_t MDMA_C31BNDTR; // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x04).
    volatile uint32_t MDMA_C31SAR;   // [read-write] In Linked List mode, at the end of a Block (single or last Block in repeated Block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x08).
    volatile uint32_t MDMA_C31DAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x0C). M
    volatile uint32_t MDMA_C31BRUR;  // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x10).
    volatile uint32_t MDMA_C31LAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x14). The new value is only taken into account after all registers are updated, for the next end of block.
    volatile uint32_t MDMA_C31TBR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x18).
    reserved_t<0x1> _0x830;
    volatile uint32_t MDMA_C31MAR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x20).
    volatile uint32_t MDMA_C31MDR;   // [read-write] In Linked List mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x24).

    static constexpr uint32_t MDMA_GISR0_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_GISR0_GIF0 = 0x1;         // GIF0
    static constexpr uint32_t MDMA_GISR0_GIF1 = 0x2;         // GIF1
    static constexpr uint32_t MDMA_GISR0_GIF2 = 0x4;         // GIF2
    static constexpr uint32_t MDMA_GISR0_GIF3 = 0x8;         // GIF3
    static constexpr uint32_t MDMA_GISR0_GIF4 = 0x10;        // GIF4
    static constexpr uint32_t MDMA_GISR0_GIF5 = 0x20;        // GIF5
    static constexpr uint32_t MDMA_GISR0_GIF6 = 0x40;        // GIF6
    static constexpr uint32_t MDMA_GISR0_GIF7 = 0x80;        // GIF7
    static constexpr uint32_t MDMA_GISR0_GIF8 = 0x100;       // GIF8
    static constexpr uint32_t MDMA_GISR0_GIF9 = 0x200;       // GIF9
    static constexpr uint32_t MDMA_GISR0_GIF10 = 0x400;      // GIF10
    static constexpr uint32_t MDMA_GISR0_GIF11 = 0x800;      // GIF11
    static constexpr uint32_t MDMA_GISR0_GIF12 = 0x1000;     // GIF12
    static constexpr uint32_t MDMA_GISR0_GIF13 = 0x2000;     // GIF13
    static constexpr uint32_t MDMA_GISR0_GIF14 = 0x4000;     // GIF14
    static constexpr uint32_t MDMA_GISR0_GIF15 = 0x8000;     // GIF15
    static constexpr uint32_t MDMA_GISR0_GIF16 = 0x10000;    // GIF16
    static constexpr uint32_t MDMA_GISR0_GIF17 = 0x20000;    // GIF17
    static constexpr uint32_t MDMA_GISR0_GIF18 = 0x40000;    // GIF18
    static constexpr uint32_t MDMA_GISR0_GIF19 = 0x80000;    // GIF19
    static constexpr uint32_t MDMA_GISR0_GIF20 = 0x100000;   // GIF20
    static constexpr uint32_t MDMA_GISR0_GIF21 = 0x200000;   // GIF21
    static constexpr uint32_t MDMA_GISR0_GIF22 = 0x400000;   // GIF22
    static constexpr uint32_t MDMA_GISR0_GIF23 = 0x800000;   // GIF23
    static constexpr uint32_t MDMA_GISR0_GIF24 = 0x1000000;  // GIF24
    static constexpr uint32_t MDMA_GISR0_GIF25 = 0x2000000;  // GIF25
    static constexpr uint32_t MDMA_GISR0_GIF26 = 0x4000000;  // GIF26
    static constexpr uint32_t MDMA_GISR0_GIF27 = 0x8000000;  // GIF27
    static constexpr uint32_t MDMA_GISR0_GIF28 = 0x10000000; // GIF28
    static constexpr uint32_t MDMA_GISR0_GIF29 = 0x20000000; // GIF29
    static constexpr uint32_t MDMA_GISR0_GIF30 = 0x40000000; // GIF30
    static constexpr uint32_t MDMA_GISR0_GIF31 = 0x80000000; // GIF31

    static constexpr uint32_t MDMA_SGISR0_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_SGISR0_GIF0 = 0x1;         // GIF0
    static constexpr uint32_t MDMA_SGISR0_GIF1 = 0x2;         // GIF1
    static constexpr uint32_t MDMA_SGISR0_GIF2 = 0x4;         // GIF2
    static constexpr uint32_t MDMA_SGISR0_GIF3 = 0x8;         // GIF3
    static constexpr uint32_t MDMA_SGISR0_GIF4 = 0x10;        // GIF4
    static constexpr uint32_t MDMA_SGISR0_GIF5 = 0x20;        // GIF5
    static constexpr uint32_t MDMA_SGISR0_GIF6 = 0x40;        // GIF6
    static constexpr uint32_t MDMA_SGISR0_GIF7 = 0x80;        // GIF7
    static constexpr uint32_t MDMA_SGISR0_GIF8 = 0x100;       // GIF8
    static constexpr uint32_t MDMA_SGISR0_GIF9 = 0x200;       // GIF9
    static constexpr uint32_t MDMA_SGISR0_GIF10 = 0x400;      // GIF10
    static constexpr uint32_t MDMA_SGISR0_GIF11 = 0x800;      // GIF11
    static constexpr uint32_t MDMA_SGISR0_GIF12 = 0x1000;     // GIF12
    static constexpr uint32_t MDMA_SGISR0_GIF13 = 0x2000;     // GIF13
    static constexpr uint32_t MDMA_SGISR0_GIF14 = 0x4000;     // GIF14
    static constexpr uint32_t MDMA_SGISR0_GIF15 = 0x8000;     // GIF15
    static constexpr uint32_t MDMA_SGISR0_GIF16 = 0x10000;    // GIF16
    static constexpr uint32_t MDMA_SGISR0_GIF17 = 0x20000;    // GIF17
    static constexpr uint32_t MDMA_SGISR0_GIF18 = 0x40000;    // GIF18
    static constexpr uint32_t MDMA_SGISR0_GIF19 = 0x80000;    // GIF19
    static constexpr uint32_t MDMA_SGISR0_GIF20 = 0x100000;   // GIF20
    static constexpr uint32_t MDMA_SGISR0_GIF21 = 0x200000;   // GIF21
    static constexpr uint32_t MDMA_SGISR0_GIF22 = 0x400000;   // GIF22
    static constexpr uint32_t MDMA_SGISR0_GIF23 = 0x800000;   // GIF23
    static constexpr uint32_t MDMA_SGISR0_GIF24 = 0x1000000;  // GIF24
    static constexpr uint32_t MDMA_SGISR0_GIF25 = 0x2000000;  // GIF25
    static constexpr uint32_t MDMA_SGISR0_GIF26 = 0x4000000;  // GIF26
    static constexpr uint32_t MDMA_SGISR0_GIF27 = 0x8000000;  // GIF27
    static constexpr uint32_t MDMA_SGISR0_GIF28 = 0x10000000; // GIF28
    static constexpr uint32_t MDMA_SGISR0_GIF29 = 0x20000000; // GIF29
    static constexpr uint32_t MDMA_SGISR0_GIF30 = 0x40000000; // GIF30
    static constexpr uint32_t MDMA_SGISR0_GIF31 = 0x80000000; // GIF31

    static constexpr uint32_t MDMA_C0ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C0ISR_TEIF = 0x1;     // TEIF
    static constexpr uint32_t MDMA_C0ISR_CTCIF = 0x2;    // CTCIF
    static constexpr uint32_t MDMA_C0ISR_BRTIF = 0x4;    // BRTIF
    static constexpr uint32_t MDMA_C0ISR_BTIF = 0x8;     // BTIF
    static constexpr uint32_t MDMA_C0ISR_TCIF = 0x10;    // TCIF
    static constexpr uint32_t MDMA_C0ISR_CRQA = 0x10000; // CRQA

    static constexpr uint32_t MDMA_C0IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C0IFCR_CTEIF = 0x1;   // CTEIF
    static constexpr uint32_t MDMA_C0IFCR_CCTCIF = 0x2;  // CCTCIF
    static constexpr uint32_t MDMA_C0IFCR_CBRTIF = 0x4;  // CBRTIF
    static constexpr uint32_t MDMA_C0IFCR_CBTIF = 0x8;   // CBTIF
    static constexpr uint32_t MDMA_C0IFCR_CLTCIF = 0x10; // CLTCIF

    static constexpr uint32_t MDMA_C0ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C0ESR_TEA =         // TEA
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C0ESR_TED = 0x80;   // TED
    static constexpr uint32_t MDMA_C0ESR_TELD = 0x100; // TELD
    static constexpr uint32_t MDMA_C0ESR_TEMD = 0x200; // TEMD
    static constexpr uint32_t MDMA_C0ESR_ASE = 0x400;  // ASE
    static constexpr uint32_t MDMA_C0ESR_BSE = 0x800;  // BSE

    static constexpr uint32_t MDMA_C0CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C0CR_EN = 0x1;       // EN
    static constexpr uint32_t MDMA_C0CR_TEIE = 0x2;     // TEIE
    static constexpr uint32_t MDMA_C0CR_CTCIE = 0x4;    // CTCIE
    static constexpr uint32_t MDMA_C0CR_BRTIE = 0x8;    // BRTIE
    static constexpr uint32_t MDMA_C0CR_BTIE = 0x10;    // BTIE
    static constexpr uint32_t MDMA_C0CR_TCIE = 0x20;    // TCIE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C0CR_PL =            // PL
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C0CR_BEX = 0x1000;   // BEX
    static constexpr uint32_t MDMA_C0CR_HEX = 0x2000;   // HEX
    static constexpr uint32_t MDMA_C0CR_WEX = 0x4000;   // WEX
    static constexpr uint32_t MDMA_C0CR_SWRQ = 0x10000; // SWRQ

    static constexpr uint32_t MDMA_C0TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C0TCR_SINC =             // SINC
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C0TCR_DINC =             // DINC
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C0TCR_SSIZE =            // SSIZE
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C0TCR_DSIZE =            // DSIZE
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C0TCR_SINCOS =           // SINCOS
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C0TCR_DINCOS =           // DINCOS
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C0TCR_SBURST =           // SBURST
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C0TCR_DBURST =           // DBURST
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C0TCR_TLEN =             // TLEN
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C0TCR_PKE = 0x2000000;   // PKE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C0TCR_PAM =              // PAM
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C0TCR_TRGM =             // TRGM
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C0TCR_SWRM = 0x40000000; // SWRM
    static constexpr uint32_t MDMA_C0TCR_BWM = 0x80000000;  // BWM

    static constexpr uint32_t MDMA_C0BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C0BNDTR_BNDT =           // BNDT
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C0BNDTR_BRSUM = 0x40000; // BRSUM
    static constexpr uint32_t MDMA_C0BNDTR_BRDUM = 0x80000; // BRDUM
    template<uint32_t X>
    static constexpr uint32_t MDMA_C0BNDTR_BRC =            // BRC
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C0SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C0DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C0BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C0BRUR_SUV =   // SUV
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C0BRUR_DUV =   // DUV
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C0LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C0TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C0TBR_TSEL =          // TSEL
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C0TBR_SBUS = 0x10000; // SBUS
    static constexpr uint32_t MDMA_C0TBR_DBUS = 0x20000; // DBUS

    static constexpr uint32_t MDMA_C0MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C0MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C1ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C1ISR_TEIF = 0x1;     // TEIF
    static constexpr uint32_t MDMA_C1ISR_CTCIF = 0x2;    // CTCIF
    static constexpr uint32_t MDMA_C1ISR_BRTIF = 0x4;    // BRTIF
    static constexpr uint32_t MDMA_C1ISR_BTIF = 0x8;     // BTIF
    static constexpr uint32_t MDMA_C1ISR_TCIF = 0x10;    // TCIF
    static constexpr uint32_t MDMA_C1ISR_CRQA = 0x10000; // CRQA

    static constexpr uint32_t MDMA_C1IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C1IFCR_CTEIF = 0x1;   // CTEIF
    static constexpr uint32_t MDMA_C1IFCR_CCTCIF = 0x2;  // CCTCIF
    static constexpr uint32_t MDMA_C1IFCR_CBRTIF = 0x4;  // CBRTIF
    static constexpr uint32_t MDMA_C1IFCR_CBTIF = 0x8;   // CBTIF
    static constexpr uint32_t MDMA_C1IFCR_CLTCIF = 0x10; // CLTCIF

    static constexpr uint32_t MDMA_C1ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C1ESR_TEA =         // TEA
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C1ESR_TED = 0x80;   // TED
    static constexpr uint32_t MDMA_C1ESR_TELD = 0x100; // TELD
    static constexpr uint32_t MDMA_C1ESR_TEMD = 0x200; // TEMD
    static constexpr uint32_t MDMA_C1ESR_ASE = 0x400;  // ASE
    static constexpr uint32_t MDMA_C1ESR_BSE = 0x800;  // BSE

    static constexpr uint32_t MDMA_C1CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C1CR_EN = 0x1;       // EN
    static constexpr uint32_t MDMA_C1CR_TEIE = 0x2;     // TEIE
    static constexpr uint32_t MDMA_C1CR_CTCIE = 0x4;    // CTCIE
    static constexpr uint32_t MDMA_C1CR_BRTIE = 0x8;    // BRTIE
    static constexpr uint32_t MDMA_C1CR_BTIE = 0x10;    // BTIE
    static constexpr uint32_t MDMA_C1CR_TCIE = 0x20;    // TCIE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C1CR_PL =            // PL
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C1CR_BEX = 0x1000;   // BEX
    static constexpr uint32_t MDMA_C1CR_HEX = 0x2000;   // HEX
    static constexpr uint32_t MDMA_C1CR_WEX = 0x4000;   // WEX
    static constexpr uint32_t MDMA_C1CR_SWRQ = 0x10000; // SWRQ

    static constexpr uint32_t MDMA_C1TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C1TCR_SINC =             // SINC
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C1TCR_DINC =             // DINC
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C1TCR_SSIZE =            // SSIZE
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C1TCR_DSIZE =            // DSIZE
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C1TCR_SINCOS =           // SINCOS
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C1TCR_DINCOS =           // DINCOS
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C1TCR_SBURST =           // SBURST
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C1TCR_DBURST =           // DBURST
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C1TCR_TLEN =             // TLEN
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C1TCR_PKE = 0x2000000;   // PKE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C1TCR_PAM =              // PAM
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C1TCR_TRGM =             // TRGM
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C1TCR_SWRM = 0x40000000; // SWRM
    static constexpr uint32_t MDMA_C1TCR_BWM = 0x80000000;  // BWM

    static constexpr uint32_t MDMA_C1BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C1BNDTR_BNDT =           // BNDT
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C1BNDTR_BRSUM = 0x40000; // BRSUM
    static constexpr uint32_t MDMA_C1BNDTR_BRDUM = 0x80000; // BRDUM
    template<uint32_t X>
    static constexpr uint32_t MDMA_C1BNDTR_BRC =            // BRC
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C1SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C1DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C1BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C1BRUR_SUV =   // SUV
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C1BRUR_DUV =   // DUV
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C1LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C1TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C1TBR_TSEL =          // TSEL
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C1TBR_SBUS = 0x10000; // SBUS
    static constexpr uint32_t MDMA_C1TBR_DBUS = 0x20000; // DBUS

    static constexpr uint32_t MDMA_C1MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C1MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C2ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C2ISR_TEIF = 0x1;     // TEIF
    static constexpr uint32_t MDMA_C2ISR_CTCIF = 0x2;    // CTCIF
    static constexpr uint32_t MDMA_C2ISR_BRTIF = 0x4;    // BRTIF
    static constexpr uint32_t MDMA_C2ISR_BTIF = 0x8;     // BTIF
    static constexpr uint32_t MDMA_C2ISR_TCIF = 0x10;    // TCIF
    static constexpr uint32_t MDMA_C2ISR_CRQA = 0x10000; // CRQA

    static constexpr uint32_t MDMA_C2IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C2IFCR_CTEIF = 0x1;   // CTEIF
    static constexpr uint32_t MDMA_C2IFCR_CCTCIF = 0x2;  // CCTCIF
    static constexpr uint32_t MDMA_C2IFCR_CBRTIF = 0x4;  // CBRTIF
    static constexpr uint32_t MDMA_C2IFCR_CBTIF = 0x8;   // CBTIF
    static constexpr uint32_t MDMA_C2IFCR_CLTCIF = 0x10; // CLTCIF

    static constexpr uint32_t MDMA_C2ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C2ESR_TEA =         // TEA
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C2ESR_TED = 0x80;   // TED
    static constexpr uint32_t MDMA_C2ESR_TELD = 0x100; // TELD
    static constexpr uint32_t MDMA_C2ESR_TEMD = 0x200; // TEMD
    static constexpr uint32_t MDMA_C2ESR_ASE = 0x400;  // ASE
    static constexpr uint32_t MDMA_C2ESR_BSE = 0x800;  // BSE

    static constexpr uint32_t MDMA_C2CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C2CR_EN = 0x1;       // EN
    static constexpr uint32_t MDMA_C2CR_TEIE = 0x2;     // TEIE
    static constexpr uint32_t MDMA_C2CR_CTCIE = 0x4;    // CTCIE
    static constexpr uint32_t MDMA_C2CR_BRTIE = 0x8;    // BRTIE
    static constexpr uint32_t MDMA_C2CR_BTIE = 0x10;    // BTIE
    static constexpr uint32_t MDMA_C2CR_TCIE = 0x20;    // TCIE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C2CR_PL =            // PL
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C2CR_BEX = 0x1000;   // BEX
    static constexpr uint32_t MDMA_C2CR_HEX = 0x2000;   // HEX
    static constexpr uint32_t MDMA_C2CR_WEX = 0x4000;   // WEX
    static constexpr uint32_t MDMA_C2CR_SWRQ = 0x10000; // SWRQ

    static constexpr uint32_t MDMA_C2TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C2TCR_SINC =             // SINC
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C2TCR_DINC =             // DINC
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C2TCR_SSIZE =            // SSIZE
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C2TCR_DSIZE =            // DSIZE
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C2TCR_SINCOS =           // SINCOS
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C2TCR_DINCOS =           // DINCOS
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C2TCR_SBURST =           // SBURST
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C2TCR_DBURST =           // DBURST
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C2TCR_TLEN =             // TLEN
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C2TCR_PKE = 0x2000000;   // PKE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C2TCR_PAM =              // PAM
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C2TCR_TRGM =             // TRGM
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C2TCR_SWRM = 0x40000000; // SWRM
    static constexpr uint32_t MDMA_C2TCR_BWM = 0x80000000;  // BWM

    static constexpr uint32_t MDMA_C2BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C2BNDTR_BNDT =           // BNDT
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C2BNDTR_BRSUM = 0x40000; // BRSUM
    static constexpr uint32_t MDMA_C2BNDTR_BRDUM = 0x80000; // BRDUM
    template<uint32_t X>
    static constexpr uint32_t MDMA_C2BNDTR_BRC =            // BRC
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C2SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C2DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C2BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C2BRUR_SUV =   // SUV
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C2BRUR_DUV =   // DUV
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C2LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C2TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C2TBR_TSEL =          // TSEL
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C2TBR_SBUS = 0x10000; // SBUS
    static constexpr uint32_t MDMA_C2TBR_DBUS = 0x20000; // DBUS

    static constexpr uint32_t MDMA_C2MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C2MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C3ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C3ISR_TEIF = 0x1;     // TEIF
    static constexpr uint32_t MDMA_C3ISR_CTCIF = 0x2;    // CTCIF
    static constexpr uint32_t MDMA_C3ISR_BRTIF = 0x4;    // BRTIF
    static constexpr uint32_t MDMA_C3ISR_BTIF = 0x8;     // BTIF
    static constexpr uint32_t MDMA_C3ISR_TCIF = 0x10;    // TCIF
    static constexpr uint32_t MDMA_C3ISR_CRQA = 0x10000; // CRQA

    static constexpr uint32_t MDMA_C3IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C3IFCR_CTEIF = 0x1;   // CTEIF
    static constexpr uint32_t MDMA_C3IFCR_CCTCIF = 0x2;  // CCTCIF
    static constexpr uint32_t MDMA_C3IFCR_CBRTIF = 0x4;  // CBRTIF
    static constexpr uint32_t MDMA_C3IFCR_CBTIF = 0x8;   // CBTIF
    static constexpr uint32_t MDMA_C3IFCR_CLTCIF = 0x10; // CLTCIF

    static constexpr uint32_t MDMA_C3ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C3ESR_TEA =         // TEA
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C3ESR_TED = 0x80;   // TED
    static constexpr uint32_t MDMA_C3ESR_TELD = 0x100; // TELD
    static constexpr uint32_t MDMA_C3ESR_TEMD = 0x200; // TEMD
    static constexpr uint32_t MDMA_C3ESR_ASE = 0x400;  // ASE
    static constexpr uint32_t MDMA_C3ESR_BSE = 0x800;  // BSE

    static constexpr uint32_t MDMA_C3CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C3CR_EN = 0x1;       // EN
    static constexpr uint32_t MDMA_C3CR_TEIE = 0x2;     // TEIE
    static constexpr uint32_t MDMA_C3CR_CTCIE = 0x4;    // CTCIE
    static constexpr uint32_t MDMA_C3CR_BRTIE = 0x8;    // BRTIE
    static constexpr uint32_t MDMA_C3CR_BTIE = 0x10;    // BTIE
    static constexpr uint32_t MDMA_C3CR_TCIE = 0x20;    // TCIE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C3CR_PL =            // PL
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C3CR_BEX = 0x1000;   // BEX
    static constexpr uint32_t MDMA_C3CR_HEX = 0x2000;   // HEX
    static constexpr uint32_t MDMA_C3CR_WEX = 0x4000;   // WEX
    static constexpr uint32_t MDMA_C3CR_SWRQ = 0x10000; // SWRQ

    static constexpr uint32_t MDMA_C3TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C3TCR_SINC =             // SINC
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C3TCR_DINC =             // DINC
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C3TCR_SSIZE =            // SSIZE
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C3TCR_DSIZE =            // DSIZE
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C3TCR_SINCOS =           // SINCOS
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C3TCR_DINCOS =           // DINCOS
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C3TCR_SBURST =           // SBURST
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C3TCR_DBURST =           // DBURST
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C3TCR_TLEN =             // TLEN
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C3TCR_PKE = 0x2000000;   // PKE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C3TCR_PAM =              // PAM
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C3TCR_TRGM =             // TRGM
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C3TCR_SWRM = 0x40000000; // SWRM
    static constexpr uint32_t MDMA_C3TCR_BWM = 0x80000000;  // BWM

    static constexpr uint32_t MDMA_C3BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C3BNDTR_BNDT =           // BNDT
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C3BNDTR_BRSUM = 0x40000; // BRSUM
    static constexpr uint32_t MDMA_C3BNDTR_BRDUM = 0x80000; // BRDUM
    template<uint32_t X>
    static constexpr uint32_t MDMA_C3BNDTR_BRC =            // BRC
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C3SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C3DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C3BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C3BRUR_SUV =   // SUV
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C3BRUR_DUV =   // DUV
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C3LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C3TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C3TBR_TSEL =          // TSEL
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C3TBR_SBUS = 0x10000; // SBUS
    static constexpr uint32_t MDMA_C3TBR_DBUS = 0x20000; // DBUS

    static constexpr uint32_t MDMA_C3MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C3MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C4ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C4ISR_TEIF = 0x1;     // TEIF
    static constexpr uint32_t MDMA_C4ISR_CTCIF = 0x2;    // CTCIF
    static constexpr uint32_t MDMA_C4ISR_BRTIF = 0x4;    // BRTIF
    static constexpr uint32_t MDMA_C4ISR_BTIF = 0x8;     // BTIF
    static constexpr uint32_t MDMA_C4ISR_TCIF = 0x10;    // TCIF
    static constexpr uint32_t MDMA_C4ISR_CRQA = 0x10000; // CRQA

    static constexpr uint32_t MDMA_C4IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C4IFCR_CTEIF = 0x1;   // CTEIF
    static constexpr uint32_t MDMA_C4IFCR_CCTCIF = 0x2;  // CCTCIF
    static constexpr uint32_t MDMA_C4IFCR_CBRTIF = 0x4;  // CBRTIF
    static constexpr uint32_t MDMA_C4IFCR_CBTIF = 0x8;   // CBTIF
    static constexpr uint32_t MDMA_C4IFCR_CLTCIF = 0x10; // CLTCIF

    static constexpr uint32_t MDMA_C4ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C4ESR_TEA =         // TEA
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C4ESR_TED = 0x80;   // TED
    static constexpr uint32_t MDMA_C4ESR_TELD = 0x100; // TELD
    static constexpr uint32_t MDMA_C4ESR_TEMD = 0x200; // TEMD
    static constexpr uint32_t MDMA_C4ESR_ASE = 0x400;  // ASE
    static constexpr uint32_t MDMA_C4ESR_BSE = 0x800;  // BSE

    static constexpr uint32_t MDMA_C4CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C4CR_EN = 0x1;       // EN
    static constexpr uint32_t MDMA_C4CR_TEIE = 0x2;     // TEIE
    static constexpr uint32_t MDMA_C4CR_CTCIE = 0x4;    // CTCIE
    static constexpr uint32_t MDMA_C4CR_BRTIE = 0x8;    // BRTIE
    static constexpr uint32_t MDMA_C4CR_BTIE = 0x10;    // BTIE
    static constexpr uint32_t MDMA_C4CR_TCIE = 0x20;    // TCIE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C4CR_PL =            // PL
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C4CR_BEX = 0x1000;   // BEX
    static constexpr uint32_t MDMA_C4CR_HEX = 0x2000;   // HEX
    static constexpr uint32_t MDMA_C4CR_WEX = 0x4000;   // WEX
    static constexpr uint32_t MDMA_C4CR_SWRQ = 0x10000; // SWRQ

    static constexpr uint32_t MDMA_C4TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C4TCR_SINC =             // SINC
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C4TCR_DINC =             // DINC
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C4TCR_SSIZE =            // SSIZE
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C4TCR_DSIZE =            // DSIZE
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C4TCR_SINCOS =           // SINCOS
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C4TCR_DINCOS =           // DINCOS
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C4TCR_SBURST =           // SBURST
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C4TCR_DBURST =           // DBURST
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C4TCR_TLEN =             // TLEN
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C4TCR_PKE = 0x2000000;   // PKE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C4TCR_PAM =              // PAM
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C4TCR_TRGM =             // TRGM
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C4TCR_SWRM = 0x40000000; // SWRM
    static constexpr uint32_t MDMA_C4TCR_BWM = 0x80000000;  // BWM

    static constexpr uint32_t MDMA_C4BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C4BNDTR_BNDT =           // BNDT
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C4BNDTR_BRSUM = 0x40000; // BRSUM
    static constexpr uint32_t MDMA_C4BNDTR_BRDUM = 0x80000; // BRDUM
    template<uint32_t X>
    static constexpr uint32_t MDMA_C4BNDTR_BRC =            // BRC
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C4SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C4DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C4BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C4BRUR_SUV =   // SUV
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C4BRUR_DUV =   // DUV
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C4LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C4TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C4TBR_TSEL =          // TSEL
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C4TBR_SBUS = 0x10000; // SBUS
    static constexpr uint32_t MDMA_C4TBR_DBUS = 0x20000; // DBUS

    static constexpr uint32_t MDMA_C4MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C4MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C5ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C5ISR_TEIF = 0x1;     // TEIF
    static constexpr uint32_t MDMA_C5ISR_CTCIF = 0x2;    // CTCIF
    static constexpr uint32_t MDMA_C5ISR_BRTIF = 0x4;    // BRTIF
    static constexpr uint32_t MDMA_C5ISR_BTIF = 0x8;     // BTIF
    static constexpr uint32_t MDMA_C5ISR_TCIF = 0x10;    // TCIF
    static constexpr uint32_t MDMA_C5ISR_CRQA = 0x10000; // CRQA

    static constexpr uint32_t MDMA_C5IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C5IFCR_CTEIF = 0x1;   // CTEIF
    static constexpr uint32_t MDMA_C5IFCR_CCTCIF = 0x2;  // CCTCIF
    static constexpr uint32_t MDMA_C5IFCR_CBRTIF = 0x4;  // CBRTIF
    static constexpr uint32_t MDMA_C5IFCR_CBTIF = 0x8;   // CBTIF
    static constexpr uint32_t MDMA_C5IFCR_CLTCIF = 0x10; // CLTCIF

    static constexpr uint32_t MDMA_C5ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C5ESR_TEA =         // TEA
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C5ESR_TED = 0x80;   // TED
    static constexpr uint32_t MDMA_C5ESR_TELD = 0x100; // TELD
    static constexpr uint32_t MDMA_C5ESR_TEMD = 0x200; // TEMD
    static constexpr uint32_t MDMA_C5ESR_ASE = 0x400;  // ASE
    static constexpr uint32_t MDMA_C5ESR_BSE = 0x800;  // BSE

    static constexpr uint32_t MDMA_C5CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C5CR_EN = 0x1;       // EN
    static constexpr uint32_t MDMA_C5CR_TEIE = 0x2;     // TEIE
    static constexpr uint32_t MDMA_C5CR_CTCIE = 0x4;    // CTCIE
    static constexpr uint32_t MDMA_C5CR_BRTIE = 0x8;    // BRTIE
    static constexpr uint32_t MDMA_C5CR_BTIE = 0x10;    // BTIE
    static constexpr uint32_t MDMA_C5CR_TCIE = 0x20;    // TCIE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C5CR_PL =            // PL
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C5CR_BEX = 0x1000;   // BEX
    static constexpr uint32_t MDMA_C5CR_HEX = 0x2000;   // HEX
    static constexpr uint32_t MDMA_C5CR_WEX = 0x4000;   // WEX
    static constexpr uint32_t MDMA_C5CR_SWRQ = 0x10000; // SWRQ

    static constexpr uint32_t MDMA_C5TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C5TCR_SINC =             // SINC
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C5TCR_DINC =             // DINC
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C5TCR_SSIZE =            // SSIZE
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C5TCR_DSIZE =            // DSIZE
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C5TCR_SINCOS =           // SINCOS
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C5TCR_DINCOS =           // DINCOS
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C5TCR_SBURST =           // SBURST
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C5TCR_DBURST =           // DBURST
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C5TCR_TLEN =             // TLEN
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C5TCR_PKE = 0x2000000;   // PKE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C5TCR_PAM =              // PAM
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C5TCR_TRGM =             // TRGM
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C5TCR_SWRM = 0x40000000; // SWRM
    static constexpr uint32_t MDMA_C5TCR_BWM = 0x80000000;  // BWM

    static constexpr uint32_t MDMA_C5BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C5BNDTR_BNDT =           // BNDT
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C5BNDTR_BRSUM = 0x40000; // BRSUM
    static constexpr uint32_t MDMA_C5BNDTR_BRDUM = 0x80000; // BRDUM
    template<uint32_t X>
    static constexpr uint32_t MDMA_C5BNDTR_BRC =            // BRC
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C5SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C5DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C5BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C5BRUR_SUV =   // SUV
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C5BRUR_DUV =   // DUV
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C5LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C5TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C5TBR_TSEL =          // TSEL
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C5TBR_SBUS = 0x10000; // SBUS
    static constexpr uint32_t MDMA_C5TBR_DBUS = 0x20000; // DBUS

    static constexpr uint32_t MDMA_C5MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C5MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C6ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C6ISR_TEIF = 0x1;     // TEIF
    static constexpr uint32_t MDMA_C6ISR_CTCIF = 0x2;    // CTCIF
    static constexpr uint32_t MDMA_C6ISR_BRTIF = 0x4;    // BRTIF
    static constexpr uint32_t MDMA_C6ISR_BTIF = 0x8;     // BTIF
    static constexpr uint32_t MDMA_C6ISR_TCIF = 0x10;    // TCIF
    static constexpr uint32_t MDMA_C6ISR_CRQA = 0x10000; // CRQA

    static constexpr uint32_t MDMA_C6IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C6IFCR_CTEIF = 0x1;   // CTEIF
    static constexpr uint32_t MDMA_C6IFCR_CCTCIF = 0x2;  // CCTCIF
    static constexpr uint32_t MDMA_C6IFCR_CBRTIF = 0x4;  // CBRTIF
    static constexpr uint32_t MDMA_C6IFCR_CBTIF = 0x8;   // CBTIF
    static constexpr uint32_t MDMA_C6IFCR_CLTCIF = 0x10; // CLTCIF

    static constexpr uint32_t MDMA_C6ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C6ESR_TEA =         // TEA
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C6ESR_TED = 0x80;   // TED
    static constexpr uint32_t MDMA_C6ESR_TELD = 0x100; // TELD
    static constexpr uint32_t MDMA_C6ESR_TEMD = 0x200; // TEMD
    static constexpr uint32_t MDMA_C6ESR_ASE = 0x400;  // ASE
    static constexpr uint32_t MDMA_C6ESR_BSE = 0x800;  // BSE

    static constexpr uint32_t MDMA_C6CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C6CR_EN = 0x1;       // EN
    static constexpr uint32_t MDMA_C6CR_TEIE = 0x2;     // TEIE
    static constexpr uint32_t MDMA_C6CR_CTCIE = 0x4;    // CTCIE
    static constexpr uint32_t MDMA_C6CR_BRTIE = 0x8;    // BRTIE
    static constexpr uint32_t MDMA_C6CR_BTIE = 0x10;    // BTIE
    static constexpr uint32_t MDMA_C6CR_TCIE = 0x20;    // TCIE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C6CR_PL =            // PL
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C6CR_BEX = 0x1000;   // BEX
    static constexpr uint32_t MDMA_C6CR_HEX = 0x2000;   // HEX
    static constexpr uint32_t MDMA_C6CR_WEX = 0x4000;   // WEX
    static constexpr uint32_t MDMA_C6CR_SWRQ = 0x10000; // SWRQ

    static constexpr uint32_t MDMA_C6TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C6TCR_SINC =             // SINC
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C6TCR_DINC =             // DINC
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C6TCR_SSIZE =            // SSIZE
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C6TCR_DSIZE =            // DSIZE
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C6TCR_SINCOS =           // SINCOS
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C6TCR_DINCOS =           // DINCOS
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C6TCR_SBURST =           // SBURST
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C6TCR_DBURST =           // DBURST
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C6TCR_TLEN =             // TLEN
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C6TCR_PKE = 0x2000000;   // PKE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C6TCR_PAM =              // PAM
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C6TCR_TRGM =             // TRGM
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C6TCR_SWRM = 0x40000000; // SWRM
    static constexpr uint32_t MDMA_C6TCR_BWM = 0x80000000;  // BWM

    static constexpr uint32_t MDMA_C6BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C6BNDTR_BNDT =           // BNDT
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C6BNDTR_BRSUM = 0x40000; // BRSUM
    static constexpr uint32_t MDMA_C6BNDTR_BRDUM = 0x80000; // BRDUM
    template<uint32_t X>
    static constexpr uint32_t MDMA_C6BNDTR_BRC =            // BRC
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C6SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C6DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C6BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C6BRUR_SUV =   // SUV
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C6BRUR_DUV =   // DUV
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C6LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C6TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C6TBR_TSEL =          // TSEL
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C6TBR_SBUS = 0x10000; // SBUS
    static constexpr uint32_t MDMA_C6TBR_DBUS = 0x20000; // DBUS

    static constexpr uint32_t MDMA_C6MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C6MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C7ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C7ISR_TEIF = 0x1;     // TEIF
    static constexpr uint32_t MDMA_C7ISR_CTCIF = 0x2;    // CTCIF
    static constexpr uint32_t MDMA_C7ISR_BRTIF = 0x4;    // BRTIF
    static constexpr uint32_t MDMA_C7ISR_BTIF = 0x8;     // BTIF
    static constexpr uint32_t MDMA_C7ISR_TCIF = 0x10;    // TCIF
    static constexpr uint32_t MDMA_C7ISR_CRQA = 0x10000; // CRQA

    static constexpr uint32_t MDMA_C7IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C7IFCR_CTEIF = 0x1;   // CTEIF
    static constexpr uint32_t MDMA_C7IFCR_CCTCIF = 0x2;  // CCTCIF
    static constexpr uint32_t MDMA_C7IFCR_CBRTIF = 0x4;  // CBRTIF
    static constexpr uint32_t MDMA_C7IFCR_CBTIF = 0x8;   // CBTIF
    static constexpr uint32_t MDMA_C7IFCR_CLTCIF = 0x10; // CLTCIF

    static constexpr uint32_t MDMA_C7ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C7ESR_TEA =         // TEA
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C7ESR_TED = 0x80;   // TED
    static constexpr uint32_t MDMA_C7ESR_TELD = 0x100; // TELD
    static constexpr uint32_t MDMA_C7ESR_TEMD = 0x200; // TEMD
    static constexpr uint32_t MDMA_C7ESR_ASE = 0x400;  // ASE
    static constexpr uint32_t MDMA_C7ESR_BSE = 0x800;  // BSE

    static constexpr uint32_t MDMA_C7CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C7CR_EN = 0x1;       // EN
    static constexpr uint32_t MDMA_C7CR_TEIE = 0x2;     // TEIE
    static constexpr uint32_t MDMA_C7CR_CTCIE = 0x4;    // CTCIE
    static constexpr uint32_t MDMA_C7CR_BRTIE = 0x8;    // BRTIE
    static constexpr uint32_t MDMA_C7CR_BTIE = 0x10;    // BTIE
    static constexpr uint32_t MDMA_C7CR_TCIE = 0x20;    // TCIE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C7CR_PL =            // PL
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C7CR_BEX = 0x1000;   // BEX
    static constexpr uint32_t MDMA_C7CR_HEX = 0x2000;   // HEX
    static constexpr uint32_t MDMA_C7CR_WEX = 0x4000;   // WEX
    static constexpr uint32_t MDMA_C7CR_SWRQ = 0x10000; // SWRQ

    static constexpr uint32_t MDMA_C7TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C7TCR_SINC =             // SINC
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C7TCR_DINC =             // DINC
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C7TCR_SSIZE =            // SSIZE
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C7TCR_DSIZE =            // DSIZE
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C7TCR_SINCOS =           // SINCOS
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C7TCR_DINCOS =           // DINCOS
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C7TCR_SBURST =           // SBURST
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C7TCR_DBURST =           // DBURST
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C7TCR_TLEN =             // TLEN
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C7TCR_PKE = 0x2000000;   // PKE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C7TCR_PAM =              // PAM
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C7TCR_TRGM =             // TRGM
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C7TCR_SWRM = 0x40000000; // SWRM
    static constexpr uint32_t MDMA_C7TCR_BWM = 0x80000000;  // BWM

    static constexpr uint32_t MDMA_C7BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C7BNDTR_BNDT =           // BNDT
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C7BNDTR_BRSUM = 0x40000; // BRSUM
    static constexpr uint32_t MDMA_C7BNDTR_BRDUM = 0x80000; // BRDUM
    template<uint32_t X>
    static constexpr uint32_t MDMA_C7BNDTR_BRC =            // BRC
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C7SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C7DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C7BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C7BRUR_SUV =   // SUV
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C7BRUR_DUV =   // DUV
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C7LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C7TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C7TBR_TSEL =          // TSEL
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C7TBR_SBUS = 0x10000; // SBUS
    static constexpr uint32_t MDMA_C7TBR_DBUS = 0x20000; // DBUS

    static constexpr uint32_t MDMA_C7MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C7MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C8ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C8ISR_TEIF = 0x1;     // TEIF
    static constexpr uint32_t MDMA_C8ISR_CTCIF = 0x2;    // CTCIF
    static constexpr uint32_t MDMA_C8ISR_BRTIF = 0x4;    // BRTIF
    static constexpr uint32_t MDMA_C8ISR_BTIF = 0x8;     // BTIF
    static constexpr uint32_t MDMA_C8ISR_TCIF = 0x10;    // TCIF
    static constexpr uint32_t MDMA_C8ISR_CRQA = 0x10000; // CRQA

    static constexpr uint32_t MDMA_C8IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C8IFCR_CTEIF = 0x1;   // CTEIF
    static constexpr uint32_t MDMA_C8IFCR_CCTCIF = 0x2;  // CCTCIF
    static constexpr uint32_t MDMA_C8IFCR_CBRTIF = 0x4;  // CBRTIF
    static constexpr uint32_t MDMA_C8IFCR_CBTIF = 0x8;   // CBTIF
    static constexpr uint32_t MDMA_C8IFCR_CLTCIF = 0x10; // CLTCIF

    static constexpr uint32_t MDMA_C8ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C8ESR_TEA =         // TEA
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C8ESR_TED = 0x80;   // TED
    static constexpr uint32_t MDMA_C8ESR_TELD = 0x100; // TELD
    static constexpr uint32_t MDMA_C8ESR_TEMD = 0x200; // TEMD
    static constexpr uint32_t MDMA_C8ESR_ASE = 0x400;  // ASE
    static constexpr uint32_t MDMA_C8ESR_BSE = 0x800;  // BSE

    static constexpr uint32_t MDMA_C8CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C8CR_EN = 0x1;       // EN
    static constexpr uint32_t MDMA_C8CR_TEIE = 0x2;     // TEIE
    static constexpr uint32_t MDMA_C8CR_CTCIE = 0x4;    // CTCIE
    static constexpr uint32_t MDMA_C8CR_BRTIE = 0x8;    // BRTIE
    static constexpr uint32_t MDMA_C8CR_BTIE = 0x10;    // BTIE
    static constexpr uint32_t MDMA_C8CR_TCIE = 0x20;    // TCIE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C8CR_PL =            // PL
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C8CR_BEX = 0x1000;   // BEX
    static constexpr uint32_t MDMA_C8CR_HEX = 0x2000;   // HEX
    static constexpr uint32_t MDMA_C8CR_WEX = 0x4000;   // WEX
    static constexpr uint32_t MDMA_C8CR_SWRQ = 0x10000; // SWRQ

    static constexpr uint32_t MDMA_C8TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C8TCR_SINC =             // SINC
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C8TCR_DINC =             // DINC
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C8TCR_SSIZE =            // SSIZE
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C8TCR_DSIZE =            // DSIZE
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C8TCR_SINCOS =           // SINCOS
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C8TCR_DINCOS =           // DINCOS
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C8TCR_SBURST =           // SBURST
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C8TCR_DBURST =           // DBURST
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C8TCR_TLEN =             // TLEN
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C8TCR_PKE = 0x2000000;   // PKE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C8TCR_PAM =              // PAM
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C8TCR_TRGM =             // TRGM
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C8TCR_SWRM = 0x40000000; // SWRM
    static constexpr uint32_t MDMA_C8TCR_BWM = 0x80000000;  // BWM

    static constexpr uint32_t MDMA_C8BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C8BNDTR_BNDT =           // BNDT
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C8BNDTR_BRSUM = 0x40000; // BRSUM
    static constexpr uint32_t MDMA_C8BNDTR_BRDUM = 0x80000; // BRDUM
    template<uint32_t X>
    static constexpr uint32_t MDMA_C8BNDTR_BRC =            // BRC
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C8SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C8DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C8BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C8BRUR_SUV =   // SUV
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C8BRUR_DUV =   // DUV
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C8LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C8TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C8TBR_TSEL =          // TSEL
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C8TBR_SBUS = 0x10000; // SBUS
    static constexpr uint32_t MDMA_C8TBR_DBUS = 0x20000; // DBUS

    static constexpr uint32_t MDMA_C8MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C8MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C9ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C9ISR_TEIF = 0x1;     // TEIF
    static constexpr uint32_t MDMA_C9ISR_CTCIF = 0x2;    // CTCIF
    static constexpr uint32_t MDMA_C9ISR_BRTIF = 0x4;    // BRTIF
    static constexpr uint32_t MDMA_C9ISR_BTIF = 0x8;     // BTIF
    static constexpr uint32_t MDMA_C9ISR_TCIF = 0x10;    // TCIF
    static constexpr uint32_t MDMA_C9ISR_CRQA = 0x10000; // CRQA

    static constexpr uint32_t MDMA_C9IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C9IFCR_CTEIF = 0x1;   // CTEIF
    static constexpr uint32_t MDMA_C9IFCR_CCTCIF = 0x2;  // CCTCIF
    static constexpr uint32_t MDMA_C9IFCR_CBRTIF = 0x4;  // CBRTIF
    static constexpr uint32_t MDMA_C9IFCR_CBTIF = 0x8;   // CBTIF
    static constexpr uint32_t MDMA_C9IFCR_CLTCIF = 0x10; // CLTCIF

    static constexpr uint32_t MDMA_C9ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C9ESR_TEA =         // TEA
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C9ESR_TED = 0x80;   // TED
    static constexpr uint32_t MDMA_C9ESR_TELD = 0x100; // TELD
    static constexpr uint32_t MDMA_C9ESR_TEMD = 0x200; // TEMD
    static constexpr uint32_t MDMA_C9ESR_ASE = 0x400;  // ASE
    static constexpr uint32_t MDMA_C9ESR_BSE = 0x800;  // BSE

    static constexpr uint32_t MDMA_C9CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C9CR_EN = 0x1;       // EN
    static constexpr uint32_t MDMA_C9CR_TEIE = 0x2;     // TEIE
    static constexpr uint32_t MDMA_C9CR_CTCIE = 0x4;    // CTCIE
    static constexpr uint32_t MDMA_C9CR_BRTIE = 0x8;    // BRTIE
    static constexpr uint32_t MDMA_C9CR_BTIE = 0x10;    // BTIE
    static constexpr uint32_t MDMA_C9CR_TCIE = 0x20;    // TCIE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C9CR_PL =            // PL
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C9CR_BEX = 0x1000;   // BEX
    static constexpr uint32_t MDMA_C9CR_HEX = 0x2000;   // HEX
    static constexpr uint32_t MDMA_C9CR_WEX = 0x4000;   // WEX
    static constexpr uint32_t MDMA_C9CR_SWRQ = 0x10000; // SWRQ

    static constexpr uint32_t MDMA_C9TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C9TCR_SINC =             // SINC
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C9TCR_DINC =             // DINC
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C9TCR_SSIZE =            // SSIZE
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C9TCR_DSIZE =            // DSIZE
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C9TCR_SINCOS =           // SINCOS
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C9TCR_DINCOS =           // DINCOS
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C9TCR_SBURST =           // SBURST
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C9TCR_DBURST =           // DBURST
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C9TCR_TLEN =             // TLEN
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C9TCR_PKE = 0x2000000;   // PKE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C9TCR_PAM =              // PAM
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C9TCR_TRGM =             // TRGM
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C9TCR_SWRM = 0x40000000; // SWRM
    static constexpr uint32_t MDMA_C9TCR_BWM = 0x80000000;  // BWM

    static constexpr uint32_t MDMA_C9BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C9BNDTR_BNDT =           // BNDT
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C9BNDTR_BRSUM = 0x40000; // BRSUM
    static constexpr uint32_t MDMA_C9BNDTR_BRDUM = 0x80000; // BRDUM
    template<uint32_t X>
    static constexpr uint32_t MDMA_C9BNDTR_BRC =            // BRC
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C9SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C9DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C9BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C9BRUR_SUV =   // SUV
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C9BRUR_DUV =   // DUV
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C9LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C9TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C9TBR_TSEL =          // TSEL
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C9TBR_SBUS = 0x10000; // SBUS
    static constexpr uint32_t MDMA_C9TBR_DBUS = 0x20000; // DBUS

    static constexpr uint32_t MDMA_C9MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C9MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C10ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C10ISR_TEIF = 0x1;     // TEIF
    static constexpr uint32_t MDMA_C10ISR_CTCIF = 0x2;    // CTCIF
    static constexpr uint32_t MDMA_C10ISR_BRTIF = 0x4;    // BRTIF
    static constexpr uint32_t MDMA_C10ISR_BTIF = 0x8;     // BTIF
    static constexpr uint32_t MDMA_C10ISR_TCIF = 0x10;    // TCIF
    static constexpr uint32_t MDMA_C10ISR_CRQA = 0x10000; // CRQA

    static constexpr uint32_t MDMA_C10IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C10IFCR_CTEIF = 0x1;   // CTEIF
    static constexpr uint32_t MDMA_C10IFCR_CCTCIF = 0x2;  // CCTCIF
    static constexpr uint32_t MDMA_C10IFCR_CBRTIF = 0x4;  // CBRTIF
    static constexpr uint32_t MDMA_C10IFCR_CBTIF = 0x8;   // CBTIF
    static constexpr uint32_t MDMA_C10IFCR_CLTCIF = 0x10; // CLTCIF

    static constexpr uint32_t MDMA_C10ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C10ESR_TEA =         // TEA
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C10ESR_TED = 0x80;   // TED
    static constexpr uint32_t MDMA_C10ESR_TELD = 0x100; // TELD
    static constexpr uint32_t MDMA_C10ESR_TEMD = 0x200; // TEMD
    static constexpr uint32_t MDMA_C10ESR_ASE = 0x400;  // ASE
    static constexpr uint32_t MDMA_C10ESR_BSE = 0x800;  // BSE

    static constexpr uint32_t MDMA_C10CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C10CR_EN = 0x1;       // EN
    static constexpr uint32_t MDMA_C10CR_TEIE = 0x2;     // TEIE
    static constexpr uint32_t MDMA_C10CR_CTCIE = 0x4;    // CTCIE
    static constexpr uint32_t MDMA_C10CR_BRTIE = 0x8;    // BRTIE
    static constexpr uint32_t MDMA_C10CR_BTIE = 0x10;    // BTIE
    static constexpr uint32_t MDMA_C10CR_TCIE = 0x20;    // TCIE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C10CR_PL =            // PL
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C10CR_BEX = 0x1000;   // BEX
    static constexpr uint32_t MDMA_C10CR_HEX = 0x2000;   // HEX
    static constexpr uint32_t MDMA_C10CR_WEX = 0x4000;   // WEX
    static constexpr uint32_t MDMA_C10CR_SWRQ = 0x10000; // SWRQ

    static constexpr uint32_t MDMA_C10TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C10TCR_SINC =             // SINC
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C10TCR_DINC =             // DINC
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C10TCR_SSIZE =            // SSIZE
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C10TCR_DSIZE =            // DSIZE
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C10TCR_SINCOS =           // SINCOS
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C10TCR_DINCOS =           // DINCOS
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C10TCR_SBURST =           // SBURST
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C10TCR_DBURST =           // DBURST
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C10TCR_TLEN =             // TLEN
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C10TCR_PKE = 0x2000000;   // PKE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C10TCR_PAM =              // PAM
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C10TCR_TRGM =             // TRGM
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C10TCR_SWRM = 0x40000000; // SWRM
    static constexpr uint32_t MDMA_C10TCR_BWM = 0x80000000;  // BWM

    static constexpr uint32_t MDMA_C10BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C10BNDTR_BNDT =           // BNDT
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C10BNDTR_BRSUM = 0x40000; // BRSUM
    static constexpr uint32_t MDMA_C10BNDTR_BRDUM = 0x80000; // BRDUM
    template<uint32_t X>
    static constexpr uint32_t MDMA_C10BNDTR_BRC =            // BRC
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C10SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C10DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C10BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C10BRUR_SUV =   // SUV
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C10BRUR_DUV =   // DUV
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C10LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C10TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C10TBR_TSEL =          // TSEL
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C10TBR_SBUS = 0x10000; // SBUS
    static constexpr uint32_t MDMA_C10TBR_DBUS = 0x20000; // DBUS

    static constexpr uint32_t MDMA_C10MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C10MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C11ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C11ISR_TEIF = 0x1;     // TEIF
    static constexpr uint32_t MDMA_C11ISR_CTCIF = 0x2;    // CTCIF
    static constexpr uint32_t MDMA_C11ISR_BRTIF = 0x4;    // BRTIF
    static constexpr uint32_t MDMA_C11ISR_BTIF = 0x8;     // BTIF
    static constexpr uint32_t MDMA_C11ISR_TCIF = 0x10;    // TCIF
    static constexpr uint32_t MDMA_C11ISR_CRQA = 0x10000; // CRQA

    static constexpr uint32_t MDMA_C11IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C11IFCR_CTEIF = 0x1;   // CTEIF
    static constexpr uint32_t MDMA_C11IFCR_CCTCIF = 0x2;  // CCTCIF
    static constexpr uint32_t MDMA_C11IFCR_CBRTIF = 0x4;  // CBRTIF
    static constexpr uint32_t MDMA_C11IFCR_CBTIF = 0x8;   // CBTIF
    static constexpr uint32_t MDMA_C11IFCR_CLTCIF = 0x10; // CLTCIF

    static constexpr uint32_t MDMA_C11ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C11ESR_TEA =         // TEA
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C11ESR_TED = 0x80;   // TED
    static constexpr uint32_t MDMA_C11ESR_TELD = 0x100; // TELD
    static constexpr uint32_t MDMA_C11ESR_TEMD = 0x200; // TEMD
    static constexpr uint32_t MDMA_C11ESR_ASE = 0x400;  // ASE
    static constexpr uint32_t MDMA_C11ESR_BSE = 0x800;  // BSE

    static constexpr uint32_t MDMA_C11CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C11CR_EN = 0x1;       // EN
    static constexpr uint32_t MDMA_C11CR_TEIE = 0x2;     // TEIE
    static constexpr uint32_t MDMA_C11CR_CTCIE = 0x4;    // CTCIE
    static constexpr uint32_t MDMA_C11CR_BRTIE = 0x8;    // BRTIE
    static constexpr uint32_t MDMA_C11CR_BTIE = 0x10;    // BTIE
    static constexpr uint32_t MDMA_C11CR_TCIE = 0x20;    // TCIE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C11CR_PL =            // PL
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C11CR_BEX = 0x1000;   // BEX
    static constexpr uint32_t MDMA_C11CR_HEX = 0x2000;   // HEX
    static constexpr uint32_t MDMA_C11CR_WEX = 0x4000;   // WEX
    static constexpr uint32_t MDMA_C11CR_SWRQ = 0x10000; // SWRQ

    static constexpr uint32_t MDMA_C11TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C11TCR_SINC =             // SINC
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C11TCR_DINC =             // DINC
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C11TCR_SSIZE =            // SSIZE
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C11TCR_DSIZE =            // DSIZE
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C11TCR_SINCOS =           // SINCOS
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C11TCR_DINCOS =           // DINCOS
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C11TCR_SBURST =           // SBURST
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C11TCR_DBURST =           // DBURST
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C11TCR_TLEN =             // TLEN
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C11TCR_PKE = 0x2000000;   // PKE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C11TCR_PAM =              // PAM
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C11TCR_TRGM =             // TRGM
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C11TCR_SWRM = 0x40000000; // SWRM
    static constexpr uint32_t MDMA_C11TCR_BWM = 0x80000000;  // BWM

    static constexpr uint32_t MDMA_C11BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C11BNDTR_BNDT =           // BNDT
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C11BNDTR_BRSUM = 0x40000; // BRSUM
    static constexpr uint32_t MDMA_C11BNDTR_BRDUM = 0x80000; // BRDUM
    template<uint32_t X>
    static constexpr uint32_t MDMA_C11BNDTR_BRC =            // BRC
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C11SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C11DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C11BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C11BRUR_SUV =   // SUV
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C11BRUR_DUV =   // DUV
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C11LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C11TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C11TBR_TSEL =          // TSEL
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C11TBR_SBUS = 0x10000; // SBUS
    static constexpr uint32_t MDMA_C11TBR_DBUS = 0x20000; // DBUS

    static constexpr uint32_t MDMA_C11MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C11MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C12ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C12ISR_TEIF = 0x1;     // TEIF
    static constexpr uint32_t MDMA_C12ISR_CTCIF = 0x2;    // CTCIF
    static constexpr uint32_t MDMA_C12ISR_BRTIF = 0x4;    // BRTIF
    static constexpr uint32_t MDMA_C12ISR_BTIF = 0x8;     // BTIF
    static constexpr uint32_t MDMA_C12ISR_TCIF = 0x10;    // TCIF
    static constexpr uint32_t MDMA_C12ISR_CRQA = 0x10000; // CRQA

    static constexpr uint32_t MDMA_C12IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C12IFCR_CTEIF = 0x1;   // CTEIF
    static constexpr uint32_t MDMA_C12IFCR_CCTCIF = 0x2;  // CCTCIF
    static constexpr uint32_t MDMA_C12IFCR_CBRTIF = 0x4;  // CBRTIF
    static constexpr uint32_t MDMA_C12IFCR_CBTIF = 0x8;   // CBTIF
    static constexpr uint32_t MDMA_C12IFCR_CLTCIF = 0x10; // CLTCIF

    static constexpr uint32_t MDMA_C12ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C12ESR_TEA =         // TEA
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C12ESR_TED = 0x80;   // TED
    static constexpr uint32_t MDMA_C12ESR_TELD = 0x100; // TELD
    static constexpr uint32_t MDMA_C12ESR_TEMD = 0x200; // TEMD
    static constexpr uint32_t MDMA_C12ESR_ASE = 0x400;  // ASE
    static constexpr uint32_t MDMA_C12ESR_BSE = 0x800;  // BSE

    static constexpr uint32_t MDMA_C12CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C12CR_EN = 0x1;       // EN
    static constexpr uint32_t MDMA_C12CR_TEIE = 0x2;     // TEIE
    static constexpr uint32_t MDMA_C12CR_CTCIE = 0x4;    // CTCIE
    static constexpr uint32_t MDMA_C12CR_BRTIE = 0x8;    // BRTIE
    static constexpr uint32_t MDMA_C12CR_BTIE = 0x10;    // BTIE
    static constexpr uint32_t MDMA_C12CR_TCIE = 0x20;    // TCIE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C12CR_PL =            // PL
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C12CR_BEX = 0x1000;   // BEX
    static constexpr uint32_t MDMA_C12CR_HEX = 0x2000;   // HEX
    static constexpr uint32_t MDMA_C12CR_WEX = 0x4000;   // WEX
    static constexpr uint32_t MDMA_C12CR_SWRQ = 0x10000; // SWRQ

    static constexpr uint32_t MDMA_C12TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C12TCR_SINC =             // SINC
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C12TCR_DINC =             // DINC
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C12TCR_SSIZE =            // SSIZE
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C12TCR_DSIZE =            // DSIZE
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C12TCR_SINCOS =           // SINCOS
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C12TCR_DINCOS =           // DINCOS
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C12TCR_SBURST =           // SBURST
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C12TCR_DBURST =           // DBURST
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C12TCR_TLEN =             // TLEN
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C12TCR_PKE = 0x2000000;   // PKE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C12TCR_PAM =              // PAM
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C12TCR_TRGM =             // TRGM
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C12TCR_SWRM = 0x40000000; // SWRM
    static constexpr uint32_t MDMA_C12TCR_BWM = 0x80000000;  // BWM

    static constexpr uint32_t MDMA_C12BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C12BNDTR_BNDT =           // BNDT
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C12BNDTR_BRSUM = 0x40000; // BRSUM
    static constexpr uint32_t MDMA_C12BNDTR_BRDUM = 0x80000; // BRDUM
    template<uint32_t X>
    static constexpr uint32_t MDMA_C12BNDTR_BRC =            // BRC
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C12SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C12DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C12BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C12BRUR_SUV =   // SUV
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C12BRUR_DUV =   // DUV
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C12LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C12TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C12TBR_TSEL =          // TSEL
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C12TBR_SBUS = 0x10000; // SBUS
    static constexpr uint32_t MDMA_C12TBR_DBUS = 0x20000; // DBUS

    static constexpr uint32_t MDMA_C12MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C12MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C13ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C13ISR_TEIF = 0x1;     // TEIF
    static constexpr uint32_t MDMA_C13ISR_CTCIF = 0x2;    // CTCIF
    static constexpr uint32_t MDMA_C13ISR_BRTIF = 0x4;    // BRTIF
    static constexpr uint32_t MDMA_C13ISR_BTIF = 0x8;     // BTIF
    static constexpr uint32_t MDMA_C13ISR_TCIF = 0x10;    // TCIF
    static constexpr uint32_t MDMA_C13ISR_CRQA = 0x10000; // CRQA

    static constexpr uint32_t MDMA_C13IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C13IFCR_CTEIF = 0x1;   // CTEIF
    static constexpr uint32_t MDMA_C13IFCR_CCTCIF = 0x2;  // CCTCIF
    static constexpr uint32_t MDMA_C13IFCR_CBRTIF = 0x4;  // CBRTIF
    static constexpr uint32_t MDMA_C13IFCR_CBTIF = 0x8;   // CBTIF
    static constexpr uint32_t MDMA_C13IFCR_CLTCIF = 0x10; // CLTCIF

    static constexpr uint32_t MDMA_C13ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C13ESR_TEA =         // TEA
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C13ESR_TED = 0x80;   // TED
    static constexpr uint32_t MDMA_C13ESR_TELD = 0x100; // TELD
    static constexpr uint32_t MDMA_C13ESR_TEMD = 0x200; // TEMD
    static constexpr uint32_t MDMA_C13ESR_ASE = 0x400;  // ASE
    static constexpr uint32_t MDMA_C13ESR_BSE = 0x800;  // BSE

    static constexpr uint32_t MDMA_C13CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C13CR_EN = 0x1;       // EN
    static constexpr uint32_t MDMA_C13CR_TEIE = 0x2;     // TEIE
    static constexpr uint32_t MDMA_C13CR_CTCIE = 0x4;    // CTCIE
    static constexpr uint32_t MDMA_C13CR_BRTIE = 0x8;    // BRTIE
    static constexpr uint32_t MDMA_C13CR_BTIE = 0x10;    // BTIE
    static constexpr uint32_t MDMA_C13CR_TCIE = 0x20;    // TCIE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C13CR_PL =            // PL
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C13CR_BEX = 0x1000;   // BEX
    static constexpr uint32_t MDMA_C13CR_HEX = 0x2000;   // HEX
    static constexpr uint32_t MDMA_C13CR_WEX = 0x4000;   // WEX
    static constexpr uint32_t MDMA_C13CR_SWRQ = 0x10000; // SWRQ

    static constexpr uint32_t MDMA_C13TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C13TCR_SINC =             // SINC
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C13TCR_DINC =             // DINC
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C13TCR_SSIZE =            // SSIZE
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C13TCR_DSIZE =            // DSIZE
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C13TCR_SINCOS =           // SINCOS
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C13TCR_DINCOS =           // DINCOS
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C13TCR_SBURST =           // SBURST
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C13TCR_DBURST =           // DBURST
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C13TCR_TLEN =             // TLEN
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C13TCR_PKE = 0x2000000;   // PKE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C13TCR_PAM =              // PAM
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C13TCR_TRGM =             // TRGM
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C13TCR_SWRM = 0x40000000; // SWRM
    static constexpr uint32_t MDMA_C13TCR_BWM = 0x80000000;  // BWM

    static constexpr uint32_t MDMA_C13BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C13BNDTR_BNDT =           // BNDT
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C13BNDTR_BRSUM = 0x40000; // BRSUM
    static constexpr uint32_t MDMA_C13BNDTR_BRDUM = 0x80000; // BRDUM
    template<uint32_t X>
    static constexpr uint32_t MDMA_C13BNDTR_BRC =            // BRC
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C13SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C13DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C13BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C13BRUR_SUV =   // SUV
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C13BRUR_DUV =   // DUV
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C13LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C13TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C13TBR_TSEL =          // TSEL
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C13TBR_SBUS = 0x10000; // SBUS
    static constexpr uint32_t MDMA_C13TBR_DBUS = 0x20000; // DBUS

    static constexpr uint32_t MDMA_C13MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C13MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C14ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C14ISR_TEIF = 0x1;     // TEIF
    static constexpr uint32_t MDMA_C14ISR_CTCIF = 0x2;    // CTCIF
    static constexpr uint32_t MDMA_C14ISR_BRTIF = 0x4;    // BRTIF
    static constexpr uint32_t MDMA_C14ISR_BTIF = 0x8;     // BTIF
    static constexpr uint32_t MDMA_C14ISR_TCIF = 0x10;    // TCIF
    static constexpr uint32_t MDMA_C14ISR_CRQA = 0x10000; // CRQA

    static constexpr uint32_t MDMA_C14IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C14IFCR_CTEIF = 0x1;   // CTEIF
    static constexpr uint32_t MDMA_C14IFCR_CCTCIF = 0x2;  // CCTCIF
    static constexpr uint32_t MDMA_C14IFCR_CBRTIF = 0x4;  // CBRTIF
    static constexpr uint32_t MDMA_C14IFCR_CBTIF = 0x8;   // CBTIF
    static constexpr uint32_t MDMA_C14IFCR_CLTCIF = 0x10; // CLTCIF

    static constexpr uint32_t MDMA_C14ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C14ESR_TEA =         // TEA
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C14ESR_TED = 0x80;   // TED
    static constexpr uint32_t MDMA_C14ESR_TELD = 0x100; // TELD
    static constexpr uint32_t MDMA_C14ESR_TEMD = 0x200; // TEMD
    static constexpr uint32_t MDMA_C14ESR_ASE = 0x400;  // ASE
    static constexpr uint32_t MDMA_C14ESR_BSE = 0x800;  // BSE

    static constexpr uint32_t MDMA_C14CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C14CR_EN = 0x1;       // EN
    static constexpr uint32_t MDMA_C14CR_TEIE = 0x2;     // TEIE
    static constexpr uint32_t MDMA_C14CR_CTCIE = 0x4;    // CTCIE
    static constexpr uint32_t MDMA_C14CR_BRTIE = 0x8;    // BRTIE
    static constexpr uint32_t MDMA_C14CR_BTIE = 0x10;    // BTIE
    static constexpr uint32_t MDMA_C14CR_TCIE = 0x20;    // TCIE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C14CR_PL =            // PL
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C14CR_BEX = 0x1000;   // BEX
    static constexpr uint32_t MDMA_C14CR_HEX = 0x2000;   // HEX
    static constexpr uint32_t MDMA_C14CR_WEX = 0x4000;   // WEX
    static constexpr uint32_t MDMA_C14CR_SWRQ = 0x10000; // SWRQ

    static constexpr uint32_t MDMA_C14TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C14TCR_SINC =             // SINC
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C14TCR_DINC =             // DINC
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C14TCR_SSIZE =            // SSIZE
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C14TCR_DSIZE =            // DSIZE
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C14TCR_SINCOS =           // SINCOS
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C14TCR_DINCOS =           // DINCOS
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C14TCR_SBURST =           // SBURST
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C14TCR_DBURST =           // DBURST
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C14TCR_TLEN =             // TLEN
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C14TCR_PKE = 0x2000000;   // PKE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C14TCR_PAM =              // PAM
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C14TCR_TRGM =             // TRGM
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C14TCR_SWRM = 0x40000000; // SWRM
    static constexpr uint32_t MDMA_C14TCR_BWM = 0x80000000;  // BWM

    static constexpr uint32_t MDMA_C14BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C14BNDTR_BNDT =           // BNDT
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C14BNDTR_BRSUM = 0x40000; // BRSUM
    static constexpr uint32_t MDMA_C14BNDTR_BRDUM = 0x80000; // BRDUM
    template<uint32_t X>
    static constexpr uint32_t MDMA_C14BNDTR_BRC =            // BRC
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C14SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C14DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C14BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C14BRUR_SUV =   // SUV
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C14BRUR_DUV =   // DUV
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C14LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C14TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C14TBR_TSEL =          // TSEL
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C14TBR_SBUS = 0x10000; // SBUS
    static constexpr uint32_t MDMA_C14TBR_DBUS = 0x20000; // DBUS

    static constexpr uint32_t MDMA_C14MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C14MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C15ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C15ISR_TEIF = 0x1;     // TEIF
    static constexpr uint32_t MDMA_C15ISR_CTCIF = 0x2;    // CTCIF
    static constexpr uint32_t MDMA_C15ISR_BRTIF = 0x4;    // BRTIF
    static constexpr uint32_t MDMA_C15ISR_BTIF = 0x8;     // BTIF
    static constexpr uint32_t MDMA_C15ISR_TCIF = 0x10;    // TCIF
    static constexpr uint32_t MDMA_C15ISR_CRQA = 0x10000; // CRQA

    static constexpr uint32_t MDMA_C15IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C15IFCR_CTEIF = 0x1;   // CTEIF
    static constexpr uint32_t MDMA_C15IFCR_CCTCIF = 0x2;  // CCTCIF
    static constexpr uint32_t MDMA_C15IFCR_CBRTIF = 0x4;  // CBRTIF
    static constexpr uint32_t MDMA_C15IFCR_CBTIF = 0x8;   // CBTIF
    static constexpr uint32_t MDMA_C15IFCR_CLTCIF = 0x10; // CLTCIF

    static constexpr uint32_t MDMA_C15ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C15ESR_TEA =         // TEA
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C15ESR_TED = 0x80;   // TED
    static constexpr uint32_t MDMA_C15ESR_TELD = 0x100; // TELD
    static constexpr uint32_t MDMA_C15ESR_TEMD = 0x200; // TEMD
    static constexpr uint32_t MDMA_C15ESR_ASE = 0x400;  // ASE
    static constexpr uint32_t MDMA_C15ESR_BSE = 0x800;  // BSE

    static constexpr uint32_t MDMA_C15CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C15CR_EN = 0x1;       // EN
    static constexpr uint32_t MDMA_C15CR_TEIE = 0x2;     // TEIE
    static constexpr uint32_t MDMA_C15CR_CTCIE = 0x4;    // CTCIE
    static constexpr uint32_t MDMA_C15CR_BRTIE = 0x8;    // BRTIE
    static constexpr uint32_t MDMA_C15CR_BTIE = 0x10;    // BTIE
    static constexpr uint32_t MDMA_C15CR_TCIE = 0x20;    // TCIE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C15CR_PL =            // PL
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C15CR_BEX = 0x1000;   // BEX
    static constexpr uint32_t MDMA_C15CR_HEX = 0x2000;   // HEX
    static constexpr uint32_t MDMA_C15CR_WEX = 0x4000;   // WEX
    static constexpr uint32_t MDMA_C15CR_SWRQ = 0x10000; // SWRQ

    static constexpr uint32_t MDMA_C15TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C15TCR_SINC =             // SINC
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C15TCR_DINC =             // DINC
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C15TCR_SSIZE =            // SSIZE
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C15TCR_DSIZE =            // DSIZE
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C15TCR_SINCOS =           // SINCOS
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C15TCR_DINCOS =           // DINCOS
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C15TCR_SBURST =           // SBURST
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C15TCR_DBURST =           // DBURST
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C15TCR_TLEN =             // TLEN
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C15TCR_PKE = 0x2000000;   // PKE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C15TCR_PAM =              // PAM
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C15TCR_TRGM =             // TRGM
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C15TCR_SWRM = 0x40000000; // SWRM
    static constexpr uint32_t MDMA_C15TCR_BWM = 0x80000000;  // BWM

    static constexpr uint32_t MDMA_C15BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C15BNDTR_BNDT =           // BNDT
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C15BNDTR_BRSUM = 0x40000; // BRSUM
    static constexpr uint32_t MDMA_C15BNDTR_BRDUM = 0x80000; // BRDUM
    template<uint32_t X>
    static constexpr uint32_t MDMA_C15BNDTR_BRC =            // BRC
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C15SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C15DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C15BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C15BRUR_SUV =   // SUV
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C15BRUR_DUV =   // DUV
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C15LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C15TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C15TBR_TSEL =          // TSEL
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C15TBR_SBUS = 0x10000; // SBUS
    static constexpr uint32_t MDMA_C15TBR_DBUS = 0x20000; // DBUS

    static constexpr uint32_t MDMA_C15MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C15MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C16ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C16ISR_TEIF = 0x1;     // TEIF
    static constexpr uint32_t MDMA_C16ISR_CTCIF = 0x2;    // CTCIF
    static constexpr uint32_t MDMA_C16ISR_BRTIF = 0x4;    // BRTIF
    static constexpr uint32_t MDMA_C16ISR_BTIF = 0x8;     // BTIF
    static constexpr uint32_t MDMA_C16ISR_TCIF = 0x10;    // TCIF
    static constexpr uint32_t MDMA_C16ISR_CRQA = 0x10000; // CRQA

    static constexpr uint32_t MDMA_C16IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C16IFCR_CTEIF = 0x1;   // CTEIF
    static constexpr uint32_t MDMA_C16IFCR_CCTCIF = 0x2;  // CCTCIF
    static constexpr uint32_t MDMA_C16IFCR_CBRTIF = 0x4;  // CBRTIF
    static constexpr uint32_t MDMA_C16IFCR_CBTIF = 0x8;   // CBTIF
    static constexpr uint32_t MDMA_C16IFCR_CLTCIF = 0x10; // CLTCIF

    static constexpr uint32_t MDMA_C16ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C16ESR_TEA =         // TEA
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C16ESR_TED = 0x80;   // TED
    static constexpr uint32_t MDMA_C16ESR_TELD = 0x100; // TELD
    static constexpr uint32_t MDMA_C16ESR_TEMD = 0x200; // TEMD
    static constexpr uint32_t MDMA_C16ESR_ASE = 0x400;  // ASE
    static constexpr uint32_t MDMA_C16ESR_BSE = 0x800;  // BSE

    static constexpr uint32_t MDMA_C16CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C16CR_EN = 0x1;       // EN
    static constexpr uint32_t MDMA_C16CR_TEIE = 0x2;     // TEIE
    static constexpr uint32_t MDMA_C16CR_CTCIE = 0x4;    // CTCIE
    static constexpr uint32_t MDMA_C16CR_BRTIE = 0x8;    // BRTIE
    static constexpr uint32_t MDMA_C16CR_BTIE = 0x10;    // BTIE
    static constexpr uint32_t MDMA_C16CR_TCIE = 0x20;    // TCIE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C16CR_PL =            // PL
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C16CR_BEX = 0x1000;   // BEX
    static constexpr uint32_t MDMA_C16CR_HEX = 0x2000;   // HEX
    static constexpr uint32_t MDMA_C16CR_WEX = 0x4000;   // WEX
    static constexpr uint32_t MDMA_C16CR_SWRQ = 0x10000; // SWRQ

    static constexpr uint32_t MDMA_C16TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C16TCR_SINC =             // SINC
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C16TCR_DINC =             // DINC
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C16TCR_SSIZE =            // SSIZE
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C16TCR_DSIZE =            // DSIZE
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C16TCR_SINCOS =           // SINCOS
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C16TCR_DINCOS =           // DINCOS
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C16TCR_SBURST =           // SBURST
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C16TCR_DBURST =           // DBURST
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C16TCR_TLEN =             // TLEN
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C16TCR_PKE = 0x2000000;   // PKE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C16TCR_PAM =              // PAM
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C16TCR_TRGM =             // TRGM
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C16TCR_SWRM = 0x40000000; // SWRM
    static constexpr uint32_t MDMA_C16TCR_BWM = 0x80000000;  // BWM

    static constexpr uint32_t MDMA_C16BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C16BNDTR_BNDT =           // BNDT
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C16BNDTR_BRSUM = 0x40000; // BRSUM
    static constexpr uint32_t MDMA_C16BNDTR_BRDUM = 0x80000; // BRDUM
    template<uint32_t X>
    static constexpr uint32_t MDMA_C16BNDTR_BRC =            // BRC
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C16SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C16DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C16BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C16BRUR_SUV =   // SUV
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C16BRUR_DUV =   // DUV
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C16LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C16TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C16TBR_TSEL =          // TSEL
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C16TBR_SBUS = 0x10000; // SBUS
    static constexpr uint32_t MDMA_C16TBR_DBUS = 0x20000; // DBUS

    static constexpr uint32_t MDMA_C16MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C16MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C17ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C17ISR_TEIF = 0x1;     // TEIF
    static constexpr uint32_t MDMA_C17ISR_CTCIF = 0x2;    // CTCIF
    static constexpr uint32_t MDMA_C17ISR_BRTIF = 0x4;    // BRTIF
    static constexpr uint32_t MDMA_C17ISR_BTIF = 0x8;     // BTIF
    static constexpr uint32_t MDMA_C17ISR_TCIF = 0x10;    // TCIF
    static constexpr uint32_t MDMA_C17ISR_CRQA = 0x10000; // CRQA

    static constexpr uint32_t MDMA_C17IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C17IFCR_CTEIF = 0x1;   // CTEIF
    static constexpr uint32_t MDMA_C17IFCR_CCTCIF = 0x2;  // CCTCIF
    static constexpr uint32_t MDMA_C17IFCR_CBRTIF = 0x4;  // CBRTIF
    static constexpr uint32_t MDMA_C17IFCR_CBTIF = 0x8;   // CBTIF
    static constexpr uint32_t MDMA_C17IFCR_CLTCIF = 0x10; // CLTCIF

    static constexpr uint32_t MDMA_C17ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C17ESR_TEA =         // TEA
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C17ESR_TED = 0x80;   // TED
    static constexpr uint32_t MDMA_C17ESR_TELD = 0x100; // TELD
    static constexpr uint32_t MDMA_C17ESR_TEMD = 0x200; // TEMD
    static constexpr uint32_t MDMA_C17ESR_ASE = 0x400;  // ASE
    static constexpr uint32_t MDMA_C17ESR_BSE = 0x800;  // BSE

    static constexpr uint32_t MDMA_C17CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C17CR_EN = 0x1;       // EN
    static constexpr uint32_t MDMA_C17CR_TEIE = 0x2;     // TEIE
    static constexpr uint32_t MDMA_C17CR_CTCIE = 0x4;    // CTCIE
    static constexpr uint32_t MDMA_C17CR_BRTIE = 0x8;    // BRTIE
    static constexpr uint32_t MDMA_C17CR_BTIE = 0x10;    // BTIE
    static constexpr uint32_t MDMA_C17CR_TCIE = 0x20;    // TCIE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C17CR_PL =            // PL
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C17CR_BEX = 0x1000;   // BEX
    static constexpr uint32_t MDMA_C17CR_HEX = 0x2000;   // HEX
    static constexpr uint32_t MDMA_C17CR_WEX = 0x4000;   // WEX
    static constexpr uint32_t MDMA_C17CR_SWRQ = 0x10000; // SWRQ

    static constexpr uint32_t MDMA_C17TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C17TCR_SINC =             // SINC
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C17TCR_DINC =             // DINC
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C17TCR_SSIZE =            // SSIZE
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C17TCR_DSIZE =            // DSIZE
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C17TCR_SINCOS =           // SINCOS
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C17TCR_DINCOS =           // DINCOS
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C17TCR_SBURST =           // SBURST
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C17TCR_DBURST =           // DBURST
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C17TCR_TLEN =             // TLEN
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C17TCR_PKE = 0x2000000;   // PKE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C17TCR_PAM =              // PAM
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C17TCR_TRGM =             // TRGM
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C17TCR_SWRM = 0x40000000; // SWRM
    static constexpr uint32_t MDMA_C17TCR_BWM = 0x80000000;  // BWM

    static constexpr uint32_t MDMA_C17BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C17BNDTR_BNDT =           // BNDT
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C17BNDTR_BRSUM = 0x40000; // BRSUM
    static constexpr uint32_t MDMA_C17BNDTR_BRDUM = 0x80000; // BRDUM
    template<uint32_t X>
    static constexpr uint32_t MDMA_C17BNDTR_BRC =            // BRC
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C17SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C17DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C17BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C17BRUR_SUV =   // SUV
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C17BRUR_DUV =   // DUV
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C17LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C17TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C17TBR_TSEL =          // TSEL
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C17TBR_SBUS = 0x10000; // SBUS
    static constexpr uint32_t MDMA_C17TBR_DBUS = 0x20000; // DBUS

    static constexpr uint32_t MDMA_C17MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C17MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C18ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C18ISR_TEIF = 0x1;     // TEIF
    static constexpr uint32_t MDMA_C18ISR_CTCIF = 0x2;    // CTCIF
    static constexpr uint32_t MDMA_C18ISR_BRTIF = 0x4;    // BRTIF
    static constexpr uint32_t MDMA_C18ISR_BTIF = 0x8;     // BTIF
    static constexpr uint32_t MDMA_C18ISR_TCIF = 0x10;    // TCIF
    static constexpr uint32_t MDMA_C18ISR_CRQA = 0x10000; // CRQA

    static constexpr uint32_t MDMA_C18IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C18IFCR_CTEIF = 0x1;   // CTEIF
    static constexpr uint32_t MDMA_C18IFCR_CCTCIF = 0x2;  // CCTCIF
    static constexpr uint32_t MDMA_C18IFCR_CBRTIF = 0x4;  // CBRTIF
    static constexpr uint32_t MDMA_C18IFCR_CBTIF = 0x8;   // CBTIF
    static constexpr uint32_t MDMA_C18IFCR_CLTCIF = 0x10; // CLTCIF

    static constexpr uint32_t MDMA_C18ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C18ESR_TEA =         // TEA
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C18ESR_TED = 0x80;   // TED
    static constexpr uint32_t MDMA_C18ESR_TELD = 0x100; // TELD
    static constexpr uint32_t MDMA_C18ESR_TEMD = 0x200; // TEMD
    static constexpr uint32_t MDMA_C18ESR_ASE = 0x400;  // ASE
    static constexpr uint32_t MDMA_C18ESR_BSE = 0x800;  // BSE

    static constexpr uint32_t MDMA_C18CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C18CR_EN = 0x1;       // EN
    static constexpr uint32_t MDMA_C18CR_TEIE = 0x2;     // TEIE
    static constexpr uint32_t MDMA_C18CR_CTCIE = 0x4;    // CTCIE
    static constexpr uint32_t MDMA_C18CR_BRTIE = 0x8;    // BRTIE
    static constexpr uint32_t MDMA_C18CR_BTIE = 0x10;    // BTIE
    static constexpr uint32_t MDMA_C18CR_TCIE = 0x20;    // TCIE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C18CR_PL =            // PL
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C18CR_BEX = 0x1000;   // BEX
    static constexpr uint32_t MDMA_C18CR_HEX = 0x2000;   // HEX
    static constexpr uint32_t MDMA_C18CR_WEX = 0x4000;   // WEX
    static constexpr uint32_t MDMA_C18CR_SWRQ = 0x10000; // SWRQ

    static constexpr uint32_t MDMA_C18TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C18TCR_SINC =             // SINC
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C18TCR_DINC =             // DINC
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C18TCR_SSIZE =            // SSIZE
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C18TCR_DSIZE =            // DSIZE
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C18TCR_SINCOS =           // SINCOS
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C18TCR_DINCOS =           // DINCOS
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C18TCR_SBURST =           // SBURST
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C18TCR_DBURST =           // DBURST
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C18TCR_TLEN =             // TLEN
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C18TCR_PKE = 0x2000000;   // PKE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C18TCR_PAM =              // PAM
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C18TCR_TRGM =             // TRGM
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C18TCR_SWRM = 0x40000000; // SWRM
    static constexpr uint32_t MDMA_C18TCR_BWM = 0x80000000;  // BWM

    static constexpr uint32_t MDMA_C18BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C18BNDTR_BNDT =           // BNDT
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C18BNDTR_BRSUM = 0x40000; // BRSUM
    static constexpr uint32_t MDMA_C18BNDTR_BRDUM = 0x80000; // BRDUM
    template<uint32_t X>
    static constexpr uint32_t MDMA_C18BNDTR_BRC =            // BRC
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C18SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C18DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C18BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C18BRUR_SUV =   // SUV
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C18BRUR_DUV =   // DUV
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C18LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C18TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C18TBR_TSEL =          // TSEL
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C18TBR_SBUS = 0x10000; // SBUS
    static constexpr uint32_t MDMA_C18TBR_DBUS = 0x20000; // DBUS

    static constexpr uint32_t MDMA_C18MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C18MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C19ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C19ISR_TEIF = 0x1;     // TEIF
    static constexpr uint32_t MDMA_C19ISR_CTCIF = 0x2;    // CTCIF
    static constexpr uint32_t MDMA_C19ISR_BRTIF = 0x4;    // BRTIF
    static constexpr uint32_t MDMA_C19ISR_BTIF = 0x8;     // BTIF
    static constexpr uint32_t MDMA_C19ISR_TCIF = 0x10;    // TCIF
    static constexpr uint32_t MDMA_C19ISR_CRQA = 0x10000; // CRQA

    static constexpr uint32_t MDMA_C19IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C19IFCR_CTEIF = 0x1;   // CTEIF
    static constexpr uint32_t MDMA_C19IFCR_CCTCIF = 0x2;  // CCTCIF
    static constexpr uint32_t MDMA_C19IFCR_CBRTIF = 0x4;  // CBRTIF
    static constexpr uint32_t MDMA_C19IFCR_CBTIF = 0x8;   // CBTIF
    static constexpr uint32_t MDMA_C19IFCR_CLTCIF = 0x10; // CLTCIF

    static constexpr uint32_t MDMA_C19ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C19ESR_TEA =         // TEA
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C19ESR_TED = 0x80;   // TED
    static constexpr uint32_t MDMA_C19ESR_TELD = 0x100; // TELD
    static constexpr uint32_t MDMA_C19ESR_TEMD = 0x200; // TEMD
    static constexpr uint32_t MDMA_C19ESR_ASE = 0x400;  // ASE
    static constexpr uint32_t MDMA_C19ESR_BSE = 0x800;  // BSE

    static constexpr uint32_t MDMA_C19CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C19CR_EN = 0x1;       // EN
    static constexpr uint32_t MDMA_C19CR_TEIE = 0x2;     // TEIE
    static constexpr uint32_t MDMA_C19CR_CTCIE = 0x4;    // CTCIE
    static constexpr uint32_t MDMA_C19CR_BRTIE = 0x8;    // BRTIE
    static constexpr uint32_t MDMA_C19CR_BTIE = 0x10;    // BTIE
    static constexpr uint32_t MDMA_C19CR_TCIE = 0x20;    // TCIE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C19CR_PL =            // PL
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C19CR_BEX = 0x1000;   // BEX
    static constexpr uint32_t MDMA_C19CR_HEX = 0x2000;   // HEX
    static constexpr uint32_t MDMA_C19CR_WEX = 0x4000;   // WEX
    static constexpr uint32_t MDMA_C19CR_SWRQ = 0x10000; // SWRQ

    static constexpr uint32_t MDMA_C19TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C19TCR_SINC =             // SINC
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C19TCR_DINC =             // DINC
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C19TCR_SSIZE =            // SSIZE
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C19TCR_DSIZE =            // DSIZE
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C19TCR_SINCOS =           // SINCOS
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C19TCR_DINCOS =           // DINCOS
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C19TCR_SBURST =           // SBURST
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C19TCR_DBURST =           // DBURST
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C19TCR_TLEN =             // TLEN
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C19TCR_PKE = 0x2000000;   // PKE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C19TCR_PAM =              // PAM
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C19TCR_TRGM =             // TRGM
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C19TCR_SWRM = 0x40000000; // SWRM
    static constexpr uint32_t MDMA_C19TCR_BWM = 0x80000000;  // BWM

    static constexpr uint32_t MDMA_C19BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C19BNDTR_BNDT =           // BNDT
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C19BNDTR_BRSUM = 0x40000; // BRSUM
    static constexpr uint32_t MDMA_C19BNDTR_BRDUM = 0x80000; // BRDUM
    template<uint32_t X>
    static constexpr uint32_t MDMA_C19BNDTR_BRC =            // BRC
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C19SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C19DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C19BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C19BRUR_SUV =   // SUV
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C19BRUR_DUV =   // DUV
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C19LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C19TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C19TBR_TSEL =          // TSEL
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C19TBR_SBUS = 0x10000; // SBUS
    static constexpr uint32_t MDMA_C19TBR_DBUS = 0x20000; // DBUS

    static constexpr uint32_t MDMA_C19MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C19MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C20ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C20ISR_TEIF = 0x1;     // TEIF
    static constexpr uint32_t MDMA_C20ISR_CTCIF = 0x2;    // CTCIF
    static constexpr uint32_t MDMA_C20ISR_BRTIF = 0x4;    // BRTIF
    static constexpr uint32_t MDMA_C20ISR_BTIF = 0x8;     // BTIF
    static constexpr uint32_t MDMA_C20ISR_TCIF = 0x10;    // TCIF
    static constexpr uint32_t MDMA_C20ISR_CRQA = 0x10000; // CRQA

    static constexpr uint32_t MDMA_C20IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C20IFCR_CTEIF = 0x1;   // CTEIF
    static constexpr uint32_t MDMA_C20IFCR_CCTCIF = 0x2;  // CCTCIF
    static constexpr uint32_t MDMA_C20IFCR_CBRTIF = 0x4;  // CBRTIF
    static constexpr uint32_t MDMA_C20IFCR_CBTIF = 0x8;   // CBTIF
    static constexpr uint32_t MDMA_C20IFCR_CLTCIF = 0x10; // CLTCIF

    static constexpr uint32_t MDMA_C20ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C20ESR_TEA =         // TEA
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C20ESR_TED = 0x80;   // TED
    static constexpr uint32_t MDMA_C20ESR_TELD = 0x100; // TELD
    static constexpr uint32_t MDMA_C20ESR_TEMD = 0x200; // TEMD
    static constexpr uint32_t MDMA_C20ESR_ASE = 0x400;  // ASE
    static constexpr uint32_t MDMA_C20ESR_BSE = 0x800;  // BSE

    static constexpr uint32_t MDMA_C20CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C20CR_EN = 0x1;       // EN
    static constexpr uint32_t MDMA_C20CR_TEIE = 0x2;     // TEIE
    static constexpr uint32_t MDMA_C20CR_CTCIE = 0x4;    // CTCIE
    static constexpr uint32_t MDMA_C20CR_BRTIE = 0x8;    // BRTIE
    static constexpr uint32_t MDMA_C20CR_BTIE = 0x10;    // BTIE
    static constexpr uint32_t MDMA_C20CR_TCIE = 0x20;    // TCIE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C20CR_PL =            // PL
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C20CR_BEX = 0x1000;   // BEX
    static constexpr uint32_t MDMA_C20CR_HEX = 0x2000;   // HEX
    static constexpr uint32_t MDMA_C20CR_WEX = 0x4000;   // WEX
    static constexpr uint32_t MDMA_C20CR_SWRQ = 0x10000; // SWRQ

    static constexpr uint32_t MDMA_C20TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C20TCR_SINC =             // SINC
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C20TCR_DINC =             // DINC
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C20TCR_SSIZE =            // SSIZE
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C20TCR_DSIZE =            // DSIZE
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C20TCR_SINCOS =           // SINCOS
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C20TCR_DINCOS =           // DINCOS
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C20TCR_SBURST =           // SBURST
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C20TCR_DBURST =           // DBURST
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C20TCR_TLEN =             // TLEN
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C20TCR_PKE = 0x2000000;   // PKE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C20TCR_PAM =              // PAM
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C20TCR_TRGM =             // TRGM
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C20TCR_SWRM = 0x40000000; // SWRM
    static constexpr uint32_t MDMA_C20TCR_BWM = 0x80000000;  // BWM

    static constexpr uint32_t MDMA_C20BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C20BNDTR_BNDT =           // BNDT
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C20BNDTR_BRSUM = 0x40000; // BRSUM
    static constexpr uint32_t MDMA_C20BNDTR_BRDUM = 0x80000; // BRDUM
    template<uint32_t X>
    static constexpr uint32_t MDMA_C20BNDTR_BRC =            // BRC
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C20SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C20DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C20BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C20BRUR_SUV =   // SUV
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C20BRUR_DUV =   // DUV
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C20LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C20TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C20TBR_TSEL =          // TSEL
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C20TBR_SBUS = 0x10000; // SBUS
    static constexpr uint32_t MDMA_C20TBR_DBUS = 0x20000; // DBUS

    static constexpr uint32_t MDMA_C20MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C20MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C21ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C21ISR_TEIF = 0x1;     // TEIF
    static constexpr uint32_t MDMA_C21ISR_CTCIF = 0x2;    // CTCIF
    static constexpr uint32_t MDMA_C21ISR_BRTIF = 0x4;    // BRTIF
    static constexpr uint32_t MDMA_C21ISR_BTIF = 0x8;     // BTIF
    static constexpr uint32_t MDMA_C21ISR_TCIF = 0x10;    // TCIF
    static constexpr uint32_t MDMA_C21ISR_CRQA = 0x10000; // CRQA

    static constexpr uint32_t MDMA_C21IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C21IFCR_CTEIF = 0x1;   // CTEIF
    static constexpr uint32_t MDMA_C21IFCR_CCTCIF = 0x2;  // CCTCIF
    static constexpr uint32_t MDMA_C21IFCR_CBRTIF = 0x4;  // CBRTIF
    static constexpr uint32_t MDMA_C21IFCR_CBTIF = 0x8;   // CBTIF
    static constexpr uint32_t MDMA_C21IFCR_CLTCIF = 0x10; // CLTCIF

    static constexpr uint32_t MDMA_C21ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C21ESR_TEA =         // TEA
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C21ESR_TED = 0x80;   // TED
    static constexpr uint32_t MDMA_C21ESR_TELD = 0x100; // TELD
    static constexpr uint32_t MDMA_C21ESR_TEMD = 0x200; // TEMD
    static constexpr uint32_t MDMA_C21ESR_ASE = 0x400;  // ASE
    static constexpr uint32_t MDMA_C21ESR_BSE = 0x800;  // BSE

    static constexpr uint32_t MDMA_C21CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C21CR_EN = 0x1;       // EN
    static constexpr uint32_t MDMA_C21CR_TEIE = 0x2;     // TEIE
    static constexpr uint32_t MDMA_C21CR_CTCIE = 0x4;    // CTCIE
    static constexpr uint32_t MDMA_C21CR_BRTIE = 0x8;    // BRTIE
    static constexpr uint32_t MDMA_C21CR_BTIE = 0x10;    // BTIE
    static constexpr uint32_t MDMA_C21CR_TCIE = 0x20;    // TCIE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C21CR_PL =            // PL
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C21CR_BEX = 0x1000;   // BEX
    static constexpr uint32_t MDMA_C21CR_HEX = 0x2000;   // HEX
    static constexpr uint32_t MDMA_C21CR_WEX = 0x4000;   // WEX
    static constexpr uint32_t MDMA_C21CR_SWRQ = 0x10000; // SWRQ

    static constexpr uint32_t MDMA_C21TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C21TCR_SINC =             // SINC
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C21TCR_DINC =             // DINC
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C21TCR_SSIZE =            // SSIZE
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C21TCR_DSIZE =            // DSIZE
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C21TCR_SINCOS =           // SINCOS
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C21TCR_DINCOS =           // DINCOS
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C21TCR_SBURST =           // SBURST
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C21TCR_DBURST =           // DBURST
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C21TCR_TLEN =             // TLEN
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C21TCR_PKE = 0x2000000;   // PKE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C21TCR_PAM =              // PAM
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C21TCR_TRGM =             // TRGM
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C21TCR_SWRM = 0x40000000; // SWRM
    static constexpr uint32_t MDMA_C21TCR_BWM = 0x80000000;  // BWM

    static constexpr uint32_t MDMA_C21BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C21BNDTR_BNDT =           // BNDT
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C21BNDTR_BRSUM = 0x40000; // BRSUM
    static constexpr uint32_t MDMA_C21BNDTR_BRDUM = 0x80000; // BRDUM
    template<uint32_t X>
    static constexpr uint32_t MDMA_C21BNDTR_BRC =            // BRC
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C21SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C21DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C21BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C21BRUR_SUV =   // SUV
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C21BRUR_DUV =   // DUV
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C21LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C21TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C21TBR_TSEL =          // TSEL
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C21TBR_SBUS = 0x10000; // SBUS
    static constexpr uint32_t MDMA_C21TBR_DBUS = 0x20000; // DBUS

    static constexpr uint32_t MDMA_C21MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C21MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C22ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C22ISR_TEIF = 0x1;     // TEIF
    static constexpr uint32_t MDMA_C22ISR_CTCIF = 0x2;    // CTCIF
    static constexpr uint32_t MDMA_C22ISR_BRTIF = 0x4;    // BRTIF
    static constexpr uint32_t MDMA_C22ISR_BTIF = 0x8;     // BTIF
    static constexpr uint32_t MDMA_C22ISR_TCIF = 0x10;    // TCIF
    static constexpr uint32_t MDMA_C22ISR_CRQA = 0x10000; // CRQA

    static constexpr uint32_t MDMA_C22IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C22IFCR_CTEIF = 0x1;   // CTEIF
    static constexpr uint32_t MDMA_C22IFCR_CCTCIF = 0x2;  // CCTCIF
    static constexpr uint32_t MDMA_C22IFCR_CBRTIF = 0x4;  // CBRTIF
    static constexpr uint32_t MDMA_C22IFCR_CBTIF = 0x8;   // CBTIF
    static constexpr uint32_t MDMA_C22IFCR_CLTCIF = 0x10; // CLTCIF

    static constexpr uint32_t MDMA_C22ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C22ESR_TEA =         // TEA
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C22ESR_TED = 0x80;   // TED
    static constexpr uint32_t MDMA_C22ESR_TELD = 0x100; // TELD
    static constexpr uint32_t MDMA_C22ESR_TEMD = 0x200; // TEMD
    static constexpr uint32_t MDMA_C22ESR_ASE = 0x400;  // ASE
    static constexpr uint32_t MDMA_C22ESR_BSE = 0x800;  // BSE

    static constexpr uint32_t MDMA_C22CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C22CR_EN = 0x1;       // EN
    static constexpr uint32_t MDMA_C22CR_TEIE = 0x2;     // TEIE
    static constexpr uint32_t MDMA_C22CR_CTCIE = 0x4;    // CTCIE
    static constexpr uint32_t MDMA_C22CR_BRTIE = 0x8;    // BRTIE
    static constexpr uint32_t MDMA_C22CR_BTIE = 0x10;    // BTIE
    static constexpr uint32_t MDMA_C22CR_TCIE = 0x20;    // TCIE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C22CR_PL =            // PL
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C22CR_BEX = 0x1000;   // BEX
    static constexpr uint32_t MDMA_C22CR_HEX = 0x2000;   // HEX
    static constexpr uint32_t MDMA_C22CR_WEX = 0x4000;   // WEX
    static constexpr uint32_t MDMA_C22CR_SWRQ = 0x10000; // SWRQ

    static constexpr uint32_t MDMA_C22TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C22TCR_SINC =             // SINC
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C22TCR_DINC =             // DINC
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C22TCR_SSIZE =            // SSIZE
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C22TCR_DSIZE =            // DSIZE
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C22TCR_SINCOS =           // SINCOS
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C22TCR_DINCOS =           // DINCOS
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C22TCR_SBURST =           // SBURST
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C22TCR_DBURST =           // DBURST
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C22TCR_TLEN =             // TLEN
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C22TCR_PKE = 0x2000000;   // PKE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C22TCR_PAM =              // PAM
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C22TCR_TRGM =             // TRGM
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C22TCR_SWRM = 0x40000000; // SWRM
    static constexpr uint32_t MDMA_C22TCR_BWM = 0x80000000;  // BWM

    static constexpr uint32_t MDMA_C22BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C22BNDTR_BNDT =           // BNDT
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C22BNDTR_BRSUM = 0x40000; // BRSUM
    static constexpr uint32_t MDMA_C22BNDTR_BRDUM = 0x80000; // BRDUM
    template<uint32_t X>
    static constexpr uint32_t MDMA_C22BNDTR_BRC =            // BRC
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C22SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C22DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C22BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C22BRUR_SUV =   // SUV
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C22BRUR_DUV =   // DUV
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C22LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C22TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C22TBR_TSEL =          // TSEL
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C22TBR_SBUS = 0x10000; // SBUS
    static constexpr uint32_t MDMA_C22TBR_DBUS = 0x20000; // DBUS

    static constexpr uint32_t MDMA_C22MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C22MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C23ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C23ISR_TEIF = 0x1;     // TEIF
    static constexpr uint32_t MDMA_C23ISR_CTCIF = 0x2;    // CTCIF
    static constexpr uint32_t MDMA_C23ISR_BRTIF = 0x4;    // BRTIF
    static constexpr uint32_t MDMA_C23ISR_BTIF = 0x8;     // BTIF
    static constexpr uint32_t MDMA_C23ISR_TCIF = 0x10;    // TCIF
    static constexpr uint32_t MDMA_C23ISR_CRQA = 0x10000; // CRQA

    static constexpr uint32_t MDMA_C23IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C23IFCR_CTEIF = 0x1;   // CTEIF
    static constexpr uint32_t MDMA_C23IFCR_CCTCIF = 0x2;  // CCTCIF
    static constexpr uint32_t MDMA_C23IFCR_CBRTIF = 0x4;  // CBRTIF
    static constexpr uint32_t MDMA_C23IFCR_CBTIF = 0x8;   // CBTIF
    static constexpr uint32_t MDMA_C23IFCR_CLTCIF = 0x10; // CLTCIF

    static constexpr uint32_t MDMA_C23ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C23ESR_TEA =         // TEA
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C23ESR_TED = 0x80;   // TED
    static constexpr uint32_t MDMA_C23ESR_TELD = 0x100; // TELD
    static constexpr uint32_t MDMA_C23ESR_TEMD = 0x200; // TEMD
    static constexpr uint32_t MDMA_C23ESR_ASE = 0x400;  // ASE
    static constexpr uint32_t MDMA_C23ESR_BSE = 0x800;  // BSE

    static constexpr uint32_t MDMA_C23CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C23CR_EN = 0x1;       // EN
    static constexpr uint32_t MDMA_C23CR_TEIE = 0x2;     // TEIE
    static constexpr uint32_t MDMA_C23CR_CTCIE = 0x4;    // CTCIE
    static constexpr uint32_t MDMA_C23CR_BRTIE = 0x8;    // BRTIE
    static constexpr uint32_t MDMA_C23CR_BTIE = 0x10;    // BTIE
    static constexpr uint32_t MDMA_C23CR_TCIE = 0x20;    // TCIE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C23CR_PL =            // PL
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C23CR_BEX = 0x1000;   // BEX
    static constexpr uint32_t MDMA_C23CR_HEX = 0x2000;   // HEX
    static constexpr uint32_t MDMA_C23CR_WEX = 0x4000;   // WEX
    static constexpr uint32_t MDMA_C23CR_SWRQ = 0x10000; // SWRQ

    static constexpr uint32_t MDMA_C23TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C23TCR_SINC =             // SINC
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C23TCR_DINC =             // DINC
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C23TCR_SSIZE =            // SSIZE
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C23TCR_DSIZE =            // DSIZE
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C23TCR_SINCOS =           // SINCOS
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C23TCR_DINCOS =           // DINCOS
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C23TCR_SBURST =           // SBURST
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C23TCR_DBURST =           // DBURST
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C23TCR_TLEN =             // TLEN
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C23TCR_PKE = 0x2000000;   // PKE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C23TCR_PAM =              // PAM
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C23TCR_TRGM =             // TRGM
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C23TCR_SWRM = 0x40000000; // SWRM
    static constexpr uint32_t MDMA_C23TCR_BWM = 0x80000000;  // BWM

    static constexpr uint32_t MDMA_C23BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C23BNDTR_BNDT =           // BNDT
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C23BNDTR_BRSUM = 0x40000; // BRSUM
    static constexpr uint32_t MDMA_C23BNDTR_BRDUM = 0x80000; // BRDUM
    template<uint32_t X>
    static constexpr uint32_t MDMA_C23BNDTR_BRC =            // BRC
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C23SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C23DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C23BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C23BRUR_SUV =   // SUV
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C23BRUR_DUV =   // DUV
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C23LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C23TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C23TBR_TSEL =          // TSEL
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C23TBR_SBUS = 0x10000; // SBUS
    static constexpr uint32_t MDMA_C23TBR_DBUS = 0x20000; // DBUS

    static constexpr uint32_t MDMA_C23MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C23MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C24ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C24ISR_TEIF = 0x1;     // TEIF
    static constexpr uint32_t MDMA_C24ISR_CTCIF = 0x2;    // CTCIF
    static constexpr uint32_t MDMA_C24ISR_BRTIF = 0x4;    // BRTIF
    static constexpr uint32_t MDMA_C24ISR_BTIF = 0x8;     // BTIF
    static constexpr uint32_t MDMA_C24ISR_TCIF = 0x10;    // TCIF
    static constexpr uint32_t MDMA_C24ISR_CRQA = 0x10000; // CRQA

    static constexpr uint32_t MDMA_C24IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C24IFCR_CTEIF = 0x1;   // CTEIF
    static constexpr uint32_t MDMA_C24IFCR_CCTCIF = 0x2;  // CCTCIF
    static constexpr uint32_t MDMA_C24IFCR_CBRTIF = 0x4;  // CBRTIF
    static constexpr uint32_t MDMA_C24IFCR_CBTIF = 0x8;   // CBTIF
    static constexpr uint32_t MDMA_C24IFCR_CLTCIF = 0x10; // CLTCIF

    static constexpr uint32_t MDMA_C24ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C24ESR_TEA =         // TEA
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C24ESR_TED = 0x80;   // TED
    static constexpr uint32_t MDMA_C24ESR_TELD = 0x100; // TELD
    static constexpr uint32_t MDMA_C24ESR_TEMD = 0x200; // TEMD
    static constexpr uint32_t MDMA_C24ESR_ASE = 0x400;  // ASE
    static constexpr uint32_t MDMA_C24ESR_BSE = 0x800;  // BSE

    static constexpr uint32_t MDMA_C24CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C24CR_EN = 0x1;       // EN
    static constexpr uint32_t MDMA_C24CR_TEIE = 0x2;     // TEIE
    static constexpr uint32_t MDMA_C24CR_CTCIE = 0x4;    // CTCIE
    static constexpr uint32_t MDMA_C24CR_BRTIE = 0x8;    // BRTIE
    static constexpr uint32_t MDMA_C24CR_BTIE = 0x10;    // BTIE
    static constexpr uint32_t MDMA_C24CR_TCIE = 0x20;    // TCIE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C24CR_PL =            // PL
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C24CR_BEX = 0x1000;   // BEX
    static constexpr uint32_t MDMA_C24CR_HEX = 0x2000;   // HEX
    static constexpr uint32_t MDMA_C24CR_WEX = 0x4000;   // WEX
    static constexpr uint32_t MDMA_C24CR_SWRQ = 0x10000; // SWRQ

    static constexpr uint32_t MDMA_C24TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C24TCR_SINC =             // SINC
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C24TCR_DINC =             // DINC
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C24TCR_SSIZE =            // SSIZE
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C24TCR_DSIZE =            // DSIZE
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C24TCR_SINCOS =           // SINCOS
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C24TCR_DINCOS =           // DINCOS
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C24TCR_SBURST =           // SBURST
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C24TCR_DBURST =           // DBURST
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C24TCR_TLEN =             // TLEN
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C24TCR_PKE = 0x2000000;   // PKE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C24TCR_PAM =              // PAM
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C24TCR_TRGM =             // TRGM
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C24TCR_SWRM = 0x40000000; // SWRM
    static constexpr uint32_t MDMA_C24TCR_BWM = 0x80000000;  // BWM

    static constexpr uint32_t MDMA_C24BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C24BNDTR_BNDT =           // BNDT
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C24BNDTR_BRSUM = 0x40000; // BRSUM
    static constexpr uint32_t MDMA_C24BNDTR_BRDUM = 0x80000; // BRDUM
    template<uint32_t X>
    static constexpr uint32_t MDMA_C24BNDTR_BRC =            // BRC
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C24SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C24DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C24BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C24BRUR_SUV =   // SUV
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C24BRUR_DUV =   // DUV
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C24LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C24TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C24TBR_TSEL =          // TSEL
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C24TBR_SBUS = 0x10000; // SBUS
    static constexpr uint32_t MDMA_C24TBR_DBUS = 0x20000; // DBUS

    static constexpr uint32_t MDMA_C24MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C24MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C25ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C25ISR_TEIF = 0x1;     // TEIF
    static constexpr uint32_t MDMA_C25ISR_CTCIF = 0x2;    // CTCIF
    static constexpr uint32_t MDMA_C25ISR_BRTIF = 0x4;    // BRTIF
    static constexpr uint32_t MDMA_C25ISR_BTIF = 0x8;     // BTIF
    static constexpr uint32_t MDMA_C25ISR_TCIF = 0x10;    // TCIF
    static constexpr uint32_t MDMA_C25ISR_CRQA = 0x10000; // CRQA

    static constexpr uint32_t MDMA_C25IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C25IFCR_CTEIF = 0x1;   // CTEIF
    static constexpr uint32_t MDMA_C25IFCR_CCTCIF = 0x2;  // CCTCIF
    static constexpr uint32_t MDMA_C25IFCR_CBRTIF = 0x4;  // CBRTIF
    static constexpr uint32_t MDMA_C25IFCR_CBTIF = 0x8;   // CBTIF
    static constexpr uint32_t MDMA_C25IFCR_CLTCIF = 0x10; // CLTCIF

    static constexpr uint32_t MDMA_C25ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C25ESR_TEA =         // TEA
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C25ESR_TED = 0x80;   // TED
    static constexpr uint32_t MDMA_C25ESR_TELD = 0x100; // TELD
    static constexpr uint32_t MDMA_C25ESR_TEMD = 0x200; // TEMD
    static constexpr uint32_t MDMA_C25ESR_ASE = 0x400;  // ASE
    static constexpr uint32_t MDMA_C25ESR_BSE = 0x800;  // BSE

    static constexpr uint32_t MDMA_C25CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C25CR_EN = 0x1;       // EN
    static constexpr uint32_t MDMA_C25CR_TEIE = 0x2;     // TEIE
    static constexpr uint32_t MDMA_C25CR_CTCIE = 0x4;    // CTCIE
    static constexpr uint32_t MDMA_C25CR_BRTIE = 0x8;    // BRTIE
    static constexpr uint32_t MDMA_C25CR_BTIE = 0x10;    // BTIE
    static constexpr uint32_t MDMA_C25CR_TCIE = 0x20;    // TCIE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C25CR_PL =            // PL
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C25CR_BEX = 0x1000;   // BEX
    static constexpr uint32_t MDMA_C25CR_HEX = 0x2000;   // HEX
    static constexpr uint32_t MDMA_C25CR_WEX = 0x4000;   // WEX
    static constexpr uint32_t MDMA_C25CR_SWRQ = 0x10000; // SWRQ

    static constexpr uint32_t MDMA_C25TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C25TCR_SINC =             // SINC
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C25TCR_DINC =             // DINC
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C25TCR_SSIZE =            // SSIZE
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C25TCR_DSIZE =            // DSIZE
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C25TCR_SINCOS =           // SINCOS
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C25TCR_DINCOS =           // DINCOS
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C25TCR_SBURST =           // SBURST
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C25TCR_DBURST =           // DBURST
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C25TCR_TLEN =             // TLEN
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C25TCR_PKE = 0x2000000;   // PKE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C25TCR_PAM =              // PAM
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C25TCR_TRGM =             // TRGM
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C25TCR_SWRM = 0x40000000; // SWRM
    static constexpr uint32_t MDMA_C25TCR_BWM = 0x80000000;  // BWM

    static constexpr uint32_t MDMA_C25BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C25BNDTR_BNDT =           // BNDT
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C25BNDTR_BRSUM = 0x40000; // BRSUM
    static constexpr uint32_t MDMA_C25BNDTR_BRDUM = 0x80000; // BRDUM
    template<uint32_t X>
    static constexpr uint32_t MDMA_C25BNDTR_BRC =            // BRC
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C25SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C25DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C25BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C25BRUR_SUV =   // SUV
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C25BRUR_DUV =   // DUV
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C25LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C25TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C25TBR_TSEL =          // TSEL
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C25TBR_SBUS = 0x10000; // SBUS
    static constexpr uint32_t MDMA_C25TBR_DBUS = 0x20000; // DBUS

    static constexpr uint32_t MDMA_C25MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C25MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C26ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C26ISR_TEIF = 0x1;     // TEIF
    static constexpr uint32_t MDMA_C26ISR_CTCIF = 0x2;    // CTCIF
    static constexpr uint32_t MDMA_C26ISR_BRTIF = 0x4;    // BRTIF
    static constexpr uint32_t MDMA_C26ISR_BTIF = 0x8;     // BTIF
    static constexpr uint32_t MDMA_C26ISR_TCIF = 0x10;    // TCIF
    static constexpr uint32_t MDMA_C26ISR_CRQA = 0x10000; // CRQA

    static constexpr uint32_t MDMA_C26IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C26IFCR_CTEIF = 0x1;   // CTEIF
    static constexpr uint32_t MDMA_C26IFCR_CCTCIF = 0x2;  // CCTCIF
    static constexpr uint32_t MDMA_C26IFCR_CBRTIF = 0x4;  // CBRTIF
    static constexpr uint32_t MDMA_C26IFCR_CBTIF = 0x8;   // CBTIF
    static constexpr uint32_t MDMA_C26IFCR_CLTCIF = 0x10; // CLTCIF

    static constexpr uint32_t MDMA_C26ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C26ESR_TEA =         // TEA
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C26ESR_TED = 0x80;   // TED
    static constexpr uint32_t MDMA_C26ESR_TELD = 0x100; // TELD
    static constexpr uint32_t MDMA_C26ESR_TEMD = 0x200; // TEMD
    static constexpr uint32_t MDMA_C26ESR_ASE = 0x400;  // ASE
    static constexpr uint32_t MDMA_C26ESR_BSE = 0x800;  // BSE

    static constexpr uint32_t MDMA_C26CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C26CR_EN = 0x1;       // EN
    static constexpr uint32_t MDMA_C26CR_TEIE = 0x2;     // TEIE
    static constexpr uint32_t MDMA_C26CR_CTCIE = 0x4;    // CTCIE
    static constexpr uint32_t MDMA_C26CR_BRTIE = 0x8;    // BRTIE
    static constexpr uint32_t MDMA_C26CR_BTIE = 0x10;    // BTIE
    static constexpr uint32_t MDMA_C26CR_TCIE = 0x20;    // TCIE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C26CR_PL =            // PL
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C26CR_BEX = 0x1000;   // BEX
    static constexpr uint32_t MDMA_C26CR_HEX = 0x2000;   // HEX
    static constexpr uint32_t MDMA_C26CR_WEX = 0x4000;   // WEX
    static constexpr uint32_t MDMA_C26CR_SWRQ = 0x10000; // SWRQ

    static constexpr uint32_t MDMA_C26TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C26TCR_SINC =             // SINC
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C26TCR_DINC =             // DINC
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C26TCR_SSIZE =            // SSIZE
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C26TCR_DSIZE =            // DSIZE
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C26TCR_SINCOS =           // SINCOS
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C26TCR_DINCOS =           // DINCOS
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C26TCR_SBURST =           // SBURST
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C26TCR_DBURST =           // DBURST
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C26TCR_TLEN =             // TLEN
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C26TCR_PKE = 0x2000000;   // PKE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C26TCR_PAM =              // PAM
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C26TCR_TRGM =             // TRGM
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C26TCR_SWRM = 0x40000000; // SWRM
    static constexpr uint32_t MDMA_C26TCR_BWM = 0x80000000;  // BWM

    static constexpr uint32_t MDMA_C26BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C26BNDTR_BNDT =           // BNDT
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C26BNDTR_BRSUM = 0x40000; // BRSUM
    static constexpr uint32_t MDMA_C26BNDTR_BRDUM = 0x80000; // BRDUM
    template<uint32_t X>
    static constexpr uint32_t MDMA_C26BNDTR_BRC =            // BRC
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C26SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C26DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C26BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C26BRUR_SUV =   // SUV
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C26BRUR_DUV =   // DUV
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C26LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C26TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C26TBR_TSEL =          // TSEL
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C26TBR_SBUS = 0x10000; // SBUS
    static constexpr uint32_t MDMA_C26TBR_DBUS = 0x20000; // DBUS

    static constexpr uint32_t MDMA_C26MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C26MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C27ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C27ISR_TEIF = 0x1;     // TEIF
    static constexpr uint32_t MDMA_C27ISR_CTCIF = 0x2;    // CTCIF
    static constexpr uint32_t MDMA_C27ISR_BRTIF = 0x4;    // BRTIF
    static constexpr uint32_t MDMA_C27ISR_BTIF = 0x8;     // BTIF
    static constexpr uint32_t MDMA_C27ISR_TCIF = 0x10;    // TCIF
    static constexpr uint32_t MDMA_C27ISR_CRQA = 0x10000; // CRQA

    static constexpr uint32_t MDMA_C27IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C27IFCR_CTEIF = 0x1;   // CTEIF
    static constexpr uint32_t MDMA_C27IFCR_CCTCIF = 0x2;  // CCTCIF
    static constexpr uint32_t MDMA_C27IFCR_CBRTIF = 0x4;  // CBRTIF
    static constexpr uint32_t MDMA_C27IFCR_CBTIF = 0x8;   // CBTIF
    static constexpr uint32_t MDMA_C27IFCR_CLTCIF = 0x10; // CLTCIF

    static constexpr uint32_t MDMA_C27ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C27ESR_TEA =         // TEA
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C27ESR_TED = 0x80;   // TED
    static constexpr uint32_t MDMA_C27ESR_TELD = 0x100; // TELD
    static constexpr uint32_t MDMA_C27ESR_TEMD = 0x200; // TEMD
    static constexpr uint32_t MDMA_C27ESR_ASE = 0x400;  // ASE
    static constexpr uint32_t MDMA_C27ESR_BSE = 0x800;  // BSE

    static constexpr uint32_t MDMA_C27CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C27CR_EN = 0x1;       // EN
    static constexpr uint32_t MDMA_C27CR_TEIE = 0x2;     // TEIE
    static constexpr uint32_t MDMA_C27CR_CTCIE = 0x4;    // CTCIE
    static constexpr uint32_t MDMA_C27CR_BRTIE = 0x8;    // BRTIE
    static constexpr uint32_t MDMA_C27CR_BTIE = 0x10;    // BTIE
    static constexpr uint32_t MDMA_C27CR_TCIE = 0x20;    // TCIE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C27CR_PL =            // PL
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C27CR_BEX = 0x1000;   // BEX
    static constexpr uint32_t MDMA_C27CR_HEX = 0x2000;   // HEX
    static constexpr uint32_t MDMA_C27CR_WEX = 0x4000;   // WEX
    static constexpr uint32_t MDMA_C27CR_SWRQ = 0x10000; // SWRQ

    static constexpr uint32_t MDMA_C27TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C27TCR_SINC =             // SINC
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C27TCR_DINC =             // DINC
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C27TCR_SSIZE =            // SSIZE
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C27TCR_DSIZE =            // DSIZE
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C27TCR_SINCOS =           // SINCOS
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C27TCR_DINCOS =           // DINCOS
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C27TCR_SBURST =           // SBURST
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C27TCR_DBURST =           // DBURST
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C27TCR_TLEN =             // TLEN
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C27TCR_PKE = 0x2000000;   // PKE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C27TCR_PAM =              // PAM
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C27TCR_TRGM =             // TRGM
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C27TCR_SWRM = 0x40000000; // SWRM
    static constexpr uint32_t MDMA_C27TCR_BWM = 0x80000000;  // BWM

    static constexpr uint32_t MDMA_C27BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C27BNDTR_BNDT =           // BNDT
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C27BNDTR_BRSUM = 0x40000; // BRSUM
    static constexpr uint32_t MDMA_C27BNDTR_BRDUM = 0x80000; // BRDUM
    template<uint32_t X>
    static constexpr uint32_t MDMA_C27BNDTR_BRC =            // BRC
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C27SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C27DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C27BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C27BRUR_SUV =   // SUV
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C27BRUR_DUV =   // DUV
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C27LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C27TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C27TBR_TSEL =          // TSEL
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C27TBR_SBUS = 0x10000; // SBUS
    static constexpr uint32_t MDMA_C27TBR_DBUS = 0x20000; // DBUS

    static constexpr uint32_t MDMA_C27MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C27MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C28ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C28ISR_TEIF = 0x1;     // TEIF
    static constexpr uint32_t MDMA_C28ISR_CTCIF = 0x2;    // CTCIF
    static constexpr uint32_t MDMA_C28ISR_BRTIF = 0x4;    // BRTIF
    static constexpr uint32_t MDMA_C28ISR_BTIF = 0x8;     // BTIF
    static constexpr uint32_t MDMA_C28ISR_TCIF = 0x10;    // TCIF
    static constexpr uint32_t MDMA_C28ISR_CRQA = 0x10000; // CRQA

    static constexpr uint32_t MDMA_C28IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C28IFCR_CTEIF = 0x1;   // CTEIF
    static constexpr uint32_t MDMA_C28IFCR_CCTCIF = 0x2;  // CCTCIF
    static constexpr uint32_t MDMA_C28IFCR_CBRTIF = 0x4;  // CBRTIF
    static constexpr uint32_t MDMA_C28IFCR_CBTIF = 0x8;   // CBTIF
    static constexpr uint32_t MDMA_C28IFCR_CLTCIF = 0x10; // CLTCIF

    static constexpr uint32_t MDMA_C28ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C28ESR_TEA =         // TEA
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C28ESR_TED = 0x80;   // TED
    static constexpr uint32_t MDMA_C28ESR_TELD = 0x100; // TELD
    static constexpr uint32_t MDMA_C28ESR_TEMD = 0x200; // TEMD
    static constexpr uint32_t MDMA_C28ESR_ASE = 0x400;  // ASE
    static constexpr uint32_t MDMA_C28ESR_BSE = 0x800;  // BSE

    static constexpr uint32_t MDMA_C28CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C28CR_EN = 0x1;       // EN
    static constexpr uint32_t MDMA_C28CR_TEIE = 0x2;     // TEIE
    static constexpr uint32_t MDMA_C28CR_CTCIE = 0x4;    // CTCIE
    static constexpr uint32_t MDMA_C28CR_BRTIE = 0x8;    // BRTIE
    static constexpr uint32_t MDMA_C28CR_BTIE = 0x10;    // BTIE
    static constexpr uint32_t MDMA_C28CR_TCIE = 0x20;    // TCIE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C28CR_PL =            // PL
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C28CR_BEX = 0x1000;   // BEX
    static constexpr uint32_t MDMA_C28CR_HEX = 0x2000;   // HEX
    static constexpr uint32_t MDMA_C28CR_WEX = 0x4000;   // WEX
    static constexpr uint32_t MDMA_C28CR_SWRQ = 0x10000; // SWRQ

    static constexpr uint32_t MDMA_C28TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C28TCR_SINC =             // SINC
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C28TCR_DINC =             // DINC
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C28TCR_SSIZE =            // SSIZE
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C28TCR_DSIZE =            // DSIZE
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C28TCR_SINCOS =           // SINCOS
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C28TCR_DINCOS =           // DINCOS
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C28TCR_SBURST =           // SBURST
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C28TCR_DBURST =           // DBURST
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C28TCR_TLEN =             // TLEN
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C28TCR_PKE = 0x2000000;   // PKE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C28TCR_PAM =              // PAM
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C28TCR_TRGM =             // TRGM
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C28TCR_SWRM = 0x40000000; // SWRM
    static constexpr uint32_t MDMA_C28TCR_BWM = 0x80000000;  // BWM

    static constexpr uint32_t MDMA_C28BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C28BNDTR_BNDT =           // BNDT
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C28BNDTR_BRSUM = 0x40000; // BRSUM
    static constexpr uint32_t MDMA_C28BNDTR_BRDUM = 0x80000; // BRDUM
    template<uint32_t X>
    static constexpr uint32_t MDMA_C28BNDTR_BRC =            // BRC
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C28SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C28DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C28BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C28BRUR_SUV =   // SUV
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C28BRUR_DUV =   // DUV
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C28LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C28TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C28TBR_TSEL =          // TSEL
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C28TBR_SBUS = 0x10000; // SBUS
    static constexpr uint32_t MDMA_C28TBR_DBUS = 0x20000; // DBUS

    static constexpr uint32_t MDMA_C28MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C28MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C29ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C29ISR_TEIF = 0x1;     // TEIF
    static constexpr uint32_t MDMA_C29ISR_CTCIF = 0x2;    // CTCIF
    static constexpr uint32_t MDMA_C29ISR_BRTIF = 0x4;    // BRTIF
    static constexpr uint32_t MDMA_C29ISR_BTIF = 0x8;     // BTIF
    static constexpr uint32_t MDMA_C29ISR_TCIF = 0x10;    // TCIF
    static constexpr uint32_t MDMA_C29ISR_CRQA = 0x10000; // CRQA

    static constexpr uint32_t MDMA_C29IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C29IFCR_CTEIF = 0x1;   // CTEIF
    static constexpr uint32_t MDMA_C29IFCR_CCTCIF = 0x2;  // CCTCIF
    static constexpr uint32_t MDMA_C29IFCR_CBRTIF = 0x4;  // CBRTIF
    static constexpr uint32_t MDMA_C29IFCR_CBTIF = 0x8;   // CBTIF
    static constexpr uint32_t MDMA_C29IFCR_CLTCIF = 0x10; // CLTCIF

    static constexpr uint32_t MDMA_C29ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C29ESR_TEA =         // TEA
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C29ESR_TED = 0x80;   // TED
    static constexpr uint32_t MDMA_C29ESR_TELD = 0x100; // TELD
    static constexpr uint32_t MDMA_C29ESR_TEMD = 0x200; // TEMD
    static constexpr uint32_t MDMA_C29ESR_ASE = 0x400;  // ASE
    static constexpr uint32_t MDMA_C29ESR_BSE = 0x800;  // BSE

    static constexpr uint32_t MDMA_C29CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C29CR_EN = 0x1;       // EN
    static constexpr uint32_t MDMA_C29CR_TEIE = 0x2;     // TEIE
    static constexpr uint32_t MDMA_C29CR_CTCIE = 0x4;    // CTCIE
    static constexpr uint32_t MDMA_C29CR_BRTIE = 0x8;    // BRTIE
    static constexpr uint32_t MDMA_C29CR_BTIE = 0x10;    // BTIE
    static constexpr uint32_t MDMA_C29CR_TCIE = 0x20;    // TCIE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C29CR_PL =            // PL
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C29CR_BEX = 0x1000;   // BEX
    static constexpr uint32_t MDMA_C29CR_HEX = 0x2000;   // HEX
    static constexpr uint32_t MDMA_C29CR_WEX = 0x4000;   // WEX
    static constexpr uint32_t MDMA_C29CR_SWRQ = 0x10000; // SWRQ

    static constexpr uint32_t MDMA_C29TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C29TCR_SINC =             // SINC
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C29TCR_DINC =             // DINC
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C29TCR_SSIZE =            // SSIZE
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C29TCR_DSIZE =            // DSIZE
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C29TCR_SINCOS =           // SINCOS
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C29TCR_DINCOS =           // DINCOS
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C29TCR_SBURST =           // SBURST
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C29TCR_DBURST =           // DBURST
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C29TCR_TLEN =             // TLEN
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C29TCR_PKE = 0x2000000;   // PKE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C29TCR_PAM =              // PAM
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C29TCR_TRGM =             // TRGM
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C29TCR_SWRM = 0x40000000; // SWRM
    static constexpr uint32_t MDMA_C29TCR_BWM = 0x80000000;  // BWM

    static constexpr uint32_t MDMA_C29BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C29BNDTR_BNDT =           // BNDT
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C29BNDTR_BRSUM = 0x40000; // BRSUM
    static constexpr uint32_t MDMA_C29BNDTR_BRDUM = 0x80000; // BRDUM
    template<uint32_t X>
    static constexpr uint32_t MDMA_C29BNDTR_BRC =            // BRC
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C29SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C29DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C29BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C29BRUR_SUV =   // SUV
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C29BRUR_DUV =   // DUV
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C29LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C29TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C29TBR_TSEL =          // TSEL
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C29TBR_SBUS = 0x10000; // SBUS
    static constexpr uint32_t MDMA_C29TBR_DBUS = 0x20000; // DBUS

    static constexpr uint32_t MDMA_C29MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C29MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C30ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C30ISR_TEIF = 0x1;     // TEIF
    static constexpr uint32_t MDMA_C30ISR_CTCIF = 0x2;    // CTCIF
    static constexpr uint32_t MDMA_C30ISR_BRTIF = 0x4;    // BRTIF
    static constexpr uint32_t MDMA_C30ISR_BTIF = 0x8;     // BTIF
    static constexpr uint32_t MDMA_C30ISR_TCIF = 0x10;    // TCIF
    static constexpr uint32_t MDMA_C30ISR_CRQA = 0x10000; // CRQA

    static constexpr uint32_t MDMA_C30IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C30IFCR_CTEIF = 0x1;   // CTEIF
    static constexpr uint32_t MDMA_C30IFCR_CCTCIF = 0x2;  // CCTCIF
    static constexpr uint32_t MDMA_C30IFCR_CBRTIF = 0x4;  // CBRTIF
    static constexpr uint32_t MDMA_C30IFCR_CBTIF = 0x8;   // CBTIF
    static constexpr uint32_t MDMA_C30IFCR_CLTCIF = 0x10; // CLTCIF

    static constexpr uint32_t MDMA_C30ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C30ESR_TEA =         // TEA
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C30ESR_TED = 0x80;   // TED
    static constexpr uint32_t MDMA_C30ESR_TELD = 0x100; // TELD
    static constexpr uint32_t MDMA_C30ESR_TEMD = 0x200; // TEMD
    static constexpr uint32_t MDMA_C30ESR_ASE = 0x400;  // ASE
    static constexpr uint32_t MDMA_C30ESR_BSE = 0x800;  // BSE

    static constexpr uint32_t MDMA_C30CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C30CR_EN = 0x1;       // EN
    static constexpr uint32_t MDMA_C30CR_TEIE = 0x2;     // TEIE
    static constexpr uint32_t MDMA_C30CR_CTCIE = 0x4;    // CTCIE
    static constexpr uint32_t MDMA_C30CR_BRTIE = 0x8;    // BRTIE
    static constexpr uint32_t MDMA_C30CR_BTIE = 0x10;    // BTIE
    static constexpr uint32_t MDMA_C30CR_TCIE = 0x20;    // TCIE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C30CR_PL =            // PL
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C30CR_BEX = 0x1000;   // BEX
    static constexpr uint32_t MDMA_C30CR_HEX = 0x2000;   // HEX
    static constexpr uint32_t MDMA_C30CR_WEX = 0x4000;   // WEX
    static constexpr uint32_t MDMA_C30CR_SWRQ = 0x10000; // SWRQ

    static constexpr uint32_t MDMA_C30TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C30TCR_SINC =             // SINC
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C30TCR_DINC =             // DINC
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C30TCR_SSIZE =            // SSIZE
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C30TCR_DSIZE =            // DSIZE
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C30TCR_SINCOS =           // SINCOS
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C30TCR_DINCOS =           // DINCOS
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C30TCR_SBURST =           // SBURST
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C30TCR_DBURST =           // DBURST
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C30TCR_TLEN =             // TLEN
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C30TCR_PKE = 0x2000000;   // PKE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C30TCR_PAM =              // PAM
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C30TCR_TRGM =             // TRGM
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C30TCR_SWRM = 0x40000000; // SWRM
    static constexpr uint32_t MDMA_C30TCR_BWM = 0x80000000;  // BWM

    static constexpr uint32_t MDMA_C30BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C30BNDTR_BNDT =           // BNDT
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C30BNDTR_BRSUM = 0x40000; // BRSUM
    static constexpr uint32_t MDMA_C30BNDTR_BRDUM = 0x80000; // BRDUM
    template<uint32_t X>
    static constexpr uint32_t MDMA_C30BNDTR_BRC =            // BRC
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C30SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C30DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C30BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C30BRUR_SUV =   // SUV
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C30BRUR_DUV =   // DUV
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C30LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C30TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C30TBR_TSEL =          // TSEL
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C30TBR_SBUS = 0x10000; // SBUS
    static constexpr uint32_t MDMA_C30TBR_DBUS = 0x20000; // DBUS

    static constexpr uint32_t MDMA_C30MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C30MDR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C31ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C31ISR_TEIF = 0x1;     // TEIF
    static constexpr uint32_t MDMA_C31ISR_CTCIF = 0x2;    // CTCIF
    static constexpr uint32_t MDMA_C31ISR_BRTIF = 0x4;    // BRTIF
    static constexpr uint32_t MDMA_C31ISR_BTIF = 0x8;     // BTIF
    static constexpr uint32_t MDMA_C31ISR_TCIF = 0x10;    // TCIF
    static constexpr uint32_t MDMA_C31ISR_CRQA = 0x10000; // CRQA

    static constexpr uint32_t MDMA_C31IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C31IFCR_CTEIF = 0x1;   // CTEIF
    static constexpr uint32_t MDMA_C31IFCR_CCTCIF = 0x2;  // CCTCIF
    static constexpr uint32_t MDMA_C31IFCR_CBRTIF = 0x4;  // CBRTIF
    static constexpr uint32_t MDMA_C31IFCR_CBTIF = 0x8;   // CBTIF
    static constexpr uint32_t MDMA_C31IFCR_CLTCIF = 0x10; // CLTCIF

    static constexpr uint32_t MDMA_C31ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C31ESR_TEA =         // TEA
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C31ESR_TED = 0x80;   // TED
    static constexpr uint32_t MDMA_C31ESR_TELD = 0x100; // TELD
    static constexpr uint32_t MDMA_C31ESR_TEMD = 0x200; // TEMD
    static constexpr uint32_t MDMA_C31ESR_ASE = 0x400;  // ASE
    static constexpr uint32_t MDMA_C31ESR_BSE = 0x800;  // BSE

    static constexpr uint32_t MDMA_C31CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDMA_C31CR_EN = 0x1;       // EN
    static constexpr uint32_t MDMA_C31CR_TEIE = 0x2;     // TEIE
    static constexpr uint32_t MDMA_C31CR_CTCIE = 0x4;    // CTCIE
    static constexpr uint32_t MDMA_C31CR_BRTIE = 0x8;    // BRTIE
    static constexpr uint32_t MDMA_C31CR_BTIE = 0x10;    // BTIE
    static constexpr uint32_t MDMA_C31CR_TCIE = 0x20;    // TCIE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C31CR_PL =            // PL
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C31CR_BEX = 0x1000;   // BEX
    static constexpr uint32_t MDMA_C31CR_HEX = 0x2000;   // HEX
    static constexpr uint32_t MDMA_C31CR_WEX = 0x4000;   // WEX
    static constexpr uint32_t MDMA_C31CR_SWRQ = 0x10000; // SWRQ

    static constexpr uint32_t MDMA_C31TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C31TCR_SINC =             // SINC
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C31TCR_DINC =             // DINC
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C31TCR_SSIZE =            // SSIZE
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C31TCR_DSIZE =            // DSIZE
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C31TCR_SINCOS =           // SINCOS
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C31TCR_DINCOS =           // DINCOS
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C31TCR_SBURST =           // SBURST
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C31TCR_DBURST =           // DBURST
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C31TCR_TLEN =             // TLEN
        bit_field_t<18, 0x7f>::value<X>();
    static constexpr uint32_t MDMA_C31TCR_PKE = 0x2000000;   // PKE
    template<uint32_t X>
    static constexpr uint32_t MDMA_C31TCR_PAM =              // PAM
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C31TCR_TRGM =             // TRGM
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MDMA_C31TCR_SWRM = 0x40000000; // SWRM
    static constexpr uint32_t MDMA_C31TCR_BWM = 0x80000000;  // BWM

    static constexpr uint32_t MDMA_C31BNDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C31BNDTR_BNDT =           // BNDT
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t MDMA_C31BNDTR_BRSUM = 0x40000; // BRSUM
    static constexpr uint32_t MDMA_C31BNDTR_BRDUM = 0x80000; // BRDUM
    template<uint32_t X>
    static constexpr uint32_t MDMA_C31BNDTR_BRC =            // BRC
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t MDMA_C31SAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C31DAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C31BRUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C31BRUR_SUV =   // SUV
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDMA_C31BRUR_DUV =   // DUV
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MDMA_C31LAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C31TBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDMA_C31TBR_TSEL =          // TSEL
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t MDMA_C31TBR_SBUS = 0x10000; // SBUS
    static constexpr uint32_t MDMA_C31TBR_DBUS = 0x20000; // DBUS

    static constexpr uint32_t MDMA_C31MAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDMA_C31MDR_RESET_VALUE = 0x0;
};


template<>
struct peripheral_t<STM32MP15xxx, MDMA>
{
    typedef stm32mp15xxx_mdma_t T;
    static T& V;
};

using mdma_t = peripheral_t<mcu_svd, MDMA>;

