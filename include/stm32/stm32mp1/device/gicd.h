#pragma once

////
//
//      STM32MP1 GICD peripherals
//
////

////
//
//      GICD
//
////

struct stm32mp15xxx_gicd_t
{
    volatile uint32_t GICD_CTLR;         // [read-write] GICD control register
    volatile uint32_t GICD_TYPER;        // [read-only] GICD interrupt controller type register
    volatile uint32_t GICD_IIDR;         // [read-only] GICD implementer identification register
    reserved_t<0x1d> _0x80;
    volatile uint32_t GICD_IGROUPR0;     // [read-write] For interrupts ID
    volatile uint32_t GICD_IGROUPR1;     // [read-write] For interrupts ID
    volatile uint32_t GICD_IGROUPR2;     // [read-write] For interrupts ID
    volatile uint32_t GICD_IGROUPR3;     // [read-write] For interrupts ID = x*32 to ID = x*32+31
    volatile uint32_t GICD_IGROUPR4;     // [read-write] For interrupts ID = x*32 to ID = x*32+31
    volatile uint32_t GICD_IGROUPR5;     // [read-write] For interrupts ID
    volatile uint32_t GICD_IGROUPR6;     // [read-write] For interrupts ID
    volatile uint32_t GICD_IGROUPR7;     // [read-write] For interrupts ID
    volatile uint32_t GICD_IGROUPR8;     // [read-write] For interrupts ID
    reserved_t<0x17> _0x100;
    volatile uint32_t GICD_ISENABLER0;   // [read-write] For interrupts ID = 0 to ID = 31
    volatile uint32_t GICD_ISENABLER1;   // [read-write] For interrupts ID
    volatile uint32_t GICD_ISENABLER2;   // [read-write] For interrupts ID
    volatile uint32_t GICD_ISENABLER3;   // [read-write] For interrupts ID
    volatile uint32_t GICD_ISENABLER4;   // [read-write] For interrupts ID
    volatile uint32_t GICD_ISENABLER5;   // [read-write] For interrupts ID
    volatile uint32_t GICD_ISENABLER6;   // [read-write] For interrupts ID
    volatile uint32_t GICD_ISENABLER7;   // [read-write] For interrupts ID
    volatile uint32_t GICD_ISENABLER8;   // [read-write] For interrupts ID
    reserved_t<0x17> _0x180;
    volatile uint32_t GICD_ICENABLER0;   // [read-write] For interrupts ID = 0 to ID = 31
    volatile uint32_t GICD_ICENABLER1;   // [read-write] For interrupts ID
    volatile uint32_t GICD_ICENABLER2;   // [read-write] For interrupts ID
    volatile uint32_t GICD_ICENABLER3;   // [read-write] For interrupts ID
    volatile uint32_t GICD_ICENABLER4;   // [read-write] For interrupts ID
    volatile uint32_t GICD_ICENABLER5;   // [read-write] For interrupts ID
    volatile uint32_t GICD_ICENABLER6;   // [read-write] For interrupts ID
    volatile uint32_t GICD_ICENABLER7;   // [read-write] For interrupts ID
    volatile uint32_t GICD_ICENABLER8;   // [read-write] For interrupts ID
    reserved_t<0x17> _0x200;
    volatile uint32_t GICD_ISPENDR0;     // [read-write] For interrupts ID
    volatile uint32_t GICD_ISPENDR1;     // [read-write] For interrupts ID
    volatile uint32_t GICD_ISPENDR2;     // [read-write] For interrupts ID
    volatile uint32_t GICD_ISPENDR3;     // [read-write] For interrupts ID
    volatile uint32_t GICD_ISPENDR4;     // [read-write] For interrupts ID
    volatile uint32_t GICD_ISPENDR5;     // [read-write] For interrupts ID
    volatile uint32_t GICD_ISPENDR6;     // [read-write] For interrupts ID
    volatile uint32_t GICD_ISPENDR7;     // [read-write] For interrupts ID
    volatile uint32_t GICD_ISPENDR8;     // [read-write] For interrupts ID
    reserved_t<0x17> _0x280;
    volatile uint32_t GICD_ICPENDR0;     // [read-write] For interrupts ID
    volatile uint32_t GICD_ICPENDR1;     // [read-write] For interrupts ID
    volatile uint32_t GICD_ICPENDR2;     // [read-write] For interrupts ID
    volatile uint32_t GICD_ICPENDR3;     // [read-write] For interrupts ID
    volatile uint32_t GICD_ICPENDR4;     // [read-write] For interrupts ID
    volatile uint32_t GICD_ICPENDR5;     // [read-write] For interrupts ID
    volatile uint32_t GICD_ICPENDR6;     // [read-write] For interrupts ID
    volatile uint32_t GICD_ICPENDR7;     // [read-write] For interrupts ID
    volatile uint32_t GICD_ICPENDR8;     // [read-write] For interrupts ID
    reserved_t<0x17> _0x300;
    volatile uint32_t GICD_ISACTIVER0;   // [read-write] For interrupts ID
    volatile uint32_t GICD_ISACTIVER1;   // [read-write] For interrupts ID
    volatile uint32_t GICD_ISACTIVER2;   // [read-write] For interrupts ID
    volatile uint32_t GICD_ISACTIVER3;   // [read-write] For interrupts ID
    volatile uint32_t GICD_ISACTIVER4;   // [read-write] For interrupts ID
    volatile uint32_t GICD_ISACTIVER5;   // [read-write] For interrupts ID
    volatile uint32_t GICD_ISACTIVER6;   // [read-write] For interrupts ID
    volatile uint32_t GICD_ISACTIVER7;   // [read-write] For interrupts ID
    volatile uint32_t GICD_ISACTIVER8;   // [read-write] For interrupts ID
    reserved_t<0x17> _0x380;
    volatile uint32_t GICD_ICACTIVER0;   // [read-write] For interrupts ID
    volatile uint32_t GICD_ICACTIVER1;   // [read-write] For interrupts ID
    volatile uint32_t GICD_ICACTIVER2;   // [read-write] For interrupts ID
    volatile uint32_t GICD_ICACTIVER3;   // [read-write] For interrupts ID
    volatile uint32_t GICD_ICACTIVER4;   // [read-write] For interrupts ID
    volatile uint32_t GICD_ICACTIVER5;   // [read-write] For interrupts ID
    volatile uint32_t GICD_ICACTIVER6;   // [read-write] For interrupts ID
    volatile uint32_t GICD_ICACTIVER7;   // [read-write] For interrupts ID
    volatile uint32_t GICD_ICACTIVER8;   // [read-write] For interrupts ID
    reserved_t<0x17> _0x400;
    volatile uint32_t GICD_IPRIORITYR0;  // [read-write] GICD interrupt priority register 0
    volatile uint32_t GICD_IPRIORITYR1;  // [read-write] GICD interrupt priority register 1
    volatile uint32_t GICD_IPRIORITYR2;  // [read-write] GICD interrupt priority register 2
    volatile uint32_t GICD_IPRIORITYR3;  // [read-write] GICD interrupt priority register 3
    volatile uint32_t GICD_IPRIORITYR4;  // [read-write] GICD interrupt priority register 4
    volatile uint32_t GICD_IPRIORITYR5;  // [read-write] GICD interrupt priority register 5
    volatile uint32_t GICD_IPRIORITYR6;  // [read-write] GICD interrupt priority register 6
    volatile uint32_t GICD_IPRIORITYR7;  // [read-write] GICD interrupt priority register 7
    volatile uint32_t GICD_IPRIORITYR8;  // [read-write] GICD interrupt priority register 8
    volatile uint32_t GICD_IPRIORITYR9;  // [read-write] GICD interrupt priority register 9
    volatile uint32_t GICD_IPRIORITYR10; // [read-write] GICD interrupt priority register 10
    volatile uint32_t GICD_IPRIORITYR11; // [read-write] GICD interrupt priority register 11
    volatile uint32_t GICD_IPRIORITYR12; // [read-write] GICD interrupt priority register 12
    volatile uint32_t GICD_IPRIORITYR13; // [read-write] GICD interrupt priority register 13
    volatile uint32_t GICD_IPRIORITYR14; // [read-write] GICD interrupt priority register 14
    volatile uint32_t GICD_IPRIORITYR15; // [read-write] GICD interrupt priority register 15
    volatile uint32_t GICD_IPRIORITYR16; // [read-write] GICD interrupt priority register 16
    volatile uint32_t GICD_IPRIORITYR17; // [read-write] GICD interrupt priority register 17
    volatile uint32_t GICD_IPRIORITYR18; // [read-write] GICD interrupt priority register 18
    volatile uint32_t GICD_IPRIORITYR19; // [read-write] GICD interrupt priority register 19
    volatile uint32_t GICD_IPRIORITYR20; // [read-write] GICD interrupt priority register 20
    volatile uint32_t GICD_IPRIORITYR21; // [read-write] GICD interrupt priority register 21
    volatile uint32_t GICD_IPRIORITYR22; // [read-write] GICD interrupt priority register 22
    volatile uint32_t GICD_IPRIORITYR23; // [read-write] GICD interrupt priority register 23
    volatile uint32_t GICD_IPRIORITYR24; // [read-write] GICD interrupt priority register 24
    volatile uint32_t GICD_IPRIORITYR25; // [read-write] GICD interrupt priority register 25
    volatile uint32_t GICD_IPRIORITYR26; // [read-write] GICD interrupt priority register 26
    volatile uint32_t GICD_IPRIORITYR27; // [read-write] GICD interrupt priority register 27
    volatile uint32_t GICD_IPRIORITYR28; // [read-write] GICD interrupt priority register 28
    volatile uint32_t GICD_IPRIORITYR29; // [read-write] GICD interrupt priority register 29
    volatile uint32_t GICD_IPRIORITYR30; // [read-write] GICD interrupt priority register 30
    volatile uint32_t GICD_IPRIORITYR31; // [read-write] GICD interrupt priority register 31
    volatile uint32_t GICD_IPRIORITYR32; // [read-write] GICD interrupt priority register 32
    volatile uint32_t GICD_IPRIORITYR33; // [read-write] GICD interrupt priority register 33
    volatile uint32_t GICD_IPRIORITYR34; // [read-write] GICD interrupt priority register 34
    volatile uint32_t GICD_IPRIORITYR35; // [read-write] GICD interrupt priority register 35
    volatile uint32_t GICD_IPRIORITYR36; // [read-write] GICD interrupt priority register 36
    volatile uint32_t GICD_IPRIORITYR37; // [read-write] GICD interrupt priority register 37
    volatile uint32_t GICD_IPRIORITYR38; // [read-write] GICD interrupt priority register 38
    volatile uint32_t GICD_IPRIORITYR39; // [read-write] GICD interrupt priority register 39
    volatile uint32_t GICD_IPRIORITYR40; // [read-write] GICD interrupt priority register 40
    volatile uint32_t GICD_IPRIORITYR41; // [read-write] GICD interrupt priority register 41
    volatile uint32_t GICD_IPRIORITYR42; // [read-write] GICD interrupt priority register 42
    volatile uint32_t GICD_IPRIORITYR43; // [read-write] GICD interrupt priority register 43
    volatile uint32_t GICD_IPRIORITYR44; // [read-write] GICD interrupt priority register 44
    volatile uint32_t GICD_IPRIORITYR45; // [read-write] GICD interrupt priority register 45
    volatile uint32_t GICD_IPRIORITYR46; // [read-write] GICD interrupt priority register 46
    volatile uint32_t GICD_IPRIORITYR47; // [read-write] GICD interrupt priority register 47
    volatile uint32_t GICD_IPRIORITYR48; // [read-write] GICD interrupt priority register 48
    volatile uint32_t GICD_IPRIORITYR49; // [read-write] GICD interrupt priority register 49
    volatile uint32_t GICD_IPRIORITYR50; // [read-write] GICD interrupt priority register 50
    volatile uint32_t GICD_IPRIORITYR51; // [read-write] GICD interrupt priority register 51
    volatile uint32_t GICD_IPRIORITYR52; // [read-write] GICD interrupt priority register 52
    volatile uint32_t GICD_IPRIORITYR53; // [read-write] GICD interrupt priority register 53
    volatile uint32_t GICD_IPRIORITYR54; // [read-write] GICD interrupt priority register 54
    volatile uint32_t GICD_IPRIORITYR55; // [read-write] GICD interrupt priority register 55
    volatile uint32_t GICD_IPRIORITYR56; // [read-write] GICD interrupt priority register 56
    volatile uint32_t GICD_IPRIORITYR57; // [read-write] GICD interrupt priority register 57
    volatile uint32_t GICD_IPRIORITYR58; // [read-write] GICD interrupt priority register 58
    volatile uint32_t GICD_IPRIORITYR59; // [read-write] GICD interrupt priority register 59
    volatile uint32_t GICD_IPRIORITYR60; // [read-write] GICD interrupt priority register 60
    volatile uint32_t GICD_IPRIORITYR61; // [read-write] GICD interrupt priority register 61
    volatile uint32_t GICD_IPRIORITYR62; // [read-write] GICD interrupt priority register 62
    volatile uint32_t GICD_IPRIORITYR63; // [read-write] GICD interrupt priority register 63
    volatile uint32_t GICD_IPRIORITYR64; // [read-write] GICD interrupt priority register 64
    volatile uint32_t GICD_IPRIORITYR65; // [read-write] GICD interrupt priority register 65
    volatile uint32_t GICD_IPRIORITYR66; // [read-write] GICD interrupt priority register 66
    volatile uint32_t GICD_IPRIORITYR67; // [read-write] GICD interrupt priority register 67
    volatile uint32_t GICD_IPRIORITYR68; // [read-write] GICD interrupt priority register 68
    volatile uint32_t GICD_IPRIORITYR69; // [read-write] GICD interrupt priority register 69
    volatile uint32_t GICD_IPRIORITYR70; // [read-write] GICD interrupt priority register 70
    volatile uint32_t GICD_IPRIORITYR71; // [read-write] GICD interrupt priority register 71
    reserved_t<0xb8> _0x800;
    volatile uint32_t GICD_ITARGETSR0;   // [read-only] For existing SGIs and PPIs, read of CPU targets field returns the number of the processor performing the read.
    volatile uint32_t GICD_ITARGETSR1;   // [read-only] For existing SGIs and PPIs, read of CPU targets field returns the number of the processor performing the read.
    volatile uint32_t GICD_ITARGETSR2;   // [read-only] For existing SGIs and PPIs, read of CPU targets field returns the number of the processor performing the read.
    volatile uint32_t GICD_ITARGETSR3;   // [read-only] For existing SGIs and PPIs, read of CPU targets field returns the number of the processor performing the read.
    volatile uint32_t GICD_ITARGETSR4;   // [read-only] For existing SGIs and PPIs, read of CPU targets field returns the number of the processor performing the read.
    volatile uint32_t GICD_ITARGETSR5;   // [read-only] For existing SGIs and PPIs, read of CPU targets field returns the number of the processor performing the read.
    volatile uint32_t GICD_ITARGETSR6;   // [read-only] For existing SGIs and PPIs, read of CPU targets field returns the number of the processor performing the read.
    volatile uint32_t GICD_ITARGETSR7;   // [read-only] For existing SGIs and PPIs, read of CPU targets field returns the number of the processor performing the read.
    volatile uint32_t GICD_ITARGETSR8;   // [read-write] GICD interrupt processor target register 8
    volatile uint32_t GICD_ITARGETSR9;   // [read-write] GICD interrupt processor target register 9
    volatile uint32_t GICD_ITARGETSR10;  // [read-write] GICD interrupt processor target register 10
    volatile uint32_t GICD_ITARGETSR11;  // [read-write] GICD interrupt processor target register 11
    volatile uint32_t GICD_ITARGETSR12;  // [read-write] GICD interrupt processor target register 12
    volatile uint32_t GICD_ITARGETSR13;  // [read-write] GICD interrupt processor target register 13
    volatile uint32_t GICD_ITARGETSR14;  // [read-write] GICD interrupt processor target register 14
    volatile uint32_t GICD_ITARGETSR15;  // [read-write] GICD interrupt processor target register 15
    volatile uint32_t GICD_ITARGETSR16;  // [read-write] GICD interrupt processor target register 16
    volatile uint32_t GICD_ITARGETSR17;  // [read-write] GICD interrupt processor target register 17
    volatile uint32_t GICD_ITARGETSR18;  // [read-write] GICD interrupt processor target register 18
    volatile uint32_t GICD_ITARGETSR19;  // [read-write] GICD interrupt processor target register 19
    volatile uint32_t GICD_ITARGETSR20;  // [read-write] GICD interrupt processor target register 20
    volatile uint32_t GICD_ITARGETSR21;  // [read-write] GICD interrupt processor target register 21
    volatile uint32_t GICD_ITARGETSR22;  // [read-write] GICD interrupt processor target register 22
    volatile uint32_t GICD_ITARGETSR23;  // [read-write] GICD interrupt processor target register 23
    volatile uint32_t GICD_ITARGETSR24;  // [read-write] GICD interrupt processor target register 24
    volatile uint32_t GICD_ITARGETSR25;  // [read-write] GICD interrupt processor target register 25
    volatile uint32_t GICD_ITARGETSR26;  // [read-write] GICD interrupt processor target register 26
    volatile uint32_t GICD_ITARGETSR27;  // [read-write] GICD interrupt processor target register 27
    volatile uint32_t GICD_ITARGETSR28;  // [read-write] GICD interrupt processor target register 28
    volatile uint32_t GICD_ITARGETSR29;  // [read-write] GICD interrupt processor target register 29
    volatile uint32_t GICD_ITARGETSR30;  // [read-write] GICD interrupt processor target register 30
    volatile uint32_t GICD_ITARGETSR31;  // [read-write] GICD interrupt processor target register 31
    volatile uint32_t GICD_ITARGETSR32;  // [read-write] GICD interrupt processor target register 32
    volatile uint32_t GICD_ITARGETSR33;  // [read-write] GICD interrupt processor target register 33
    volatile uint32_t GICD_ITARGETSR34;  // [read-write] GICD interrupt processor target register 34
    volatile uint32_t GICD_ITARGETSR35;  // [read-write] GICD interrupt processor target register 35
    volatile uint32_t GICD_ITARGETSR36;  // [read-write] GICD interrupt processor target register 36
    volatile uint32_t GICD_ITARGETSR37;  // [read-write] GICD interrupt processor target register 37
    volatile uint32_t GICD_ITARGETSR38;  // [read-write] GICD interrupt processor target register 38
    volatile uint32_t GICD_ITARGETSR39;  // [read-write] GICD interrupt processor target register 39
    volatile uint32_t GICD_ITARGETSR40;  // [read-write] GICD interrupt processor target register 40
    volatile uint32_t GICD_ITARGETSR41;  // [read-write] GICD interrupt processor target register 41
    volatile uint32_t GICD_ITARGETSR42;  // [read-write] GICD interrupt processor target register 42
    volatile uint32_t GICD_ITARGETSR43;  // [read-write] GICD interrupt processor target register 43
    volatile uint32_t GICD_ITARGETSR44;  // [read-write] GICD interrupt processor target register 44
    volatile uint32_t GICD_ITARGETSR45;  // [read-write] GICD interrupt processor target register 45
    volatile uint32_t GICD_ITARGETSR46;  // [read-write] GICD interrupt processor target register 46
    volatile uint32_t GICD_ITARGETSR47;  // [read-write] GICD interrupt processor target register 47
    volatile uint32_t GICD_ITARGETSR48;  // [read-write] GICD interrupt processor target register 48
    volatile uint32_t GICD_ITARGETSR49;  // [read-write] GICD interrupt processor target register 49
    volatile uint32_t GICD_ITARGETSR50;  // [read-write] GICD interrupt processor target register 50
    volatile uint32_t GICD_ITARGETSR51;  // [read-write] GICD interrupt processor target register 51
    volatile uint32_t GICD_ITARGETSR52;  // [read-write] GICD interrupt processor target register 52
    volatile uint32_t GICD_ITARGETSR53;  // [read-write] GICD interrupt processor target register 53
    volatile uint32_t GICD_ITARGETSR54;  // [read-write] GICD interrupt processor target register 54
    volatile uint32_t GICD_ITARGETSR55;  // [read-write] GICD interrupt processor target register 55
    volatile uint32_t GICD_ITARGETSR56;  // [read-write] GICD interrupt processor target register 56
    volatile uint32_t GICD_ITARGETSR57;  // [read-write] GICD interrupt processor target register 57
    volatile uint32_t GICD_ITARGETSR58;  // [read-write] GICD interrupt processor target register 58
    volatile uint32_t GICD_ITARGETSR59;  // [read-write] GICD interrupt processor target register 59
    volatile uint32_t GICD_ITARGETSR60;  // [read-write] GICD interrupt processor target register 60
    volatile uint32_t GICD_ITARGETSR61;  // [read-write] GICD interrupt processor target register 61
    volatile uint32_t GICD_ITARGETSR62;  // [read-write] GICD interrupt processor target register 62
    volatile uint32_t GICD_ITARGETSR63;  // [read-write] GICD interrupt processor target register 63
    volatile uint32_t GICD_ITARGETSR64;  // [read-write] GICD interrupt processor target register 64
    volatile uint32_t GICD_ITARGETSR65;  // [read-write] GICD interrupt processor target register 65
    volatile uint32_t GICD_ITARGETSR66;  // [read-write] GICD interrupt processor target register 66
    volatile uint32_t GICD_ITARGETSR67;  // [read-write] GICD interrupt processor target register 67
    volatile uint32_t GICD_ITARGETSR68;  // [read-write] GICD interrupt processor target register 68
    volatile uint32_t GICD_ITARGETSR69;  // [read-write] GICD interrupt processor target register 69
    volatile uint32_t GICD_ITARGETSR70;  // [read-write] GICD interrupt processor target register 70
    volatile uint32_t GICD_ITARGETSR71;  // [read-write] GICD interrupt processor target register 71
    reserved_t<0xb8> _0xc00;
    volatile uint32_t GICD_ICFGR0;       // [read-write] GICD interrupt configuration register
    volatile uint32_t GICD_ICFGR1;       // [read-write] GICD interrupt configuration register
    volatile uint32_t GICD_ICFGR2;       // [read-write] GICD interrupt configuration register 2
    volatile uint32_t GICD_ICFGR3;       // [read-write] GICD interrupt configuration register 3
    volatile uint32_t GICD_ICFGR4;       // [read-write] GICD interrupt configuration register 4
    volatile uint32_t GICD_ICFGR5;       // [read-write] GICD interrupt configuration register 5
    volatile uint32_t GICD_ICFGR6;       // [read-write] GICD interrupt configuration register 6
    volatile uint32_t GICD_ICFGR7;       // [read-write] GICD interrupt configuration register 7
    volatile uint32_t GICD_ICFGR8;       // [read-write] GICD interrupt configuration register 8
    volatile uint32_t GICD_ICFGR9;       // [read-write] GICD interrupt configuration register 9
    volatile uint32_t GICD_ICFGR10;      // [read-write] GICD interrupt configuration register 10
    volatile uint32_t GICD_ICFGR11;      // [read-write] GICD interrupt configuration register 11
    volatile uint32_t GICD_ICFGR12;      // [read-write] GICD interrupt configuration register 12
    volatile uint32_t GICD_ICFGR13;      // [read-write] GICD interrupt configuration register 13
    volatile uint32_t GICD_ICFGR14;      // [read-write] GICD interrupt configuration register 14
    volatile uint32_t GICD_ICFGR15;      // [read-write] GICD interrupt configuration register 15
    volatile uint32_t GICD_ICFGR16;      // [read-write] GICD interrupt configuration register 16
    volatile uint32_t GICD_ICFGR17;      // [read-write] GICD interrupt configuration register 17
    reserved_t<0x2e> _0xd00;
    volatile uint32_t GICD_PPISR;        // [read-only] GICD private peripheral interrupt status register
    reserved_t<0x1> _0xd08;
    volatile uint32_t GICD_SPISR1;       // [read-only] For interrupts ID = SPI number+32, from SPI [x*32+31] to SPI [x*32]
    volatile uint32_t GICD_SPISR2;       // [read-only] For interrupts ID
    volatile uint32_t GICD_SPISR3;       // [read-only] For interrupts ID
    volatile uint32_t GICD_SPISR4;       // [read-only] For interrupts ID
    volatile uint32_t GICD_SPISR5;       // [read-only] For interrupts ID
    volatile uint32_t GICD_SPISR6;       // [read-only] For interrupts ID
    volatile uint32_t GICD_SPISR7;       // [read-only] For interrupts ID
    reserved_t<0x77> _0xf00;
    volatile uint32_t GICD_SGIR;         // [write-only] GICD software generated interrupt register
    reserved_t<0x3> _0xf10;
    volatile uint32_t GICD_CPENDSGIR0;   // [read-write] For SGI x*4 to SGI x*4+3
    volatile uint32_t GICD_CPENDSGIR1;   // [read-write] For SGI x*4 to SGI x*4+3
    volatile uint32_t GICD_CPENDSGIR2;   // [read-write] For SGI x*4 to SGI x*4+3
    volatile uint32_t GICD_CPENDSGIR3;   // [read-write] For SGI x*4 to SGI x*4+3
    volatile uint32_t GICD_SPENDSGIR0;   // [read-write] For SGI x*4 to SGI x*4+3
    volatile uint32_t GICD_SPENDSGIR1;   // [read-write] For SGI x*4 to SGI x*4+3
    volatile uint32_t GICD_SPENDSGIR2;   // [read-write] For SGI x*4 to SGI x*4+3
    volatile uint32_t GICD_SPENDSGIR3;   // [read-write] For SGI x*4 to SGI x*4+3
    reserved_t<0x28> _0xfd0;
    volatile uint32_t GICD_PIDR4;        // [read-only] GICD peripheral ID4 register
    volatile uint32_t GICD_PIDR5;        // [read-only] GICD peripheral ID5 to ID7 register 5
    volatile uint32_t GICD_PIDR6;        // [read-only] GICD peripheral ID5 to ID7 register 6
    volatile uint32_t GICD_PIDR7;        // [read-only] GICD peripheral ID5 to ID7 register 7
    volatile uint32_t GICD_PIDR0;        // [read-only] GICD peripheral ID0 register
    volatile uint32_t GICD_PIDR1;        // [read-only] GICD peripheral ID1 register
    volatile uint32_t GICD_PIDR2;        // [read-only] GICD peripheral ID2 register
    volatile uint32_t GICD_PIDR3;        // [read-only] GICD peripheral ID3 register
    volatile uint32_t GICD_CIDR0;        // [read-only] GICD component ID0 register
    volatile uint32_t GICD_CIDR1;        // [read-only] GICD component ID1 register
    volatile uint32_t GICD_CIDR2;        // [read-only] GICD component ID2 register
    volatile uint32_t GICD_CIDR3;        // [read-only] GICD component ID3 register

    static constexpr uint32_t GICD_CTLR_RESET_VALUE = 0x0;
    static constexpr uint32_t GICD_CTLR_ENABLEGRP0 = 0x1; // ENABLEGRP0
    static constexpr uint32_t GICD_CTLR_ENABLEGRP1 = 0x2; // ENABLEGRP1

    static constexpr uint32_t GICD_TYPER_RESET_VALUE = 0xfc28;
    template<uint32_t X>
    static constexpr uint32_t GICD_TYPER_ITLINESNUMBER =       // ITLINESNUMBER
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_TYPER_CPUNUMBER =           // CPUNUMBER
        bit_field_t<5, 0x7>::value<X>();
    static constexpr uint32_t GICD_TYPER_SECURITYEXTN = 0x400; // SECURITYEXTN
    template<uint32_t X>
    static constexpr uint32_t GICD_TYPER_LSPI =                // LSPI
        bit_field_t<11, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IIDR_RESET_VALUE = 0x100143b;
    template<uint32_t X>
    static constexpr uint32_t GICD_IIDR_IMPLEMENTER =   // IMPLEMENTER
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IIDR_VARIANT =       // VARIANT
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IIDR_REVISION =      // REVISION
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IIDR_PRODUCTID =     // PRODUCTID
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t GICD_IGROUPR0_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_IGROUPR1_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_IGROUPR2_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_IGROUPR3_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_IGROUPR4_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_IGROUPR5_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_IGROUPR6_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_IGROUPR7_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_IGROUPR8_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ISENABLER0_RESET_VALUE = 0xffff;

    static constexpr uint32_t GICD_ISENABLER1_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ISENABLER2_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ISENABLER3_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ISENABLER4_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ISENABLER5_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ISENABLER6_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ISENABLER7_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ISENABLER8_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ICENABLER0_RESET_VALUE = 0xffff;

    static constexpr uint32_t GICD_ICENABLER1_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ICENABLER2_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ICENABLER3_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ICENABLER4_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ICENABLER5_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ICENABLER6_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ICENABLER7_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ICENABLER8_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ISPENDR0_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ISPENDR1_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ISPENDR2_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ISPENDR3_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ISPENDR4_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ISPENDR5_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ISPENDR6_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ISPENDR7_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ISPENDR8_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ICPENDR0_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ICPENDR1_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ICPENDR2_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ICPENDR3_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ICPENDR4_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ICPENDR5_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ICPENDR6_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ICPENDR7_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ICPENDR8_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ISACTIVER0_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ISACTIVER1_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ISACTIVER2_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ISACTIVER3_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ISACTIVER4_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ISACTIVER5_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ISACTIVER6_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ISACTIVER7_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ISACTIVER8_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ICACTIVER0_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ICACTIVER1_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ICACTIVER2_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ICACTIVER3_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ICACTIVER4_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ICACTIVER5_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ICACTIVER6_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ICACTIVER7_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_ICACTIVER8_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_IPRIORITYR0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR0_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR0_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR0_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR0_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR1_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR1_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR1_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR1_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR2_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR2_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR2_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR2_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR3_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR3_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR3_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR3_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR4_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR4_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR4_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR4_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR5_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR5_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR5_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR5_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR6_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR6_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR6_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR6_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR7_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR7_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR7_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR7_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR8_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR8_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR8_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR8_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR8_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR9_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR9_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR9_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR9_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR9_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR10_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR10_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR10_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR10_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR10_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR11_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR11_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR11_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR11_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR11_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR12_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR12_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR12_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR12_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR12_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR13_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR13_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR13_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR13_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR13_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR14_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR14_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR14_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR14_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR14_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR15_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR15_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR15_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR15_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR15_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR16_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR16_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR16_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR16_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR16_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR17_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR17_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR17_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR17_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR17_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR18_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR18_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR18_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR18_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR18_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR19_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR19_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR19_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR19_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR19_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR20_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR20_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR20_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR20_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR20_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR21_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR21_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR21_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR21_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR21_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR22_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR22_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR22_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR22_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR22_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR23_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR23_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR23_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR23_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR23_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR24_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR24_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR24_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR24_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR24_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR25_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR25_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR25_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR25_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR25_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR26_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR26_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR26_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR26_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR26_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR27_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR27_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR27_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR27_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR27_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR28_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR28_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR28_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR28_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR28_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR29_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR29_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR29_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR29_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR29_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR30_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR30_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR30_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR30_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR30_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR31_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR31_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR31_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR31_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR31_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR32_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR32_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR32_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR32_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR32_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR33_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR33_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR33_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR33_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR33_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR34_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR34_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR34_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR34_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR34_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR35_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR35_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR35_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR35_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR35_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR36_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR36_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR36_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR36_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR36_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR37_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR37_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR37_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR37_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR37_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR38_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR38_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR38_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR38_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR38_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR39_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR39_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR39_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR39_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR39_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR40_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR40_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR40_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR40_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR40_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR41_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR41_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR41_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR41_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR41_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR42_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR42_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR42_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR42_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR42_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR43_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR43_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR43_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR43_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR43_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR44_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR44_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR44_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR44_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR44_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR45_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR45_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR45_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR45_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR45_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR46_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR46_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR46_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR46_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR46_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR47_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR47_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR47_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR47_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR47_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR48_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR48_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR48_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR48_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR48_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR49_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR49_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR49_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR49_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR49_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR50_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR50_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR50_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR50_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR50_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR51_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR51_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR51_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR51_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR51_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR52_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR52_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR52_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR52_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR52_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR53_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR53_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR53_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR53_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR53_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR54_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR54_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR54_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR54_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR54_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR55_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR55_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR55_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR55_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR55_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR56_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR56_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR56_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR56_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR56_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR57_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR57_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR57_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR57_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR57_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR58_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR58_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR58_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR58_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR58_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR59_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR59_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR59_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR59_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR59_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR60_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR60_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR60_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR60_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR60_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR61_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR61_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR61_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR61_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR61_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR62_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR62_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR62_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR62_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR62_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR63_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR63_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR63_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR63_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR63_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR64_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR64_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR64_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR64_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR64_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR65_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR65_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR65_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR65_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR65_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR66_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR66_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR66_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR66_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR66_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR67_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR67_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR67_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR67_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR67_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR68_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR68_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR68_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR68_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR68_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR69_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR69_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR69_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR69_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR69_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR70_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR70_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR70_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR70_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR70_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_IPRIORITYR71_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR71_PRIORITY0 =   // PRIORITY0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR71_PRIORITY1 =   // PRIORITY1
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR71_PRIORITY2 =   // PRIORITY2
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_IPRIORITYR71_PRIORITY3 =   // PRIORITY3
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR0_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR0_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR0_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR0_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR1_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR1_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR1_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR1_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR2_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR2_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR2_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR2_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR3_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR3_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR3_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR3_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR4_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR4_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR4_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR4_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR5_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR5_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR5_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR5_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR6_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR6_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR6_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR6_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR7_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR7_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR7_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR7_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR8_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR8_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR8_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR8_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR8_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR9_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR9_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR9_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR9_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR9_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR10_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR10_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR10_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR10_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR10_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR11_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR11_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR11_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR11_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR11_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR12_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR12_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR12_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR12_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR12_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR13_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR13_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR13_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR13_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR13_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR14_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR14_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR14_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR14_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR14_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR15_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR15_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR15_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR15_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR15_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR16_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR16_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR16_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR16_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR16_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR17_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR17_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR17_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR17_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR17_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR18_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR18_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR18_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR18_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR18_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR19_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR19_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR19_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR19_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR19_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR20_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR20_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR20_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR20_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR20_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR21_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR21_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR21_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR21_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR21_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR22_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR22_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR22_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR22_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR22_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR23_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR23_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR23_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR23_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR23_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR24_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR24_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR24_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR24_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR24_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR25_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR25_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR25_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR25_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR25_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR26_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR26_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR26_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR26_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR26_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR27_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR27_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR27_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR27_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR27_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR28_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR28_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR28_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR28_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR28_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR29_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR29_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR29_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR29_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR29_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR30_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR30_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR30_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR30_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR30_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR31_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR31_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR31_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR31_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR31_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR32_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR32_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR32_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR32_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR32_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR33_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR33_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR33_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR33_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR33_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR34_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR34_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR34_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR34_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR34_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR35_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR35_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR35_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR35_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR35_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR36_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR36_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR36_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR36_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR36_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR37_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR37_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR37_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR37_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR37_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR38_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR38_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR38_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR38_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR38_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR39_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR39_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR39_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR39_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR39_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR40_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR40_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR40_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR40_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR40_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR41_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR41_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR41_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR41_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR41_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR42_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR42_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR42_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR42_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR42_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR43_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR43_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR43_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR43_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR43_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR44_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR44_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR44_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR44_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR44_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR45_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR45_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR45_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR45_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR45_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR46_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR46_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR46_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR46_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR46_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR47_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR47_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR47_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR47_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR47_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR48_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR48_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR48_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR48_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR48_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR49_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR49_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR49_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR49_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR49_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR50_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR50_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR50_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR50_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR50_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR51_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR51_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR51_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR51_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR51_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR52_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR52_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR52_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR52_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR52_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR53_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR53_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR53_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR53_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR53_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR54_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR54_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR54_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR54_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR54_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR55_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR55_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR55_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR55_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR55_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR56_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR56_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR56_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR56_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR56_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR57_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR57_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR57_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR57_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR57_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR58_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR58_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR58_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR58_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR58_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR59_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR59_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR59_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR59_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR59_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR60_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR60_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR60_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR60_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR60_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR61_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR61_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR61_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR61_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR61_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR62_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR62_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR62_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR62_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR62_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR63_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR63_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR63_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR63_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR63_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR64_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR64_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR64_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR64_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR64_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR65_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR65_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR65_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR65_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR65_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR66_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR66_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR66_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR66_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR66_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR67_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR67_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR67_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR67_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR67_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR68_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR68_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR68_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR68_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR68_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR69_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR69_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR69_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR69_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR69_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR70_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR70_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR70_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR70_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR70_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ITARGETSR71_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR71_CPU_TARGETS0 =   // CPU_TARGETS0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR71_CPU_TARGETS1 =   // CPU_TARGETS1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR71_CPU_TARGETS2 =   // CPU_TARGETS2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ITARGETSR71_CPU_TARGETS3 =   // CPU_TARGETS3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_ICFGR0_RESET_VALUE = 0xaaaaaaaa;
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR0_INT_CONFIG0 =    // INT_CONFIG0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR0_INT_CONFIG1 =    // INT_CONFIG1
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR0_INT_CONFIG2 =    // INT_CONFIG2
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR0_INT_CONFIG3 =    // INT_CONFIG3
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR0_INT_CONFIG4 =    // INT_CONFIG4
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR0_INT_CONFIG5 =    // INT_CONFIG5
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR0_INT_CONFIG6 =    // INT_CONFIG6
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR0_INT_CONFIG7 =    // INT_CONFIG7
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR0_INT_CONFIG8 =    // INT_CONFIG8
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR0_INT_CONFIG9 =    // INT_CONFIG9
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR0_INT_CONFIG10 =   // INT_CONFIG10
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR0_INT_CONFIG11 =   // INT_CONFIG11
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR0_INT_CONFIG12 =   // INT_CONFIG12
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR0_INT_CONFIG13 =   // INT_CONFIG13
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR0_INT_CONFIG14 =   // INT_CONFIG14
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR0_INT_CONFIG15 =   // INT_CONFIG15
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t GICD_ICFGR1_RESET_VALUE = 0x55540000;
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR1_INT_CONFIG0 =    // INT_CONFIG0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR1_INT_CONFIG1 =    // INT_CONFIG1
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR1_INT_CONFIG2 =    // INT_CONFIG2
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR1_INT_CONFIG3 =    // INT_CONFIG3
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR1_INT_CONFIG4 =    // INT_CONFIG4
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR1_INT_CONFIG5 =    // INT_CONFIG5
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR1_INT_CONFIG6 =    // INT_CONFIG6
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR1_INT_CONFIG7 =    // INT_CONFIG7
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR1_INT_CONFIG8 =    // INT_CONFIG8
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR1_INT_CONFIG9 =    // INT_CONFIG9
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR1_INT_CONFIG10 =   // INT_CONFIG10
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR1_INT_CONFIG11 =   // INT_CONFIG11
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR1_INT_CONFIG12 =   // INT_CONFIG12
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR1_INT_CONFIG13 =   // INT_CONFIG13
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR1_INT_CONFIG14 =   // INT_CONFIG14
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR1_INT_CONFIG15 =   // INT_CONFIG15
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t GICD_ICFGR2_RESET_VALUE = 0x55555555;
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR2_INT_CONFIG0 =    // INT_CONFIG0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR2_INT_CONFIG1 =    // INT_CONFIG1
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR2_INT_CONFIG2 =    // INT_CONFIG2
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR2_INT_CONFIG3 =    // INT_CONFIG3
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR2_INT_CONFIG4 =    // INT_CONFIG4
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR2_INT_CONFIG5 =    // INT_CONFIG5
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR2_INT_CONFIG6 =    // INT_CONFIG6
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR2_INT_CONFIG7 =    // INT_CONFIG7
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR2_INT_CONFIG8 =    // INT_CONFIG8
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR2_INT_CONFIG9 =    // INT_CONFIG9
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR2_INT_CONFIG10 =   // INT_CONFIG10
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR2_INT_CONFIG11 =   // INT_CONFIG11
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR2_INT_CONFIG12 =   // INT_CONFIG12
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR2_INT_CONFIG13 =   // INT_CONFIG13
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR2_INT_CONFIG14 =   // INT_CONFIG14
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR2_INT_CONFIG15 =   // INT_CONFIG15
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t GICD_ICFGR3_RESET_VALUE = 0x55555555;
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR3_INT_CONFIG0 =    // INT_CONFIG0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR3_INT_CONFIG1 =    // INT_CONFIG1
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR3_INT_CONFIG2 =    // INT_CONFIG2
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR3_INT_CONFIG3 =    // INT_CONFIG3
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR3_INT_CONFIG4 =    // INT_CONFIG4
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR3_INT_CONFIG5 =    // INT_CONFIG5
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR3_INT_CONFIG6 =    // INT_CONFIG6
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR3_INT_CONFIG7 =    // INT_CONFIG7
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR3_INT_CONFIG8 =    // INT_CONFIG8
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR3_INT_CONFIG9 =    // INT_CONFIG9
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR3_INT_CONFIG10 =   // INT_CONFIG10
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR3_INT_CONFIG11 =   // INT_CONFIG11
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR3_INT_CONFIG12 =   // INT_CONFIG12
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR3_INT_CONFIG13 =   // INT_CONFIG13
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR3_INT_CONFIG14 =   // INT_CONFIG14
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR3_INT_CONFIG15 =   // INT_CONFIG15
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t GICD_ICFGR4_RESET_VALUE = 0x55555555;
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR4_INT_CONFIG0 =    // INT_CONFIG0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR4_INT_CONFIG1 =    // INT_CONFIG1
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR4_INT_CONFIG2 =    // INT_CONFIG2
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR4_INT_CONFIG3 =    // INT_CONFIG3
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR4_INT_CONFIG4 =    // INT_CONFIG4
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR4_INT_CONFIG5 =    // INT_CONFIG5
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR4_INT_CONFIG6 =    // INT_CONFIG6
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR4_INT_CONFIG7 =    // INT_CONFIG7
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR4_INT_CONFIG8 =    // INT_CONFIG8
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR4_INT_CONFIG9 =    // INT_CONFIG9
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR4_INT_CONFIG10 =   // INT_CONFIG10
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR4_INT_CONFIG11 =   // INT_CONFIG11
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR4_INT_CONFIG12 =   // INT_CONFIG12
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR4_INT_CONFIG13 =   // INT_CONFIG13
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR4_INT_CONFIG14 =   // INT_CONFIG14
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR4_INT_CONFIG15 =   // INT_CONFIG15
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t GICD_ICFGR5_RESET_VALUE = 0x55555555;
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR5_INT_CONFIG0 =    // INT_CONFIG0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR5_INT_CONFIG1 =    // INT_CONFIG1
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR5_INT_CONFIG2 =    // INT_CONFIG2
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR5_INT_CONFIG3 =    // INT_CONFIG3
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR5_INT_CONFIG4 =    // INT_CONFIG4
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR5_INT_CONFIG5 =    // INT_CONFIG5
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR5_INT_CONFIG6 =    // INT_CONFIG6
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR5_INT_CONFIG7 =    // INT_CONFIG7
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR5_INT_CONFIG8 =    // INT_CONFIG8
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR5_INT_CONFIG9 =    // INT_CONFIG9
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR5_INT_CONFIG10 =   // INT_CONFIG10
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR5_INT_CONFIG11 =   // INT_CONFIG11
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR5_INT_CONFIG12 =   // INT_CONFIG12
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR5_INT_CONFIG13 =   // INT_CONFIG13
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR5_INT_CONFIG14 =   // INT_CONFIG14
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR5_INT_CONFIG15 =   // INT_CONFIG15
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t GICD_ICFGR6_RESET_VALUE = 0x55555555;
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR6_INT_CONFIG0 =    // INT_CONFIG0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR6_INT_CONFIG1 =    // INT_CONFIG1
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR6_INT_CONFIG2 =    // INT_CONFIG2
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR6_INT_CONFIG3 =    // INT_CONFIG3
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR6_INT_CONFIG4 =    // INT_CONFIG4
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR6_INT_CONFIG5 =    // INT_CONFIG5
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR6_INT_CONFIG6 =    // INT_CONFIG6
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR6_INT_CONFIG7 =    // INT_CONFIG7
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR6_INT_CONFIG8 =    // INT_CONFIG8
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR6_INT_CONFIG9 =    // INT_CONFIG9
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR6_INT_CONFIG10 =   // INT_CONFIG10
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR6_INT_CONFIG11 =   // INT_CONFIG11
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR6_INT_CONFIG12 =   // INT_CONFIG12
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR6_INT_CONFIG13 =   // INT_CONFIG13
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR6_INT_CONFIG14 =   // INT_CONFIG14
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR6_INT_CONFIG15 =   // INT_CONFIG15
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t GICD_ICFGR7_RESET_VALUE = 0x55555555;
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR7_INT_CONFIG0 =    // INT_CONFIG0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR7_INT_CONFIG1 =    // INT_CONFIG1
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR7_INT_CONFIG2 =    // INT_CONFIG2
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR7_INT_CONFIG3 =    // INT_CONFIG3
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR7_INT_CONFIG4 =    // INT_CONFIG4
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR7_INT_CONFIG5 =    // INT_CONFIG5
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR7_INT_CONFIG6 =    // INT_CONFIG6
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR7_INT_CONFIG7 =    // INT_CONFIG7
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR7_INT_CONFIG8 =    // INT_CONFIG8
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR7_INT_CONFIG9 =    // INT_CONFIG9
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR7_INT_CONFIG10 =   // INT_CONFIG10
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR7_INT_CONFIG11 =   // INT_CONFIG11
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR7_INT_CONFIG12 =   // INT_CONFIG12
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR7_INT_CONFIG13 =   // INT_CONFIG13
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR7_INT_CONFIG14 =   // INT_CONFIG14
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR7_INT_CONFIG15 =   // INT_CONFIG15
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t GICD_ICFGR8_RESET_VALUE = 0x55555555;
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR8_INT_CONFIG0 =    // INT_CONFIG0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR8_INT_CONFIG1 =    // INT_CONFIG1
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR8_INT_CONFIG2 =    // INT_CONFIG2
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR8_INT_CONFIG3 =    // INT_CONFIG3
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR8_INT_CONFIG4 =    // INT_CONFIG4
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR8_INT_CONFIG5 =    // INT_CONFIG5
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR8_INT_CONFIG6 =    // INT_CONFIG6
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR8_INT_CONFIG7 =    // INT_CONFIG7
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR8_INT_CONFIG8 =    // INT_CONFIG8
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR8_INT_CONFIG9 =    // INT_CONFIG9
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR8_INT_CONFIG10 =   // INT_CONFIG10
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR8_INT_CONFIG11 =   // INT_CONFIG11
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR8_INT_CONFIG12 =   // INT_CONFIG12
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR8_INT_CONFIG13 =   // INT_CONFIG13
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR8_INT_CONFIG14 =   // INT_CONFIG14
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR8_INT_CONFIG15 =   // INT_CONFIG15
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t GICD_ICFGR9_RESET_VALUE = 0x55555555;
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR9_INT_CONFIG0 =    // INT_CONFIG0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR9_INT_CONFIG1 =    // INT_CONFIG1
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR9_INT_CONFIG2 =    // INT_CONFIG2
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR9_INT_CONFIG3 =    // INT_CONFIG3
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR9_INT_CONFIG4 =    // INT_CONFIG4
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR9_INT_CONFIG5 =    // INT_CONFIG5
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR9_INT_CONFIG6 =    // INT_CONFIG6
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR9_INT_CONFIG7 =    // INT_CONFIG7
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR9_INT_CONFIG8 =    // INT_CONFIG8
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR9_INT_CONFIG9 =    // INT_CONFIG9
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR9_INT_CONFIG10 =   // INT_CONFIG10
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR9_INT_CONFIG11 =   // INT_CONFIG11
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR9_INT_CONFIG12 =   // INT_CONFIG12
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR9_INT_CONFIG13 =   // INT_CONFIG13
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR9_INT_CONFIG14 =   // INT_CONFIG14
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR9_INT_CONFIG15 =   // INT_CONFIG15
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t GICD_ICFGR10_RESET_VALUE = 0x55555555;
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR10_INT_CONFIG0 =    // INT_CONFIG0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR10_INT_CONFIG1 =    // INT_CONFIG1
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR10_INT_CONFIG2 =    // INT_CONFIG2
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR10_INT_CONFIG3 =    // INT_CONFIG3
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR10_INT_CONFIG4 =    // INT_CONFIG4
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR10_INT_CONFIG5 =    // INT_CONFIG5
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR10_INT_CONFIG6 =    // INT_CONFIG6
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR10_INT_CONFIG7 =    // INT_CONFIG7
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR10_INT_CONFIG8 =    // INT_CONFIG8
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR10_INT_CONFIG9 =    // INT_CONFIG9
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR10_INT_CONFIG10 =   // INT_CONFIG10
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR10_INT_CONFIG11 =   // INT_CONFIG11
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR10_INT_CONFIG12 =   // INT_CONFIG12
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR10_INT_CONFIG13 =   // INT_CONFIG13
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR10_INT_CONFIG14 =   // INT_CONFIG14
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR10_INT_CONFIG15 =   // INT_CONFIG15
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t GICD_ICFGR11_RESET_VALUE = 0x55555555;
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR11_INT_CONFIG0 =    // INT_CONFIG0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR11_INT_CONFIG1 =    // INT_CONFIG1
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR11_INT_CONFIG2 =    // INT_CONFIG2
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR11_INT_CONFIG3 =    // INT_CONFIG3
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR11_INT_CONFIG4 =    // INT_CONFIG4
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR11_INT_CONFIG5 =    // INT_CONFIG5
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR11_INT_CONFIG6 =    // INT_CONFIG6
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR11_INT_CONFIG7 =    // INT_CONFIG7
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR11_INT_CONFIG8 =    // INT_CONFIG8
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR11_INT_CONFIG9 =    // INT_CONFIG9
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR11_INT_CONFIG10 =   // INT_CONFIG10
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR11_INT_CONFIG11 =   // INT_CONFIG11
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR11_INT_CONFIG12 =   // INT_CONFIG12
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR11_INT_CONFIG13 =   // INT_CONFIG13
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR11_INT_CONFIG14 =   // INT_CONFIG14
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR11_INT_CONFIG15 =   // INT_CONFIG15
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t GICD_ICFGR12_RESET_VALUE = 0x55555555;
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR12_INT_CONFIG0 =    // INT_CONFIG0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR12_INT_CONFIG1 =    // INT_CONFIG1
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR12_INT_CONFIG2 =    // INT_CONFIG2
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR12_INT_CONFIG3 =    // INT_CONFIG3
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR12_INT_CONFIG4 =    // INT_CONFIG4
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR12_INT_CONFIG5 =    // INT_CONFIG5
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR12_INT_CONFIG6 =    // INT_CONFIG6
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR12_INT_CONFIG7 =    // INT_CONFIG7
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR12_INT_CONFIG8 =    // INT_CONFIG8
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR12_INT_CONFIG9 =    // INT_CONFIG9
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR12_INT_CONFIG10 =   // INT_CONFIG10
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR12_INT_CONFIG11 =   // INT_CONFIG11
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR12_INT_CONFIG12 =   // INT_CONFIG12
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR12_INT_CONFIG13 =   // INT_CONFIG13
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR12_INT_CONFIG14 =   // INT_CONFIG14
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR12_INT_CONFIG15 =   // INT_CONFIG15
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t GICD_ICFGR13_RESET_VALUE = 0x55555555;
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR13_INT_CONFIG0 =    // INT_CONFIG0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR13_INT_CONFIG1 =    // INT_CONFIG1
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR13_INT_CONFIG2 =    // INT_CONFIG2
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR13_INT_CONFIG3 =    // INT_CONFIG3
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR13_INT_CONFIG4 =    // INT_CONFIG4
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR13_INT_CONFIG5 =    // INT_CONFIG5
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR13_INT_CONFIG6 =    // INT_CONFIG6
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR13_INT_CONFIG7 =    // INT_CONFIG7
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR13_INT_CONFIG8 =    // INT_CONFIG8
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR13_INT_CONFIG9 =    // INT_CONFIG9
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR13_INT_CONFIG10 =   // INT_CONFIG10
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR13_INT_CONFIG11 =   // INT_CONFIG11
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR13_INT_CONFIG12 =   // INT_CONFIG12
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR13_INT_CONFIG13 =   // INT_CONFIG13
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR13_INT_CONFIG14 =   // INT_CONFIG14
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR13_INT_CONFIG15 =   // INT_CONFIG15
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t GICD_ICFGR14_RESET_VALUE = 0x55555555;
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR14_INT_CONFIG0 =    // INT_CONFIG0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR14_INT_CONFIG1 =    // INT_CONFIG1
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR14_INT_CONFIG2 =    // INT_CONFIG2
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR14_INT_CONFIG3 =    // INT_CONFIG3
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR14_INT_CONFIG4 =    // INT_CONFIG4
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR14_INT_CONFIG5 =    // INT_CONFIG5
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR14_INT_CONFIG6 =    // INT_CONFIG6
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR14_INT_CONFIG7 =    // INT_CONFIG7
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR14_INT_CONFIG8 =    // INT_CONFIG8
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR14_INT_CONFIG9 =    // INT_CONFIG9
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR14_INT_CONFIG10 =   // INT_CONFIG10
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR14_INT_CONFIG11 =   // INT_CONFIG11
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR14_INT_CONFIG12 =   // INT_CONFIG12
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR14_INT_CONFIG13 =   // INT_CONFIG13
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR14_INT_CONFIG14 =   // INT_CONFIG14
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR14_INT_CONFIG15 =   // INT_CONFIG15
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t GICD_ICFGR15_RESET_VALUE = 0x55555555;
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR15_INT_CONFIG0 =    // INT_CONFIG0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR15_INT_CONFIG1 =    // INT_CONFIG1
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR15_INT_CONFIG2 =    // INT_CONFIG2
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR15_INT_CONFIG3 =    // INT_CONFIG3
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR15_INT_CONFIG4 =    // INT_CONFIG4
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR15_INT_CONFIG5 =    // INT_CONFIG5
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR15_INT_CONFIG6 =    // INT_CONFIG6
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR15_INT_CONFIG7 =    // INT_CONFIG7
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR15_INT_CONFIG8 =    // INT_CONFIG8
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR15_INT_CONFIG9 =    // INT_CONFIG9
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR15_INT_CONFIG10 =   // INT_CONFIG10
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR15_INT_CONFIG11 =   // INT_CONFIG11
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR15_INT_CONFIG12 =   // INT_CONFIG12
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR15_INT_CONFIG13 =   // INT_CONFIG13
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR15_INT_CONFIG14 =   // INT_CONFIG14
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR15_INT_CONFIG15 =   // INT_CONFIG15
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t GICD_ICFGR16_RESET_VALUE = 0x55555555;
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR16_INT_CONFIG0 =    // INT_CONFIG0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR16_INT_CONFIG1 =    // INT_CONFIG1
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR16_INT_CONFIG2 =    // INT_CONFIG2
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR16_INT_CONFIG3 =    // INT_CONFIG3
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR16_INT_CONFIG4 =    // INT_CONFIG4
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR16_INT_CONFIG5 =    // INT_CONFIG5
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR16_INT_CONFIG6 =    // INT_CONFIG6
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR16_INT_CONFIG7 =    // INT_CONFIG7
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR16_INT_CONFIG8 =    // INT_CONFIG8
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR16_INT_CONFIG9 =    // INT_CONFIG9
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR16_INT_CONFIG10 =   // INT_CONFIG10
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR16_INT_CONFIG11 =   // INT_CONFIG11
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR16_INT_CONFIG12 =   // INT_CONFIG12
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR16_INT_CONFIG13 =   // INT_CONFIG13
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR16_INT_CONFIG14 =   // INT_CONFIG14
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR16_INT_CONFIG15 =   // INT_CONFIG15
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t GICD_ICFGR17_RESET_VALUE = 0x55555555;
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR17_INT_CONFIG0 =    // INT_CONFIG0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR17_INT_CONFIG1 =    // INT_CONFIG1
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR17_INT_CONFIG2 =    // INT_CONFIG2
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR17_INT_CONFIG3 =    // INT_CONFIG3
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR17_INT_CONFIG4 =    // INT_CONFIG4
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR17_INT_CONFIG5 =    // INT_CONFIG5
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR17_INT_CONFIG6 =    // INT_CONFIG6
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR17_INT_CONFIG7 =    // INT_CONFIG7
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR17_INT_CONFIG8 =    // INT_CONFIG8
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR17_INT_CONFIG9 =    // INT_CONFIG9
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR17_INT_CONFIG10 =   // INT_CONFIG10
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR17_INT_CONFIG11 =   // INT_CONFIG11
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR17_INT_CONFIG12 =   // INT_CONFIG12
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR17_INT_CONFIG13 =   // INT_CONFIG13
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR17_INT_CONFIG14 =   // INT_CONFIG14
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_ICFGR17_INT_CONFIG15 =   // INT_CONFIG15
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t GICD_PPISR_RESET_VALUE = 0x0;
    static constexpr uint32_t GICD_PPISR_PPI6 = 0x200;  // PPI6
    static constexpr uint32_t GICD_PPISR_PPI5 = 0x400;  // PPI5
    static constexpr uint32_t GICD_PPISR_PPI4 = 0x800;  // PPI4
    static constexpr uint32_t GICD_PPISR_PPI0 = 0x1000; // PPI0
    static constexpr uint32_t GICD_PPISR_PPI1 = 0x2000; // PPI1
    static constexpr uint32_t GICD_PPISR_PPI2 = 0x4000; // PPI2
    static constexpr uint32_t GICD_PPISR_PPI3 = 0x8000; // PPI3

    static constexpr uint32_t GICD_SPISR1_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_SPISR2_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_SPISR3_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_SPISR4_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_SPISR5_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_SPISR6_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_SPISR7_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_SGIR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_SGIR_SGIINTID =           // SGIINTID
        bit_field_t<0, 0xf>::value<X>();
    static constexpr uint32_t GICD_SGIR_NSATT = 0x8000;      // NSATT
    template<uint32_t X>
    static constexpr uint32_t GICD_SGIR_CPUTARGETLIST =      // CPUTARGETLIST
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_SGIR_TARGETLISTFILTER =   // TARGETLISTFILTER
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_CPENDSGIR0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_CPENDSGIR0_SGI_CLEAR_PENDING0 =   // SGI_CLEAR_PENDING0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_CPENDSGIR0_SGI_CLEAR_PENDING1 =   // SGI_CLEAR_PENDING1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_CPENDSGIR0_SGI_CLEAR_PENDING2 =   // SGI_CLEAR_PENDING2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_CPENDSGIR0_SGI_CLEAR_PENDING3 =   // SGI_CLEAR_PENDING3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_CPENDSGIR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_CPENDSGIR1_SGI_CLEAR_PENDING0 =   // SGI_CLEAR_PENDING0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_CPENDSGIR1_SGI_CLEAR_PENDING1 =   // SGI_CLEAR_PENDING1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_CPENDSGIR1_SGI_CLEAR_PENDING2 =   // SGI_CLEAR_PENDING2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_CPENDSGIR1_SGI_CLEAR_PENDING3 =   // SGI_CLEAR_PENDING3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_CPENDSGIR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_CPENDSGIR2_SGI_CLEAR_PENDING0 =   // SGI_CLEAR_PENDING0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_CPENDSGIR2_SGI_CLEAR_PENDING1 =   // SGI_CLEAR_PENDING1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_CPENDSGIR2_SGI_CLEAR_PENDING2 =   // SGI_CLEAR_PENDING2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_CPENDSGIR2_SGI_CLEAR_PENDING3 =   // SGI_CLEAR_PENDING3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_CPENDSGIR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_CPENDSGIR3_SGI_CLEAR_PENDING0 =   // SGI_CLEAR_PENDING0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_CPENDSGIR3_SGI_CLEAR_PENDING1 =   // SGI_CLEAR_PENDING1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_CPENDSGIR3_SGI_CLEAR_PENDING2 =   // SGI_CLEAR_PENDING2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_CPENDSGIR3_SGI_CLEAR_PENDING3 =   // SGI_CLEAR_PENDING3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_SPENDSGIR0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_SPENDSGIR0_SGI_SET_PENDING0 =   // SGI_SET_PENDING0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_SPENDSGIR0_SGI_SET_PENDING1 =   // SGI_SET_PENDING1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_SPENDSGIR0_SGI_SET_PENDING2 =   // SGI_SET_PENDING2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_SPENDSGIR0_SGI_SET_PENDING3 =   // SGI_SET_PENDING3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_SPENDSGIR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_SPENDSGIR1_SGI_SET_PENDING0 =   // SGI_SET_PENDING0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_SPENDSGIR1_SGI_SET_PENDING1 =   // SGI_SET_PENDING1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_SPENDSGIR1_SGI_SET_PENDING2 =   // SGI_SET_PENDING2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_SPENDSGIR1_SGI_SET_PENDING3 =   // SGI_SET_PENDING3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_SPENDSGIR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_SPENDSGIR2_SGI_SET_PENDING0 =   // SGI_SET_PENDING0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_SPENDSGIR2_SGI_SET_PENDING1 =   // SGI_SET_PENDING1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_SPENDSGIR2_SGI_SET_PENDING2 =   // SGI_SET_PENDING2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_SPENDSGIR2_SGI_SET_PENDING3 =   // SGI_SET_PENDING3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_SPENDSGIR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICD_SPENDSGIR3_SGI_SET_PENDING0 =   // SGI_SET_PENDING0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_SPENDSGIR3_SGI_SET_PENDING1 =   // SGI_SET_PENDING1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_SPENDSGIR3_SGI_SET_PENDING2 =   // SGI_SET_PENDING2
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICD_SPENDSGIR3_SGI_SET_PENDING3 =   // SGI_SET_PENDING3
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t GICD_PIDR4_RESET_VALUE = 0x4;

    static constexpr uint32_t GICD_PIDR5_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_PIDR6_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_PIDR7_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_PIDR0_RESET_VALUE = 0x90;

    static constexpr uint32_t GICD_PIDR1_RESET_VALUE = 0xb4;

    static constexpr uint32_t GICD_PIDR2_RESET_VALUE = 0x2b;

    static constexpr uint32_t GICD_PIDR3_RESET_VALUE = 0x0;

    static constexpr uint32_t GICD_CIDR0_RESET_VALUE = 0xd;

    static constexpr uint32_t GICD_CIDR1_RESET_VALUE = 0xf0;

    static constexpr uint32_t GICD_CIDR2_RESET_VALUE = 0x5;

    static constexpr uint32_t GICD_CIDR3_RESET_VALUE = 0xb1;
};


template<>
struct peripheral_t<STM32MP15xxx, GICD>
{
    typedef stm32mp15xxx_gicd_t T;
    static T& V;
};

using gicd_t = peripheral_t<mcu_svd, GICD>;

