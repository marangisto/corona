#pragma once

////
//
//      STM32L4+ GFXMMU peripherals
//
////

////
//
//      Graphic MMU
//
////

struct stm32l4r5_gfxmmu_t
{
    volatile uint32_t CR;       // [read-write] Graphic MMU configuration register
    volatile uint32_t SR;       // [read-only] Graphic MMU status register
    volatile uint32_t FCR;      // [write-only] Graphic MMU flag clear register
    reserved_t<0x1> _0x10;
    volatile uint32_t DVR;      // [read-write] Graphic MMU default value register
    reserved_t<0x3> _0x20;
    volatile uint32_t B0CR;     // [read-write] Graphic MMU buffer 0 configuration register
    volatile uint32_t B1CR;     // [read-write] Graphic MMU buffer 1 configuration register
    volatile uint32_t B2CR;     // [read-write] Graphic MMU buffer 2 configuration register
    volatile uint32_t B3CR;     // [read-write] Graphic MMU buffer 3 configuration register
    reserved_t<0x3f1> _0xff4;
    volatile uint32_t VERR;     // [read-only] Graphic MMU version register
    volatile uint32_t IPIDR;    // [read-only] Graphic MMU identification register
    volatile uint32_t SIDR;     // [read-only] Graphic MMU size identification register
    volatile uint32_t LUT0L;    // [read-write] Graphic MMU LUT entry 0 low
    volatile uint32_t LUT0H;    // [read-write] Graphic MMU LUT entry 0 high
    volatile uint32_t LUT1L;    // [read-write] Graphic MMU LUT entry 1 low
    volatile uint32_t LUT1H;    // [read-write] Graphic MMU LUT entry 1 high
    volatile uint32_t LUT2L;    // [read-write] Graphic MMU LUT entry 2 low
    volatile uint32_t LUT2H;    // [read-write] Graphic MMU LUT entry 2 high
    volatile uint32_t LUT3L;    // [read-write] Graphic MMU LUT entry 3 low
    volatile uint32_t LUT3H;    // [read-write] Graphic MMU LUT entry 3 high
    volatile uint32_t LUT4L;    // [read-write] Graphic MMU LUT entry 4 low
    volatile uint32_t LUT4H;    // [read-write] Graphic MMU LUT entry 4 high
    volatile uint32_t LUT5L;    // [read-write] Graphic MMU LUT entry 5 low
    volatile uint32_t LUT5H;    // [read-write] Graphic MMU LUT entry 5 high
    volatile uint32_t LUT6L;    // [read-write] Graphic MMU LUT entry 6 low
    volatile uint32_t LUT6H;    // [read-write] Graphic MMU LUT entry 6 high
    volatile uint32_t LUT7L;    // [read-write] Graphic MMU LUT entry 7 low
    volatile uint32_t LUT7H;    // [read-write] Graphic MMU LUT entry 7 high
    volatile uint32_t LUT8L;    // [read-write] Graphic MMU LUT entry 8 low
    volatile uint32_t LUT8H;    // [read-write] Graphic MMU LUT entry 8 high
    volatile uint32_t LUT9L;    // [read-write] Graphic MMU LUT entry 9 low
    volatile uint32_t LUT9H;    // [read-write] Graphic MMU LUT entry 9 high
    volatile uint32_t LUT10L;   // [read-write] Graphic MMU LUT entry 10 low
    volatile uint32_t LUT10H;   // [read-write] Graphic MMU LUT entry 10 high
    volatile uint32_t LUT11L;   // [read-write] Graphic MMU LUT entry 11 low
    volatile uint32_t LUT11H;   // [read-write] Graphic MMU LUT entry 11 high
    volatile uint32_t LUT12L;   // [read-write] Graphic MMU LUT entry 12 low
    volatile uint32_t LUT12H;   // [read-write] Graphic MMU LUT entry 12 high
    volatile uint32_t LUT13L;   // [read-write] Graphic MMU LUT entry 13 low
    volatile uint32_t LUT13H;   // [read-write] Graphic MMU LUT entry 13 high
    volatile uint32_t LUT14L;   // [read-write] Graphic MMU LUT entry 14 low
    volatile uint32_t LUT14H;   // [read-write] Graphic MMU LUT entry 14 high
    volatile uint32_t LUT15L;   // [read-write] Graphic MMU LUT entry 15 low
    volatile uint32_t LUT15H;   // [read-write] Graphic MMU LUT entry 15 high
    volatile uint32_t LUT16L;   // [read-write] Graphic MMU LUT entry 16 low
    volatile uint32_t LUT16H;   // [read-write] Graphic MMU LUT entry 16 high
    volatile uint32_t LUT17L;   // [read-write] Graphic MMU LUT entry 17 low
    volatile uint32_t LUT17H;   // [read-write] Graphic MMU LUT entry 17 high
    volatile uint32_t LUT18L;   // [read-write] Graphic MMU LUT entry 18 low
    volatile uint32_t LUT18H;   // [read-write] Graphic MMU LUT entry 18 high
    volatile uint32_t LUT19L;   // [read-write] Graphic MMU LUT entry 19 low
    volatile uint32_t LUT19H;   // [read-write] Graphic MMU LUT entry 19 high
    volatile uint32_t LUT20L;   // [read-write] Graphic MMU LUT entry 20 low
    volatile uint32_t LUT20H;   // [read-write] Graphic MMU LUT entry 20 high
    volatile uint32_t LUT21L;   // [read-write] Graphic MMU LUT entry 21 low
    volatile uint32_t LUT21H;   // [read-write] Graphic MMU LUT entry 21 high
    volatile uint32_t LUT22L;   // [read-write] Graphic MMU LUT entry 22 low
    volatile uint32_t LUT22H;   // [read-write] Graphic MMU LUT entry 22 high
    volatile uint32_t LUT23L;   // [read-write] Graphic MMU LUT entry 23 low
    volatile uint32_t LUT23H;   // [read-write] Graphic MMU LUT entry 23 high
    volatile uint32_t LUT24L;   // [read-write] Graphic MMU LUT entry 24 low
    volatile uint32_t LUT24H;   // [read-write] Graphic MMU LUT entry 24 high
    volatile uint32_t LUT25L;   // [read-write] Graphic MMU LUT entry 25 low
    volatile uint32_t LUT25H;   // [read-write] Graphic MMU LUT entry 25 high
    volatile uint32_t LUT26L;   // [read-write] Graphic MMU LUT entry 26 low
    volatile uint32_t LUT26H;   // [read-write] Graphic MMU LUT entry 26 high
    volatile uint32_t LUT27L;   // [read-write] Graphic MMU LUT entry 27 low
    volatile uint32_t LUT27H;   // [read-write] Graphic MMU LUT entry 27 high
    volatile uint32_t LUT28L;   // [read-write] Graphic MMU LUT entry 28 low
    volatile uint32_t LUT28H;   // [read-write] Graphic MMU LUT entry 28 high
    volatile uint32_t LUT29L;   // [read-write] Graphic MMU LUT entry 29 low
    volatile uint32_t LUT29H;   // [read-write] Graphic MMU LUT entry 29 high
    volatile uint32_t LUT30L;   // [read-write] Graphic MMU LUT entry 30 low
    volatile uint32_t LUT30H;   // [read-write] Graphic MMU LUT entry 30 high
    volatile uint32_t LUT31L;   // [read-write] Graphic MMU LUT entry 31 low
    volatile uint32_t LUT31H;   // [read-write] Graphic MMU LUT entry 31 high
    volatile uint32_t LUT32L;   // [read-write] Graphic MMU LUT entry 32 low
    volatile uint32_t LUT32H;   // [read-write] Graphic MMU LUT entry 32 high
    volatile uint32_t LUT33L;   // [read-write] Graphic MMU LUT entry 33 low
    volatile uint32_t LUT33H;   // [read-write] Graphic MMU LUT entry 33 high
    volatile uint32_t LUT34L;   // [read-write] Graphic MMU LUT entry 34 low
    volatile uint32_t LUT34H;   // [read-write] Graphic MMU LUT entry 34 high
    volatile uint32_t LUT35L;   // [read-write] Graphic MMU LUT entry 35 low
    volatile uint32_t LUT35H;   // [read-write] Graphic MMU LUT entry 35 high
    volatile uint32_t LUT36L;   // [read-write] Graphic MMU LUT entry 36 low
    volatile uint32_t LUT36H;   // [read-write] Graphic MMU LUT entry 36 high
    volatile uint32_t LUT37L;   // [read-write] Graphic MMU LUT entry 37 low
    volatile uint32_t LUT37H;   // [read-write] Graphic MMU LUT entry 37 high
    volatile uint32_t LUT38L;   // [read-write] Graphic MMU LUT entry 38 low
    volatile uint32_t LUT38H;   // [read-write] Graphic MMU LUT entry 38 high
    volatile uint32_t LUT39L;   // [read-write] Graphic MMU LUT entry 39 low
    volatile uint32_t LUT39H;   // [read-write] Graphic MMU LUT entry 39 high
    volatile uint32_t LUT40L;   // [read-write] Graphic MMU LUT entry 40 low
    volatile uint32_t LUT40H;   // [read-write] Graphic MMU LUT entry 40 high
    volatile uint32_t LUT41L;   // [read-write] Graphic MMU LUT entry 41 low
    volatile uint32_t LUT41H;   // [read-write] Graphic MMU LUT entry 41 high
    volatile uint32_t LUT42L;   // [read-write] Graphic MMU LUT entry 42 low
    volatile uint32_t LUT42H;   // [read-write] Graphic MMU LUT entry 42 high
    volatile uint32_t LUT43L;   // [read-write] Graphic MMU LUT entry 43 low
    volatile uint32_t LUT43H;   // [read-write] Graphic MMU LUT entry 43 high
    volatile uint32_t LUT44L;   // [read-write] Graphic MMU LUT entry 44 low
    volatile uint32_t LUT44H;   // [read-write] Graphic MMU LUT entry 44 high
    volatile uint32_t LUT45L;   // [read-write] Graphic MMU LUT entry 45 low
    volatile uint32_t LUT45H;   // [read-write] Graphic MMU LUT entry 45 high
    volatile uint32_t LUT46L;   // [read-write] Graphic MMU LUT entry 46 low
    volatile uint32_t LUT46H;   // [read-write] Graphic MMU LUT entry 46 high
    volatile uint32_t LUT47L;   // [read-write] Graphic MMU LUT entry 47 low
    volatile uint32_t LUT47H;   // [read-write] Graphic MMU LUT entry 47 high
    volatile uint32_t LUT48L;   // [read-write] Graphic MMU LUT entry 48 low
    volatile uint32_t LUT48H;   // [read-write] Graphic MMU LUT entry 48 high
    volatile uint32_t LUT49L;   // [read-write] Graphic MMU LUT entry 49 low
    volatile uint32_t LUT49H;   // [read-write] Graphic MMU LUT entry 49 high
    volatile uint32_t LUT50L;   // [read-write] Graphic MMU LUT entry 50 low
    volatile uint32_t LUT50H;   // [read-write] Graphic MMU LUT entry 50 high
    volatile uint32_t LUT51L;   // [read-write] Graphic MMU LUT entry 51 low
    volatile uint32_t LUT51H;   // [read-write] Graphic MMU LUT entry 51 high
    volatile uint32_t LUT52L;   // [read-write] Graphic MMU LUT entry 52 low
    volatile uint32_t LUT52H;   // [read-write] Graphic MMU LUT entry 52 high
    volatile uint32_t LUT53L;   // [read-write] Graphic MMU LUT entry 53 low
    volatile uint32_t LUT53H;   // [read-write] Graphic MMU LUT entry 53 high
    volatile uint32_t LUT54L;   // [read-write] Graphic MMU LUT entry 54 low
    volatile uint32_t LUT54H;   // [read-write] Graphic MMU LUT entry 54 high
    volatile uint32_t LUT55L;   // [read-write] Graphic MMU LUT entry 55 low
    volatile uint32_t LUT55H;   // [read-write] Graphic MMU LUT entry 55 high
    volatile uint32_t LUT56L;   // [read-write] Graphic MMU LUT entry 56 low
    volatile uint32_t LUT56H;   // [read-write] Graphic MMU LUT entry 56 high
    volatile uint32_t LUT57L;   // [read-write] Graphic MMU LUT entry 57 low
    volatile uint32_t LUT57H;   // [read-write] Graphic MMU LUT entry 57 high
    volatile uint32_t LUT58L;   // [read-write] Graphic MMU LUT entry 58 low
    volatile uint32_t LUT58H;   // [read-write] Graphic MMU LUT entry 58 high
    volatile uint32_t LUT59L;   // [read-write] Graphic MMU LUT entry 59 low
    volatile uint32_t LUT59H;   // [read-write] Graphic MMU LUT entry 59 high
    volatile uint32_t LUT60L;   // [read-write] Graphic MMU LUT entry 60 low
    volatile uint32_t LUT60H;   // [read-write] Graphic MMU LUT entry 60 high
    volatile uint32_t LUT61L;   // [read-write] Graphic MMU LUT entry 61 low
    volatile uint32_t LUT61H;   // [read-write] Graphic MMU LUT entry 61 high
    volatile uint32_t LUT62L;   // [read-write] Graphic MMU LUT entry 62 low
    volatile uint32_t LUT62H;   // [read-write] Graphic MMU LUT entry 62 high
    volatile uint32_t LUT63L;   // [read-write] Graphic MMU LUT entry 63 low
    volatile uint32_t LUT63H;   // [read-write] Graphic MMU LUT entry 63 high
    volatile uint32_t LUT64L;   // [read-write] Graphic MMU LUT entry 64 low
    volatile uint32_t LUT64H;   // [read-write] Graphic MMU LUT entry 64 high
    volatile uint32_t LUT65L;   // [read-write] Graphic MMU LUT entry 65 low
    volatile uint32_t LUT65H;   // [read-write] Graphic MMU LUT entry 65 high
    volatile uint32_t LUT66L;   // [read-write] Graphic MMU LUT entry 66 low
    volatile uint32_t LUT66H;   // [read-write] Graphic MMU LUT entry 66 high
    volatile uint32_t LUT67L;   // [read-write] Graphic MMU LUT entry 67 low
    volatile uint32_t LUT67H;   // [read-write] Graphic MMU LUT entry 67 high
    volatile uint32_t LUT68L;   // [read-write] Graphic MMU LUT entry 68 low
    volatile uint32_t LUT68H;   // [read-write] Graphic MMU LUT entry 68 high
    volatile uint32_t LUT69L;   // [read-write] Graphic MMU LUT entry 69 low
    volatile uint32_t LUT69H;   // [read-write] Graphic MMU LUT entry 69 high
    volatile uint32_t LUT70L;   // [read-write] Graphic MMU LUT entry 70 low
    volatile uint32_t LUT70H;   // [read-write] Graphic MMU LUT entry 70 high
    volatile uint32_t LUT71L;   // [read-write] Graphic MMU LUT entry 71 low
    volatile uint32_t LUT71H;   // [read-write] Graphic MMU LUT entry 71 high
    volatile uint32_t LUT72L;   // [read-write] Graphic MMU LUT entry 72 low
    volatile uint32_t LUT72H;   // [read-write] Graphic MMU LUT entry 72 high
    volatile uint32_t LUT73L;   // [read-write] Graphic MMU LUT entry 73 low
    volatile uint32_t LUT73H;   // [read-write] Graphic MMU LUT entry 73 high
    volatile uint32_t LUT74L;   // [read-write] Graphic MMU LUT entry 74 low
    volatile uint32_t LUT74H;   // [read-write] Graphic MMU LUT entry 74 high
    volatile uint32_t LUT75L;   // [read-write] Graphic MMU LUT entry 75 low
    volatile uint32_t LUT75H;   // [read-write] Graphic MMU LUT entry 75 high
    volatile uint32_t LUT76L;   // [read-write] Graphic MMU LUT entry 76 low
    volatile uint32_t LUT76H;   // [read-write] Graphic MMU LUT entry 76 high
    volatile uint32_t LUT77L;   // [read-write] Graphic MMU LUT entry 77 low
    volatile uint32_t LUT77H;   // [read-write] Graphic MMU LUT entry 77 high
    volatile uint32_t LUT78L;   // [read-write] Graphic MMU LUT entry 78 low
    volatile uint32_t LUT78H;   // [read-write] Graphic MMU LUT entry 78 high
    volatile uint32_t LUT79L;   // [read-write] Graphic MMU LUT entry 79 low
    volatile uint32_t LUT79H;   // [read-write] Graphic MMU LUT entry 79 high
    volatile uint32_t LUT80L;   // [read-write] Graphic MMU LUT entry 80 low
    volatile uint32_t LUT80H;   // [read-write] Graphic MMU LUT entry 80 high
    volatile uint32_t LUT81L;   // [read-write] Graphic MMU LUT entry 81 low
    volatile uint32_t LUT81H;   // [read-write] Graphic MMU LUT entry 81 high
    volatile uint32_t LUT82L;   // [read-write] Graphic MMU LUT entry 82 low
    volatile uint32_t LUT82H;   // [read-write] Graphic MMU LUT entry 82 high
    volatile uint32_t LUT83L;   // [read-write] Graphic MMU LUT entry 83 low
    volatile uint32_t LUT83H;   // [read-write] Graphic MMU LUT entry 83 high
    volatile uint32_t LUT84L;   // [read-write] Graphic MMU LUT entry 84 low
    volatile uint32_t LUT84H;   // [read-write] Graphic MMU LUT entry 84 high
    volatile uint32_t LUT85L;   // [read-write] Graphic MMU LUT entry 85 low
    volatile uint32_t LUT85H;   // [read-write] Graphic MMU LUT entry 85 high
    volatile uint32_t LUT86L;   // [read-write] Graphic MMU LUT entry 86 low
    volatile uint32_t LUT86H;   // [read-write] Graphic MMU LUT entry 86 high
    volatile uint32_t LUT87L;   // [read-write] Graphic MMU LUT entry 87 low
    volatile uint32_t LUT87H;   // [read-write] Graphic MMU LUT entry 87 high
    volatile uint32_t LUT88L;   // [read-write] Graphic MMU LUT entry 88 low
    volatile uint32_t LUT88H;   // [read-write] Graphic MMU LUT entry 88 high
    volatile uint32_t LUT89L;   // [read-write] Graphic MMU LUT entry 89 low
    volatile uint32_t LUT89H;   // [read-write] Graphic MMU LUT entry 89 high
    volatile uint32_t LUT90L;   // [read-write] Graphic MMU LUT entry 90 low
    volatile uint32_t LUT90H;   // [read-write] Graphic MMU LUT entry 90 high
    volatile uint32_t LUT91L;   // [read-write] Graphic MMU LUT entry 91 low
    volatile uint32_t LUT91H;   // [read-write] Graphic MMU LUT entry 91 high
    volatile uint32_t LUT92L;   // [read-write] Graphic MMU LUT entry 92 low
    volatile uint32_t LUT92H;   // [read-write] Graphic MMU LUT entry 92 high
    volatile uint32_t LUT93L;   // [read-write] Graphic MMU LUT entry 93 low
    volatile uint32_t LUT93H;   // [read-write] Graphic MMU LUT entry 93 high
    volatile uint32_t LUT94L;   // [read-write] Graphic MMU LUT entry 94 low
    volatile uint32_t LUT94H;   // [read-write] Graphic MMU LUT entry 94 high
    volatile uint32_t LUT95L;   // [read-write] Graphic MMU LUT entry 95 low
    volatile uint32_t LUT95H;   // [read-write] Graphic MMU LUT entry 95 high
    volatile uint32_t LUT96L;   // [read-write] Graphic MMU LUT entry 96 low
    volatile uint32_t LUT96H;   // [read-write] Graphic MMU LUT entry 96 high
    volatile uint32_t LUT97L;   // [read-write] Graphic MMU LUT entry 97 low
    volatile uint32_t LUT97H;   // [read-write] Graphic MMU LUT entry 97 high
    volatile uint32_t LUT98L;   // [read-write] Graphic MMU LUT entry 98 low
    volatile uint32_t LUT98H;   // [read-write] Graphic MMU LUT entry 98 high
    volatile uint32_t LUT99L;   // [read-write] Graphic MMU LUT entry 99 low
    volatile uint32_t LUT99H;   // [read-write] Graphic MMU LUT entry 99 high
    volatile uint32_t LUT100L;  // [read-write] Graphic MMU LUT entry 100 low
    volatile uint32_t LUT100H;  // [read-write] Graphic MMU LUT entry 100 high
    volatile uint32_t LUT101L;  // [read-write] Graphic MMU LUT entry 101 low
    volatile uint32_t LUT101H;  // [read-write] Graphic MMU LUT entry 101 high
    volatile uint32_t LUT102L;  // [read-write] Graphic MMU LUT entry 102 low
    volatile uint32_t LUT102H;  // [read-write] Graphic MMU LUT entry 102 high
    volatile uint32_t LUT103L;  // [read-write] Graphic MMU LUT entry 103 low
    volatile uint32_t LUT103H;  // [read-write] Graphic MMU LUT entry 103 high
    volatile uint32_t LUT104L;  // [read-write] Graphic MMU LUT entry 104 low
    volatile uint32_t LUT104H;  // [read-write] Graphic MMU LUT entry 104 high
    volatile uint32_t LUT105L;  // [read-write] Graphic MMU LUT entry 105 low
    volatile uint32_t LUT105H;  // [read-write] Graphic MMU LUT entry 105 high
    volatile uint32_t LUT106L;  // [read-write] Graphic MMU LUT entry 106 low
    volatile uint32_t LUT106H;  // [read-write] Graphic MMU LUT entry 106 high
    volatile uint32_t LUT107L;  // [read-write] Graphic MMU LUT entry 107 low
    volatile uint32_t LUT107H;  // [read-write] Graphic MMU LUT entry 107 high
    volatile uint32_t LUT108L;  // [read-write] Graphic MMU LUT entry 108 low
    volatile uint32_t LUT108H;  // [read-write] Graphic MMU LUT entry 108 high
    volatile uint32_t LUT109L;  // [read-write] Graphic MMU LUT entry 109 low
    volatile uint32_t LUT109H;  // [read-write] Graphic MMU LUT entry 109 high
    volatile uint32_t LUT110L;  // [read-write] Graphic MMU LUT entry 110 low
    volatile uint32_t LUT110H;  // [read-write] Graphic MMU LUT entry 110 high
    volatile uint32_t LUT111L;  // [read-write] Graphic MMU LUT entry 111 low
    volatile uint32_t LUT111H;  // [read-write] Graphic MMU LUT entry 111 high
    volatile uint32_t LUT112L;  // [read-write] Graphic MMU LUT entry 112 low
    volatile uint32_t LUT112H;  // [read-write] Graphic MMU LUT entry 112 high
    volatile uint32_t LUT113L;  // [read-write] Graphic MMU LUT entry 113 low
    volatile uint32_t LUT113H;  // [read-write] Graphic MMU LUT entry 113 high
    volatile uint32_t LUT114L;  // [read-write] Graphic MMU LUT entry 114 low
    volatile uint32_t LUT114H;  // [read-write] Graphic MMU LUT entry 114 high
    volatile uint32_t LUT115L;  // [read-write] Graphic MMU LUT entry 115 low
    volatile uint32_t LUT115H;  // [read-write] Graphic MMU LUT entry 115 high
    volatile uint32_t LUT116L;  // [read-write] Graphic MMU LUT entry 116 low
    volatile uint32_t LUT116H;  // [read-write] Graphic MMU LUT entry 116 high
    volatile uint32_t LUT117L;  // [read-write] Graphic MMU LUT entry 117 low
    volatile uint32_t LUT117H;  // [read-write] Graphic MMU LUT entry 117 high
    volatile uint32_t LUT118L;  // [read-write] Graphic MMU LUT entry 118 low
    volatile uint32_t LUT118H;  // [read-write] Graphic MMU LUT entry 118 high
    volatile uint32_t LUT119L;  // [read-write] Graphic MMU LUT entry 119 low
    volatile uint32_t LUT119H;  // [read-write] Graphic MMU LUT entry 119 high
    volatile uint32_t LUT120L;  // [read-write] Graphic MMU LUT entry 120 low
    volatile uint32_t LUT120H;  // [read-write] Graphic MMU LUT entry 120 high
    volatile uint32_t LUT121L;  // [read-write] Graphic MMU LUT entry 121 low
    volatile uint32_t LUT121H;  // [read-write] Graphic MMU LUT entry 121 high
    volatile uint32_t LUT122L;  // [read-write] Graphic MMU LUT entry 122 low
    volatile uint32_t LUT122H;  // [read-write] Graphic MMU LUT entry 122 high
    volatile uint32_t LUT123L;  // [read-write] Graphic MMU LUT entry 123 low
    volatile uint32_t LUT123H;  // [read-write] Graphic MMU LUT entry 123 high
    volatile uint32_t LUT124L;  // [read-write] Graphic MMU LUT entry 124 low
    volatile uint32_t LUT124H;  // [read-write] Graphic MMU LUT entry 124 high
    volatile uint32_t LUT125L;  // [read-write] Graphic MMU LUT entry 125 low
    volatile uint32_t LUT125H;  // [read-write] Graphic MMU LUT entry 125 high
    volatile uint32_t LUT126L;  // [read-write] Graphic MMU LUT entry 126 low
    volatile uint32_t LUT126H;  // [read-write] Graphic MMU LUT entry 126 high
    volatile uint32_t LUT127L;  // [read-write] Graphic MMU LUT entry 127 low
    volatile uint32_t LUT127H;  // [read-write] Graphic MMU LUT entry 127 high
    volatile uint32_t LUT128L;  // [read-write] Graphic MMU LUT entry 128 low
    volatile uint32_t LUT128H;  // [read-write] Graphic MMU LUT entry 128 high
    volatile uint32_t LUT129L;  // [read-write] Graphic MMU LUT entry 129 low
    volatile uint32_t LUT129H;  // [read-write] Graphic MMU LUT entry 129 high
    volatile uint32_t LUT130L;  // [read-write] Graphic MMU LUT entry 130 low
    volatile uint32_t LUT130H;  // [read-write] Graphic MMU LUT entry 130 high
    volatile uint32_t LUT131L;  // [read-write] Graphic MMU LUT entry 131 low
    volatile uint32_t LUT131H;  // [read-write] Graphic MMU LUT entry 131 high
    volatile uint32_t LUT132L;  // [read-write] Graphic MMU LUT entry 132 low
    volatile uint32_t LUT132H;  // [read-write] Graphic MMU LUT entry 132 high
    volatile uint32_t LUT133L;  // [read-write] Graphic MMU LUT entry 133 low
    volatile uint32_t LUT133H;  // [read-write] Graphic MMU LUT entry 133 high
    volatile uint32_t LUT134L;  // [read-write] Graphic MMU LUT entry 134 low
    volatile uint32_t LUT134H;  // [read-write] Graphic MMU LUT entry 134 high
    volatile uint32_t LUT135L;  // [read-write] Graphic MMU LUT entry 135 low
    volatile uint32_t LUT135H;  // [read-write] Graphic MMU LUT entry 135 high
    volatile uint32_t LUT136L;  // [read-write] Graphic MMU LUT entry 136 low
    volatile uint32_t LUT136H;  // [read-write] Graphic MMU LUT entry 136 high
    volatile uint32_t LUT137L;  // [read-write] Graphic MMU LUT entry 137 low
    volatile uint32_t LUT137H;  // [read-write] Graphic MMU LUT entry 137 high
    volatile uint32_t LUT138L;  // [read-write] Graphic MMU LUT entry 138 low
    volatile uint32_t LUT138H;  // [read-write] Graphic MMU LUT entry 138 high
    volatile uint32_t LUT139L;  // [read-write] Graphic MMU LUT entry 139 low
    volatile uint32_t LUT139H;  // [read-write] Graphic MMU LUT entry 139 high
    volatile uint32_t LUT140L;  // [read-write] Graphic MMU LUT entry 140 low
    volatile uint32_t LUT140H;  // [read-write] Graphic MMU LUT entry 140 high
    volatile uint32_t LUT141L;  // [read-write] Graphic MMU LUT entry 141 low
    volatile uint32_t LUT141H;  // [read-write] Graphic MMU LUT entry 141 high
    volatile uint32_t LUT142L;  // [read-write] Graphic MMU LUT entry 142 low
    volatile uint32_t LUT142H;  // [read-write] Graphic MMU LUT entry 142 high
    volatile uint32_t LUT143L;  // [read-write] Graphic MMU LUT entry 143 low
    volatile uint32_t LUT143H;  // [read-write] Graphic MMU LUT entry 143 high
    volatile uint32_t LUT144L;  // [read-write] Graphic MMU LUT entry 144 low
    volatile uint32_t LUT144H;  // [read-write] Graphic MMU LUT entry 144 high
    volatile uint32_t LUT145L;  // [read-write] Graphic MMU LUT entry 145 low
    volatile uint32_t LUT145H;  // [read-write] Graphic MMU LUT entry 145 high
    volatile uint32_t LUT146L;  // [read-write] Graphic MMU LUT entry 146 low
    volatile uint32_t LUT146H;  // [read-write] Graphic MMU LUT entry 146 high
    volatile uint32_t LUT147L;  // [read-write] Graphic MMU LUT entry 147 low
    volatile uint32_t LUT147H;  // [read-write] Graphic MMU LUT entry 147 high
    volatile uint32_t LUT148L;  // [read-write] Graphic MMU LUT entry 148 low
    volatile uint32_t LUT148H;  // [read-write] Graphic MMU LUT entry 148 high
    volatile uint32_t LUT149L;  // [read-write] Graphic MMU LUT entry 149 low
    volatile uint32_t LUT149H;  // [read-write] Graphic MMU LUT entry 149 high
    volatile uint32_t LUT150L;  // [read-write] Graphic MMU LUT entry 150 low
    volatile uint32_t LUT150H;  // [read-write] Graphic MMU LUT entry 150 high
    volatile uint32_t LUT151L;  // [read-write] Graphic MMU LUT entry 151 low
    volatile uint32_t LUT151H;  // [read-write] Graphic MMU LUT entry 151 high
    volatile uint32_t LUT152L;  // [read-write] Graphic MMU LUT entry 152 low
    volatile uint32_t LUT152H;  // [read-write] Graphic MMU LUT entry 152 high
    volatile uint32_t LUT153L;  // [read-write] Graphic MMU LUT entry 153 low
    volatile uint32_t LUT153H;  // [read-write] Graphic MMU LUT entry 153 high
    volatile uint32_t LUT154L;  // [read-write] Graphic MMU LUT entry 154 low
    volatile uint32_t LUT154H;  // [read-write] Graphic MMU LUT entry 154 high
    volatile uint32_t LUT155L;  // [read-write] Graphic MMU LUT entry 155 low
    volatile uint32_t LUT155H;  // [read-write] Graphic MMU LUT entry 155 high
    volatile uint32_t LUT156L;  // [read-write] Graphic MMU LUT entry 156 low
    volatile uint32_t LUT156H;  // [read-write] Graphic MMU LUT entry 156 high
    volatile uint32_t LUT157L;  // [read-write] Graphic MMU LUT entry 157 low
    volatile uint32_t LUT157H;  // [read-write] Graphic MMU LUT entry 157 high
    volatile uint32_t LUT158L;  // [read-write] Graphic MMU LUT entry 158 low
    volatile uint32_t LUT158H;  // [read-write] Graphic MMU LUT entry 158 high
    volatile uint32_t LUT159L;  // [read-write] Graphic MMU LUT entry 159 low
    volatile uint32_t LUT159H;  // [read-write] Graphic MMU LUT entry 159 high
    volatile uint32_t LUT160L;  // [read-write] Graphic MMU LUT entry 160 low
    volatile uint32_t LUT160H;  // [read-write] Graphic MMU LUT entry 160 high
    volatile uint32_t LUT161L;  // [read-write] Graphic MMU LUT entry 161 low
    volatile uint32_t LUT161H;  // [read-write] Graphic MMU LUT entry 161 high
    volatile uint32_t LUT162L;  // [read-write] Graphic MMU LUT entry 162 low
    volatile uint32_t LUT162H;  // [read-write] Graphic MMU LUT entry 162 high
    volatile uint32_t LUT163L;  // [read-write] Graphic MMU LUT entry 163 low
    volatile uint32_t LUT163H;  // [read-write] Graphic MMU LUT entry 163 high
    volatile uint32_t LUT164L;  // [read-write] Graphic MMU LUT entry 164 low
    volatile uint32_t LUT164H;  // [read-write] Graphic MMU LUT entry 164 high
    volatile uint32_t LUT165L;  // [read-write] Graphic MMU LUT entry 165 low
    volatile uint32_t LUT165H;  // [read-write] Graphic MMU LUT entry 165 high
    volatile uint32_t LUT166L;  // [read-write] Graphic MMU LUT entry 166 low
    volatile uint32_t LUT166H;  // [read-write] Graphic MMU LUT entry 166 high
    volatile uint32_t LUT167L;  // [read-write] Graphic MMU LUT entry 167 low
    volatile uint32_t LUT167H;  // [read-write] Graphic MMU LUT entry 167 high
    volatile uint32_t LUT168L;  // [read-write] Graphic MMU LUT entry 168 low
    volatile uint32_t LUT168H;  // [read-write] Graphic MMU LUT entry 168 high
    volatile uint32_t LUT169L;  // [read-write] Graphic MMU LUT entry 169 low
    volatile uint32_t LUT169H;  // [read-write] Graphic MMU LUT entry 169 high
    volatile uint32_t LUT170L;  // [read-write] Graphic MMU LUT entry 170 low
    volatile uint32_t LUT170H;  // [read-write] Graphic MMU LUT entry 170 high
    volatile uint32_t LUT171L;  // [read-write] Graphic MMU LUT entry 171 low
    volatile uint32_t LUT171H;  // [read-write] Graphic MMU LUT entry 171 high
    volatile uint32_t LUT172L;  // [read-write] Graphic MMU LUT entry 172 low
    volatile uint32_t LUT172H;  // [read-write] Graphic MMU LUT entry 172 high
    volatile uint32_t LUT173L;  // [read-write] Graphic MMU LUT entry 173 low
    volatile uint32_t LUT173H;  // [read-write] Graphic MMU LUT entry 173 high
    volatile uint32_t LUT174L;  // [read-write] Graphic MMU LUT entry 174 low
    volatile uint32_t LUT174H;  // [read-write] Graphic MMU LUT entry 174 high
    volatile uint32_t LUT175L;  // [read-write] Graphic MMU LUT entry 175 low
    volatile uint32_t LUT175H;  // [read-write] Graphic MMU LUT entry 175 high
    volatile uint32_t LUT176L;  // [read-write] Graphic MMU LUT entry 176 low
    volatile uint32_t LUT176H;  // [read-write] Graphic MMU LUT entry 176 high
    volatile uint32_t LUT177L;  // [read-write] Graphic MMU LUT entry 177 low
    volatile uint32_t LUT177H;  // [read-write] Graphic MMU LUT entry 177 high
    volatile uint32_t LUT178L;  // [read-write] Graphic MMU LUT entry 178 low
    volatile uint32_t LUT178H;  // [read-write] Graphic MMU LUT entry 178 high
    volatile uint32_t LUT179L;  // [read-write] Graphic MMU LUT entry 179 low
    volatile uint32_t LUT179H;  // [read-write] Graphic MMU LUT entry 179 high
    volatile uint32_t LUT180L;  // [read-write] Graphic MMU LUT entry 180 low
    volatile uint32_t LUT180H;  // [read-write] Graphic MMU LUT entry 180 high
    volatile uint32_t LUT181L;  // [read-write] Graphic MMU LUT entry 181 low
    volatile uint32_t LUT181H;  // [read-write] Graphic MMU LUT entry 181 high
    volatile uint32_t LUT182L;  // [read-write] Graphic MMU LUT entry 182 low
    volatile uint32_t LUT182H;  // [read-write] Graphic MMU LUT entry 182 high
    volatile uint32_t LUT183L;  // [read-write] Graphic MMU LUT entry 183 low
    volatile uint32_t LUT183H;  // [read-write] Graphic MMU LUT entry 183 high
    volatile uint32_t LUT184L;  // [read-write] Graphic MMU LUT entry 184 low
    volatile uint32_t LUT184H;  // [read-write] Graphic MMU LUT entry 184 high
    volatile uint32_t LUT185L;  // [read-write] Graphic MMU LUT entry 185 low
    volatile uint32_t LUT185H;  // [read-write] Graphic MMU LUT entry 185 high
    volatile uint32_t LUT186L;  // [read-write] Graphic MMU LUT entry 186 low
    volatile uint32_t LUT186H;  // [read-write] Graphic MMU LUT entry 186 high
    volatile uint32_t LUT187L;  // [read-write] Graphic MMU LUT entry 187 low
    volatile uint32_t LUT187H;  // [read-write] Graphic MMU LUT entry 187 high
    volatile uint32_t LUT188L;  // [read-write] Graphic MMU LUT entry 188 low
    volatile uint32_t LUT188H;  // [read-write] Graphic MMU LUT entry 188 high
    volatile uint32_t LUT189L;  // [read-write] Graphic MMU LUT entry 189 low
    volatile uint32_t LUT189H;  // [read-write] Graphic MMU LUT entry 189 high
    volatile uint32_t LUT190L;  // [read-write] Graphic MMU LUT entry 190 low
    volatile uint32_t LUT190H;  // [read-write] Graphic MMU LUT entry 190 high
    volatile uint32_t LUT191L;  // [read-write] Graphic MMU LUT entry 191 low
    volatile uint32_t LUT191H;  // [read-write] Graphic MMU LUT entry 191 high
    volatile uint32_t LUT192L;  // [read-write] Graphic MMU LUT entry 192 low
    volatile uint32_t LUT192H;  // [read-write] Graphic MMU LUT entry 192 high
    volatile uint32_t LUT193L;  // [read-write] Graphic MMU LUT entry 193 low
    volatile uint32_t LUT193H;  // [read-write] Graphic MMU LUT entry 193 high
    volatile uint32_t LUT194L;  // [read-write] Graphic MMU LUT entry 194 low
    volatile uint32_t LUT194H;  // [read-write] Graphic MMU LUT entry 194 high
    volatile uint32_t LUT195L;  // [read-write] Graphic MMU LUT entry 195 low
    volatile uint32_t LUT195H;  // [read-write] Graphic MMU LUT entry 195 high
    volatile uint32_t LUT196L;  // [read-write] Graphic MMU LUT entry 196 low
    volatile uint32_t LUT196H;  // [read-write] Graphic MMU LUT entry 196 high
    volatile uint32_t LUT197L;  // [read-write] Graphic MMU LUT entry 197 low
    volatile uint32_t LUT197H;  // [read-write] Graphic MMU LUT entry 197 high
    volatile uint32_t LUT198L;  // [read-write] Graphic MMU LUT entry 198 low
    volatile uint32_t LUT198H;  // [read-write] Graphic MMU LUT entry 198 high
    volatile uint32_t LUT199L;  // [read-write] Graphic MMU LUT entry 199 low
    volatile uint32_t LUT199H;  // [read-write] Graphic MMU LUT entry 199 high
    volatile uint32_t LUT200L;  // [read-write] Graphic MMU LUT entry 200 low
    volatile uint32_t LUT200H;  // [read-write] Graphic MMU LUT entry 200 high
    volatile uint32_t LUT201L;  // [read-write] Graphic MMU LUT entry 201 low
    volatile uint32_t LUT201H;  // [read-write] Graphic MMU LUT entry 201 high
    volatile uint32_t LUT202L;  // [read-write] Graphic MMU LUT entry 202 low
    volatile uint32_t LUT202H;  // [read-write] Graphic MMU LUT entry 202 high
    volatile uint32_t LUT203L;  // [read-write] Graphic MMU LUT entry 203 low
    volatile uint32_t LUT203H;  // [read-write] Graphic MMU LUT entry 203 high
    volatile uint32_t LUT204L;  // [read-write] Graphic MMU LUT entry 204 low
    volatile uint32_t LUT204H;  // [read-write] Graphic MMU LUT entry 204 high
    volatile uint32_t LUT205L;  // [read-write] Graphic MMU LUT entry 205 low
    volatile uint32_t LUT205H;  // [read-write] Graphic MMU LUT entry 205 high
    volatile uint32_t LUT206L;  // [read-write] Graphic MMU LUT entry 206 low
    volatile uint32_t LUT206H;  // [read-write] Graphic MMU LUT entry 206 high
    volatile uint32_t LUT207L;  // [read-write] Graphic MMU LUT entry 207 low
    volatile uint32_t LUT207H;  // [read-write] Graphic MMU LUT entry 207 high
    volatile uint32_t LUT208L;  // [read-write] Graphic MMU LUT entry 208 low
    volatile uint32_t LUT208H;  // [read-write] Graphic MMU LUT entry 208 high
    volatile uint32_t LUT209L;  // [read-write] Graphic MMU LUT entry 209 low
    volatile uint32_t LUT209H;  // [read-write] Graphic MMU LUT entry 209 high
    volatile uint32_t LUT210L;  // [read-write] Graphic MMU LUT entry 210 low
    volatile uint32_t LUT210H;  // [read-write] Graphic MMU LUT entry 210 high
    volatile uint32_t LUT211L;  // [read-write] Graphic MMU LUT entry 211 low
    volatile uint32_t LUT211H;  // [read-write] Graphic MMU LUT entry 211 high
    volatile uint32_t LUT212L;  // [read-write] Graphic MMU LUT entry 212 low
    volatile uint32_t LUT212H;  // [read-write] Graphic MMU LUT entry 212 high
    volatile uint32_t LUT213L;  // [read-write] Graphic MMU LUT entry 213 low
    volatile uint32_t LUT213H;  // [read-write] Graphic MMU LUT entry 213 high
    volatile uint32_t LUT214L;  // [read-write] Graphic MMU LUT entry 214 low
    volatile uint32_t LUT214H;  // [read-write] Graphic MMU LUT entry 214 high
    volatile uint32_t LUT215L;  // [read-write] Graphic MMU LUT entry 215 low
    volatile uint32_t LUT215H;  // [read-write] Graphic MMU LUT entry 215 high
    volatile uint32_t LUT216L;  // [read-write] Graphic MMU LUT entry 216 low
    volatile uint32_t LUT216H;  // [read-write] Graphic MMU LUT entry 216 high
    volatile uint32_t LUT217L;  // [read-write] Graphic MMU LUT entry 217 low
    volatile uint32_t LUT217H;  // [read-write] Graphic MMU LUT entry 217 high
    volatile uint32_t LUT218L;  // [read-write] Graphic MMU LUT entry 218 low
    volatile uint32_t LUT218H;  // [read-write] Graphic MMU LUT entry 218 high
    volatile uint32_t LUT219L;  // [read-write] Graphic MMU LUT entry 219 low
    volatile uint32_t LUT219H;  // [read-write] Graphic MMU LUT entry 219 high
    volatile uint32_t LUT220L;  // [read-write] Graphic MMU LUT entry 220 low
    volatile uint32_t LUT220H;  // [read-write] Graphic MMU LUT entry 220 high
    volatile uint32_t LUT221L;  // [read-write] Graphic MMU LUT entry 221 low
    volatile uint32_t LUT221H;  // [read-write] Graphic MMU LUT entry 221 high
    volatile uint32_t LUT222L;  // [read-write] Graphic MMU LUT entry 222 low
    volatile uint32_t LUT222H;  // [read-write] Graphic MMU LUT entry 222 high
    volatile uint32_t LUT223L;  // [read-write] Graphic MMU LUT entry 223 low
    volatile uint32_t LUT223H;  // [read-write] Graphic MMU LUT entry 223 high
    volatile uint32_t LUT224L;  // [read-write] Graphic MMU LUT entry 224 low
    volatile uint32_t LUT224H;  // [read-write] Graphic MMU LUT entry 224 high
    volatile uint32_t LUT225L;  // [read-write] Graphic MMU LUT entry 225 low
    volatile uint32_t LUT225H;  // [read-write] Graphic MMU LUT entry 225 high
    volatile uint32_t LUT226L;  // [read-write] Graphic MMU LUT entry 226 low
    volatile uint32_t LUT226H;  // [read-write] Graphic MMU LUT entry 226 high
    volatile uint32_t LUT227L;  // [read-write] Graphic MMU LUT entry 227 low
    volatile uint32_t LUT227H;  // [read-write] Graphic MMU LUT entry 227 high
    volatile uint32_t LUT228L;  // [read-write] Graphic MMU LUT entry 228 low
    volatile uint32_t LUT228H;  // [read-write] Graphic MMU LUT entry 228 high
    volatile uint32_t LUT229L;  // [read-write] Graphic MMU LUT entry 229 low
    volatile uint32_t LUT229H;  // [read-write] Graphic MMU LUT entry 229 high
    volatile uint32_t LUT230L;  // [read-write] Graphic MMU LUT entry 230 low
    volatile uint32_t LUT230H;  // [read-write] Graphic MMU LUT entry 230 high
    volatile uint32_t LUT231L;  // [read-write] Graphic MMU LUT entry 231 low
    volatile uint32_t LUT231H;  // [read-write] Graphic MMU LUT entry 231 high
    volatile uint32_t LUT232L;  // [read-write] Graphic MMU LUT entry 232 low
    volatile uint32_t LUT232H;  // [read-write] Graphic MMU LUT entry 232 high
    volatile uint32_t LUT233L;  // [read-write] Graphic MMU LUT entry 233 low
    volatile uint32_t LUT233H;  // [read-write] Graphic MMU LUT entry 233 high
    volatile uint32_t LUT234L;  // [read-write] Graphic MMU LUT entry 234 low
    volatile uint32_t LUT234H;  // [read-write] Graphic MMU LUT entry 234 high
    volatile uint32_t LUT235L;  // [read-write] Graphic MMU LUT entry 235 low
    volatile uint32_t LUT235H;  // [read-write] Graphic MMU LUT entry 235 high
    volatile uint32_t LUT236L;  // [read-write] Graphic MMU LUT entry 236 low
    volatile uint32_t LUT236H;  // [read-write] Graphic MMU LUT entry 236 high
    volatile uint32_t LUT237L;  // [read-write] Graphic MMU LUT entry 237 low
    volatile uint32_t LUT237H;  // [read-write] Graphic MMU LUT entry 237 high
    volatile uint32_t LUT238L;  // [read-write] Graphic MMU LUT entry 238 low
    volatile uint32_t LUT238H;  // [read-write] Graphic MMU LUT entry 238 high
    volatile uint32_t LUT239L;  // [read-write] Graphic MMU LUT entry 239 low
    volatile uint32_t LUT239H;  // [read-write] Graphic MMU LUT entry 239 high
    volatile uint32_t LUT240L;  // [read-write] Graphic MMU LUT entry 240 low
    volatile uint32_t LUT240H;  // [read-write] Graphic MMU LUT entry 240 high
    volatile uint32_t LUT241L;  // [read-write] Graphic MMU LUT entry 241 low
    volatile uint32_t LUT241H;  // [read-write] Graphic MMU LUT entry 241 high
    volatile uint32_t LUT242L;  // [read-write] Graphic MMU LUT entry 242 low
    volatile uint32_t LUT242H;  // [read-write] Graphic MMU LUT entry 242 high
    volatile uint32_t LUT243L;  // [read-write] Graphic MMU LUT entry 243 low
    volatile uint32_t LUT243H;  // [read-write] Graphic MMU LUT entry 243 high
    volatile uint32_t LUT244L;  // [read-write] Graphic MMU LUT entry 244 low
    volatile uint32_t LUT244H;  // [read-write] Graphic MMU LUT entry 244 high
    volatile uint32_t LUT245L;  // [read-write] Graphic MMU LUT entry 245 low
    volatile uint32_t LUT245H;  // [read-write] Graphic MMU LUT entry 245 high
    volatile uint32_t LUT246L;  // [read-write] Graphic MMU LUT entry 246 low
    volatile uint32_t LUT246H;  // [read-write] Graphic MMU LUT entry 246 high
    volatile uint32_t LUT247L;  // [read-write] Graphic MMU LUT entry 247 low
    volatile uint32_t LUT247H;  // [read-write] Graphic MMU LUT entry 247 high
    volatile uint32_t LUT248L;  // [read-write] Graphic MMU LUT entry 248 low
    volatile uint32_t LUT248H;  // [read-write] Graphic MMU LUT entry 248 high
    volatile uint32_t LUT249L;  // [read-write] Graphic MMU LUT entry 249 low
    volatile uint32_t LUT249H;  // [read-write] Graphic MMU LUT entry 249 high
    volatile uint32_t LUT250L;  // [read-write] Graphic MMU LUT entry 250 low
    volatile uint32_t LUT250H;  // [read-write] Graphic MMU LUT entry 250 high
    volatile uint32_t LUT251L;  // [read-write] Graphic MMU LUT entry 251 low
    volatile uint32_t LUT251H;  // [read-write] Graphic MMU LUT entry 251 high
    volatile uint32_t LUT252L;  // [read-write] Graphic MMU LUT entry 252 low
    volatile uint32_t LUT252H;  // [read-write] Graphic MMU LUT entry 252 high
    volatile uint32_t LUT253L;  // [read-write] Graphic MMU LUT entry 253 low
    volatile uint32_t LUT253H;  // [read-write] Graphic MMU LUT entry 253 high
    volatile uint32_t LUT254L;  // [read-write] Graphic MMU LUT entry 254 low
    volatile uint32_t LUT254H;  // [read-write] Graphic MMU LUT entry 254 high
    volatile uint32_t LUT255L;  // [read-write] Graphic MMU LUT entry 255 low
    volatile uint32_t LUT255H;  // [read-write] Graphic MMU LUT entry 255 high
    volatile uint32_t LUT256L;  // [read-write] Graphic MMU LUT entry 256 low
    volatile uint32_t LUT256H;  // [read-write] Graphic MMU LUT entry 256 high
    volatile uint32_t LUT257L;  // [read-write] Graphic MMU LUT entry 257 low
    volatile uint32_t LUT257H;  // [read-write] Graphic MMU LUT entry 257 high
    volatile uint32_t LUT258L;  // [read-write] Graphic MMU LUT entry 258 low
    volatile uint32_t LUT258H;  // [read-write] Graphic MMU LUT entry 258 high
    volatile uint32_t LUT259L;  // [read-write] Graphic MMU LUT entry 259 low
    volatile uint32_t LUT259H;  // [read-write] Graphic MMU LUT entry 259 high
    volatile uint32_t LUT260L;  // [read-write] Graphic MMU LUT entry 260 low
    volatile uint32_t LUT260H;  // [read-write] Graphic MMU LUT entry 260 high
    volatile uint32_t LUT261L;  // [read-write] Graphic MMU LUT entry 261 low
    volatile uint32_t LUT261H;  // [read-write] Graphic MMU LUT entry 261 high
    volatile uint32_t LUT262L;  // [read-write] Graphic MMU LUT entry 262 low
    volatile uint32_t LUT262H;  // [read-write] Graphic MMU LUT entry 262 high
    volatile uint32_t LUT263L;  // [read-write] Graphic MMU LUT entry 263 low
    volatile uint32_t LUT263H;  // [read-write] Graphic MMU LUT entry 263 high
    volatile uint32_t LUT264L;  // [read-write] Graphic MMU LUT entry 264 low
    volatile uint32_t LUT264H;  // [read-write] Graphic MMU LUT entry 264 high
    volatile uint32_t LUT265L;  // [read-write] Graphic MMU LUT entry 265 low
    volatile uint32_t LUT265H;  // [read-write] Graphic MMU LUT entry 265 high
    volatile uint32_t LUT266L;  // [read-write] Graphic MMU LUT entry 266 low
    volatile uint32_t LUT266H;  // [read-write] Graphic MMU LUT entry 266 high
    volatile uint32_t LUT267L;  // [read-write] Graphic MMU LUT entry 267 low
    volatile uint32_t LUT267H;  // [read-write] Graphic MMU LUT entry 267 high
    volatile uint32_t LUT268L;  // [read-write] Graphic MMU LUT entry 268 low
    volatile uint32_t LUT268H;  // [read-write] Graphic MMU LUT entry 268 high
    volatile uint32_t LUT269L;  // [read-write] Graphic MMU LUT entry 269 low
    volatile uint32_t LUT269H;  // [read-write] Graphic MMU LUT entry 269 high
    volatile uint32_t LUT270L;  // [read-write] Graphic MMU LUT entry 270 low
    volatile uint32_t LUT270H;  // [read-write] Graphic MMU LUT entry 270 high
    volatile uint32_t LUT271L;  // [read-write] Graphic MMU LUT entry 271 low
    volatile uint32_t LUT271H;  // [read-write] Graphic MMU LUT entry 271 high
    volatile uint32_t LUT272L;  // [read-write] Graphic MMU LUT entry 272 low
    volatile uint32_t LUT272H;  // [read-write] Graphic MMU LUT entry 272 high
    volatile uint32_t LUT273L;  // [read-write] Graphic MMU LUT entry 273 low
    volatile uint32_t LUT273H;  // [read-write] Graphic MMU LUT entry 273 high
    volatile uint32_t LUT274L;  // [read-write] Graphic MMU LUT entry 274 low
    volatile uint32_t LUT274H;  // [read-write] Graphic MMU LUT entry 274 high
    volatile uint32_t LUT275L;  // [read-write] Graphic MMU LUT entry 275 low
    volatile uint32_t LUT275H;  // [read-write] Graphic MMU LUT entry 275 high
    volatile uint32_t LUT276L;  // [read-write] Graphic MMU LUT entry 276 low
    volatile uint32_t LUT276H;  // [read-write] Graphic MMU LUT entry 276 high
    volatile uint32_t LUT277L;  // [read-write] Graphic MMU LUT entry 277 low
    volatile uint32_t LUT277H;  // [read-write] Graphic MMU LUT entry 277 high
    volatile uint32_t LUT278L;  // [read-write] Graphic MMU LUT entry 278 low
    volatile uint32_t LUT278H;  // [read-write] Graphic MMU LUT entry 278 high
    volatile uint32_t LUT279L;  // [read-write] Graphic MMU LUT entry 279 low
    volatile uint32_t LUT279H;  // [read-write] Graphic MMU LUT entry 279 high
    volatile uint32_t LUT280L;  // [read-write] Graphic MMU LUT entry 280 low
    volatile uint32_t LUT280H;  // [read-write] Graphic MMU LUT entry 280 high
    volatile uint32_t LUT281L;  // [read-write] Graphic MMU LUT entry 281 low
    volatile uint32_t LUT281H;  // [read-write] Graphic MMU LUT entry 281 high
    volatile uint32_t LUT282L;  // [read-write] Graphic MMU LUT entry 282 low
    volatile uint32_t LUT282H;  // [read-write] Graphic MMU LUT entry 282 high
    volatile uint32_t LUT283L;  // [read-write] Graphic MMU LUT entry 283 low
    volatile uint32_t LUT283H;  // [read-write] Graphic MMU LUT entry 283 high
    volatile uint32_t LUT284L;  // [read-write] Graphic MMU LUT entry 284 low
    volatile uint32_t LUT284H;  // [read-write] Graphic MMU LUT entry 284 high
    volatile uint32_t LUT285L;  // [read-write] Graphic MMU LUT entry 285 low
    volatile uint32_t LUT285H;  // [read-write] Graphic MMU LUT entry 285 high
    volatile uint32_t LUT286L;  // [read-write] Graphic MMU LUT entry 286 low
    volatile uint32_t LUT286H;  // [read-write] Graphic MMU LUT entry 286 high
    volatile uint32_t LUT287L;  // [read-write] Graphic MMU LUT entry 287 low
    volatile uint32_t LUT287H;  // [read-write] Graphic MMU LUT entry 287 high
    volatile uint32_t LUT288L;  // [read-write] Graphic MMU LUT entry 288 low
    volatile uint32_t LUT288H;  // [read-write] Graphic MMU LUT entry 288 high
    volatile uint32_t LUT289L;  // [read-write] Graphic MMU LUT entry 289 low
    volatile uint32_t LUT289H;  // [read-write] Graphic MMU LUT entry 289 high
    volatile uint32_t LUT290L;  // [read-write] Graphic MMU LUT entry 290 low
    volatile uint32_t LUT290H;  // [read-write] Graphic MMU LUT entry 290 high
    volatile uint32_t LUT291L;  // [read-write] Graphic MMU LUT entry 291 low
    volatile uint32_t LUT291H;  // [read-write] Graphic MMU LUT entry 291 high
    volatile uint32_t LUT292L;  // [read-write] Graphic MMU LUT entry 292 low
    volatile uint32_t LUT292H;  // [read-write] Graphic MMU LUT entry 292 high
    volatile uint32_t LUT293L;  // [read-write] Graphic MMU LUT entry 293 low
    volatile uint32_t LUT293H;  // [read-write] Graphic MMU LUT entry 293 high
    volatile uint32_t LUT294L;  // [read-write] Graphic MMU LUT entry 294 low
    volatile uint32_t LUT294H;  // [read-write] Graphic MMU LUT entry 294 high
    volatile uint32_t LUT295L;  // [read-write] Graphic MMU LUT entry 295 low
    volatile uint32_t LUT295H;  // [read-write] Graphic MMU LUT entry 295 high
    volatile uint32_t LUT296L;  // [read-write] Graphic MMU LUT entry 296 low
    volatile uint32_t LUT296H;  // [read-write] Graphic MMU LUT entry 296 high
    volatile uint32_t LUT297L;  // [read-write] Graphic MMU LUT entry 297 low
    volatile uint32_t LUT297H;  // [read-write] Graphic MMU LUT entry 297 high
    volatile uint32_t LUT298L;  // [read-write] Graphic MMU LUT entry 298 low
    volatile uint32_t LUT298H;  // [read-write] Graphic MMU LUT entry 298 high
    volatile uint32_t LUT299L;  // [read-write] Graphic MMU LUT entry 299 low
    volatile uint32_t LUT299H;  // [read-write] Graphic MMU LUT entry 299 high
    volatile uint32_t LUT300L;  // [read-write] Graphic MMU LUT entry 300 low
    volatile uint32_t LUT300H;  // [read-write] Graphic MMU LUT entry 300 high
    volatile uint32_t LUT301L;  // [read-write] Graphic MMU LUT entry 301 low
    volatile uint32_t LUT301H;  // [read-write] Graphic MMU LUT entry 301 high
    volatile uint32_t LUT302L;  // [read-write] Graphic MMU LUT entry 302 low
    volatile uint32_t LUT302H;  // [read-write] Graphic MMU LUT entry 302 high
    volatile uint32_t LUT303L;  // [read-write] Graphic MMU LUT entry 303 low
    volatile uint32_t LUT303H;  // [read-write] Graphic MMU LUT entry 303 high
    volatile uint32_t LUT304L;  // [read-write] Graphic MMU LUT entry 304 low
    volatile uint32_t LUT304H;  // [read-write] Graphic MMU LUT entry 304 high
    volatile uint32_t LUT305L;  // [read-write] Graphic MMU LUT entry 305 low
    volatile uint32_t LUT305H;  // [read-write] Graphic MMU LUT entry 305 high
    volatile uint32_t LUT306L;  // [read-write] Graphic MMU LUT entry 306 low
    volatile uint32_t LUT306H;  // [read-write] Graphic MMU LUT entry 306 high
    volatile uint32_t LUT307L;  // [read-write] Graphic MMU LUT entry 307 low
    volatile uint32_t LUT307H;  // [read-write] Graphic MMU LUT entry 307 high
    volatile uint32_t LUT308L;  // [read-write] Graphic MMU LUT entry 308 low
    volatile uint32_t LUT308H;  // [read-write] Graphic MMU LUT entry 308 high
    volatile uint32_t LUT309L;  // [read-write] Graphic MMU LUT entry 309 low
    volatile uint32_t LUT309H;  // [read-write] Graphic MMU LUT entry 309 high
    volatile uint32_t LUT310L;  // [read-write] Graphic MMU LUT entry 310 low
    volatile uint32_t LUT310H;  // [read-write] Graphic MMU LUT entry 310 high
    volatile uint32_t LUT311L;  // [read-write] Graphic MMU LUT entry 311 low
    volatile uint32_t LUT311H;  // [read-write] Graphic MMU LUT entry 311 high
    volatile uint32_t LUT312L;  // [read-write] Graphic MMU LUT entry 312 low
    volatile uint32_t LUT312H;  // [read-write] Graphic MMU LUT entry 312 high
    volatile uint32_t LUT313L;  // [read-write] Graphic MMU LUT entry 313 low
    volatile uint32_t LUT313H;  // [read-write] Graphic MMU LUT entry 313 high
    volatile uint32_t LUT314L;  // [read-write] Graphic MMU LUT entry 314 low
    volatile uint32_t LUT314H;  // [read-write] Graphic MMU LUT entry 314 high
    volatile uint32_t LUT315L;  // [read-write] Graphic MMU LUT entry 315 low
    volatile uint32_t LUT315H;  // [read-write] Graphic MMU LUT entry 315 high
    volatile uint32_t LUT316L;  // [read-write] Graphic MMU LUT entry 316 low
    volatile uint32_t LUT316H;  // [read-write] Graphic MMU LUT entry 316 high
    volatile uint32_t LUT317L;  // [read-write] Graphic MMU LUT entry 317 low
    volatile uint32_t LUT317H;  // [read-write] Graphic MMU LUT entry 317 high
    volatile uint32_t LUT318L;  // [read-write] Graphic MMU LUT entry 318 low
    volatile uint32_t LUT318H;  // [read-write] Graphic MMU LUT entry 318 high
    volatile uint32_t LUT319L;  // [read-write] Graphic MMU LUT entry 319 low
    volatile uint32_t LUT319H;  // [read-write] Graphic MMU LUT entry 319 high
    volatile uint32_t LUT320L;  // [read-write] Graphic MMU LUT entry 320 low
    volatile uint32_t LUT320H;  // [read-write] Graphic MMU LUT entry 320 high
    volatile uint32_t LUT321L;  // [read-write] Graphic MMU LUT entry 321 low
    volatile uint32_t LUT321H;  // [read-write] Graphic MMU LUT entry 321 high
    volatile uint32_t LUT322L;  // [read-write] Graphic MMU LUT entry 322 low
    volatile uint32_t LUT322H;  // [read-write] Graphic MMU LUT entry 322 high
    volatile uint32_t LUT323L;  // [read-write] Graphic MMU LUT entry 323 low
    volatile uint32_t LUT323H;  // [read-write] Graphic MMU LUT entry 323 high
    volatile uint32_t LUT324L;  // [read-write] Graphic MMU LUT entry 324 low
    volatile uint32_t LUT324H;  // [read-write] Graphic MMU LUT entry 324 high
    volatile uint32_t LUT325L;  // [read-write] Graphic MMU LUT entry 325 low
    volatile uint32_t LUT325H;  // [read-write] Graphic MMU LUT entry 325 high
    volatile uint32_t LUT326L;  // [read-write] Graphic MMU LUT entry 326 low
    volatile uint32_t LUT326H;  // [read-write] Graphic MMU LUT entry 326 high
    volatile uint32_t LUT327L;  // [read-write] Graphic MMU LUT entry 327 low
    volatile uint32_t LUT327H;  // [read-write] Graphic MMU LUT entry 327 high
    volatile uint32_t LUT328L;  // [read-write] Graphic MMU LUT entry 328 low
    volatile uint32_t LUT328H;  // [read-write] Graphic MMU LUT entry 328 high
    volatile uint32_t LUT329L;  // [read-write] Graphic MMU LUT entry 329 low
    volatile uint32_t LUT329H;  // [read-write] Graphic MMU LUT entry 329 high
    volatile uint32_t LUT330L;  // [read-write] Graphic MMU LUT entry 330 low
    volatile uint32_t LUT330H;  // [read-write] Graphic MMU LUT entry 330 high
    volatile uint32_t LUT331L;  // [read-write] Graphic MMU LUT entry 331 low
    volatile uint32_t LUT331H;  // [read-write] Graphic MMU LUT entry 331 high
    volatile uint32_t LUT332L;  // [read-write] Graphic MMU LUT entry 332 low
    volatile uint32_t LUT332H;  // [read-write] Graphic MMU LUT entry 332 high
    volatile uint32_t LUT333L;  // [read-write] Graphic MMU LUT entry 333 low
    volatile uint32_t LUT333H;  // [read-write] Graphic MMU LUT entry 333 high
    volatile uint32_t LUT334L;  // [read-write] Graphic MMU LUT entry 334 low
    volatile uint32_t LUT334H;  // [read-write] Graphic MMU LUT entry 334 high
    volatile uint32_t LUT335L;  // [read-write] Graphic MMU LUT entry 335 low
    volatile uint32_t LUT335H;  // [read-write] Graphic MMU LUT entry 335 high
    volatile uint32_t LUT336L;  // [read-write] Graphic MMU LUT entry 336 low
    volatile uint32_t LUT336H;  // [read-write] Graphic MMU LUT entry 336 high
    volatile uint32_t LUT337L;  // [read-write] Graphic MMU LUT entry 337 low
    volatile uint32_t LUT337H;  // [read-write] Graphic MMU LUT entry 337 high
    volatile uint32_t LUT338L;  // [read-write] Graphic MMU LUT entry 338 low
    volatile uint32_t LUT338H;  // [read-write] Graphic MMU LUT entry 338 high
    volatile uint32_t LUT339L;  // [read-write] Graphic MMU LUT entry 339 low
    volatile uint32_t LUT339H;  // [read-write] Graphic MMU LUT entry 339 high
    volatile uint32_t LUT340L;  // [read-write] Graphic MMU LUT entry 340 low
    volatile uint32_t LUT340H;  // [read-write] Graphic MMU LUT entry 340 high
    volatile uint32_t LUT341L;  // [read-write] Graphic MMU LUT entry 341 low
    volatile uint32_t LUT341H;  // [read-write] Graphic MMU LUT entry 341 high
    volatile uint32_t LUT342L;  // [read-write] Graphic MMU LUT entry 342 low
    volatile uint32_t LUT342H;  // [read-write] Graphic MMU LUT entry 342 high
    volatile uint32_t LUT343L;  // [read-write] Graphic MMU LUT entry 343 low
    volatile uint32_t LUT343H;  // [read-write] Graphic MMU LUT entry 343 high
    volatile uint32_t LUT344L;  // [read-write] Graphic MMU LUT entry 344 low
    volatile uint32_t LUT344H;  // [read-write] Graphic MMU LUT entry 344 high
    volatile uint32_t LUT345L;  // [read-write] Graphic MMU LUT entry 345 low
    volatile uint32_t LUT345H;  // [read-write] Graphic MMU LUT entry 345 high
    volatile uint32_t LUT346L;  // [read-write] Graphic MMU LUT entry 346 low
    volatile uint32_t LUT346H;  // [read-write] Graphic MMU LUT entry 346 high
    volatile uint32_t LUT347L;  // [read-write] Graphic MMU LUT entry 347 low
    volatile uint32_t LUT347H;  // [read-write] Graphic MMU LUT entry 347 high
    volatile uint32_t LUT348L;  // [read-write] Graphic MMU LUT entry 348 low
    volatile uint32_t LUT348H;  // [read-write] Graphic MMU LUT entry 348 high
    volatile uint32_t LUT349L;  // [read-write] Graphic MMU LUT entry 349 low
    volatile uint32_t LUT349H;  // [read-write] Graphic MMU LUT entry 349 high
    volatile uint32_t LUT350L;  // [read-write] Graphic MMU LUT entry 350 low
    volatile uint32_t LUT350H;  // [read-write] Graphic MMU LUT entry 350 high
    volatile uint32_t LUT351L;  // [read-write] Graphic MMU LUT entry 351 low
    volatile uint32_t LUT351H;  // [read-write] Graphic MMU LUT entry 351 high
    volatile uint32_t LUT352L;  // [read-write] Graphic MMU LUT entry 352 low
    volatile uint32_t LUT352H;  // [read-write] Graphic MMU LUT entry 352 high
    volatile uint32_t LUT353L;  // [read-write] Graphic MMU LUT entry 353 low
    volatile uint32_t LUT353H;  // [read-write] Graphic MMU LUT entry 353 high
    volatile uint32_t LUT354L;  // [read-write] Graphic MMU LUT entry 354 low
    volatile uint32_t LUT354H;  // [read-write] Graphic MMU LUT entry 354 high
    volatile uint32_t LUT355L;  // [read-write] Graphic MMU LUT entry 355 low
    volatile uint32_t LUT355H;  // [read-write] Graphic MMU LUT entry 355 high
    volatile uint32_t LUT356L;  // [read-write] Graphic MMU LUT entry 356 low
    volatile uint32_t LUT356H;  // [read-write] Graphic MMU LUT entry 356 high
    volatile uint32_t LUT357L;  // [read-write] Graphic MMU LUT entry 357 low
    volatile uint32_t LUT357H;  // [read-write] Graphic MMU LUT entry 357 high
    volatile uint32_t LUT358L;  // [read-write] Graphic MMU LUT entry 358 low
    volatile uint32_t LUT358H;  // [read-write] Graphic MMU LUT entry 358 high
    volatile uint32_t LUT359L;  // [read-write] Graphic MMU LUT entry 359 low
    volatile uint32_t LUT359H;  // [read-write] Graphic MMU LUT entry 359 high
    volatile uint32_t LUT360L;  // [read-write] Graphic MMU LUT entry 360 low
    volatile uint32_t LUT360H;  // [read-write] Graphic MMU LUT entry 360 high
    volatile uint32_t LUT361L;  // [read-write] Graphic MMU LUT entry 361 low
    volatile uint32_t LUT361H;  // [read-write] Graphic MMU LUT entry 361 high
    volatile uint32_t LUT362L;  // [read-write] Graphic MMU LUT entry 362 low
    volatile uint32_t LUT362H;  // [read-write] Graphic MMU LUT entry 362 high
    volatile uint32_t LUT363L;  // [read-write] Graphic MMU LUT entry 363 low
    volatile uint32_t LUT363H;  // [read-write] Graphic MMU LUT entry 363 high
    volatile uint32_t LUT364L;  // [read-write] Graphic MMU LUT entry 364 low
    volatile uint32_t LUT364H;  // [read-write] Graphic MMU LUT entry 364 high
    volatile uint32_t LUT365L;  // [read-write] Graphic MMU LUT entry 365 low
    volatile uint32_t LUT365H;  // [read-write] Graphic MMU LUT entry 365 high
    volatile uint32_t LUT366L;  // [read-write] Graphic MMU LUT entry 366 low
    volatile uint32_t LUT366H;  // [read-write] Graphic MMU LUT entry 366 high
    volatile uint32_t LUT367L;  // [read-write] Graphic MMU LUT entry 367 low
    volatile uint32_t LUT367H;  // [read-write] Graphic MMU LUT entry 367 high
    volatile uint32_t LUT368L;  // [read-write] Graphic MMU LUT entry 368 low
    volatile uint32_t LUT368H;  // [read-write] Graphic MMU LUT entry 368 high
    volatile uint32_t LUT369L;  // [read-write] Graphic MMU LUT entry 369 low
    volatile uint32_t LUT369H;  // [read-write] Graphic MMU LUT entry 369 high
    volatile uint32_t LUT370L;  // [read-write] Graphic MMU LUT entry 370 low
    volatile uint32_t LUT370H;  // [read-write] Graphic MMU LUT entry 370 high
    volatile uint32_t LUT371L;  // [read-write] Graphic MMU LUT entry 371 low
    volatile uint32_t LUT371H;  // [read-write] Graphic MMU LUT entry 371 high
    volatile uint32_t LUT372L;  // [read-write] Graphic MMU LUT entry 372 low
    volatile uint32_t LUT372H;  // [read-write] Graphic MMU LUT entry 372 high
    volatile uint32_t LUT373L;  // [read-write] Graphic MMU LUT entry 373 low
    volatile uint32_t LUT373H;  // [read-write] Graphic MMU LUT entry 373 high
    volatile uint32_t LUT374L;  // [read-write] Graphic MMU LUT entry 374 low
    volatile uint32_t LUT374H;  // [read-write] Graphic MMU LUT entry 374 high
    volatile uint32_t LUT375L;  // [read-write] Graphic MMU LUT entry 375 low
    volatile uint32_t LUT375H;  // [read-write] Graphic MMU LUT entry 375 high
    volatile uint32_t LUT376L;  // [read-write] Graphic MMU LUT entry 376 low
    volatile uint32_t LUT376H;  // [read-write] Graphic MMU LUT entry 376 high
    volatile uint32_t LUT377L;  // [read-write] Graphic MMU LUT entry 377 low
    volatile uint32_t LUT377H;  // [read-write] Graphic MMU LUT entry 377 high
    volatile uint32_t LUT378L;  // [read-write] Graphic MMU LUT entry 378 low
    volatile uint32_t LUT378H;  // [read-write] Graphic MMU LUT entry 378 high
    volatile uint32_t LUT379L;  // [read-write] Graphic MMU LUT entry 379 low
    volatile uint32_t LUT379H;  // [read-write] Graphic MMU LUT entry 379 high
    volatile uint32_t LUT380L;  // [read-write] Graphic MMU LUT entry 380 low
    volatile uint32_t LUT380H;  // [read-write] Graphic MMU LUT entry 380 high
    volatile uint32_t LUT381L;  // [read-write] Graphic MMU LUT entry 381 low
    volatile uint32_t LUT381H;  // [read-write] Graphic MMU LUT entry 381 high
    volatile uint32_t LUT382L;  // [read-write] Graphic MMU LUT entry 382 low
    volatile uint32_t LUT382H;  // [read-write] Graphic MMU LUT entry 382 high
    volatile uint32_t LUT383L;  // [read-write] Graphic MMU LUT entry 383 low
    volatile uint32_t LUT383H;  // [read-write] Graphic MMU LUT entry 383 high
    volatile uint32_t LUT384L;  // [read-write] Graphic MMU LUT entry 384 low
    volatile uint32_t LUT384H;  // [read-write] Graphic MMU LUT entry 384 high
    volatile uint32_t LUT385L;  // [read-write] Graphic MMU LUT entry 385 low
    volatile uint32_t LUT385H;  // [read-write] Graphic MMU LUT entry 385 high
    volatile uint32_t LUT386L;  // [read-write] Graphic MMU LUT entry 386 low
    volatile uint32_t LUT386H;  // [read-write] Graphic MMU LUT entry 386 high
    volatile uint32_t LUT387L;  // [read-write] Graphic MMU LUT entry 387 low
    volatile uint32_t LUT387H;  // [read-write] Graphic MMU LUT entry 387 high
    volatile uint32_t LUT388L;  // [read-write] Graphic MMU LUT entry 388 low
    volatile uint32_t LUT388H;  // [read-write] Graphic MMU LUT entry 388 high
    volatile uint32_t LUT389L;  // [read-write] Graphic MMU LUT entry 389 low
    volatile uint32_t LUT389H;  // [read-write] Graphic MMU LUT entry 389 high
    volatile uint32_t LUT390L;  // [read-write] Graphic MMU LUT entry 390 low
    volatile uint32_t LUT390H;  // [read-write] Graphic MMU LUT entry 390 high
    volatile uint32_t LUT391L;  // [read-write] Graphic MMU LUT entry 391 low
    volatile uint32_t LUT391H;  // [read-write] Graphic MMU LUT entry 391 high
    volatile uint32_t LUT392L;  // [read-write] Graphic MMU LUT entry 392 low
    volatile uint32_t LUT392H;  // [read-write] Graphic MMU LUT entry 392 high
    volatile uint32_t LUT393L;  // [read-write] Graphic MMU LUT entry 393 low
    volatile uint32_t LUT393H;  // [read-write] Graphic MMU LUT entry 393 high
    volatile uint32_t LUT394L;  // [read-write] Graphic MMU LUT entry 394 low
    volatile uint32_t LUT394H;  // [read-write] Graphic MMU LUT entry 394 high
    volatile uint32_t LUT395L;  // [read-write] Graphic MMU LUT entry 395 low
    volatile uint32_t LUT395H;  // [read-write] Graphic MMU LUT entry 395 high
    volatile uint32_t LUT396L;  // [read-write] Graphic MMU LUT entry 396 low
    volatile uint32_t LUT396H;  // [read-write] Graphic MMU LUT entry 396 high
    volatile uint32_t LUT397L;  // [read-write] Graphic MMU LUT entry 397 low
    volatile uint32_t LUT397H;  // [read-write] Graphic MMU LUT entry 397 high
    volatile uint32_t LUT398L;  // [read-write] Graphic MMU LUT entry 398 low
    volatile uint32_t LUT398H;  // [read-write] Graphic MMU LUT entry 398 high
    volatile uint32_t LUT399L;  // [read-write] Graphic MMU LUT entry 399 low
    volatile uint32_t LUT399H;  // [read-write] Graphic MMU LUT entry 399 high
    volatile uint32_t LUT400L;  // [read-write] Graphic MMU LUT entry 400 low
    volatile uint32_t LUT400H;  // [read-write] Graphic MMU LUT entry 400 high
    volatile uint32_t LUT401L;  // [read-write] Graphic MMU LUT entry 401 low
    volatile uint32_t LUT401H;  // [read-write] Graphic MMU LUT entry 401 high
    volatile uint32_t LUT402L;  // [read-write] Graphic MMU LUT entry 402 low
    volatile uint32_t LUT402H;  // [read-write] Graphic MMU LUT entry 402 high
    volatile uint32_t LUT403L;  // [read-write] Graphic MMU LUT entry 403 low
    volatile uint32_t LUT403H;  // [read-write] Graphic MMU LUT entry 403 high
    volatile uint32_t LUT404L;  // [read-write] Graphic MMU LUT entry 404 low
    volatile uint32_t LUT404H;  // [read-write] Graphic MMU LUT entry 404 high
    volatile uint32_t LUT405L;  // [read-write] Graphic MMU LUT entry 405 low
    volatile uint32_t LUT405H;  // [read-write] Graphic MMU LUT entry 405 high
    volatile uint32_t LUT406L;  // [read-write] Graphic MMU LUT entry 406 low
    volatile uint32_t LUT406H;  // [read-write] Graphic MMU LUT entry 406 high
    volatile uint32_t LUT407L;  // [read-write] Graphic MMU LUT entry 407 low
    volatile uint32_t LUT407H;  // [read-write] Graphic MMU LUT entry 407 high
    volatile uint32_t LUT408L;  // [read-write] Graphic MMU LUT entry 408 low
    volatile uint32_t LUT408H;  // [read-write] Graphic MMU LUT entry 408 high
    volatile uint32_t LUT409L;  // [read-write] Graphic MMU LUT entry 409 low
    volatile uint32_t LUT409H;  // [read-write] Graphic MMU LUT entry 409 high
    volatile uint32_t LUT410L;  // [read-write] Graphic MMU LUT entry 410 low
    volatile uint32_t LUT410H;  // [read-write] Graphic MMU LUT entry 410 high
    volatile uint32_t LUT411L;  // [read-write] Graphic MMU LUT entry 411 low
    volatile uint32_t LUT411H;  // [read-write] Graphic MMU LUT entry 411 high
    volatile uint32_t LUT412L;  // [read-write] Graphic MMU LUT entry 412 low
    volatile uint32_t LUT412H;  // [read-write] Graphic MMU LUT entry 412 high
    volatile uint32_t LUT413L;  // [read-write] Graphic MMU LUT entry 413 low
    volatile uint32_t LUT413H;  // [read-write] Graphic MMU LUT entry 413 high
    volatile uint32_t LUT414L;  // [read-write] Graphic MMU LUT entry 414 low
    volatile uint32_t LUT414H;  // [read-write] Graphic MMU LUT entry 414 high
    volatile uint32_t LUT415L;  // [read-write] Graphic MMU LUT entry 415 low
    volatile uint32_t LUT415H;  // [read-write] Graphic MMU LUT entry 415 high
    volatile uint32_t LUT416L;  // [read-write] Graphic MMU LUT entry 416 low
    volatile uint32_t LUT416H;  // [read-write] Graphic MMU LUT entry 416 high
    volatile uint32_t LUT417L;  // [read-write] Graphic MMU LUT entry 417 low
    volatile uint32_t LUT417H;  // [read-write] Graphic MMU LUT entry 417 high
    volatile uint32_t LUT418L;  // [read-write] Graphic MMU LUT entry 418 low
    volatile uint32_t LUT418H;  // [read-write] Graphic MMU LUT entry 418 high
    volatile uint32_t LUT419L;  // [read-write] Graphic MMU LUT entry 419 low
    volatile uint32_t LUT419H;  // [read-write] Graphic MMU LUT entry 419 high
    volatile uint32_t LUT420L;  // [read-write] Graphic MMU LUT entry 420 low
    volatile uint32_t LUT420H;  // [read-write] Graphic MMU LUT entry 420 high
    volatile uint32_t LUT421L;  // [read-write] Graphic MMU LUT entry 421 low
    volatile uint32_t LUT421H;  // [read-write] Graphic MMU LUT entry 421 high
    volatile uint32_t LUT422L;  // [read-write] Graphic MMU LUT entry 422 low
    volatile uint32_t LUT422H;  // [read-write] Graphic MMU LUT entry 422 high
    volatile uint32_t LUT423L;  // [read-write] Graphic MMU LUT entry 423 low
    volatile uint32_t LUT423H;  // [read-write] Graphic MMU LUT entry 423 high
    volatile uint32_t LUT424L;  // [read-write] Graphic MMU LUT entry 424 low
    volatile uint32_t LUT424H;  // [read-write] Graphic MMU LUT entry 424 high
    volatile uint32_t LUT425L;  // [read-write] Graphic MMU LUT entry 425 low
    volatile uint32_t LUT425H;  // [read-write] Graphic MMU LUT entry 425 high
    volatile uint32_t LUT426L;  // [read-write] Graphic MMU LUT entry 426 low
    volatile uint32_t LUT426H;  // [read-write] Graphic MMU LUT entry 426 high
    volatile uint32_t LUT427L;  // [read-write] Graphic MMU LUT entry 427 low
    volatile uint32_t LUT427H;  // [read-write] Graphic MMU LUT entry 427 high
    volatile uint32_t LUT428L;  // [read-write] Graphic MMU LUT entry 428 low
    volatile uint32_t LUT428H;  // [read-write] Graphic MMU LUT entry 428 high
    volatile uint32_t LUT429L;  // [read-write] Graphic MMU LUT entry 429 low
    volatile uint32_t LUT429H;  // [read-write] Graphic MMU LUT entry 429 high
    volatile uint32_t LUT430L;  // [read-write] Graphic MMU LUT entry 430 low
    volatile uint32_t LUT430H;  // [read-write] Graphic MMU LUT entry 430 high
    volatile uint32_t LUT431L;  // [read-write] Graphic MMU LUT entry 431 low
    volatile uint32_t LUT431H;  // [read-write] Graphic MMU LUT entry 431 high
    volatile uint32_t LUT432L;  // [read-write] Graphic MMU LUT entry 432 low
    volatile uint32_t LUT432H;  // [read-write] Graphic MMU LUT entry 432 high
    volatile uint32_t LUT433L;  // [read-write] Graphic MMU LUT entry 433 low
    volatile uint32_t LUT433H;  // [read-write] Graphic MMU LUT entry 433 high
    volatile uint32_t LUT434L;  // [read-write] Graphic MMU LUT entry 434 low
    volatile uint32_t LUT434H;  // [read-write] Graphic MMU LUT entry 434 high
    volatile uint32_t LUT435L;  // [read-write] Graphic MMU LUT entry 435 low
    volatile uint32_t LUT435H;  // [read-write] Graphic MMU LUT entry 435 high
    volatile uint32_t LUT436L;  // [read-write] Graphic MMU LUT entry 436 low
    volatile uint32_t LUT436H;  // [read-write] Graphic MMU LUT entry 436 high
    volatile uint32_t LUT437L;  // [read-write] Graphic MMU LUT entry 437 low
    volatile uint32_t LUT437H;  // [read-write] Graphic MMU LUT entry 437 high
    volatile uint32_t LUT438L;  // [read-write] Graphic MMU LUT entry 438 low
    volatile uint32_t LUT438H;  // [read-write] Graphic MMU LUT entry 438 high
    volatile uint32_t LUT439L;  // [read-write] Graphic MMU LUT entry 439 low
    volatile uint32_t LUT439H;  // [read-write] Graphic MMU LUT entry 439 high
    volatile uint32_t LUT440L;  // [read-write] Graphic MMU LUT entry 440 low
    volatile uint32_t LUT440H;  // [read-write] Graphic MMU LUT entry 440 high
    volatile uint32_t LUT441L;  // [read-write] Graphic MMU LUT entry 441 low
    volatile uint32_t LUT441H;  // [read-write] Graphic MMU LUT entry 441 high
    volatile uint32_t LUT442L;  // [read-write] Graphic MMU LUT entry 442 low
    volatile uint32_t LUT442H;  // [read-write] Graphic MMU LUT entry 442 high
    volatile uint32_t LUT443L;  // [read-write] Graphic MMU LUT entry 443 low
    volatile uint32_t LUT443H;  // [read-write] Graphic MMU LUT entry 443 high
    volatile uint32_t LUT444L;  // [read-write] Graphic MMU LUT entry 444 low
    volatile uint32_t LUT444H;  // [read-write] Graphic MMU LUT entry 444 high
    volatile uint32_t LUT445L;  // [read-write] Graphic MMU LUT entry 445 low
    volatile uint32_t LUT445H;  // [read-write] Graphic MMU LUT entry 445 high
    volatile uint32_t LUT446L;  // [read-write] Graphic MMU LUT entry 446 low
    volatile uint32_t LUT446H;  // [read-write] Graphic MMU LUT entry 446 high
    volatile uint32_t LUT447L;  // [read-write] Graphic MMU LUT entry 447 low
    volatile uint32_t LUT447H;  // [read-write] Graphic MMU LUT entry 447 high
    volatile uint32_t LUT448L;  // [read-write] Graphic MMU LUT entry 448 low
    volatile uint32_t LUT448H;  // [read-write] Graphic MMU LUT entry 448 high
    volatile uint32_t LUT449L;  // [read-write] Graphic MMU LUT entry 449 low
    volatile uint32_t LUT449H;  // [read-write] Graphic MMU LUT entry 449 high
    volatile uint32_t LUT450L;  // [read-write] Graphic MMU LUT entry 450 low
    volatile uint32_t LUT450H;  // [read-write] Graphic MMU LUT entry 450 high
    volatile uint32_t LUT451L;  // [read-write] Graphic MMU LUT entry 451 low
    volatile uint32_t LUT451H;  // [read-write] Graphic MMU LUT entry 451 high
    volatile uint32_t LUT452L;  // [read-write] Graphic MMU LUT entry 452 low
    volatile uint32_t LUT452H;  // [read-write] Graphic MMU LUT entry 452 high
    volatile uint32_t LUT453L;  // [read-write] Graphic MMU LUT entry 453 low
    volatile uint32_t LUT453H;  // [read-write] Graphic MMU LUT entry 453 high
    volatile uint32_t LUT454L;  // [read-write] Graphic MMU LUT entry 454 low
    volatile uint32_t LUT454H;  // [read-write] Graphic MMU LUT entry 454 high
    volatile uint32_t LUT455L;  // [read-write] Graphic MMU LUT entry 455 low
    volatile uint32_t LUT455H;  // [read-write] Graphic MMU LUT entry 455 high
    volatile uint32_t LUT456L;  // [read-write] Graphic MMU LUT entry 456 low
    volatile uint32_t LUT456H;  // [read-write] Graphic MMU LUT entry 456 high
    volatile uint32_t LUT457L;  // [read-write] Graphic MMU LUT entry 457 low
    volatile uint32_t LUT457H;  // [read-write] Graphic MMU LUT entry 457 high
    volatile uint32_t LUT458L;  // [read-write] Graphic MMU LUT entry 458 low
    volatile uint32_t LUT458H;  // [read-write] Graphic MMU LUT entry 458 high
    volatile uint32_t LUT459L;  // [read-write] Graphic MMU LUT entry 459 low
    volatile uint32_t LUT459H;  // [read-write] Graphic MMU LUT entry 459 high
    volatile uint32_t LUT460L;  // [read-write] Graphic MMU LUT entry 460 low
    volatile uint32_t LUT460H;  // [read-write] Graphic MMU LUT entry 460 high
    volatile uint32_t LUT461L;  // [read-write] Graphic MMU LUT entry 461 low
    volatile uint32_t LUT461H;  // [read-write] Graphic MMU LUT entry 461 high
    volatile uint32_t LUT462L;  // [read-write] Graphic MMU LUT entry 462 low
    volatile uint32_t LUT462H;  // [read-write] Graphic MMU LUT entry 462 high
    volatile uint32_t LUT463L;  // [read-write] Graphic MMU LUT entry 463 low
    volatile uint32_t LUT463H;  // [read-write] Graphic MMU LUT entry 463 high
    volatile uint32_t LUT464L;  // [read-write] Graphic MMU LUT entry 464 low
    volatile uint32_t LUT464H;  // [read-write] Graphic MMU LUT entry 464 high
    volatile uint32_t LUT465L;  // [read-write] Graphic MMU LUT entry 465 low
    volatile uint32_t LUT465H;  // [read-write] Graphic MMU LUT entry 465 high
    volatile uint32_t LUT466L;  // [read-write] Graphic MMU LUT entry 466 low
    volatile uint32_t LUT466H;  // [read-write] Graphic MMU LUT entry 466 high
    volatile uint32_t LUT467L;  // [read-write] Graphic MMU LUT entry 467 low
    volatile uint32_t LUT467H;  // [read-write] Graphic MMU LUT entry 467 high
    volatile uint32_t LUT468L;  // [read-write] Graphic MMU LUT entry 468 low
    volatile uint32_t LUT468H;  // [read-write] Graphic MMU LUT entry 468 high
    volatile uint32_t LUT469L;  // [read-write] Graphic MMU LUT entry 469 low
    volatile uint32_t LUT469H;  // [read-write] Graphic MMU LUT entry 469 high
    volatile uint32_t LUT470L;  // [read-write] Graphic MMU LUT entry 470 low
    volatile uint32_t LUT470H;  // [read-write] Graphic MMU LUT entry 470 high
    volatile uint32_t LUT471L;  // [read-write] Graphic MMU LUT entry 471 low
    volatile uint32_t LUT471H;  // [read-write] Graphic MMU LUT entry 471 high
    volatile uint32_t LUT472L;  // [read-write] Graphic MMU LUT entry 472 low
    volatile uint32_t LUT472H;  // [read-write] Graphic MMU LUT entry 472 high
    volatile uint32_t LUT473L;  // [read-write] Graphic MMU LUT entry 473 low
    volatile uint32_t LUT473H;  // [read-write] Graphic MMU LUT entry 473 high
    volatile uint32_t LUT474L;  // [read-write] Graphic MMU LUT entry 474 low
    volatile uint32_t LUT474H;  // [read-write] Graphic MMU LUT entry 474 high
    volatile uint32_t LUT475L;  // [read-write] Graphic MMU LUT entry 475 low
    volatile uint32_t LUT475H;  // [read-write] Graphic MMU LUT entry 475 high
    volatile uint32_t LUT476L;  // [read-write] Graphic MMU LUT entry 476 low
    volatile uint32_t LUT476H;  // [read-write] Graphic MMU LUT entry 476 high
    volatile uint32_t LUT477L;  // [read-write] Graphic MMU LUT entry 477 low
    volatile uint32_t LUT477H;  // [read-write] Graphic MMU LUT entry 477 high
    volatile uint32_t LUT478L;  // [read-write] Graphic MMU LUT entry 478 low
    volatile uint32_t LUT478H;  // [read-write] Graphic MMU LUT entry 478 high
    volatile uint32_t LUT479L;  // [read-write] Graphic MMU LUT entry 479 low
    volatile uint32_t LUT479H;  // [read-write] Graphic MMU LUT entry 479 high
    volatile uint32_t LUT480L;  // [read-write] Graphic MMU LUT entry 480 low
    volatile uint32_t LUT480H;  // [read-write] Graphic MMU LUT entry 480 high
    volatile uint32_t LUT481L;  // [read-write] Graphic MMU LUT entry 481 low
    volatile uint32_t LUT481H;  // [read-write] Graphic MMU LUT entry 481 high
    volatile uint32_t LUT482L;  // [read-write] Graphic MMU LUT entry 482 low
    volatile uint32_t LUT482H;  // [read-write] Graphic MMU LUT entry 482 high
    volatile uint32_t LUT483L;  // [read-write] Graphic MMU LUT entry 483 low
    volatile uint32_t LUT483H;  // [read-write] Graphic MMU LUT entry 483 high
    volatile uint32_t LUT484L;  // [read-write] Graphic MMU LUT entry 484 low
    volatile uint32_t LUT484H;  // [read-write] Graphic MMU LUT entry 484 high
    volatile uint32_t LUT485L;  // [read-write] Graphic MMU LUT entry 485 low
    volatile uint32_t LUT485H;  // [read-write] Graphic MMU LUT entry 485 high
    volatile uint32_t LUT486L;  // [read-write] Graphic MMU LUT entry 486 low
    volatile uint32_t LUT486H;  // [read-write] Graphic MMU LUT entry 486 high
    volatile uint32_t LUT487L;  // [read-write] Graphic MMU LUT entry 487 low
    volatile uint32_t LUT487H;  // [read-write] Graphic MMU LUT entry 487 high
    volatile uint32_t LUT488L;  // [read-write] Graphic MMU LUT entry 488 low
    volatile uint32_t LUT488H;  // [read-write] Graphic MMU LUT entry 488 high
    volatile uint32_t LUT489L;  // [read-write] Graphic MMU LUT entry 489 low
    volatile uint32_t LUT489H;  // [read-write] Graphic MMU LUT entry 489 high
    volatile uint32_t LUT490L;  // [read-write] Graphic MMU LUT entry 490 low
    volatile uint32_t LUT490H;  // [read-write] Graphic MMU LUT entry 490 high
    volatile uint32_t LUT491L;  // [read-write] Graphic MMU LUT entry 491 low
    volatile uint32_t LUT491H;  // [read-write] Graphic MMU LUT entry 491 high
    volatile uint32_t LUT492L;  // [read-write] Graphic MMU LUT entry 492 low
    volatile uint32_t LUT492H;  // [read-write] Graphic MMU LUT entry 492 high
    volatile uint32_t LUT493L;  // [read-write] Graphic MMU LUT entry 493 low
    volatile uint32_t LUT493H;  // [read-write] Graphic MMU LUT entry 493 high
    volatile uint32_t LUT494L;  // [read-write] Graphic MMU LUT entry 494 low
    volatile uint32_t LUT494H;  // [read-write] Graphic MMU LUT entry 494 high
    volatile uint32_t LUT495L;  // [read-write] Graphic MMU LUT entry 495 low
    volatile uint32_t LUT495H;  // [read-write] Graphic MMU LUT entry 495 high
    volatile uint32_t LUT496L;  // [read-write] Graphic MMU LUT entry 496 low
    volatile uint32_t LUT496H;  // [read-write] Graphic MMU LUT entry 496 high
    volatile uint32_t LUT497L;  // [read-write] Graphic MMU LUT entry 497 low
    volatile uint32_t LUT497H;  // [read-write] Graphic MMU LUT entry 497 high
    volatile uint32_t LUT498L;  // [read-write] Graphic MMU LUT entry 498 low
    volatile uint32_t LUT498H;  // [read-write] Graphic MMU LUT entry 498 high
    volatile uint32_t LUT499L;  // [read-write] Graphic MMU LUT entry 499 low
    volatile uint32_t LUT499H;  // [read-write] Graphic MMU LUT entry 499 high
    volatile uint32_t LUT500L;  // [read-write] Graphic MMU LUT entry 500 low
    volatile uint32_t LUT500H;  // [read-write] Graphic MMU LUT entry 500 high
    volatile uint32_t LUT501L;  // [read-write] Graphic MMU LUT entry 501 low
    volatile uint32_t LUT501H;  // [read-write] Graphic MMU LUT entry 501 high
    volatile uint32_t LUT502L;  // [read-write] Graphic MMU LUT entry 502 low
    volatile uint32_t LUT502H;  // [read-write] Graphic MMU LUT entry 502 high
    volatile uint32_t LUT503L;  // [read-write] Graphic MMU LUT entry 503 low
    volatile uint32_t LUT503H;  // [read-write] Graphic MMU LUT entry 503 high
    volatile uint32_t LUT504L;  // [read-write] Graphic MMU LUT entry 504 low
    volatile uint32_t LUT504H;  // [read-write] Graphic MMU LUT entry 504 high
    volatile uint32_t LUT505L;  // [read-write] Graphic MMU LUT entry 505 low
    volatile uint32_t LUT505H;  // [read-write] Graphic MMU LUT entry 505 high
    volatile uint32_t LUT506L;  // [read-write] Graphic MMU LUT entry 506 low
    volatile uint32_t LUT506H;  // [read-write] Graphic MMU LUT entry 506 high
    volatile uint32_t LUT507L;  // [read-write] Graphic MMU LUT entry 507 low
    volatile uint32_t LUT507H;  // [read-write] Graphic MMU LUT entry 507 high
    volatile uint32_t LUT508L;  // [read-write] Graphic MMU LUT entry 508 low
    volatile uint32_t LUT508H;  // [read-write] Graphic MMU LUT entry 508 high
    volatile uint32_t LUT509L;  // [read-write] Graphic MMU LUT entry 509 low
    volatile uint32_t LUT509H;  // [read-write] Graphic MMU LUT entry 509 high
    volatile uint32_t LUT510L;  // [read-write] Graphic MMU LUT entry 510 low
    volatile uint32_t LUT510H;  // [read-write] Graphic MMU LUT entry 510 high
    volatile uint32_t LUT511L;  // [read-write] Graphic MMU LUT entry 511 low
    volatile uint32_t LUT511H;  // [read-write] Graphic MMU LUT entry 511 high
    volatile uint32_t LUT512L;  // [read-write] Graphic MMU LUT entry 512 low
    volatile uint32_t LUT512H;  // [read-write] Graphic MMU LUT entry 512 high
    volatile uint32_t LUT513L;  // [read-write] Graphic MMU LUT entry 513 low
    volatile uint32_t LUT513H;  // [read-write] Graphic MMU LUT entry 513 high
    volatile uint32_t LUT514L;  // [read-write] Graphic MMU LUT entry 514 low
    volatile uint32_t LUT514H;  // [read-write] Graphic MMU LUT entry 514 high
    volatile uint32_t LUT515L;  // [read-write] Graphic MMU LUT entry 515 low
    volatile uint32_t LUT515H;  // [read-write] Graphic MMU LUT entry 515 high
    volatile uint32_t LUT516L;  // [read-write] Graphic MMU LUT entry 516 low
    volatile uint32_t LUT516H;  // [read-write] Graphic MMU LUT entry 516 high
    volatile uint32_t LUT517L;  // [read-write] Graphic MMU LUT entry 517 low
    volatile uint32_t LUT517H;  // [read-write] Graphic MMU LUT entry 517 high
    volatile uint32_t LUT518L;  // [read-write] Graphic MMU LUT entry 518 low
    volatile uint32_t LUT518H;  // [read-write] Graphic MMU LUT entry 518 high
    volatile uint32_t LUT519L;  // [read-write] Graphic MMU LUT entry 519 low
    volatile uint32_t LUT519H;  // [read-write] Graphic MMU LUT entry 519 high
    volatile uint32_t LUT520L;  // [read-write] Graphic MMU LUT entry 520 low
    volatile uint32_t LUT520H;  // [read-write] Graphic MMU LUT entry 520 high
    volatile uint32_t LUT521L;  // [read-write] Graphic MMU LUT entry 521 low
    volatile uint32_t LUT521H;  // [read-write] Graphic MMU LUT entry 521 high
    volatile uint32_t LUT522L;  // [read-write] Graphic MMU LUT entry 522 low
    volatile uint32_t LUT522H;  // [read-write] Graphic MMU LUT entry 522 high
    volatile uint32_t LUT523L;  // [read-write] Graphic MMU LUT entry 523 low
    volatile uint32_t LUT523H;  // [read-write] Graphic MMU LUT entry 523 high
    volatile uint32_t LUT524L;  // [read-write] Graphic MMU LUT entry 524 low
    volatile uint32_t LUT524H;  // [read-write] Graphic MMU LUT entry 524 high
    volatile uint32_t LUT525L;  // [read-write] Graphic MMU LUT entry 525 low
    volatile uint32_t LUT525H;  // [read-write] Graphic MMU LUT entry 525 high
    volatile uint32_t LUT526L;  // [read-write] Graphic MMU LUT entry 526 low
    volatile uint32_t LUT526H;  // [read-write] Graphic MMU LUT entry 526 high
    volatile uint32_t LUT527L;  // [read-write] Graphic MMU LUT entry 527 low
    volatile uint32_t LUT527H;  // [read-write] Graphic MMU LUT entry 527 high
    volatile uint32_t LUT528L;  // [read-write] Graphic MMU LUT entry 528 low
    volatile uint32_t LUT528H;  // [read-write] Graphic MMU LUT entry 528 high
    volatile uint32_t LUT529L;  // [read-write] Graphic MMU LUT entry 529 low
    volatile uint32_t LUT529H;  // [read-write] Graphic MMU LUT entry 529 high
    volatile uint32_t LUT530L;  // [read-write] Graphic MMU LUT entry 530 low
    volatile uint32_t LUT530H;  // [read-write] Graphic MMU LUT entry 530 high
    volatile uint32_t LUT531L;  // [read-write] Graphic MMU LUT entry 531 low
    volatile uint32_t LUT531H;  // [read-write] Graphic MMU LUT entry 531 high
    volatile uint32_t LUT532L;  // [read-write] Graphic MMU LUT entry 532 low
    volatile uint32_t LUT532H;  // [read-write] Graphic MMU LUT entry 532 high
    volatile uint32_t LUT533L;  // [read-write] Graphic MMU LUT entry 533 low
    volatile uint32_t LUT533H;  // [read-write] Graphic MMU LUT entry 533 high
    volatile uint32_t LUT534L;  // [read-write] Graphic MMU LUT entry 534 low
    volatile uint32_t LUT534H;  // [read-write] Graphic MMU LUT entry 534 high
    volatile uint32_t LUT535L;  // [read-write] Graphic MMU LUT entry 535 low
    volatile uint32_t LUT535H;  // [read-write] Graphic MMU LUT entry 535 high
    volatile uint32_t LUT536L;  // [read-write] Graphic MMU LUT entry 536 low
    volatile uint32_t LUT536H;  // [read-write] Graphic MMU LUT entry 536 high
    volatile uint32_t LUT537L;  // [read-write] Graphic MMU LUT entry 537 low
    volatile uint32_t LUT537H;  // [read-write] Graphic MMU LUT entry 537 high
    volatile uint32_t LUT538L;  // [read-write] Graphic MMU LUT entry 538 low
    volatile uint32_t LUT538H;  // [read-write] Graphic MMU LUT entry 538 high
    volatile uint32_t LUT539L;  // [read-write] Graphic MMU LUT entry 539 low
    volatile uint32_t LUT539H;  // [read-write] Graphic MMU LUT entry 539 high
    volatile uint32_t LUT540L;  // [read-write] Graphic MMU LUT entry 540 low
    volatile uint32_t LUT540H;  // [read-write] Graphic MMU LUT entry 540 high
    volatile uint32_t LUT541L;  // [read-write] Graphic MMU LUT entry 541 low
    volatile uint32_t LUT541H;  // [read-write] Graphic MMU LUT entry 541 high
    volatile uint32_t LUT542L;  // [read-write] Graphic MMU LUT entry 542 low
    volatile uint32_t LUT542H;  // [read-write] Graphic MMU LUT entry 542 high
    volatile uint32_t LUT543L;  // [read-write] Graphic MMU LUT entry 543 low
    volatile uint32_t LUT543H;  // [read-write] Graphic MMU LUT entry 543 high
    volatile uint32_t LUT544L;  // [read-write] Graphic MMU LUT entry 544 low
    volatile uint32_t LUT544H;  // [read-write] Graphic MMU LUT entry 544 high
    volatile uint32_t LUT545L;  // [read-write] Graphic MMU LUT entry 545 low
    volatile uint32_t LUT545H;  // [read-write] Graphic MMU LUT entry 545 high
    volatile uint32_t LUT546L;  // [read-write] Graphic MMU LUT entry 546 low
    volatile uint32_t LUT546H;  // [read-write] Graphic MMU LUT entry 546 high
    volatile uint32_t LUT547L;  // [read-write] Graphic MMU LUT entry 547 low
    volatile uint32_t LUT547H;  // [read-write] Graphic MMU LUT entry 547 high
    volatile uint32_t LUT548L;  // [read-write] Graphic MMU LUT entry 548 low
    volatile uint32_t LUT548H;  // [read-write] Graphic MMU LUT entry 548 high
    volatile uint32_t LUT549L;  // [read-write] Graphic MMU LUT entry 549 low
    volatile uint32_t LUT549H;  // [read-write] Graphic MMU LUT entry 549 high
    volatile uint32_t LUT550L;  // [read-write] Graphic MMU LUT entry 550 low
    volatile uint32_t LUT550H;  // [read-write] Graphic MMU LUT entry 550 high
    volatile uint32_t LUT551L;  // [read-write] Graphic MMU LUT entry 551 low
    volatile uint32_t LUT551H;  // [read-write] Graphic MMU LUT entry 551 high
    volatile uint32_t LUT552L;  // [read-write] Graphic MMU LUT entry 552 low
    volatile uint32_t LUT552H;  // [read-write] Graphic MMU LUT entry 552 high
    volatile uint32_t LUT553L;  // [read-write] Graphic MMU LUT entry 553 low
    volatile uint32_t LUT553H;  // [read-write] Graphic MMU LUT entry 553 high
    volatile uint32_t LUT554L;  // [read-write] Graphic MMU LUT entry 554 low
    volatile uint32_t LUT554H;  // [read-write] Graphic MMU LUT entry 554 high
    volatile uint32_t LUT555L;  // [read-write] Graphic MMU LUT entry 555 low
    volatile uint32_t LUT555H;  // [read-write] Graphic MMU LUT entry 555 high
    volatile uint32_t LUT556L;  // [read-write] Graphic MMU LUT entry 556 low
    volatile uint32_t LUT556H;  // [read-write] Graphic MMU LUT entry 556 high
    volatile uint32_t LUT557L;  // [read-write] Graphic MMU LUT entry 557 low
    volatile uint32_t LUT557H;  // [read-write] Graphic MMU LUT entry 557 high
    volatile uint32_t LUT558L;  // [read-write] Graphic MMU LUT entry 558 low
    volatile uint32_t LUT558H;  // [read-write] Graphic MMU LUT entry 558 high
    volatile uint32_t LUT559L;  // [read-write] Graphic MMU LUT entry 559 low
    volatile uint32_t LUT559H;  // [read-write] Graphic MMU LUT entry 559 high
    volatile uint32_t LUT560L;  // [read-write] Graphic MMU LUT entry 560 low
    volatile uint32_t LUT560H;  // [read-write] Graphic MMU LUT entry 560 high
    volatile uint32_t LUT561L;  // [read-write] Graphic MMU LUT entry 561 low
    volatile uint32_t LUT561H;  // [read-write] Graphic MMU LUT entry 561 high
    volatile uint32_t LUT562L;  // [read-write] Graphic MMU LUT entry 562 low
    volatile uint32_t LUT562H;  // [read-write] Graphic MMU LUT entry 562 high
    volatile uint32_t LUT563L;  // [read-write] Graphic MMU LUT entry 563 low
    volatile uint32_t LUT563H;  // [read-write] Graphic MMU LUT entry 563 high
    volatile uint32_t LUT564L;  // [read-write] Graphic MMU LUT entry 564 low
    volatile uint32_t LUT564H;  // [read-write] Graphic MMU LUT entry 564 high
    volatile uint32_t LUT565L;  // [read-write] Graphic MMU LUT entry 565 low
    volatile uint32_t LUT565H;  // [read-write] Graphic MMU LUT entry 565 high
    volatile uint32_t LUT566L;  // [read-write] Graphic MMU LUT entry 566 low
    volatile uint32_t LUT566H;  // [read-write] Graphic MMU LUT entry 566 high
    volatile uint32_t LUT567L;  // [read-write] Graphic MMU LUT entry 567 low
    volatile uint32_t LUT567H;  // [read-write] Graphic MMU LUT entry 567 high
    volatile uint32_t LUT568L;  // [read-write] Graphic MMU LUT entry 568 low
    volatile uint32_t LUT568H;  // [read-write] Graphic MMU LUT entry 568 high
    volatile uint32_t LUT569L;  // [read-write] Graphic MMU LUT entry 569 low
    volatile uint32_t LUT569H;  // [read-write] Graphic MMU LUT entry 569 high
    volatile uint32_t LUT570L;  // [read-write] Graphic MMU LUT entry 570 low
    volatile uint32_t LUT570H;  // [read-write] Graphic MMU LUT entry 570 high
    volatile uint32_t LUT571L;  // [read-write] Graphic MMU LUT entry 571 low
    volatile uint32_t LUT571H;  // [read-write] Graphic MMU LUT entry 571 high
    volatile uint32_t LUT572L;  // [read-write] Graphic MMU LUT entry 572 low
    volatile uint32_t LUT572H;  // [read-write] Graphic MMU LUT entry 572 high
    volatile uint32_t LUT573L;  // [read-write] Graphic MMU LUT entry 573 low
    volatile uint32_t LUT573H;  // [read-write] Graphic MMU LUT entry 573 high
    volatile uint32_t LUT574L;  // [read-write] Graphic MMU LUT entry 574 low
    volatile uint32_t LUT574H;  // [read-write] Graphic MMU LUT entry 574 high
    volatile uint32_t LUT575L;  // [read-write] Graphic MMU LUT entry 575 low
    volatile uint32_t LUT575H;  // [read-write] Graphic MMU LUT entry 575 high
    volatile uint32_t LUT576L;  // [read-write] Graphic MMU LUT entry 576 low
    volatile uint32_t LUT576H;  // [read-write] Graphic MMU LUT entry 576 high
    volatile uint32_t LUT577L;  // [read-write] Graphic MMU LUT entry 577 low
    volatile uint32_t LUT577H;  // [read-write] Graphic MMU LUT entry 577 high
    volatile uint32_t LUT578L;  // [read-write] Graphic MMU LUT entry 578 low
    volatile uint32_t LUT578H;  // [read-write] Graphic MMU LUT entry 578 high
    volatile uint32_t LUT579L;  // [read-write] Graphic MMU LUT entry 579 low
    volatile uint32_t LUT579H;  // [read-write] Graphic MMU LUT entry 579 high
    volatile uint32_t LUT580L;  // [read-write] Graphic MMU LUT entry 580 low
    volatile uint32_t LUT580H;  // [read-write] Graphic MMU LUT entry 580 high
    volatile uint32_t LUT581L;  // [read-write] Graphic MMU LUT entry 581 low
    volatile uint32_t LUT581H;  // [read-write] Graphic MMU LUT entry 581 high
    volatile uint32_t LUT582L;  // [read-write] Graphic MMU LUT entry 582 low
    volatile uint32_t LUT582H;  // [read-write] Graphic MMU LUT entry 582 high
    volatile uint32_t LUT583L;  // [read-write] Graphic MMU LUT entry 583 low
    volatile uint32_t LUT583H;  // [read-write] Graphic MMU LUT entry 583 high
    volatile uint32_t LUT584L;  // [read-write] Graphic MMU LUT entry 584 low
    volatile uint32_t LUT584H;  // [read-write] Graphic MMU LUT entry 584 high
    volatile uint32_t LUT585L;  // [read-write] Graphic MMU LUT entry 585 low
    volatile uint32_t LUT585H;  // [read-write] Graphic MMU LUT entry 585 high
    volatile uint32_t LUT586L;  // [read-write] Graphic MMU LUT entry 586 low
    volatile uint32_t LUT586H;  // [read-write] Graphic MMU LUT entry 586 high
    volatile uint32_t LUT587L;  // [read-write] Graphic MMU LUT entry 587 low
    volatile uint32_t LUT587H;  // [read-write] Graphic MMU LUT entry 587 high
    volatile uint32_t LUT588L;  // [read-write] Graphic MMU LUT entry 588 low
    volatile uint32_t LUT588H;  // [read-write] Graphic MMU LUT entry 588 high
    volatile uint32_t LUT589L;  // [read-write] Graphic MMU LUT entry 589 low
    volatile uint32_t LUT589H;  // [read-write] Graphic MMU LUT entry 589 high
    volatile uint32_t LUT590L;  // [read-write] Graphic MMU LUT entry 590 low
    volatile uint32_t LUT590H;  // [read-write] Graphic MMU LUT entry 590 high
    volatile uint32_t LUT591L;  // [read-write] Graphic MMU LUT entry 591 low
    volatile uint32_t LUT591H;  // [read-write] Graphic MMU LUT entry 591 high
    volatile uint32_t LUT592L;  // [read-write] Graphic MMU LUT entry 592 low
    volatile uint32_t LUT592H;  // [read-write] Graphic MMU LUT entry 592 high
    volatile uint32_t LUT593L;  // [read-write] Graphic MMU LUT entry 593 low
    volatile uint32_t LUT593H;  // [read-write] Graphic MMU LUT entry 593 high
    volatile uint32_t LUT594L;  // [read-write] Graphic MMU LUT entry 594 low
    volatile uint32_t LUT594H;  // [read-write] Graphic MMU LUT entry 594 high
    volatile uint32_t LUT595L;  // [read-write] Graphic MMU LUT entry 595 low
    volatile uint32_t LUT595H;  // [read-write] Graphic MMU LUT entry 595 high
    volatile uint32_t LUT596L;  // [read-write] Graphic MMU LUT entry 596 low
    volatile uint32_t LUT596H;  // [read-write] Graphic MMU LUT entry 596 high
    volatile uint32_t LUT597L;  // [read-write] Graphic MMU LUT entry 597 low
    volatile uint32_t LUT597H;  // [read-write] Graphic MMU LUT entry 597 high
    volatile uint32_t LUT598L;  // [read-write] Graphic MMU LUT entry 598 low
    volatile uint32_t LUT598H;  // [read-write] Graphic MMU LUT entry 598 high
    volatile uint32_t LUT599L;  // [read-write] Graphic MMU LUT entry 599 low
    volatile uint32_t LUT599H;  // [read-write] Graphic MMU LUT entry 599 high
    volatile uint32_t LUT600L;  // [read-write] Graphic MMU LUT entry 600 low
    volatile uint32_t LUT600H;  // [read-write] Graphic MMU LUT entry 600 high
    volatile uint32_t LUT601L;  // [read-write] Graphic MMU LUT entry 601 low
    volatile uint32_t LUT601H;  // [read-write] Graphic MMU LUT entry 601 high
    volatile uint32_t LUT602L;  // [read-write] Graphic MMU LUT entry 602 low
    volatile uint32_t LUT602H;  // [read-write] Graphic MMU LUT entry 602 high
    volatile uint32_t LUT603L;  // [read-write] Graphic MMU LUT entry 603 low
    volatile uint32_t LUT603H;  // [read-write] Graphic MMU LUT entry 603 high
    volatile uint32_t LUT604L;  // [read-write] Graphic MMU LUT entry 604 low
    volatile uint32_t LUT604H;  // [read-write] Graphic MMU LUT entry 604 high
    volatile uint32_t LUT605L;  // [read-write] Graphic MMU LUT entry 605 low
    volatile uint32_t LUT605H;  // [read-write] Graphic MMU LUT entry 605 high
    volatile uint32_t LUT606L;  // [read-write] Graphic MMU LUT entry 606 low
    volatile uint32_t LUT606H;  // [read-write] Graphic MMU LUT entry 606 high
    volatile uint32_t LUT607L;  // [read-write] Graphic MMU LUT entry 607 low
    volatile uint32_t LUT607H;  // [read-write] Graphic MMU LUT entry 607 high
    volatile uint32_t LUT608L;  // [read-write] Graphic MMU LUT entry 608 low
    volatile uint32_t LUT608H;  // [read-write] Graphic MMU LUT entry 608 high
    volatile uint32_t LUT609L;  // [read-write] Graphic MMU LUT entry 609 low
    volatile uint32_t LUT609H;  // [read-write] Graphic MMU LUT entry 609 high
    volatile uint32_t LUT610L;  // [read-write] Graphic MMU LUT entry 610 low
    volatile uint32_t LUT610H;  // [read-write] Graphic MMU LUT entry 610 high
    volatile uint32_t LUT611L;  // [read-write] Graphic MMU LUT entry 611 low
    volatile uint32_t LUT611H;  // [read-write] Graphic MMU LUT entry 611 high
    volatile uint32_t LUT612L;  // [read-write] Graphic MMU LUT entry 612 low
    volatile uint32_t LUT612H;  // [read-write] Graphic MMU LUT entry 612 high
    volatile uint32_t LUT613L;  // [read-write] Graphic MMU LUT entry 613 low
    volatile uint32_t LUT613H;  // [read-write] Graphic MMU LUT entry 613 high
    volatile uint32_t LUT614L;  // [read-write] Graphic MMU LUT entry 614 low
    volatile uint32_t LUT614H;  // [read-write] Graphic MMU LUT entry 614 high
    volatile uint32_t LUT615L;  // [read-write] Graphic MMU LUT entry 615 low
    volatile uint32_t LUT615H;  // [read-write] Graphic MMU LUT entry 615 high
    volatile uint32_t LUT616L;  // [read-write] Graphic MMU LUT entry 616 low
    volatile uint32_t LUT616H;  // [read-write] Graphic MMU LUT entry 616 high
    volatile uint32_t LUT617L;  // [read-write] Graphic MMU LUT entry 617 low
    volatile uint32_t LUT617H;  // [read-write] Graphic MMU LUT entry 617 high
    volatile uint32_t LUT618L;  // [read-write] Graphic MMU LUT entry 618 low
    volatile uint32_t LUT618H;  // [read-write] Graphic MMU LUT entry 618 high
    volatile uint32_t LUT619L;  // [read-write] Graphic MMU LUT entry 619 low
    volatile uint32_t LUT619H;  // [read-write] Graphic MMU LUT entry 619 high
    volatile uint32_t LUT620L;  // [read-write] Graphic MMU LUT entry 620 low
    volatile uint32_t LUT620H;  // [read-write] Graphic MMU LUT entry 620 high
    volatile uint32_t LUT621L;  // [read-write] Graphic MMU LUT entry 621 low
    volatile uint32_t LUT621H;  // [read-write] Graphic MMU LUT entry 621 high
    volatile uint32_t LUT622L;  // [read-write] Graphic MMU LUT entry 622 low
    volatile uint32_t LUT622H;  // [read-write] Graphic MMU LUT entry 622 high
    volatile uint32_t LUT623L;  // [read-write] Graphic MMU LUT entry 623 low
    volatile uint32_t LUT623H;  // [read-write] Graphic MMU LUT entry 623 high
    volatile uint32_t LUT624L;  // [read-write] Graphic MMU LUT entry 624 low
    volatile uint32_t LUT624H;  // [read-write] Graphic MMU LUT entry 624 high
    volatile uint32_t LUT625L;  // [read-write] Graphic MMU LUT entry 625 low
    volatile uint32_t LUT625H;  // [read-write] Graphic MMU LUT entry 625 high
    volatile uint32_t LUT626L;  // [read-write] Graphic MMU LUT entry 626 low
    volatile uint32_t LUT626H;  // [read-write] Graphic MMU LUT entry 626 high
    volatile uint32_t LUT627L;  // [read-write] Graphic MMU LUT entry 627 low
    volatile uint32_t LUT627H;  // [read-write] Graphic MMU LUT entry 627 high
    volatile uint32_t LUT628L;  // [read-write] Graphic MMU LUT entry 628 low
    volatile uint32_t LUT628H;  // [read-write] Graphic MMU LUT entry 628 high
    volatile uint32_t LUT629L;  // [read-write] Graphic MMU LUT entry 629 low
    volatile uint32_t LUT629H;  // [read-write] Graphic MMU LUT entry 629 high
    volatile uint32_t LUT630L;  // [read-write] Graphic MMU LUT entry 630 low
    volatile uint32_t LUT630H;  // [read-write] Graphic MMU LUT entry 630 high
    volatile uint32_t LUT631L;  // [read-write] Graphic MMU LUT entry 631 low
    volatile uint32_t LUT631H;  // [read-write] Graphic MMU LUT entry 631 high
    volatile uint32_t LUT632L;  // [read-write] Graphic MMU LUT entry 632 low
    volatile uint32_t LUT632H;  // [read-write] Graphic MMU LUT entry 632 high
    volatile uint32_t LUT633L;  // [read-write] Graphic MMU LUT entry 633 low
    volatile uint32_t LUT633H;  // [read-write] Graphic MMU LUT entry 633 high
    volatile uint32_t LUT634L;  // [read-write] Graphic MMU LUT entry 634 low
    volatile uint32_t LUT634H;  // [read-write] Graphic MMU LUT entry 634 high
    volatile uint32_t LUT635L;  // [read-write] Graphic MMU LUT entry 635 low
    volatile uint32_t LUT635H;  // [read-write] Graphic MMU LUT entry 635 high
    volatile uint32_t LUT636L;  // [read-write] Graphic MMU LUT entry 636 low
    volatile uint32_t LUT636H;  // [read-write] Graphic MMU LUT entry 636 high
    volatile uint32_t LUT637L;  // [read-write] Graphic MMU LUT entry 637 low
    volatile uint32_t LUT637H;  // [read-write] Graphic MMU LUT entry 637 high
    volatile uint32_t LUT638L;  // [read-write] Graphic MMU LUT entry 638 low
    volatile uint32_t LUT638H;  // [read-write] Graphic MMU LUT entry 638 high
    volatile uint32_t LUT639L;  // [read-write] Graphic MMU LUT entry 639 low
    volatile uint32_t LUT639H;  // [read-write] Graphic MMU LUT entry 639 high
    volatile uint32_t LUT640L;  // [read-write] Graphic MMU LUT entry 640 low
    volatile uint32_t LUT640H;  // [read-write] Graphic MMU LUT entry 640 high
    volatile uint32_t LUT641L;  // [read-write] Graphic MMU LUT entry 641 low
    volatile uint32_t LUT641H;  // [read-write] Graphic MMU LUT entry 641 high
    volatile uint32_t LUT642L;  // [read-write] Graphic MMU LUT entry 642 low
    volatile uint32_t LUT642H;  // [read-write] Graphic MMU LUT entry 642 high
    volatile uint32_t LUT643L;  // [read-write] Graphic MMU LUT entry 643 low
    volatile uint32_t LUT643H;  // [read-write] Graphic MMU LUT entry 643 high
    volatile uint32_t LUT644L;  // [read-write] Graphic MMU LUT entry 644 low
    volatile uint32_t LUT644H;  // [read-write] Graphic MMU LUT entry 644 high
    volatile uint32_t LUT645L;  // [read-write] Graphic MMU LUT entry 645 low
    volatile uint32_t LUT645H;  // [read-write] Graphic MMU LUT entry 645 high
    volatile uint32_t LUT646L;  // [read-write] Graphic MMU LUT entry 646 low
    volatile uint32_t LUT646H;  // [read-write] Graphic MMU LUT entry 646 high
    volatile uint32_t LUT647L;  // [read-write] Graphic MMU LUT entry 647 low
    volatile uint32_t LUT647H;  // [read-write] Graphic MMU LUT entry 647 high
    volatile uint32_t LUT648L;  // [read-write] Graphic MMU LUT entry 648 low
    volatile uint32_t LUT648H;  // [read-write] Graphic MMU LUT entry 648 high
    volatile uint32_t LUT649L;  // [read-write] Graphic MMU LUT entry 649 low
    volatile uint32_t LUT649H;  // [read-write] Graphic MMU LUT entry 649 high
    volatile uint32_t LUT650L;  // [read-write] Graphic MMU LUT entry 650 low
    volatile uint32_t LUT650H;  // [read-write] Graphic MMU LUT entry 650 high
    volatile uint32_t LUT651L;  // [read-write] Graphic MMU LUT entry 651 low
    volatile uint32_t LUT651H;  // [read-write] Graphic MMU LUT entry 651 high
    volatile uint32_t LUT652L;  // [read-write] Graphic MMU LUT entry 652 low
    volatile uint32_t LUT652H;  // [read-write] Graphic MMU LUT entry 652 high
    volatile uint32_t LUT653L;  // [read-write] Graphic MMU LUT entry 653 low
    volatile uint32_t LUT653H;  // [read-write] Graphic MMU LUT entry 653 high
    volatile uint32_t LUT654L;  // [read-write] Graphic MMU LUT entry 654 low
    volatile uint32_t LUT654H;  // [read-write] Graphic MMU LUT entry 654 high
    volatile uint32_t LUT655L;  // [read-write] Graphic MMU LUT entry 655 low
    volatile uint32_t LUT655H;  // [read-write] Graphic MMU LUT entry 655 high
    volatile uint32_t LUT656L;  // [read-write] Graphic MMU LUT entry 656 low
    volatile uint32_t LUT656H;  // [read-write] Graphic MMU LUT entry 656 high
    volatile uint32_t LUT657L;  // [read-write] Graphic MMU LUT entry 657 low
    volatile uint32_t LUT657H;  // [read-write] Graphic MMU LUT entry 657 high
    volatile uint32_t LUT658L;  // [read-write] Graphic MMU LUT entry 658 low
    volatile uint32_t LUT658H;  // [read-write] Graphic MMU LUT entry 658 high
    volatile uint32_t LUT659L;  // [read-write] Graphic MMU LUT entry 659 low
    volatile uint32_t LUT659H;  // [read-write] Graphic MMU LUT entry 659 high
    volatile uint32_t LUT660L;  // [read-write] Graphic MMU LUT entry 660 low
    volatile uint32_t LUT660H;  // [read-write] Graphic MMU LUT entry 660 high
    volatile uint32_t LUT661L;  // [read-write] Graphic MMU LUT entry 661 low
    volatile uint32_t LUT661H;  // [read-write] Graphic MMU LUT entry 661 high
    volatile uint32_t LUT662L;  // [read-write] Graphic MMU LUT entry 662 low
    volatile uint32_t LUT662H;  // [read-write] Graphic MMU LUT entry 662 high
    volatile uint32_t LUT663L;  // [read-write] Graphic MMU LUT entry 663 low
    volatile uint32_t LUT663H;  // [read-write] Graphic MMU LUT entry 663 high
    volatile uint32_t LUT664L;  // [read-write] Graphic MMU LUT entry 664 low
    volatile uint32_t LUT664H;  // [read-write] Graphic MMU LUT entry 664 high
    volatile uint32_t LUT665L;  // [read-write] Graphic MMU LUT entry 665 low
    volatile uint32_t LUT665H;  // [read-write] Graphic MMU LUT entry 665 high
    volatile uint32_t LUT666L;  // [read-write] Graphic MMU LUT entry 666 low
    volatile uint32_t LUT666H;  // [read-write] Graphic MMU LUT entry 666 high
    volatile uint32_t LUT667L;  // [read-write] Graphic MMU LUT entry 667 low
    volatile uint32_t LUT667H;  // [read-write] Graphic MMU LUT entry 667 high
    volatile uint32_t LUT668L;  // [read-write] Graphic MMU LUT entry 668 low
    volatile uint32_t LUT668H;  // [read-write] Graphic MMU LUT entry 668 high
    volatile uint32_t LUT669L;  // [read-write] Graphic MMU LUT entry 669 low
    volatile uint32_t LUT669H;  // [read-write] Graphic MMU LUT entry 669 high
    volatile uint32_t LUT670L;  // [read-write] Graphic MMU LUT entry 670 low
    volatile uint32_t LUT670H;  // [read-write] Graphic MMU LUT entry 670 high
    volatile uint32_t LUT671L;  // [read-write] Graphic MMU LUT entry 671 low
    volatile uint32_t LUT671H;  // [read-write] Graphic MMU LUT entry 671 high
    volatile uint32_t LUT672L;  // [read-write] Graphic MMU LUT entry 672 low
    volatile uint32_t LUT672H;  // [read-write] Graphic MMU LUT entry 672 high
    volatile uint32_t LUT673L;  // [read-write] Graphic MMU LUT entry 673 low
    volatile uint32_t LUT673H;  // [read-write] Graphic MMU LUT entry 673 high
    volatile uint32_t LUT674L;  // [read-write] Graphic MMU LUT entry 674 low
    volatile uint32_t LUT674H;  // [read-write] Graphic MMU LUT entry 674 high
    volatile uint32_t LUT675L;  // [read-write] Graphic MMU LUT entry 675 low
    volatile uint32_t LUT675H;  // [read-write] Graphic MMU LUT entry 675 high
    volatile uint32_t LUT676L;  // [read-write] Graphic MMU LUT entry 676 low
    volatile uint32_t LUT676H;  // [read-write] Graphic MMU LUT entry 676 high
    volatile uint32_t LUT677L;  // [read-write] Graphic MMU LUT entry 677 low
    volatile uint32_t LUT677H;  // [read-write] Graphic MMU LUT entry 677 high
    volatile uint32_t LUT678L;  // [read-write] Graphic MMU LUT entry 678 low
    volatile uint32_t LUT678H;  // [read-write] Graphic MMU LUT entry 678 high
    volatile uint32_t LUT679L;  // [read-write] Graphic MMU LUT entry 679 low
    volatile uint32_t LUT679H;  // [read-write] Graphic MMU LUT entry 679 high
    volatile uint32_t LUT680L;  // [read-write] Graphic MMU LUT entry 680 low
    volatile uint32_t LUT680H;  // [read-write] Graphic MMU LUT entry 680 high
    volatile uint32_t LUT681L;  // [read-write] Graphic MMU LUT entry 681 low
    volatile uint32_t LUT681H;  // [read-write] Graphic MMU LUT entry 681 high
    volatile uint32_t LUT682L;  // [read-write] Graphic MMU LUT entry 682 low
    volatile uint32_t LUT682H;  // [read-write] Graphic MMU LUT entry 682 high
    volatile uint32_t LUT683L;  // [read-write] Graphic MMU LUT entry 683 low
    volatile uint32_t LUT683H;  // [read-write] Graphic MMU LUT entry 683 high
    volatile uint32_t LUT684L;  // [read-write] Graphic MMU LUT entry 684 low
    volatile uint32_t LUT684H;  // [read-write] Graphic MMU LUT entry 684 high
    volatile uint32_t LUT685L;  // [read-write] Graphic MMU LUT entry 685 low
    volatile uint32_t LUT685H;  // [read-write] Graphic MMU LUT entry 685 high
    volatile uint32_t LUT686L;  // [read-write] Graphic MMU LUT entry 686 low
    volatile uint32_t LUT686H;  // [read-write] Graphic MMU LUT entry 686 high
    volatile uint32_t LUT687L;  // [read-write] Graphic MMU LUT entry 687 low
    volatile uint32_t LUT687H;  // [read-write] Graphic MMU LUT entry 687 high
    volatile uint32_t LUT688L;  // [read-write] Graphic MMU LUT entry 688 low
    volatile uint32_t LUT688H;  // [read-write] Graphic MMU LUT entry 688 high
    volatile uint32_t LUT689L;  // [read-write] Graphic MMU LUT entry 689 low
    volatile uint32_t LUT689H;  // [read-write] Graphic MMU LUT entry 689 high
    volatile uint32_t LUT690L;  // [read-write] Graphic MMU LUT entry 690 low
    volatile uint32_t LUT690H;  // [read-write] Graphic MMU LUT entry 690 high
    volatile uint32_t LUT691L;  // [read-write] Graphic MMU LUT entry 691 low
    volatile uint32_t LUT691H;  // [read-write] Graphic MMU LUT entry 691 high
    volatile uint32_t LUT692L;  // [read-write] Graphic MMU LUT entry 692 low
    volatile uint32_t LUT692H;  // [read-write] Graphic MMU LUT entry 692 high
    volatile uint32_t LUT693L;  // [read-write] Graphic MMU LUT entry 693 low
    volatile uint32_t LUT693H;  // [read-write] Graphic MMU LUT entry 693 high
    volatile uint32_t LUT694L;  // [read-write] Graphic MMU LUT entry 694 low
    volatile uint32_t LUT694H;  // [read-write] Graphic MMU LUT entry 694 high
    volatile uint32_t LUT695L;  // [read-write] Graphic MMU LUT entry 695 low
    volatile uint32_t LUT695H;  // [read-write] Graphic MMU LUT entry 695 high
    volatile uint32_t LUT696L;  // [read-write] Graphic MMU LUT entry 696 low
    volatile uint32_t LUT696H;  // [read-write] Graphic MMU LUT entry 696 high
    volatile uint32_t LUT697L;  // [read-write] Graphic MMU LUT entry 697 low
    volatile uint32_t LUT697H;  // [read-write] Graphic MMU LUT entry 697 high
    volatile uint32_t LUT698L;  // [read-write] Graphic MMU LUT entry 698 low
    volatile uint32_t LUT698H;  // [read-write] Graphic MMU LUT entry 698 high
    volatile uint32_t LUT699L;  // [read-write] Graphic MMU LUT entry 699 low
    volatile uint32_t LUT699H;  // [read-write] Graphic MMU LUT entry 699 high
    volatile uint32_t LUT700L;  // [read-write] Graphic MMU LUT entry 700 low
    volatile uint32_t LUT700H;  // [read-write] Graphic MMU LUT entry 700 high
    volatile uint32_t LUT701L;  // [read-write] Graphic MMU LUT entry 701 low
    volatile uint32_t LUT701H;  // [read-write] Graphic MMU LUT entry 701 high
    volatile uint32_t LUT702L;  // [read-write] Graphic MMU LUT entry 702 low
    volatile uint32_t LUT702H;  // [read-write] Graphic MMU LUT entry 702 high
    volatile uint32_t LUT703L;  // [read-write] Graphic MMU LUT entry 703 low
    volatile uint32_t LUT703H;  // [read-write] Graphic MMU LUT entry 703 high
    volatile uint32_t LUT704L;  // [read-write] Graphic MMU LUT entry 704 low
    volatile uint32_t LUT704H;  // [read-write] Graphic MMU LUT entry 704 high
    volatile uint32_t LUT705L;  // [read-write] Graphic MMU LUT entry 705 low
    volatile uint32_t LUT705H;  // [read-write] Graphic MMU LUT entry 705 high
    volatile uint32_t LUT706L;  // [read-write] Graphic MMU LUT entry 706 low
    volatile uint32_t LUT706H;  // [read-write] Graphic MMU LUT entry 706 high
    volatile uint32_t LUT707L;  // [read-write] Graphic MMU LUT entry 707 low
    volatile uint32_t LUT707H;  // [read-write] Graphic MMU LUT entry 707 high
    volatile uint32_t LUT708L;  // [read-write] Graphic MMU LUT entry 708 low
    volatile uint32_t LUT708H;  // [read-write] Graphic MMU LUT entry 708 high
    volatile uint32_t LUT709L;  // [read-write] Graphic MMU LUT entry 709 low
    volatile uint32_t LUT709H;  // [read-write] Graphic MMU LUT entry 709 high
    volatile uint32_t LUT710L;  // [read-write] Graphic MMU LUT entry 710 low
    volatile uint32_t LUT710H;  // [read-write] Graphic MMU LUT entry 710 high
    volatile uint32_t LUT711L;  // [read-write] Graphic MMU LUT entry 711 low
    volatile uint32_t LUT711H;  // [read-write] Graphic MMU LUT entry 711 high
    volatile uint32_t LUT712L;  // [read-write] Graphic MMU LUT entry 712 low
    volatile uint32_t LUT712H;  // [read-write] Graphic MMU LUT entry 712 high
    volatile uint32_t LUT713L;  // [read-write] Graphic MMU LUT entry 713 low
    volatile uint32_t LUT713H;  // [read-write] Graphic MMU LUT entry 713 high
    volatile uint32_t LUT714L;  // [read-write] Graphic MMU LUT entry 714 low
    volatile uint32_t LUT714H;  // [read-write] Graphic MMU LUT entry 714 high
    volatile uint32_t LUT715L;  // [read-write] Graphic MMU LUT entry 715 low
    volatile uint32_t LUT715H;  // [read-write] Graphic MMU LUT entry 715 high
    volatile uint32_t LUT716L;  // [read-write] Graphic MMU LUT entry 716 low
    volatile uint32_t LUT716H;  // [read-write] Graphic MMU LUT entry 716 high
    volatile uint32_t LUT717L;  // [read-write] Graphic MMU LUT entry 717 low
    volatile uint32_t LUT717H;  // [read-write] Graphic MMU LUT entry 717 high
    volatile uint32_t LUT718L;  // [read-write] Graphic MMU LUT entry 718 low
    volatile uint32_t LUT718H;  // [read-write] Graphic MMU LUT entry 718 high
    volatile uint32_t LUT719L;  // [read-write] Graphic MMU LUT entry 719 low
    volatile uint32_t LUT719H;  // [read-write] Graphic MMU LUT entry 719 high
    volatile uint32_t LUT720L;  // [read-write] Graphic MMU LUT entry 720 low
    volatile uint32_t LUT720H;  // [read-write] Graphic MMU LUT entry 720 high
    volatile uint32_t LUT721L;  // [read-write] Graphic MMU LUT entry 721 low
    volatile uint32_t LUT721H;  // [read-write] Graphic MMU LUT entry 721 high
    volatile uint32_t LUT722L;  // [read-write] Graphic MMU LUT entry 722 low
    volatile uint32_t LUT722H;  // [read-write] Graphic MMU LUT entry 722 high
    volatile uint32_t LUT723L;  // [read-write] Graphic MMU LUT entry 723 low
    volatile uint32_t LUT723H;  // [read-write] Graphic MMU LUT entry 723 high
    volatile uint32_t LUT724L;  // [read-write] Graphic MMU LUT entry 724 low
    volatile uint32_t LUT724H;  // [read-write] Graphic MMU LUT entry 724 high
    volatile uint32_t LUT725L;  // [read-write] Graphic MMU LUT entry 725 low
    volatile uint32_t LUT725H;  // [read-write] Graphic MMU LUT entry 725 high
    volatile uint32_t LUT726L;  // [read-write] Graphic MMU LUT entry 726 low
    volatile uint32_t LUT726H;  // [read-write] Graphic MMU LUT entry 726 high
    volatile uint32_t LUT727L;  // [read-write] Graphic MMU LUT entry 727 low
    volatile uint32_t LUT727H;  // [read-write] Graphic MMU LUT entry 727 high
    volatile uint32_t LUT728L;  // [read-write] Graphic MMU LUT entry 728 low
    volatile uint32_t LUT728H;  // [read-write] Graphic MMU LUT entry 728 high
    volatile uint32_t LUT729L;  // [read-write] Graphic MMU LUT entry 729 low
    volatile uint32_t LUT729H;  // [read-write] Graphic MMU LUT entry 729 high
    volatile uint32_t LUT730L;  // [read-write] Graphic MMU LUT entry 730 low
    volatile uint32_t LUT730H;  // [read-write] Graphic MMU LUT entry 730 high
    volatile uint32_t LUT731L;  // [read-write] Graphic MMU LUT entry 731 low
    volatile uint32_t LUT731H;  // [read-write] Graphic MMU LUT entry 731 high
    volatile uint32_t LUT732L;  // [read-write] Graphic MMU LUT entry 732 low
    volatile uint32_t LUT732H;  // [read-write] Graphic MMU LUT entry 732 high
    volatile uint32_t LUT733L;  // [read-write] Graphic MMU LUT entry 733 low
    volatile uint32_t LUT733H;  // [read-write] Graphic MMU LUT entry 733 high
    volatile uint32_t LUT734L;  // [read-write] Graphic MMU LUT entry 734 low
    volatile uint32_t LUT734H;  // [read-write] Graphic MMU LUT entry 734 high
    volatile uint32_t LUT735L;  // [read-write] Graphic MMU LUT entry 735 low
    volatile uint32_t LUT735H;  // [read-write] Graphic MMU LUT entry 735 high
    volatile uint32_t LUT736L;  // [read-write] Graphic MMU LUT entry 736 low
    volatile uint32_t LUT736H;  // [read-write] Graphic MMU LUT entry 736 high
    volatile uint32_t LUT737L;  // [read-write] Graphic MMU LUT entry 737 low
    volatile uint32_t LUT737H;  // [read-write] Graphic MMU LUT entry 737 high
    volatile uint32_t LUT738L;  // [read-write] Graphic MMU LUT entry 738 low
    volatile uint32_t LUT738H;  // [read-write] Graphic MMU LUT entry 738 high
    volatile uint32_t LUT739L;  // [read-write] Graphic MMU LUT entry 739 low
    volatile uint32_t LUT739H;  // [read-write] Graphic MMU LUT entry 739 high
    volatile uint32_t LUT740L;  // [read-write] Graphic MMU LUT entry 740 low
    volatile uint32_t LUT740H;  // [read-write] Graphic MMU LUT entry 740 high
    volatile uint32_t LUT741L;  // [read-write] Graphic MMU LUT entry 741 low
    volatile uint32_t LUT741H;  // [read-write] Graphic MMU LUT entry 741 high
    volatile uint32_t LUT742L;  // [read-write] Graphic MMU LUT entry 742 low
    volatile uint32_t LUT742H;  // [read-write] Graphic MMU LUT entry 742 high
    volatile uint32_t LUT743L;  // [read-write] Graphic MMU LUT entry 743 low
    volatile uint32_t LUT743H;  // [read-write] Graphic MMU LUT entry 743 high
    volatile uint32_t LUT744L;  // [read-write] Graphic MMU LUT entry 744 low
    volatile uint32_t LUT744H;  // [read-write] Graphic MMU LUT entry 744 high
    volatile uint32_t LUT745L;  // [read-write] Graphic MMU LUT entry 745 low
    volatile uint32_t LUT745H;  // [read-write] Graphic MMU LUT entry 745 high
    volatile uint32_t LUT746L;  // [read-write] Graphic MMU LUT entry 746 low
    volatile uint32_t LUT746H;  // [read-write] Graphic MMU LUT entry 746 high
    volatile uint32_t LUT747L;  // [read-write] Graphic MMU LUT entry 747 low
    volatile uint32_t LUT747H;  // [read-write] Graphic MMU LUT entry 747 high
    volatile uint32_t LUT748L;  // [read-write] Graphic MMU LUT entry 748 low
    volatile uint32_t LUT748H;  // [read-write] Graphic MMU LUT entry 748 high
    volatile uint32_t LUT749L;  // [read-write] Graphic MMU LUT entry 749 low
    volatile uint32_t LUT749H;  // [read-write] Graphic MMU LUT entry 749 high
    volatile uint32_t LUT750L;  // [read-write] Graphic MMU LUT entry 750 low
    volatile uint32_t LUT750H;  // [read-write] Graphic MMU LUT entry 750 high
    volatile uint32_t LUT751L;  // [read-write] Graphic MMU LUT entry 751 low
    volatile uint32_t LUT751H;  // [read-write] Graphic MMU LUT entry 751 high
    volatile uint32_t LUT752L;  // [read-write] Graphic MMU LUT entry 752 low
    volatile uint32_t LUT752H;  // [read-write] Graphic MMU LUT entry 752 high
    volatile uint32_t LUT753L;  // [read-write] Graphic MMU LUT entry 753 low
    volatile uint32_t LUT753H;  // [read-write] Graphic MMU LUT entry 753 high
    volatile uint32_t LUT754L;  // [read-write] Graphic MMU LUT entry 754 low
    volatile uint32_t LUT754H;  // [read-write] Graphic MMU LUT entry 754 high
    volatile uint32_t LUT755L;  // [read-write] Graphic MMU LUT entry 755 low
    volatile uint32_t LUT755H;  // [read-write] Graphic MMU LUT entry 755 high
    volatile uint32_t LUT756L;  // [read-write] Graphic MMU LUT entry 756 low
    volatile uint32_t LUT756H;  // [read-write] Graphic MMU LUT entry 756 high
    volatile uint32_t LUT757L;  // [read-write] Graphic MMU LUT entry 757 low
    volatile uint32_t LUT757H;  // [read-write] Graphic MMU LUT entry 757 high
    volatile uint32_t LUT758L;  // [read-write] Graphic MMU LUT entry 758 low
    volatile uint32_t LUT758H;  // [read-write] Graphic MMU LUT entry 758 high
    volatile uint32_t LUT759L;  // [read-write] Graphic MMU LUT entry 759 low
    volatile uint32_t LUT759H;  // [read-write] Graphic MMU LUT entry 759 high
    volatile uint32_t LUT760L;  // [read-write] Graphic MMU LUT entry 760 low
    volatile uint32_t LUT760H;  // [read-write] Graphic MMU LUT entry 760 high
    volatile uint32_t LUT761L;  // [read-write] Graphic MMU LUT entry 761 low
    volatile uint32_t LUT761H;  // [read-write] Graphic MMU LUT entry 761 high
    volatile uint32_t LUT762L;  // [read-write] Graphic MMU LUT entry 762 low
    volatile uint32_t LUT762H;  // [read-write] Graphic MMU LUT entry 762 high
    volatile uint32_t LUT763L;  // [read-write] Graphic MMU LUT entry 763 low
    volatile uint32_t LUT763H;  // [read-write] Graphic MMU LUT entry 763 high
    volatile uint32_t LUT764L;  // [read-write] Graphic MMU LUT entry 764 low
    volatile uint32_t LUT764H;  // [read-write] Graphic MMU LUT entry 764 high
    volatile uint32_t LUT765L;  // [read-write] Graphic MMU LUT entry 765 low
    volatile uint32_t LUT765H;  // [read-write] Graphic MMU LUT entry 765 high
    volatile uint32_t LUT766L;  // [read-write] Graphic MMU LUT entry 766 low
    volatile uint32_t LUT766H;  // [read-write] Graphic MMU LUT entry 766 high
    volatile uint32_t LUT767L;  // [read-write] Graphic MMU LUT entry 767 low
    volatile uint32_t LUT767H;  // [read-write] Graphic MMU LUT entry 767 high
    volatile uint32_t LUT768L;  // [read-write] Graphic MMU LUT entry 768 low
    volatile uint32_t LUT768H;  // [read-write] Graphic MMU LUT entry 768 high
    volatile uint32_t LUT769L;  // [read-write] Graphic MMU LUT entry 769 low
    volatile uint32_t LUT769H;  // [read-write] Graphic MMU LUT entry 769 high
    volatile uint32_t LUT770L;  // [read-write] Graphic MMU LUT entry 770 low
    volatile uint32_t LUT770H;  // [read-write] Graphic MMU LUT entry 770 high
    volatile uint32_t LUT771L;  // [read-write] Graphic MMU LUT entry 771 low
    volatile uint32_t LUT771H;  // [read-write] Graphic MMU LUT entry 771 high
    volatile uint32_t LUT772L;  // [read-write] Graphic MMU LUT entry 772 low
    volatile uint32_t LUT772H;  // [read-write] Graphic MMU LUT entry 772 high
    volatile uint32_t LUT773L;  // [read-write] Graphic MMU LUT entry 773 low
    volatile uint32_t LUT773H;  // [read-write] Graphic MMU LUT entry 773 high
    volatile uint32_t LUT774L;  // [read-write] Graphic MMU LUT entry 774 low
    volatile uint32_t LUT774H;  // [read-write] Graphic MMU LUT entry 774 high
    volatile uint32_t LUT775L;  // [read-write] Graphic MMU LUT entry 775 low
    volatile uint32_t LUT775H;  // [read-write] Graphic MMU LUT entry 775 high
    volatile uint32_t LUT776L;  // [read-write] Graphic MMU LUT entry 776 low
    volatile uint32_t LUT776H;  // [read-write] Graphic MMU LUT entry 776 high
    volatile uint32_t LUT777L;  // [read-write] Graphic MMU LUT entry 777 low
    volatile uint32_t LUT777H;  // [read-write] Graphic MMU LUT entry 777 high
    volatile uint32_t LUT778L;  // [read-write] Graphic MMU LUT entry 778 low
    volatile uint32_t LUT778H;  // [read-write] Graphic MMU LUT entry 778 high
    volatile uint32_t LUT779L;  // [read-write] Graphic MMU LUT entry 779 low
    volatile uint32_t LUT779H;  // [read-write] Graphic MMU LUT entry 779 high
    volatile uint32_t LUT780L;  // [read-write] Graphic MMU LUT entry 780 low
    volatile uint32_t LUT780H;  // [read-write] Graphic MMU LUT entry 780 high
    volatile uint32_t LUT781L;  // [read-write] Graphic MMU LUT entry 781 low
    volatile uint32_t LUT781H;  // [read-write] Graphic MMU LUT entry 781 high
    volatile uint32_t LUT782L;  // [read-write] Graphic MMU LUT entry 782 low
    volatile uint32_t LUT782H;  // [read-write] Graphic MMU LUT entry 782 high
    volatile uint32_t LUT783L;  // [read-write] Graphic MMU LUT entry 783 low
    volatile uint32_t LUT783H;  // [read-write] Graphic MMU LUT entry 783 high
    volatile uint32_t LUT784L;  // [read-write] Graphic MMU LUT entry 784 low
    volatile uint32_t LUT784H;  // [read-write] Graphic MMU LUT entry 784 high
    volatile uint32_t LUT785L;  // [read-write] Graphic MMU LUT entry 785 low
    volatile uint32_t LUT785H;  // [read-write] Graphic MMU LUT entry 785 high
    volatile uint32_t LUT786L;  // [read-write] Graphic MMU LUT entry 786 low
    volatile uint32_t LUT786H;  // [read-write] Graphic MMU LUT entry 786 high
    volatile uint32_t LUT787L;  // [read-write] Graphic MMU LUT entry 787 low
    volatile uint32_t LUT787H;  // [read-write] Graphic MMU LUT entry 787 high
    volatile uint32_t LUT788L;  // [read-write] Graphic MMU LUT entry 788 low
    volatile uint32_t LUT788H;  // [read-write] Graphic MMU LUT entry 788 high
    volatile uint32_t LUT789L;  // [read-write] Graphic MMU LUT entry 789 low
    volatile uint32_t LUT789H;  // [read-write] Graphic MMU LUT entry 789 high
    volatile uint32_t LUT790L;  // [read-write] Graphic MMU LUT entry 790 low
    volatile uint32_t LUT790H;  // [read-write] Graphic MMU LUT entry 790 high
    volatile uint32_t LUT791L;  // [read-write] Graphic MMU LUT entry 791 low
    volatile uint32_t LUT791H;  // [read-write] Graphic MMU LUT entry 791 high
    volatile uint32_t LUT792L;  // [read-write] Graphic MMU LUT entry 792 low
    volatile uint32_t LUT792H;  // [read-write] Graphic MMU LUT entry 792 high
    volatile uint32_t LUT793L;  // [read-write] Graphic MMU LUT entry 793 low
    volatile uint32_t LUT793H;  // [read-write] Graphic MMU LUT entry 793 high
    volatile uint32_t LUT794L;  // [read-write] Graphic MMU LUT entry 794 low
    volatile uint32_t LUT794H;  // [read-write] Graphic MMU LUT entry 794 high
    volatile uint32_t LUT795L;  // [read-write] Graphic MMU LUT entry 795 low
    volatile uint32_t LUT795H;  // [read-write] Graphic MMU LUT entry 795 high
    volatile uint32_t LUT796L;  // [read-write] Graphic MMU LUT entry 796 low
    volatile uint32_t LUT796H;  // [read-write] Graphic MMU LUT entry 796 high
    volatile uint32_t LUT797L;  // [read-write] Graphic MMU LUT entry 797 low
    volatile uint32_t LUT797H;  // [read-write] Graphic MMU LUT entry 797 high
    volatile uint32_t LUT798L;  // [read-write] Graphic MMU LUT entry 798 low
    volatile uint32_t LUT798H;  // [read-write] Graphic MMU LUT entry 798 high
    volatile uint32_t LUT799L;  // [read-write] Graphic MMU LUT entry 799 low
    volatile uint32_t LUT799H;  // [read-write] Graphic MMU LUT entry 799 high
    volatile uint32_t LUT800L;  // [read-write] Graphic MMU LUT entry 800 low
    volatile uint32_t LUT800H;  // [read-write] Graphic MMU LUT entry 800 high
    volatile uint32_t LUT801L;  // [read-write] Graphic MMU LUT entry 801 low
    volatile uint32_t LUT801H;  // [read-write] Graphic MMU LUT entry 801 high
    volatile uint32_t LUT802L;  // [read-write] Graphic MMU LUT entry 802 low
    volatile uint32_t LUT802H;  // [read-write] Graphic MMU LUT entry 802 high
    volatile uint32_t LUT803L;  // [read-write] Graphic MMU LUT entry 803 low
    volatile uint32_t LUT803H;  // [read-write] Graphic MMU LUT entry 803 high
    volatile uint32_t LUT804L;  // [read-write] Graphic MMU LUT entry 804 low
    volatile uint32_t LUT804H;  // [read-write] Graphic MMU LUT entry 804 high
    volatile uint32_t LUT805L;  // [read-write] Graphic MMU LUT entry 805 low
    volatile uint32_t LUT805H;  // [read-write] Graphic MMU LUT entry 805 high
    volatile uint32_t LUT806L;  // [read-write] Graphic MMU LUT entry 806 low
    volatile uint32_t LUT806H;  // [read-write] Graphic MMU LUT entry 806 high
    volatile uint32_t LUT807L;  // [read-write] Graphic MMU LUT entry 807 low
    volatile uint32_t LUT807H;  // [read-write] Graphic MMU LUT entry 807 high
    volatile uint32_t LUT808L;  // [read-write] Graphic MMU LUT entry 808 low
    volatile uint32_t LUT808H;  // [read-write] Graphic MMU LUT entry 808 high
    volatile uint32_t LUT809L;  // [read-write] Graphic MMU LUT entry 809 low
    volatile uint32_t LUT809H;  // [read-write] Graphic MMU LUT entry 809 high
    volatile uint32_t LUT810L;  // [read-write] Graphic MMU LUT entry 810 low
    volatile uint32_t LUT810H;  // [read-write] Graphic MMU LUT entry 810 high
    volatile uint32_t LUT811L;  // [read-write] Graphic MMU LUT entry 811 low
    volatile uint32_t LUT811H;  // [read-write] Graphic MMU LUT entry 811 high
    volatile uint32_t LUT812L;  // [read-write] Graphic MMU LUT entry 812 low
    volatile uint32_t LUT812H;  // [read-write] Graphic MMU LUT entry 812 high
    volatile uint32_t LUT813L;  // [read-write] Graphic MMU LUT entry 813 low
    volatile uint32_t LUT813H;  // [read-write] Graphic MMU LUT entry 813 high
    volatile uint32_t LUT814L;  // [read-write] Graphic MMU LUT entry 814 low
    volatile uint32_t LUT814H;  // [read-write] Graphic MMU LUT entry 814 high
    volatile uint32_t LUT815L;  // [read-write] Graphic MMU LUT entry 815 low
    volatile uint32_t LUT815H;  // [read-write] Graphic MMU LUT entry 815 high
    volatile uint32_t LUT816L;  // [read-write] Graphic MMU LUT entry 816 low
    volatile uint32_t LUT816H;  // [read-write] Graphic MMU LUT entry 816 high
    volatile uint32_t LUT817L;  // [read-write] Graphic MMU LUT entry 817 low
    volatile uint32_t LUT817H;  // [read-write] Graphic MMU LUT entry 817 high
    volatile uint32_t LUT818L;  // [read-write] Graphic MMU LUT entry 818 low
    volatile uint32_t LUT818H;  // [read-write] Graphic MMU LUT entry 818 high
    volatile uint32_t LUT819L;  // [read-write] Graphic MMU LUT entry 819 low
    volatile uint32_t LUT819H;  // [read-write] Graphic MMU LUT entry 819 high
    volatile uint32_t LUT820L;  // [read-write] Graphic MMU LUT entry 820 low
    volatile uint32_t LUT820H;  // [read-write] Graphic MMU LUT entry 820 high
    volatile uint32_t LUT821L;  // [read-write] Graphic MMU LUT entry 821 low
    volatile uint32_t LUT821H;  // [read-write] Graphic MMU LUT entry 821 high
    volatile uint32_t LUT822L;  // [read-write] Graphic MMU LUT entry 822 low
    volatile uint32_t LUT822H;  // [read-write] Graphic MMU LUT entry 822 high
    volatile uint32_t LUT823L;  // [read-write] Graphic MMU LUT entry 823 low
    volatile uint32_t LUT823H;  // [read-write] Graphic MMU LUT entry 823 high
    volatile uint32_t LUT824L;  // [read-write] Graphic MMU LUT entry 824 low
    volatile uint32_t LUT824H;  // [read-write] Graphic MMU LUT entry 824 high
    volatile uint32_t LUT825L;  // [read-write] Graphic MMU LUT entry 825 low
    volatile uint32_t LUT825H;  // [read-write] Graphic MMU LUT entry 825 high
    volatile uint32_t LUT826L;  // [read-write] Graphic MMU LUT entry 826 low
    volatile uint32_t LUT826H;  // [read-write] Graphic MMU LUT entry 826 high
    volatile uint32_t LUT827L;  // [read-write] Graphic MMU LUT entry 827 low
    volatile uint32_t LUT827H;  // [read-write] Graphic MMU LUT entry 827 high
    volatile uint32_t LUT828L;  // [read-write] Graphic MMU LUT entry 828 low
    volatile uint32_t LUT828H;  // [read-write] Graphic MMU LUT entry 828 high
    volatile uint32_t LUT829L;  // [read-write] Graphic MMU LUT entry 829 low
    volatile uint32_t LUT829H;  // [read-write] Graphic MMU LUT entry 829 high
    volatile uint32_t LUT830L;  // [read-write] Graphic MMU LUT entry 830 low
    volatile uint32_t LUT830H;  // [read-write] Graphic MMU LUT entry 830 high
    volatile uint32_t LUT831L;  // [read-write] Graphic MMU LUT entry 831 low
    volatile uint32_t LUT831H;  // [read-write] Graphic MMU LUT entry 831 high
    volatile uint32_t LUT832L;  // [read-write] Graphic MMU LUT entry 832 low
    volatile uint32_t LUT832H;  // [read-write] Graphic MMU LUT entry 832 high
    volatile uint32_t LUT833L;  // [read-write] Graphic MMU LUT entry 833 low
    volatile uint32_t LUT833H;  // [read-write] Graphic MMU LUT entry 833 high
    volatile uint32_t LUT834L;  // [read-write] Graphic MMU LUT entry 834 low
    volatile uint32_t LUT834H;  // [read-write] Graphic MMU LUT entry 834 high
    volatile uint32_t LUT835L;  // [read-write] Graphic MMU LUT entry 835 low
    volatile uint32_t LUT835H;  // [read-write] Graphic MMU LUT entry 835 high
    volatile uint32_t LUT836L;  // [read-write] Graphic MMU LUT entry 836 low
    volatile uint32_t LUT836H;  // [read-write] Graphic MMU LUT entry 836 high
    volatile uint32_t LUT837L;  // [read-write] Graphic MMU LUT entry 837 low
    volatile uint32_t LUT837H;  // [read-write] Graphic MMU LUT entry 837 high
    volatile uint32_t LUT838L;  // [read-write] Graphic MMU LUT entry 838 low
    volatile uint32_t LUT838H;  // [read-write] Graphic MMU LUT entry 838 high
    volatile uint32_t LUT839L;  // [read-write] Graphic MMU LUT entry 839 low
    volatile uint32_t LUT839H;  // [read-write] Graphic MMU LUT entry 839 high
    volatile uint32_t LUT840L;  // [read-write] Graphic MMU LUT entry 840 low
    volatile uint32_t LUT840H;  // [read-write] Graphic MMU LUT entry 840 high
    volatile uint32_t LUT841L;  // [read-write] Graphic MMU LUT entry 841 low
    volatile uint32_t LUT841H;  // [read-write] Graphic MMU LUT entry 841 high
    volatile uint32_t LUT842L;  // [read-write] Graphic MMU LUT entry 842 low
    volatile uint32_t LUT842H;  // [read-write] Graphic MMU LUT entry 842 high
    volatile uint32_t LUT843L;  // [read-write] Graphic MMU LUT entry 843 low
    volatile uint32_t LUT843H;  // [read-write] Graphic MMU LUT entry 843 high
    volatile uint32_t LUT844L;  // [read-write] Graphic MMU LUT entry 844 low
    volatile uint32_t LUT844H;  // [read-write] Graphic MMU LUT entry 844 high
    volatile uint32_t LUT845L;  // [read-write] Graphic MMU LUT entry 845 low
    volatile uint32_t LUT845H;  // [read-write] Graphic MMU LUT entry 845 high
    volatile uint32_t LUT846L;  // [read-write] Graphic MMU LUT entry 846 low
    volatile uint32_t LUT846H;  // [read-write] Graphic MMU LUT entry 846 high
    volatile uint32_t LUT847L;  // [read-write] Graphic MMU LUT entry 847 low
    volatile uint32_t LUT847H;  // [read-write] Graphic MMU LUT entry 847 high
    volatile uint32_t LUT848L;  // [read-write] Graphic MMU LUT entry 848 low
    volatile uint32_t LUT848H;  // [read-write] Graphic MMU LUT entry 848 high
    volatile uint32_t LUT849L;  // [read-write] Graphic MMU LUT entry 849 low
    volatile uint32_t LUT849H;  // [read-write] Graphic MMU LUT entry 849 high
    volatile uint32_t LUT850L;  // [read-write] Graphic MMU LUT entry 850 low
    volatile uint32_t LUT850H;  // [read-write] Graphic MMU LUT entry 850 high
    volatile uint32_t LUT851L;  // [read-write] Graphic MMU LUT entry 851 low
    volatile uint32_t LUT851H;  // [read-write] Graphic MMU LUT entry 851 high
    volatile uint32_t LUT852L;  // [read-write] Graphic MMU LUT entry 852 low
    volatile uint32_t LUT852H;  // [read-write] Graphic MMU LUT entry 852 high
    volatile uint32_t LUT853L;  // [read-write] Graphic MMU LUT entry 853 low
    volatile uint32_t LUT853H;  // [read-write] Graphic MMU LUT entry 853 high
    volatile uint32_t LUT854L;  // [read-write] Graphic MMU LUT entry 854 low
    volatile uint32_t LUT854H;  // [read-write] Graphic MMU LUT entry 854 high
    volatile uint32_t LUT855L;  // [read-write] Graphic MMU LUT entry 855 low
    volatile uint32_t LUT855H;  // [read-write] Graphic MMU LUT entry 855 high
    volatile uint32_t LUT856L;  // [read-write] Graphic MMU LUT entry 856 low
    volatile uint32_t LUT856H;  // [read-write] Graphic MMU LUT entry 856 high
    volatile uint32_t LUT857L;  // [read-write] Graphic MMU LUT entry 857 low
    volatile uint32_t LUT857H;  // [read-write] Graphic MMU LUT entry 857 high
    volatile uint32_t LUT858L;  // [read-write] Graphic MMU LUT entry 858 low
    volatile uint32_t LUT858H;  // [read-write] Graphic MMU LUT entry 858 high
    volatile uint32_t LUT859L;  // [read-write] Graphic MMU LUT entry 859 low
    volatile uint32_t LUT859H;  // [read-write] Graphic MMU LUT entry 859 high
    volatile uint32_t LUT860L;  // [read-write] Graphic MMU LUT entry 860 low
    volatile uint32_t LUT860H;  // [read-write] Graphic MMU LUT entry 860 high
    volatile uint32_t LUT861L;  // [read-write] Graphic MMU LUT entry 861 low
    volatile uint32_t LUT861H;  // [read-write] Graphic MMU LUT entry 861 high
    volatile uint32_t LUT862L;  // [read-write] Graphic MMU LUT entry 862 low
    volatile uint32_t LUT862H;  // [read-write] Graphic MMU LUT entry 862 high
    volatile uint32_t LUT863L;  // [read-write] Graphic MMU LUT entry 863 low
    volatile uint32_t LUT863H;  // [read-write] Graphic MMU LUT entry 863 high
    volatile uint32_t LUT864L;  // [read-write] Graphic MMU LUT entry 864 low
    volatile uint32_t LUT864H;  // [read-write] Graphic MMU LUT entry 864 high
    volatile uint32_t LUT865L;  // [read-write] Graphic MMU LUT entry 865 low
    volatile uint32_t LUT865H;  // [read-write] Graphic MMU LUT entry 865 high
    volatile uint32_t LUT866L;  // [read-write] Graphic MMU LUT entry 866 low
    volatile uint32_t LUT866H;  // [read-write] Graphic MMU LUT entry 866 high
    volatile uint32_t LUT867L;  // [read-write] Graphic MMU LUT entry 867 low
    volatile uint32_t LUT867H;  // [read-write] Graphic MMU LUT entry 867 high
    volatile uint32_t LUT868L;  // [read-write] Graphic MMU LUT entry 868 low
    volatile uint32_t LUT868H;  // [read-write] Graphic MMU LUT entry 868 high
    volatile uint32_t LUT869L;  // [read-write] Graphic MMU LUT entry 869 low
    volatile uint32_t LUT869H;  // [read-write] Graphic MMU LUT entry 869 high
    volatile uint32_t LUT870L;  // [read-write] Graphic MMU LUT entry 870 low
    volatile uint32_t LUT870H;  // [read-write] Graphic MMU LUT entry 870 high
    volatile uint32_t LUT871L;  // [read-write] Graphic MMU LUT entry 871 low
    volatile uint32_t LUT871H;  // [read-write] Graphic MMU LUT entry 871 high
    volatile uint32_t LUT872L;  // [read-write] Graphic MMU LUT entry 872 low
    volatile uint32_t LUT872H;  // [read-write] Graphic MMU LUT entry 872 high
    volatile uint32_t LUT873L;  // [read-write] Graphic MMU LUT entry 873 low
    volatile uint32_t LUT873H;  // [read-write] Graphic MMU LUT entry 873 high
    volatile uint32_t LUT874L;  // [read-write] Graphic MMU LUT entry 874 low
    volatile uint32_t LUT874H;  // [read-write] Graphic MMU LUT entry 874 high
    volatile uint32_t LUT875L;  // [read-write] Graphic MMU LUT entry 875 low
    volatile uint32_t LUT875H;  // [read-write] Graphic MMU LUT entry 875 high
    volatile uint32_t LUT876L;  // [read-write] Graphic MMU LUT entry 876 low
    volatile uint32_t LUT876H;  // [read-write] Graphic MMU LUT entry 876 high
    volatile uint32_t LUT877L;  // [read-write] Graphic MMU LUT entry 877 low
    volatile uint32_t LUT877H;  // [read-write] Graphic MMU LUT entry 877 high
    volatile uint32_t LUT878L;  // [read-write] Graphic MMU LUT entry 878 low
    volatile uint32_t LUT878H;  // [read-write] Graphic MMU LUT entry 878 high
    volatile uint32_t LUT879L;  // [read-write] Graphic MMU LUT entry 879 low
    volatile uint32_t LUT879H;  // [read-write] Graphic MMU LUT entry 879 high
    volatile uint32_t LUT880L;  // [read-write] Graphic MMU LUT entry 880 low
    volatile uint32_t LUT880H;  // [read-write] Graphic MMU LUT entry 880 high
    volatile uint32_t LUT881L;  // [read-write] Graphic MMU LUT entry 881 low
    volatile uint32_t LUT881H;  // [read-write] Graphic MMU LUT entry 881 high
    volatile uint32_t LUT882L;  // [read-write] Graphic MMU LUT entry 882 low
    volatile uint32_t LUT882H;  // [read-write] Graphic MMU LUT entry 882 high
    volatile uint32_t LUT883L;  // [read-write] Graphic MMU LUT entry 883 low
    volatile uint32_t LUT883H;  // [read-write] Graphic MMU LUT entry 883 high
    volatile uint32_t LUT884L;  // [read-write] Graphic MMU LUT entry 884 low
    volatile uint32_t LUT884H;  // [read-write] Graphic MMU LUT entry 884 high
    volatile uint32_t LUT885L;  // [read-write] Graphic MMU LUT entry 885 low
    volatile uint32_t LUT885H;  // [read-write] Graphic MMU LUT entry 885 high
    volatile uint32_t LUT886L;  // [read-write] Graphic MMU LUT entry 886 low
    volatile uint32_t LUT886H;  // [read-write] Graphic MMU LUT entry 886 high
    volatile uint32_t LUT887L;  // [read-write] Graphic MMU LUT entry 887 low
    volatile uint32_t LUT887H;  // [read-write] Graphic MMU LUT entry 887 high
    volatile uint32_t LUT888L;  // [read-write] Graphic MMU LUT entry 888 low
    volatile uint32_t LUT888H;  // [read-write] Graphic MMU LUT entry 888 high
    volatile uint32_t LUT889L;  // [read-write] Graphic MMU LUT entry 889 low
    volatile uint32_t LUT889H;  // [read-write] Graphic MMU LUT entry 889 high
    volatile uint32_t LUT890L;  // [read-write] Graphic MMU LUT entry 890 low
    volatile uint32_t LUT890H;  // [read-write] Graphic MMU LUT entry 890 high
    volatile uint32_t LUT891L;  // [read-write] Graphic MMU LUT entry 891 low
    volatile uint32_t LUT891H;  // [read-write] Graphic MMU LUT entry 891 high
    volatile uint32_t LUT892L;  // [read-write] Graphic MMU LUT entry 892 low
    volatile uint32_t LUT892H;  // [read-write] Graphic MMU LUT entry 892 high
    volatile uint32_t LUT893L;  // [read-write] Graphic MMU LUT entry 893 low
    volatile uint32_t LUT893H;  // [read-write] Graphic MMU LUT entry 893 high
    volatile uint32_t LUT894L;  // [read-write] Graphic MMU LUT entry 894 low
    volatile uint32_t LUT894H;  // [read-write] Graphic MMU LUT entry 894 high
    volatile uint32_t LUT895L;  // [read-write] Graphic MMU LUT entry 895 low
    volatile uint32_t LUT895H;  // [read-write] Graphic MMU LUT entry 895 high
    volatile uint32_t LUT896L;  // [read-write] Graphic MMU LUT entry 896 low
    volatile uint32_t LUT896H;  // [read-write] Graphic MMU LUT entry 896 high
    volatile uint32_t LUT897L;  // [read-write] Graphic MMU LUT entry 897 low
    volatile uint32_t LUT897H;  // [read-write] Graphic MMU LUT entry 897 high
    volatile uint32_t LUT898L;  // [read-write] Graphic MMU LUT entry 898 low
    volatile uint32_t LUT898H;  // [read-write] Graphic MMU LUT entry 898 high
    volatile uint32_t LUT899L;  // [read-write] Graphic MMU LUT entry 899 low
    volatile uint32_t LUT899H;  // [read-write] Graphic MMU LUT entry 899 high
    volatile uint32_t LUT900L;  // [read-write] Graphic MMU LUT entry 900 low
    volatile uint32_t LUT900H;  // [read-write] Graphic MMU LUT entry 900 high
    volatile uint32_t LUT901L;  // [read-write] Graphic MMU LUT entry 901 low
    volatile uint32_t LUT901H;  // [read-write] Graphic MMU LUT entry 901 high
    volatile uint32_t LUT902L;  // [read-write] Graphic MMU LUT entry 902 low
    volatile uint32_t LUT902H;  // [read-write] Graphic MMU LUT entry 902 high
    volatile uint32_t LUT903L;  // [read-write] Graphic MMU LUT entry 903 low
    volatile uint32_t LUT903H;  // [read-write] Graphic MMU LUT entry 903 high
    volatile uint32_t LUT904L;  // [read-write] Graphic MMU LUT entry 904 low
    volatile uint32_t LUT904H;  // [read-write] Graphic MMU LUT entry 904 high
    volatile uint32_t LUT905L;  // [read-write] Graphic MMU LUT entry 905 low
    volatile uint32_t LUT905H;  // [read-write] Graphic MMU LUT entry 905 high
    volatile uint32_t LUT906L;  // [read-write] Graphic MMU LUT entry 906 low
    volatile uint32_t LUT906H;  // [read-write] Graphic MMU LUT entry 906 high
    volatile uint32_t LUT907L;  // [read-write] Graphic MMU LUT entry 907 low
    volatile uint32_t LUT907H;  // [read-write] Graphic MMU LUT entry 907 high
    volatile uint32_t LUT908L;  // [read-write] Graphic MMU LUT entry 908 low
    volatile uint32_t LUT908H;  // [read-write] Graphic MMU LUT entry 908 high
    volatile uint32_t LUT909L;  // [read-write] Graphic MMU LUT entry 909 low
    volatile uint32_t LUT909H;  // [read-write] Graphic MMU LUT entry 909 high
    volatile uint32_t LUT910L;  // [read-write] Graphic MMU LUT entry 910 low
    volatile uint32_t LUT910H;  // [read-write] Graphic MMU LUT entry 910 high
    volatile uint32_t LUT911L;  // [read-write] Graphic MMU LUT entry 911 low
    volatile uint32_t LUT911H;  // [read-write] Graphic MMU LUT entry 911 high
    volatile uint32_t LUT912L;  // [read-write] Graphic MMU LUT entry 912 low
    volatile uint32_t LUT912H;  // [read-write] Graphic MMU LUT entry 912 high
    volatile uint32_t LUT913L;  // [read-write] Graphic MMU LUT entry 913 low
    volatile uint32_t LUT913H;  // [read-write] Graphic MMU LUT entry 913 high
    volatile uint32_t LUT914L;  // [read-write] Graphic MMU LUT entry 914 low
    volatile uint32_t LUT914H;  // [read-write] Graphic MMU LUT entry 914 high
    volatile uint32_t LUT915L;  // [read-write] Graphic MMU LUT entry 915 low
    volatile uint32_t LUT915H;  // [read-write] Graphic MMU LUT entry 915 high
    volatile uint32_t LUT916L;  // [read-write] Graphic MMU LUT entry 916 low
    volatile uint32_t LUT916H;  // [read-write] Graphic MMU LUT entry 916 high
    volatile uint32_t LUT917L;  // [read-write] Graphic MMU LUT entry 917 low
    volatile uint32_t LUT917H;  // [read-write] Graphic MMU LUT entry 917 high
    volatile uint32_t LUT918L;  // [read-write] Graphic MMU LUT entry 918 low
    volatile uint32_t LUT918H;  // [read-write] Graphic MMU LUT entry 918 high
    volatile uint32_t LUT919L;  // [read-write] Graphic MMU LUT entry 919 low
    volatile uint32_t LUT919H;  // [read-write] Graphic MMU LUT entry 919 high
    volatile uint32_t LUT920L;  // [read-write] Graphic MMU LUT entry 920 low
    volatile uint32_t LUT920H;  // [read-write] Graphic MMU LUT entry 920 high
    volatile uint32_t LUT921L;  // [read-write] Graphic MMU LUT entry 921 low
    volatile uint32_t LUT921H;  // [read-write] Graphic MMU LUT entry 921 high
    volatile uint32_t LUT922L;  // [read-write] Graphic MMU LUT entry 922 low
    volatile uint32_t LUT922H;  // [read-write] Graphic MMU LUT entry 922 high
    volatile uint32_t LUT923L;  // [read-write] Graphic MMU LUT entry 923 low
    volatile uint32_t LUT923H;  // [read-write] Graphic MMU LUT entry 923 high
    volatile uint32_t LUT924L;  // [read-write] Graphic MMU LUT entry 924 low
    volatile uint32_t LUT924H;  // [read-write] Graphic MMU LUT entry 924 high
    volatile uint32_t LUT925L;  // [read-write] Graphic MMU LUT entry 925 low
    volatile uint32_t LUT925H;  // [read-write] Graphic MMU LUT entry 925 high
    volatile uint32_t LUT926L;  // [read-write] Graphic MMU LUT entry 926 low
    volatile uint32_t LUT926H;  // [read-write] Graphic MMU LUT entry 926 high
    volatile uint32_t LUT927L;  // [read-write] Graphic MMU LUT entry 927 low
    volatile uint32_t LUT927H;  // [read-write] Graphic MMU LUT entry 927 high
    volatile uint32_t LUT928L;  // [read-write] Graphic MMU LUT entry 928 low
    volatile uint32_t LUT928H;  // [read-write] Graphic MMU LUT entry 928 high
    volatile uint32_t LUT929L;  // [read-write] Graphic MMU LUT entry 929 low
    volatile uint32_t LUT929H;  // [read-write] Graphic MMU LUT entry 929 high
    volatile uint32_t LUT930L;  // [read-write] Graphic MMU LUT entry 930 low
    volatile uint32_t LUT930H;  // [read-write] Graphic MMU LUT entry 930 high
    volatile uint32_t LUT931L;  // [read-write] Graphic MMU LUT entry 931 low
    volatile uint32_t LUT931H;  // [read-write] Graphic MMU LUT entry 931 high
    volatile uint32_t LUT932L;  // [read-write] Graphic MMU LUT entry 932 low
    volatile uint32_t LUT932H;  // [read-write] Graphic MMU LUT entry 932 high
    volatile uint32_t LUT933L;  // [read-write] Graphic MMU LUT entry 933 low
    volatile uint32_t LUT933H;  // [read-write] Graphic MMU LUT entry 933 high
    volatile uint32_t LUT934L;  // [read-write] Graphic MMU LUT entry 934 low
    volatile uint32_t LUT934H;  // [read-write] Graphic MMU LUT entry 934 high
    volatile uint32_t LUT935L;  // [read-write] Graphic MMU LUT entry 935 low
    volatile uint32_t LUT935H;  // [read-write] Graphic MMU LUT entry 935 high
    volatile uint32_t LUT936L;  // [read-write] Graphic MMU LUT entry 936 low
    volatile uint32_t LUT936H;  // [read-write] Graphic MMU LUT entry 936 high
    volatile uint32_t LUT937L;  // [read-write] Graphic MMU LUT entry 937 low
    volatile uint32_t LUT937H;  // [read-write] Graphic MMU LUT entry 937 high
    volatile uint32_t LUT938L;  // [read-write] Graphic MMU LUT entry 938 low
    volatile uint32_t LUT938H;  // [read-write] Graphic MMU LUT entry 938 high
    volatile uint32_t LUT939L;  // [read-write] Graphic MMU LUT entry 939 low
    volatile uint32_t LUT939H;  // [read-write] Graphic MMU LUT entry 939 high
    volatile uint32_t LUT940L;  // [read-write] Graphic MMU LUT entry 940 low
    volatile uint32_t LUT940H;  // [read-write] Graphic MMU LUT entry 940 high
    volatile uint32_t LUT941L;  // [read-write] Graphic MMU LUT entry 941 low
    volatile uint32_t LUT941H;  // [read-write] Graphic MMU LUT entry 941 high
    volatile uint32_t LUT942L;  // [read-write] Graphic MMU LUT entry 942 low
    volatile uint32_t LUT942H;  // [read-write] Graphic MMU LUT entry 942 high
    volatile uint32_t LUT943L;  // [read-write] Graphic MMU LUT entry 943 low
    volatile uint32_t LUT943H;  // [read-write] Graphic MMU LUT entry 943 high
    volatile uint32_t LUT944L;  // [read-write] Graphic MMU LUT entry 944 low
    volatile uint32_t LUT944H;  // [read-write] Graphic MMU LUT entry 944 high
    volatile uint32_t LUT945L;  // [read-write] Graphic MMU LUT entry 945 low
    volatile uint32_t LUT945H;  // [read-write] Graphic MMU LUT entry 945 high
    volatile uint32_t LUT946L;  // [read-write] Graphic MMU LUT entry 946 low
    volatile uint32_t LUT946H;  // [read-write] Graphic MMU LUT entry 946 high
    volatile uint32_t LUT947L;  // [read-write] Graphic MMU LUT entry 947 low
    volatile uint32_t LUT947H;  // [read-write] Graphic MMU LUT entry 947 high
    volatile uint32_t LUT948L;  // [read-write] Graphic MMU LUT entry 948 low
    volatile uint32_t LUT948H;  // [read-write] Graphic MMU LUT entry 948 high
    volatile uint32_t LUT949L;  // [read-write] Graphic MMU LUT entry 949 low
    volatile uint32_t LUT949H;  // [read-write] Graphic MMU LUT entry 949 high
    volatile uint32_t LUT950L;  // [read-write] Graphic MMU LUT entry 950 low
    volatile uint32_t LUT950H;  // [read-write] Graphic MMU LUT entry 950 high
    volatile uint32_t LUT951L;  // [read-write] Graphic MMU LUT entry 951 low
    volatile uint32_t LUT951H;  // [read-write] Graphic MMU LUT entry 951 high
    volatile uint32_t LUT952L;  // [read-write] Graphic MMU LUT entry 952 low
    volatile uint32_t LUT952H;  // [read-write] Graphic MMU LUT entry 952 high
    volatile uint32_t LUT953L;  // [read-write] Graphic MMU LUT entry 953 low
    volatile uint32_t LUT953H;  // [read-write] Graphic MMU LUT entry 953 high
    volatile uint32_t LUT954L;  // [read-write] Graphic MMU LUT entry 954 low
    volatile uint32_t LUT954H;  // [read-write] Graphic MMU LUT entry 954 high
    volatile uint32_t LUT955L;  // [read-write] Graphic MMU LUT entry 955 low
    volatile uint32_t LUT955H;  // [read-write] Graphic MMU LUT entry 955 high
    volatile uint32_t LUT956L;  // [read-write] Graphic MMU LUT entry 956 low
    volatile uint32_t LUT956H;  // [read-write] Graphic MMU LUT entry 956 high
    volatile uint32_t LUT957L;  // [read-write] Graphic MMU LUT entry 957 low
    volatile uint32_t LUT957H;  // [read-write] Graphic MMU LUT entry 957 high
    volatile uint32_t LUT958L;  // [read-write] Graphic MMU LUT entry 958 low
    volatile uint32_t LUT958H;  // [read-write] Graphic MMU LUT entry 958 high
    volatile uint32_t LUT959L;  // [read-write] Graphic MMU LUT entry 959 low
    volatile uint32_t LUT959H;  // [read-write] Graphic MMU LUT entry 959 high
    volatile uint32_t LUT960L;  // [read-write] Graphic MMU LUT entry 960 low
    volatile uint32_t LUT960H;  // [read-write] Graphic MMU LUT entry 960 high
    volatile uint32_t LUT961L;  // [read-write] Graphic MMU LUT entry 961 low
    volatile uint32_t LUT961H;  // [read-write] Graphic MMU LUT entry 961 high
    volatile uint32_t LUT962L;  // [read-write] Graphic MMU LUT entry 962 low
    volatile uint32_t LUT962H;  // [read-write] Graphic MMU LUT entry 962 high
    volatile uint32_t LUT963L;  // [read-write] Graphic MMU LUT entry 963 low
    volatile uint32_t LUT963H;  // [read-write] Graphic MMU LUT entry 963 high
    volatile uint32_t LUT964L;  // [read-write] Graphic MMU LUT entry 964 low
    volatile uint32_t LUT964H;  // [read-write] Graphic MMU LUT entry 964 high
    volatile uint32_t LUT965L;  // [read-write] Graphic MMU LUT entry 965 low
    volatile uint32_t LUT965H;  // [read-write] Graphic MMU LUT entry 965 high
    volatile uint32_t LUT966L;  // [read-write] Graphic MMU LUT entry 966 low
    volatile uint32_t LUT966H;  // [read-write] Graphic MMU LUT entry 966 high
    volatile uint32_t LUT967L;  // [read-write] Graphic MMU LUT entry 967 low
    volatile uint32_t LUT967H;  // [read-write] Graphic MMU LUT entry 967 high
    volatile uint32_t LUT968L;  // [read-write] Graphic MMU LUT entry 968 low
    volatile uint32_t LUT968H;  // [read-write] Graphic MMU LUT entry 968 high
    volatile uint32_t LUT969L;  // [read-write] Graphic MMU LUT entry 969 low
    volatile uint32_t LUT969H;  // [read-write] Graphic MMU LUT entry 969 high
    volatile uint32_t LUT970L;  // [read-write] Graphic MMU LUT entry 970 low
    volatile uint32_t LUT970H;  // [read-write] Graphic MMU LUT entry 970 high
    volatile uint32_t LUT971L;  // [read-write] Graphic MMU LUT entry 971 low
    volatile uint32_t LUT971H;  // [read-write] Graphic MMU LUT entry 971 high
    volatile uint32_t LUT972L;  // [read-write] Graphic MMU LUT entry 972 low
    volatile uint32_t LUT972H;  // [read-write] Graphic MMU LUT entry 972 high
    volatile uint32_t LUT973L;  // [read-write] Graphic MMU LUT entry 973 low
    volatile uint32_t LUT973H;  // [read-write] Graphic MMU LUT entry 973 high
    volatile uint32_t LUT974L;  // [read-write] Graphic MMU LUT entry 974 low
    volatile uint32_t LUT974H;  // [read-write] Graphic MMU LUT entry 974 high
    volatile uint32_t LUT975L;  // [read-write] Graphic MMU LUT entry 975 low
    volatile uint32_t LUT975H;  // [read-write] Graphic MMU LUT entry 975 high
    volatile uint32_t LUT976L;  // [read-write] Graphic MMU LUT entry 976 low
    volatile uint32_t LUT976H;  // [read-write] Graphic MMU LUT entry 976 high
    volatile uint32_t LUT977L;  // [read-write] Graphic MMU LUT entry 977 low
    volatile uint32_t LUT977H;  // [read-write] Graphic MMU LUT entry 977 high
    volatile uint32_t LUT978L;  // [read-write] Graphic MMU LUT entry 978 low
    volatile uint32_t LUT978H;  // [read-write] Graphic MMU LUT entry 978 high
    volatile uint32_t LUT979L;  // [read-write] Graphic MMU LUT entry 979 low
    volatile uint32_t LUT979H;  // [read-write] Graphic MMU LUT entry 979 high
    volatile uint32_t LUT980L;  // [read-write] Graphic MMU LUT entry 980 low
    volatile uint32_t LUT980H;  // [read-write] Graphic MMU LUT entry 980 high
    volatile uint32_t LUT981L;  // [read-write] Graphic MMU LUT entry 981 low
    volatile uint32_t LUT981H;  // [read-write] Graphic MMU LUT entry 981 high
    volatile uint32_t LUT982L;  // [read-write] Graphic MMU LUT entry 982 low
    volatile uint32_t LUT982H;  // [read-write] Graphic MMU LUT entry 982 high
    volatile uint32_t LUT983L;  // [read-write] Graphic MMU LUT entry 983 low
    volatile uint32_t LUT983H;  // [read-write] Graphic MMU LUT entry 983 high
    volatile uint32_t LUT984L;  // [read-write] Graphic MMU LUT entry 984 low
    volatile uint32_t LUT984H;  // [read-write] Graphic MMU LUT entry 984 high
    volatile uint32_t LUT985L;  // [read-write] Graphic MMU LUT entry 985 low
    volatile uint32_t LUT985H;  // [read-write] Graphic MMU LUT entry 985 high
    volatile uint32_t LUT986L;  // [read-write] Graphic MMU LUT entry 986 low
    volatile uint32_t LUT986H;  // [read-write] Graphic MMU LUT entry 986 high
    volatile uint32_t LUT987L;  // [read-write] Graphic MMU LUT entry 987 low
    volatile uint32_t LUT987H;  // [read-write] Graphic MMU LUT entry 987 high
    volatile uint32_t LUT988L;  // [read-write] Graphic MMU LUT entry 988 low
    volatile uint32_t LUT988H;  // [read-write] Graphic MMU LUT entry 988 high
    volatile uint32_t LUT989L;  // [read-write] Graphic MMU LUT entry 989 low
    volatile uint32_t LUT989H;  // [read-write] Graphic MMU LUT entry 989 high
    volatile uint32_t LUT990L;  // [read-write] Graphic MMU LUT entry 990 low
    volatile uint32_t LUT990H;  // [read-write] Graphic MMU LUT entry 990 high
    volatile uint32_t LUT991L;  // [read-write] Graphic MMU LUT entry 991 low
    volatile uint32_t LUT991H;  // [read-write] Graphic MMU LUT entry 991 high
    volatile uint32_t LUT992L;  // [read-write] Graphic MMU LUT entry 992 low
    volatile uint32_t LUT992H;  // [read-write] Graphic MMU LUT entry 992 high
    volatile uint32_t LUT993L;  // [read-write] Graphic MMU LUT entry 993 low
    volatile uint32_t LUT993H;  // [read-write] Graphic MMU LUT entry 993 high
    volatile uint32_t LUT994L;  // [read-write] Graphic MMU LUT entry 994 low
    volatile uint32_t LUT994H;  // [read-write] Graphic MMU LUT entry 994 high
    volatile uint32_t LUT995L;  // [read-write] Graphic MMU LUT entry 995 low
    volatile uint32_t LUT995H;  // [read-write] Graphic MMU LUT entry 995 high
    volatile uint32_t LUT996L;  // [read-write] Graphic MMU LUT entry 996 low
    volatile uint32_t LUT996H;  // [read-write] Graphic MMU LUT entry 996 high
    volatile uint32_t LUT997L;  // [read-write] Graphic MMU LUT entry 997 low
    volatile uint32_t LUT997H;  // [read-write] Graphic MMU LUT entry 997 high
    volatile uint32_t LUT998L;  // [read-write] Graphic MMU LUT entry 998 low
    volatile uint32_t LUT998H;  // [read-write] Graphic MMU LUT entry 998 high
    volatile uint32_t LUT999L;  // [read-write] Graphic MMU LUT entry 999 low
    volatile uint32_t LUT999H;  // [read-write] Graphic MMU LUT entry 999 high
    volatile uint32_t LUT1000L; // [read-write] Graphic MMU LUT entry 1000 low
    volatile uint32_t LUT1000H; // [read-write] Graphic MMU LUT entry 1000 high
    volatile uint32_t LUT1001L; // [read-write] Graphic MMU LUT entry 1001 low
    volatile uint32_t LUT1001H; // [read-write] Graphic MMU LUT entry 1001 high
    volatile uint32_t LUT1002L; // [read-write] Graphic MMU LUT entry 1002 low
    volatile uint32_t LUT1002H; // [read-write] Graphic MMU LUT entry 1002 high
    volatile uint32_t LUT1003L; // [read-write] Graphic MMU LUT entry 1003 low
    volatile uint32_t LUT1003H; // [read-write] Graphic MMU LUT entry 1003 high
    volatile uint32_t LUT1004L; // [read-write] Graphic MMU LUT entry 1004 low
    volatile uint32_t LUT1004H; // [read-write] Graphic MMU LUT entry 1004 high
    volatile uint32_t LUT1005L; // [read-write] Graphic MMU LUT entry 1005 low
    volatile uint32_t LUT1005H; // [read-write] Graphic MMU LUT entry 1005 high
    volatile uint32_t LUT1006L; // [read-write] Graphic MMU LUT entry 1006 low
    volatile uint32_t LUT1006H; // [read-write] Graphic MMU LUT entry 1006 high
    volatile uint32_t LUT1007L; // [read-write] Graphic MMU LUT entry 1007 low
    volatile uint32_t LUT1007H; // [read-write] Graphic MMU LUT entry 1007 high
    volatile uint32_t LUT1008L; // [read-write] Graphic MMU LUT entry 1008 low
    volatile uint32_t LUT1008H; // [read-write] Graphic MMU LUT entry 1008 high
    volatile uint32_t LUT1009L; // [read-write] Graphic MMU LUT entry 1009 low
    volatile uint32_t LUT1009H; // [read-write] Graphic MMU LUT entry 1009 high
    volatile uint32_t LUT1010L; // [read-write] Graphic MMU LUT entry 1010 low
    volatile uint32_t LUT1010H; // [read-write] Graphic MMU LUT entry 1010 high
    volatile uint32_t LUT1011L; // [read-write] Graphic MMU LUT entry 1011 low
    volatile uint32_t LUT1011H; // [read-write] Graphic MMU LUT entry 1011 high
    volatile uint32_t LUT1012L; // [read-write] Graphic MMU LUT entry 1012 low
    volatile uint32_t LUT1012H; // [read-write] Graphic MMU LUT entry 1012 high
    volatile uint32_t LUT1013L; // [read-write] Graphic MMU LUT entry 1013 low
    volatile uint32_t LUT1013H; // [read-write] Graphic MMU LUT entry 1013 high
    volatile uint32_t LUT1014L; // [read-write] Graphic MMU LUT entry 1014 low
    volatile uint32_t LUT1014H; // [read-write] Graphic MMU LUT entry 1014 high
    volatile uint32_t LUT1015L; // [read-write] Graphic MMU LUT entry 1015 low
    volatile uint32_t LUT1015H; // [read-write] Graphic MMU LUT entry 1015 high
    volatile uint32_t LUT1016L; // [read-write] Graphic MMU LUT entry 1016 low
    volatile uint32_t LUT1016H; // [read-write] Graphic MMU LUT entry 1016 high
    volatile uint32_t LUT1017L; // [read-write] Graphic MMU LUT entry 1017 low
    volatile uint32_t LUT1017H; // [read-write] Graphic MMU LUT entry 1017 high
    volatile uint32_t LUT1018L; // [read-write] Graphic MMU LUT entry 1018 low
    volatile uint32_t LUT1018H; // [read-write] Graphic MMU LUT entry 1018 high
    volatile uint32_t LUT1019L; // [read-write] Graphic MMU LUT entry 1019 low
    volatile uint32_t LUT1019H; // [read-write] Graphic MMU LUT entry 1019 high
    volatile uint32_t LUT1020L; // [read-write] Graphic MMU LUT entry 1020 low
    volatile uint32_t LUT1020H; // [read-write] Graphic MMU LUT entry 1020 high
    volatile uint32_t LUT1021L; // [read-write] Graphic MMU LUT entry 1021 low
    volatile uint32_t LUT1021H; // [read-write] Graphic MMU LUT entry 1021 high
    volatile uint32_t LUT1022L; // [read-write] Graphic MMU LUT entry 1022 low
    volatile uint32_t LUT1022H; // [read-write] Graphic MMU LUT entry 1022 high
    volatile uint32_t LUT1023L; // [read-write] Graphic MMU LUT entry 1023 low
    volatile uint32_t LUT1023H; // [read-write] Graphic MMU LUT entry 1023 high

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_B0OIE = 0x1;  // Buffer 0 overflow interrupt enable
    static constexpr uint32_t CR_B1OIE = 0x2;  // Buffer 1 overflow interrupt enable
    static constexpr uint32_t CR_B2OIE = 0x4;  // Buffer 2 overflow interrupt enable
    static constexpr uint32_t CR_B3OIE = 0x8;  // Buffer 3 overflow interrupt enable
    static constexpr uint32_t CR_AMEIE = 0x10; // AHB master error interrupt enable
    static constexpr uint32_t CR_BM192 = 0x40; // 192 Block mode

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_B0OF = 0x1;  // Buffer 0 overflow flag
    static constexpr uint32_t SR_B1OF = 0x2;  // Buffer 1 overflow flag
    static constexpr uint32_t SR_B2OF = 0x4;  // Buffer 2 overflow flag
    static constexpr uint32_t SR_B3OF = 0x8;  // Buffer 3 overflow flag
    static constexpr uint32_t SR_AMEF = 0x10; // AHB master error flag

    static constexpr uint32_t FCR_RESET_VALUE = 0x0;
    static constexpr uint32_t FCR_CB0OF = 0x1;  // Clear buffer 0 overflow flag
    static constexpr uint32_t FCR_CB1OF = 0x2;  // Clear buffer 1 overflow flag
    static constexpr uint32_t FCR_CB2OF = 0x4;  // Clear buffer 2 overflow flag
    static constexpr uint32_t FCR_CB3OF = 0x8;  // Clear buffer 3 overflow flag
    static constexpr uint32_t FCR_CAMEF = 0x10; // Clear AHB master error flag

    static constexpr uint32_t DVR_RESET_VALUE = 0x0;

    static constexpr uint32_t B0CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t B0CR_PBO =    // Physical buffer offset
        bit_field_t<4, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t B0CR_PBBA =   // Physical buffer base address
        bit_field_t<23, 0x1ff>::value<X>();

    static constexpr uint32_t B1CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t B1CR_PBO =    // Physical buffer offset
        bit_field_t<4, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t B1CR_PBBA =   // Physical buffer base address
        bit_field_t<23, 0x1ff>::value<X>();

    static constexpr uint32_t B2CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t B2CR_PBO =    // Physical buffer offset
        bit_field_t<4, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t B2CR_PBBA =   // Physical buffer base address
        bit_field_t<23, 0x1ff>::value<X>();

    static constexpr uint32_t B3CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t B3CR_PBO =    // Physical buffer offset
        bit_field_t<4, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t B3CR_PBBA =   // Physical buffer base address
        bit_field_t<23, 0x1ff>::value<X>();

    static constexpr uint32_t VERR_RESET_VALUE = 0x10;
    template<uint32_t X>
    static constexpr uint32_t VERR_MINREV =   // Minor revision
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t VERR_MAJREV =   // Major revision
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t IPIDR_RESET_VALUE = 0x160061;

    static constexpr uint32_t SIDR_RESET_VALUE = 0xa3c5dd04;

    static constexpr uint32_t LUT0L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT0L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT0L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT0L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT1L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT1L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT1L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT1L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT2L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT2L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT2L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT2L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT3L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT3L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT3L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT3L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT4L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT4L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT4L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT4L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT5L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT5L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT5L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT5L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT6L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT6L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT6L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT6L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT7L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT7L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT7L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT7L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT8L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT8L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT8L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT8L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT9L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT9L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT9L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT9L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT10L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT10L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT10L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT10L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT11L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT11L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT11L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT11L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT12L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT12L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT12L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT12L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT13L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT13L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT13L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT13L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT14L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT14L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT14L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT14L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT15L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT15L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT15L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT15L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT16L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT16L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT16L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT16L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT17L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT17L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT17L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT17L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT18L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT18L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT18L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT18L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT19L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT19L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT19L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT19L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT20L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT20L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT20L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT20L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT21L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT21L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT21L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT21L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT22L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT22L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT22L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT22L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT23L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT23L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT23L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT23L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT24L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT24L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT24L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT24L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT25L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT25L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT25L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT25L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT26L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT26L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT26L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT26L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT27L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT27L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT27L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT27L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT28L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT28L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT28L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT28L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT29L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT29L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT29L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT29L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT30L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT30L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT30L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT30L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT31L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT31L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT31L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT31L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT32L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT32L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT32L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT32L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT33L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT33L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT33L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT33L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT34L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT34L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT34L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT34L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT35L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT35L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT35L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT35L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT36L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT36L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT36L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT36L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT37L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT37L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT37L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT37L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT38L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT38L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT38L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT38L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT39L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT39L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT39L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT39L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT40L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT40L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT40L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT40L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT41L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT41L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT41L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT41L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT42L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT42L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT42L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT42L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT43L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT43L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT43L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT43L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT44L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT44L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT44L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT44L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT45L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT45L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT45L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT45L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT46L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT46L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT46L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT46L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT47L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT47L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT47L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT47L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT48L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT48L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT48L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT48L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT49L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT49L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT49L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT49L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT50L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT50L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT50L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT50L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT51L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT51L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT51L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT51L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT52L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT52L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT52L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT52L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT53L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT53L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT53L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT53L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT54L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT54L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT54L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT54L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT55L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT55L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT55L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT55L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT56L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT56L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT56L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT56L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT57L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT57L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT57L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT57L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT58L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT58L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT58L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT58L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT59L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT59L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT59L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT59L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT60L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT60L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT60L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT60L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT61L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT61L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT61L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT61L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT62L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT62L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT62L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT62L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT63L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT63L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT63L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT63L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT64L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT64L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT64L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT64L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT65L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT65L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT65L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT65L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT66L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT66L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT66L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT66L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT67L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT67L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT67L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT67L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT68L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT68L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT68L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT68L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT69L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT69L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT69L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT69L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT70L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT70L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT70L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT70L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT71L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT71L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT71L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT71L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT72L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT72L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT72L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT72L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT73L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT73L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT73L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT73L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT74L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT74L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT74L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT74L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT75L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT75L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT75L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT75L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT76L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT76L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT76L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT76L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT77L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT77L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT77L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT77L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT78L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT78L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT78L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT78L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT79L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT79L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT79L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT79L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT80L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT80L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT80L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT80L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT81L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT81L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT81L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT81L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT82L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT82L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT82L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT82L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT83L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT83L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT83L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT83L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT84L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT84L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT84L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT84L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT85L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT85L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT85L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT85L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT86L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT86L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT86L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT86L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT87L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT87L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT87L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT87L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT88L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT88L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT88L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT88L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT89L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT89L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT89L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT89L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT90L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT90L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT90L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT90L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT91L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT91L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT91L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT91L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT92L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT92L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT92L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT92L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT93L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT93L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT93L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT93L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT94L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT94L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT94L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT94L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT95L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT95L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT95L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT95L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT96L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT96L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT96L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT96L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT97L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT97L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT97L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT97L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT98L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT98L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT98L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT98L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT99L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT99L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT99L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT99L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT100L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT100L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT100L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT100L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT101L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT101L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT101L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT101L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT102L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT102L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT102L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT102L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT103L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT103L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT103L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT103L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT104L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT104L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT104L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT104L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT105L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT105L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT105L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT105L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT106L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT106L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT106L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT106L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT107L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT107L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT107L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT107L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT108L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT108L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT108L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT108L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT109L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT109L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT109L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT109L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT110L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT110L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT110L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT110L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT111L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT111L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT111L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT111L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT112L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT112L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT112L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT112L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT113L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT113L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT113L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT113L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT114L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT114L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT114L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT114L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT115L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT115L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT115L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT115L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT116L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT116L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT116L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT116L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT117L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT117L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT117L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT117L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT118L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT118L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT118L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT118L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT119L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT119L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT119L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT119L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT120L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT120L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT120L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT120L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT121L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT121L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT121L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT121L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT122L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT122L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT122L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT122L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT123L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT123L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT123L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT123L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT124L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT124L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT124L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT124L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT125L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT125L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT125L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT125L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT126L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT126L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT126L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT126L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT127L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT127L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT127L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT127L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT128L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT128L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT128L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT128L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT129L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT129L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT129L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT129L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT130L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT130L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT130L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT130L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT131L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT131L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT131L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT131L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT132L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT132L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT132L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT132L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT133L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT133L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT133L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT133L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT134L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT134L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT134L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT134L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT135L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT135L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT135L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT135L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT136L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT136L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT136L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT136L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT137L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT137L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT137L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT137L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT138L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT138L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT138L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT138L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT139L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT139L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT139L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT139L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT140L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT140L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT140L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT140L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT141L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT141L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT141L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT141L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT142L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT142L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT142L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT142L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT143L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT143L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT143L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT143L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT144L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT144L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT144L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT144L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT145L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT145L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT145L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT145L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT146L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT146L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT146L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT146L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT147L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT147L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT147L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT147L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT148L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT148L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT148L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT148L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT149L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT149L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT149L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT149L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT150L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT150L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT150L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT150L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT151L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT151L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT151L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT151L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT152L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT152L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT152L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT152L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT153L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT153L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT153L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT153L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT154L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT154L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT154L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT154L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT155L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT155L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT155L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT155L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT156L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT156L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT156L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT156L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT157L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT157L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT157L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT157L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT158L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT158L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT158L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT158L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT159L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT159L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT159L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT159L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT160L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT160L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT160L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT160L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT161L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT161L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT161L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT161L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT162L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT162L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT162L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT162L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT163L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT163L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT163L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT163L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT164L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT164L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT164L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT164L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT165L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT165L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT165L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT165L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT166L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT166L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT166L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT166L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT167L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT167L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT167L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT167L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT168L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT168L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT168L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT168L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT169L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT169L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT169L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT169L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT170L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT170L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT170L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT170L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT171L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT171L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT171L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT171L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT172L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT172L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT172L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT172L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT173L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT173L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT173L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT173L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT174L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT174L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT174L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT174L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT175L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT175L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT175L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT175L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT176L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT176L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT176L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT176L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT177L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT177L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT177L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT177L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT178L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT178L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT178L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT178L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT179L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT179L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT179L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT179L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT180L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT180L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT180L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT180L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT181L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT181L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT181L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT181L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT182L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT182L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT182L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT182L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT183L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT183L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT183L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT183L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT184L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT184L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT184L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT184L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT185L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT185L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT185L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT185L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT186L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT186L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT186L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT186L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT187L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT187L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT187L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT187L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT188L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT188L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT188L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT188L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT189L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT189L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT189L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT189L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT190L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT190L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT190L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT190L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT191L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT191L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT191L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT191L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT192L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT192L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT192L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT192L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT193L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT193L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT193L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT193L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT194L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT194L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT194L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT194L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT195L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT195L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT195L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT195L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT196L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT196L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT196L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT196L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT197L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT197L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT197L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT197L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT198L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT198L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT198L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT198L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT199L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT199L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT199L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT199L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT200L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT200L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT200L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT200L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT201L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT201L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT201L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT201L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT202L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT202L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT202L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT202L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT203L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT203L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT203L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT203L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT204L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT204L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT204L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT204L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT205L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT205L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT205L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT205L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT206L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT206L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT206L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT206L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT207L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT207L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT207L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT207L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT208L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT208L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT208L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT208L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT209L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT209L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT209L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT209L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT210L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT210L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT210L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT210L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT211L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT211L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT211L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT211L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT212L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT212L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT212L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT212L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT213L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT213L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT213L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT213L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT214L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT214L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT214L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT214L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT215L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT215L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT215L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT215L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT216L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT216L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT216L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT216L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT217L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT217L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT217L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT217L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT218L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT218L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT218L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT218L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT219L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT219L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT219L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT219L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT220L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT220L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT220L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT220L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT221L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT221L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT221L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT221L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT222L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT222L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT222L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT222L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT223L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT223L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT223L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT223L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT224L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT224L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT224L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT224L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT225L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT225L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT225L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT225L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT226L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT226L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT226L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT226L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT227L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT227L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT227L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT227L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT228L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT228L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT228L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT228L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT229L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT229L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT229L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT229L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT230L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT230L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT230L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT230L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT231L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT231L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT231L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT231L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT232L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT232L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT232L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT232L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT233L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT233L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT233L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT233L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT234L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT234L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT234L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT234L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT235L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT235L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT235L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT235L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT236L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT236L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT236L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT236L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT237L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT237L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT237L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT237L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT238L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT238L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT238L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT238L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT239L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT239L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT239L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT239L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT240L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT240L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT240L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT240L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT241L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT241L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT241L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT241L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT242L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT242L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT242L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT242L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT243L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT243L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT243L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT243L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT244L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT244L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT244L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT244L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT245L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT245L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT245L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT245L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT246L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT246L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT246L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT246L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT247L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT247L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT247L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT247L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT248L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT248L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT248L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT248L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT249L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT249L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT249L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT249L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT250L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT250L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT250L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT250L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT251L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT251L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT251L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT251L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT252L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT252L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT252L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT252L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT253L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT253L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT253L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT253L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT254L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT254L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT254L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT254L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT255L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT255L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT255L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT255L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT256L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT256L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT256L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT256L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT257L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT257L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT257L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT257L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT258L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT258L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT258L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT258L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT259L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT259L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT259L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT259L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT260L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT260L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT260L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT260L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT261L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT261L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT261L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT261L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT262L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT262L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT262L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT262L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT263L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT263L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT263L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT263L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT264L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT264L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT264L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT264L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT265L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT265L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT265L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT265L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT266L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT266L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT266L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT266L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT267L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT267L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT267L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT267L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT268L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT268L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT268L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT268L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT269L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT269L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT269L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT269L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT270L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT270L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT270L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT270L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT271L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT271L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT271L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT271L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT272L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT272L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT272L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT272L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT273L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT273L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT273L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT273L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT274L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT274L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT274L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT274L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT275L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT275L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT275L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT275L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT276L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT276L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT276L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT276L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT277L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT277L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT277L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT277L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT278L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT278L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT278L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT278L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT279L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT279L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT279L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT279L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT280L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT280L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT280L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT280L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT281L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT281L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT281L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT281L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT282L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT282L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT282L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT282L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT283L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT283L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT283L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT283L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT284L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT284L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT284L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT284L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT285L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT285L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT285L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT285L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT286L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT286L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT286L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT286L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT287L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT287L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT287L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT287L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT288L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT288L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT288L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT288L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT289L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT289L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT289L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT289L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT290L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT290L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT290L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT290L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT291L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT291L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT291L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT291L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT292L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT292L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT292L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT292L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT293L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT293L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT293L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT293L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT294L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT294L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT294L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT294L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT295L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT295L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT295L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT295L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT296L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT296L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT296L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT296L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT297L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT297L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT297L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT297L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT298L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT298L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT298L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT298L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT299L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT299L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT299L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT299L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT300L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT300L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT300L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT300L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT301L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT301L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT301L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT301L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT302L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT302L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT302L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT302L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT303L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT303L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT303L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT303L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT304L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT304L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT304L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT304L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT305L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT305L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT305L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT305L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT306L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT306L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT306L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT306L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT307L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT307L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT307L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT307L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT308L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT308L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT308L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT308L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT309L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT309L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT309L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT309L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT310L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT310L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT310L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT310L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT311L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT311L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT311L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT311L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT312L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT312L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT312L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT312L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT313L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT313L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT313L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT313L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT314L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT314L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT314L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT314L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT315L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT315L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT315L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT315L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT316L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT316L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT316L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT316L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT317L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT317L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT317L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT317L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT318L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT318L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT318L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT318L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT319L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT319L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT319L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT319L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT320L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT320L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT320L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT320L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT321L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT321L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT321L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT321L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT322L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT322L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT322L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT322L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT323L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT323L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT323L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT323L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT324L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT324L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT324L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT324L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT325L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT325L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT325L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT325L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT326L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT326L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT326L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT326L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT327L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT327L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT327L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT327L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT328L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT328L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT328L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT328L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT329L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT329L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT329L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT329L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT330L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT330L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT330L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT330L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT331L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT331L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT331L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT331L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT332L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT332L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT332L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT332L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT333L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT333L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT333L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT333L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT334L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT334L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT334L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT334L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT335L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT335L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT335L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT335L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT336L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT336L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT336L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT336L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT337L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT337L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT337L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT337L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT338L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT338L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT338L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT338L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT339L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT339L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT339L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT339L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT340L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT340L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT340L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT340L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT341L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT341L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT341L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT341L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT342L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT342L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT342L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT342L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT343L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT343L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT343L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT343L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT344L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT344L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT344L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT344L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT345L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT345L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT345L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT345L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT346L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT346L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT346L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT346L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT347L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT347L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT347L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT347L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT348L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT348L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT348L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT348L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT349L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT349L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT349L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT349L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT350L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT350L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT350L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT350L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT351L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT351L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT351L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT351L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT352L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT352L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT352L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT352L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT353L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT353L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT353L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT353L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT354L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT354L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT354L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT354L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT355L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT355L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT355L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT355L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT356L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT356L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT356L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT356L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT357L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT357L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT357L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT357L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT358L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT358L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT358L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT358L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT359L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT359L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT359L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT359L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT360L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT360L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT360L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT360L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT361L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT361L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT361L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT361L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT362L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT362L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT362L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT362L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT363L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT363L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT363L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT363L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT364L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT364L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT364L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT364L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT365L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT365L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT365L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT365L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT366L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT366L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT366L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT366L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT367L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT367L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT367L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT367L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT368L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT368L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT368L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT368L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT369L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT369L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT369L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT369L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT370L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT370L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT370L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT370L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT371L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT371L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT371L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT371L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT372L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT372L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT372L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT372L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT373L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT373L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT373L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT373L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT374L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT374L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT374L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT374L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT375L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT375L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT375L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT375L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT376L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT376L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT376L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT376L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT377L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT377L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT377L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT377L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT378L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT378L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT378L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT378L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT379L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT379L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT379L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT379L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT380L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT380L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT380L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT380L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT381L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT381L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT381L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT381L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT382L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT382L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT382L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT382L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT383L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT383L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT383L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT383L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT384L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT384L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT384L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT384L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT385L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT385L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT385L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT385L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT386L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT386L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT386L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT386L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT387L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT387L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT387L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT387L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT388L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT388L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT388L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT388L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT389L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT389L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT389L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT389L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT390L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT390L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT390L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT390L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT391L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT391L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT391L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT391L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT392L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT392L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT392L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT392L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT393L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT393L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT393L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT393L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT394L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT394L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT394L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT394L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT395L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT395L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT395L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT395L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT396L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT396L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT396L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT396L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT397L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT397L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT397L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT397L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT398L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT398L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT398L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT398L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT399L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT399L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT399L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT399L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT400L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT400L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT400L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT400L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT401L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT401L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT401L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT401L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT402L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT402L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT402L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT402L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT403L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT403L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT403L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT403L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT404L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT404L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT404L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT404L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT405L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT405L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT405L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT405L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT406L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT406L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT406L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT406L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT407L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT407L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT407L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT407L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT408L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT408L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT408L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT408L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT409L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT409L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT409L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT409L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT410L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT410L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT410L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT410L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT411L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT411L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT411L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT411L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT412L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT412L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT412L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT412L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT413L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT413L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT413L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT413L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT414L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT414L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT414L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT414L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT415L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT415L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT415L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT415L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT416L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT416L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT416L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT416L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT417L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT417L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT417L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT417L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT418L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT418L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT418L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT418L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT419L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT419L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT419L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT419L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT420L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT420L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT420L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT420L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT421L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT421L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT421L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT421L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT422L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT422L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT422L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT422L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT423L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT423L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT423L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT423L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT424L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT424L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT424L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT424L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT425L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT425L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT425L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT425L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT426L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT426L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT426L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT426L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT427L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT427L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT427L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT427L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT428L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT428L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT428L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT428L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT429L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT429L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT429L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT429L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT430L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT430L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT430L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT430L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT431L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT431L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT431L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT431L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT432L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT432L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT432L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT432L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT433L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT433L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT433L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT433L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT434L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT434L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT434L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT434L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT435L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT435L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT435L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT435L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT436L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT436L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT436L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT436L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT437L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT437L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT437L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT437L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT438L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT438L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT438L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT438L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT439L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT439L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT439L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT439L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT440L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT440L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT440L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT440L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT441L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT441L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT441L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT441L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT442L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT442L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT442L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT442L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT443L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT443L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT443L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT443L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT444L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT444L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT444L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT444L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT445L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT445L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT445L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT445L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT446L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT446L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT446L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT446L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT447L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT447L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT447L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT447L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT448L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT448L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT448L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT448L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT449L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT449L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT449L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT449L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT450L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT450L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT450L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT450L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT451L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT451L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT451L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT451L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT452L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT452L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT452L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT452L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT453L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT453L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT453L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT453L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT454L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT454L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT454L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT454L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT455L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT455L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT455L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT455L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT456L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT456L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT456L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT456L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT457L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT457L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT457L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT457L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT458L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT458L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT458L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT458L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT459L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT459L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT459L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT459L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT460L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT460L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT460L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT460L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT461L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT461L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT461L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT461L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT462L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT462L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT462L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT462L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT463L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT463L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT463L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT463L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT464L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT464L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT464L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT464L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT465L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT465L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT465L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT465L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT466L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT466L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT466L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT466L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT467L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT467L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT467L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT467L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT468L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT468L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT468L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT468L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT469L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT469L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT469L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT469L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT470L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT470L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT470L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT470L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT471L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT471L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT471L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT471L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT472L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT472L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT472L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT472L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT473L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT473L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT473L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT473L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT474L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT474L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT474L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT474L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT475L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT475L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT475L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT475L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT476L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT476L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT476L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT476L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT477L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT477L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT477L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT477L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT478L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT478L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT478L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT478L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT479L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT479L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT479L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT479L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT480L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT480L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT480L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT480L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT481L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT481L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT481L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT481L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT482L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT482L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT482L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT482L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT483L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT483L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT483L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT483L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT484L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT484L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT484L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT484L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT485L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT485L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT485L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT485L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT486L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT486L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT486L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT486L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT487L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT487L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT487L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT487L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT488L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT488L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT488L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT488L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT489L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT489L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT489L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT489L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT490L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT490L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT490L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT490L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT491L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT491L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT491L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT491L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT492L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT492L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT492L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT492L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT493L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT493L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT493L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT493L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT494L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT494L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT494L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT494L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT495L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT495L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT495L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT495L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT496L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT496L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT496L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT496L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT497L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT497L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT497L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT497L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT498L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT498L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT498L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT498L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT499L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT499L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT499L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT499L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT500L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT500L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT500L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT500L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT501L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT501L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT501L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT501L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT502L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT502L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT502L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT502L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT503L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT503L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT503L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT503L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT504L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT504L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT504L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT504L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT505L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT505L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT505L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT505L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT506L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT506L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT506L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT506L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT507L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT507L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT507L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT507L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT508L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT508L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT508L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT508L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT509L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT509L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT509L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT509L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT510L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT510L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT510L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT510L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT511L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT511L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT511L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT511L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT512L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT512L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT512L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT512L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT513L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT513L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT513L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT513L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT514L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT514L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT514L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT514L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT515L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT515L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT515L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT515L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT516L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT516L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT516L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT516L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT517L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT517L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT517L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT517L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT518L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT518L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT518L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT518L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT519L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT519L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT519L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT519L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT520L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT520L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT520L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT520L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT521L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT521L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT521L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT521L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT522L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT522L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT522L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT522L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT523L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT523L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT523L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT523L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT524L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT524L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT524L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT524L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT525L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT525L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT525L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT525L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT526L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT526L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT526L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT526L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT527L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT527L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT527L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT527L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT528L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT528L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT528L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT528L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT529L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT529L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT529L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT529L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT530L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT530L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT530L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT530L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT531L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT531L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT531L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT531L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT532L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT532L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT532L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT532L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT533L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT533L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT533L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT533L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT534L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT534L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT534L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT534L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT535L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT535L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT535L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT535L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT536L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT536L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT536L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT536L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT537L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT537L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT537L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT537L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT538L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT538L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT538L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT538L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT539L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT539L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT539L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT539L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT540L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT540L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT540L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT540L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT541L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT541L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT541L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT541L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT542L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT542L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT542L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT542L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT543L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT543L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT543L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT543L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT544L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT544L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT544L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT544L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT545L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT545L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT545L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT545L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT546L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT546L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT546L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT546L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT547L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT547L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT547L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT547L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT548L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT548L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT548L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT548L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT549L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT549L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT549L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT549L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT550L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT550L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT550L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT550L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT551L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT551L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT551L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT551L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT552L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT552L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT552L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT552L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT553L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT553L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT553L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT553L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT554L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT554L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT554L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT554L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT555L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT555L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT555L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT555L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT556L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT556L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT556L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT556L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT557L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT557L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT557L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT557L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT558L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT558L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT558L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT558L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT559L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT559L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT559L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT559L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT560L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT560L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT560L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT560L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT561L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT561L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT561L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT561L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT562L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT562L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT562L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT562L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT563L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT563L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT563L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT563L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT564L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT564L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT564L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT564L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT565L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT565L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT565L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT565L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT566L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT566L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT566L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT566L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT567L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT567L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT567L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT567L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT568L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT568L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT568L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT568L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT569L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT569L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT569L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT569L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT570L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT570L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT570L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT570L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT571L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT571L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT571L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT571L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT572L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT572L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT572L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT572L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT573L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT573L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT573L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT573L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT574L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT574L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT574L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT574L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT575L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT575L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT575L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT575L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT576L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT576L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT576L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT576L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT577L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT577L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT577L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT577L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT578L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT578L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT578L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT578L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT579L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT579L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT579L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT579L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT580L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT580L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT580L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT580L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT581L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT581L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT581L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT581L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT582L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT582L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT582L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT582L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT583L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT583L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT583L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT583L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT584L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT584L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT584L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT584L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT585L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT585L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT585L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT585L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT586L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT586L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT586L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT586L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT587L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT587L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT587L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT587L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT588L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT588L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT588L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT588L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT589L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT589L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT589L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT589L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT590L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT590L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT590L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT590L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT591L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT591L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT591L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT591L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT592L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT592L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT592L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT592L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT593L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT593L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT593L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT593L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT594L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT594L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT594L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT594L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT595L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT595L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT595L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT595L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT596L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT596L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT596L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT596L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT597L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT597L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT597L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT597L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT598L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT598L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT598L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT598L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT599L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT599L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT599L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT599L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT600L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT600L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT600L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT600L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT601L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT601L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT601L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT601L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT602L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT602L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT602L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT602L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT603L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT603L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT603L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT603L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT604L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT604L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT604L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT604L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT605L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT605L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT605L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT605L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT606L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT606L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT606L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT606L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT607L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT607L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT607L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT607L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT608L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT608L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT608L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT608L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT609L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT609L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT609L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT609L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT610L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT610L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT610L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT610L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT611L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT611L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT611L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT611L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT612L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT612L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT612L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT612L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT613L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT613L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT613L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT613L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT614L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT614L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT614L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT614L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT615L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT615L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT615L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT615L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT616L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT616L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT616L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT616L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT617L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT617L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT617L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT617L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT618L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT618L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT618L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT618L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT619L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT619L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT619L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT619L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT620L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT620L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT620L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT620L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT621L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT621L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT621L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT621L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT622L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT622L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT622L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT622L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT623L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT623L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT623L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT623L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT624L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT624L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT624L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT624L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT625L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT625L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT625L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT625L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT626L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT626L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT626L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT626L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT627L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT627L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT627L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT627L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT628L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT628L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT628L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT628L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT629L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT629L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT629L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT629L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT630L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT630L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT630L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT630L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT631L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT631L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT631L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT631L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT632L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT632L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT632L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT632L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT633L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT633L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT633L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT633L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT634L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT634L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT634L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT634L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT635L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT635L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT635L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT635L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT636L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT636L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT636L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT636L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT637L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT637L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT637L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT637L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT638L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT638L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT638L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT638L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT639L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT639L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT639L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT639L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT640L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT640L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT640L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT640L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT641L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT641L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT641L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT641L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT642L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT642L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT642L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT642L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT643L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT643L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT643L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT643L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT644L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT644L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT644L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT644L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT645L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT645L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT645L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT645L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT646L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT646L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT646L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT646L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT647L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT647L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT647L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT647L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT648L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT648L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT648L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT648L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT649L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT649L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT649L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT649L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT650L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT650L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT650L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT650L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT651L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT651L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT651L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT651L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT652L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT652L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT652L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT652L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT653L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT653L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT653L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT653L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT654L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT654L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT654L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT654L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT655L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT655L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT655L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT655L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT656L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT656L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT656L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT656L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT657L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT657L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT657L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT657L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT658L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT658L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT658L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT658L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT659L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT659L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT659L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT659L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT660L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT660L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT660L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT660L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT661L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT661L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT661L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT661L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT662L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT662L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT662L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT662L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT663L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT663L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT663L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT663L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT664L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT664L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT664L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT664L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT665L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT665L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT665L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT665L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT666L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT666L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT666L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT666L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT667L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT667L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT667L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT667L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT668L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT668L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT668L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT668L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT669L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT669L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT669L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT669L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT670L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT670L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT670L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT670L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT671L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT671L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT671L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT671L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT672L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT672L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT672L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT672L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT673L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT673L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT673L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT673L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT674L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT674L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT674L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT674L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT675L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT675L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT675L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT675L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT676L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT676L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT676L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT676L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT677L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT677L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT677L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT677L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT678L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT678L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT678L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT678L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT679L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT679L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT679L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT679L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT680L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT680L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT680L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT680L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT681L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT681L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT681L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT681L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT682L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT682L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT682L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT682L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT683L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT683L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT683L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT683L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT684L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT684L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT684L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT684L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT685L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT685L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT685L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT685L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT686L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT686L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT686L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT686L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT687L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT687L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT687L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT687L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT688L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT688L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT688L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT688L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT689L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT689L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT689L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT689L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT690L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT690L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT690L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT690L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT691L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT691L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT691L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT691L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT692L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT692L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT692L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT692L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT693L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT693L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT693L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT693L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT694L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT694L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT694L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT694L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT695L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT695L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT695L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT695L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT696L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT696L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT696L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT696L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT697L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT697L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT697L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT697L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT698L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT698L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT698L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT698L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT699L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT699L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT699L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT699L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT700L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT700L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT700L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT700L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT701L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT701L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT701L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT701L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT702L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT702L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT702L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT702L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT703L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT703L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT703L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT703L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT704L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT704L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT704L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT704L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT705L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT705L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT705L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT705L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT706L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT706L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT706L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT706L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT707L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT707L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT707L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT707L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT708L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT708L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT708L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT708L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT709L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT709L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT709L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT709L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT710L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT710L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT710L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT710L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT711L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT711L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT711L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT711L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT712L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT712L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT712L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT712L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT713L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT713L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT713L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT713L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT714L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT714L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT714L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT714L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT715L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT715L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT715L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT715L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT716L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT716L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT716L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT716L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT717L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT717L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT717L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT717L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT718L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT718L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT718L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT718L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT719L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT719L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT719L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT719L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT720L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT720L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT720L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT720L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT721L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT721L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT721L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT721L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT722L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT722L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT722L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT722L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT723L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT723L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT723L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT723L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT724L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT724L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT724L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT724L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT725L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT725L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT725L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT725L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT726L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT726L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT726L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT726L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT727L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT727L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT727L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT727L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT728L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT728L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT728L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT728L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT729L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT729L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT729L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT729L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT730L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT730L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT730L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT730L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT731L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT731L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT731L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT731L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT732L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT732L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT732L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT732L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT733L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT733L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT733L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT733L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT734L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT734L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT734L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT734L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT735L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT735L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT735L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT735L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT736L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT736L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT736L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT736L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT737L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT737L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT737L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT737L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT738L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT738L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT738L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT738L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT739L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT739L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT739L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT739L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT740L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT740L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT740L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT740L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT741L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT741L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT741L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT741L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT742L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT742L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT742L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT742L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT743L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT743L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT743L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT743L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT744L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT744L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT744L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT744L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT745L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT745L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT745L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT745L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT746L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT746L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT746L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT746L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT747L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT747L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT747L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT747L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT748L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT748L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT748L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT748L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT749L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT749L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT749L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT749L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT750L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT750L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT750L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT750L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT751L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT751L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT751L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT751L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT752L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT752L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT752L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT752L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT753L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT753L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT753L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT753L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT754L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT754L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT754L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT754L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT755L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT755L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT755L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT755L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT756L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT756L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT756L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT756L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT757L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT757L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT757L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT757L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT758L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT758L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT758L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT758L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT759L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT759L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT759L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT759L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT760L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT760L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT760L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT760L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT761L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT761L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT761L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT761L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT762L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT762L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT762L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT762L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT763L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT763L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT763L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT763L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT764L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT764L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT764L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT764L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT765L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT765L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT765L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT765L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT766L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT766L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT766L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT766L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT767L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT767L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT767L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT767L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT768L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT768L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT768L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT768L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT769L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT769L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT769L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT769L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT770L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT770L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT770L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT770L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT771L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT771L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT771L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT771L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT772L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT772L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT772L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT772L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT773L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT773L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT773L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT773L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT774L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT774L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT774L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT774L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT775L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT775L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT775L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT775L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT776L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT776L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT776L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT776L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT777L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT777L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT777L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT777L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT778L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT778L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT778L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT778L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT779L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT779L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT779L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT779L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT780L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT780L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT780L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT780L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT781L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT781L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT781L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT781L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT782L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT782L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT782L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT782L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT783L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT783L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT783L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT783L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT784L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT784L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT784L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT784L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT785L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT785L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT785L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT785L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT786L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT786L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT786L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT786L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT787L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT787L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT787L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT787L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT788L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT788L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT788L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT788L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT789L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT789L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT789L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT789L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT790L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT790L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT790L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT790L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT791L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT791L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT791L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT791L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT792L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT792L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT792L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT792L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT793L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT793L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT793L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT793L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT794L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT794L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT794L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT794L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT795L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT795L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT795L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT795L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT796L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT796L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT796L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT796L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT797L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT797L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT797L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT797L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT798L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT798L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT798L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT798L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT799L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT799L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT799L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT799L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT800L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT800L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT800L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT800L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT801L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT801L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT801L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT801L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT802L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT802L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT802L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT802L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT803L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT803L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT803L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT803L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT804L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT804L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT804L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT804L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT805L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT805L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT805L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT805L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT806L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT806L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT806L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT806L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT807L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT807L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT807L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT807L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT808L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT808L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT808L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT808L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT809L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT809L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT809L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT809L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT810L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT810L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT810L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT810L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT811L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT811L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT811L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT811L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT812L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT812L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT812L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT812L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT813L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT813L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT813L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT813L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT814L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT814L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT814L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT814L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT815L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT815L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT815L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT815L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT816L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT816L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT816L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT816L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT817L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT817L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT817L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT817L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT818L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT818L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT818L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT818L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT819L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT819L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT819L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT819L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT820L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT820L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT820L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT820L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT821L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT821L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT821L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT821L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT822L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT822L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT822L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT822L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT823L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT823L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT823L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT823L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT824L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT824L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT824L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT824L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT825L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT825L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT825L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT825L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT826L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT826L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT826L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT826L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT827L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT827L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT827L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT827L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT828L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT828L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT828L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT828L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT829L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT829L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT829L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT829L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT830L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT830L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT830L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT830L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT831L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT831L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT831L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT831L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT832L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT832L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT832L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT832L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT833L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT833L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT833L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT833L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT834L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT834L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT834L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT834L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT835L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT835L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT835L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT835L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT836L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT836L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT836L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT836L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT837L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT837L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT837L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT837L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT838L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT838L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT838L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT838L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT839L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT839L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT839L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT839L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT840L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT840L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT840L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT840L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT841L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT841L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT841L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT841L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT842L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT842L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT842L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT842L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT843L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT843L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT843L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT843L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT844L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT844L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT844L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT844L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT845L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT845L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT845L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT845L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT846L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT846L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT846L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT846L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT847L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT847L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT847L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT847L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT848L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT848L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT848L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT848L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT849L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT849L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT849L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT849L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT850L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT850L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT850L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT850L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT851L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT851L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT851L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT851L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT852L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT852L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT852L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT852L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT853L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT853L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT853L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT853L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT854L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT854L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT854L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT854L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT855L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT855L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT855L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT855L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT856L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT856L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT856L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT856L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT857L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT857L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT857L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT857L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT858L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT858L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT858L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT858L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT859L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT859L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT859L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT859L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT860L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT860L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT860L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT860L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT861L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT861L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT861L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT861L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT862L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT862L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT862L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT862L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT863L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT863L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT863L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT863L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT864L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT864L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT864L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT864L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT865L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT865L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT865L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT865L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT866L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT866L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT866L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT866L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT867L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT867L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT867L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT867L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT868L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT868L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT868L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT868L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT869L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT869L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT869L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT869L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT870L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT870L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT870L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT870L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT871L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT871L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT871L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT871L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT872L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT872L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT872L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT872L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT873L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT873L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT873L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT873L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT874L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT874L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT874L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT874L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT875L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT875L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT875L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT875L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT876L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT876L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT876L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT876L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT877L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT877L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT877L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT877L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT878L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT878L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT878L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT878L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT879L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT879L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT879L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT879L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT880L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT880L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT880L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT880L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT881L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT881L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT881L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT881L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT882L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT882L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT882L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT882L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT883L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT883L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT883L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT883L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT884L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT884L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT884L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT884L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT885L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT885L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT885L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT885L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT886L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT886L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT886L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT886L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT887L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT887L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT887L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT887L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT888L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT888L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT888L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT888L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT889L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT889L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT889L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT889L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT890L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT890L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT890L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT890L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT891L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT891L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT891L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT891L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT892L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT892L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT892L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT892L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT893L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT893L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT893L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT893L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT894L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT894L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT894L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT894L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT895L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT895L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT895L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT895L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT896L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT896L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT896L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT896L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT897L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT897L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT897L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT897L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT898L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT898L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT898L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT898L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT899L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT899L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT899L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT899L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT900L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT900L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT900L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT900L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT901L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT901L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT901L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT901L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT902L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT902L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT902L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT902L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT903L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT903L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT903L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT903L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT904L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT904L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT904L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT904L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT905L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT905L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT905L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT905L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT906L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT906L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT906L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT906L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT907L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT907L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT907L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT907L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT908L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT908L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT908L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT908L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT909L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT909L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT909L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT909L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT910L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT910L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT910L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT910L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT911L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT911L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT911L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT911L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT912L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT912L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT912L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT912L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT913L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT913L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT913L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT913L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT914L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT914L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT914L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT914L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT915L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT915L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT915L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT915L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT916L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT916L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT916L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT916L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT917L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT917L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT917L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT917L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT918L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT918L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT918L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT918L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT919L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT919L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT919L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT919L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT920L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT920L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT920L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT920L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT921L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT921L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT921L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT921L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT922L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT922L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT922L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT922L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT923L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT923L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT923L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT923L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT924L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT924L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT924L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT924L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT925L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT925L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT925L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT925L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT926L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT926L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT926L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT926L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT927L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT927L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT927L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT927L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT928L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT928L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT928L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT928L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT929L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT929L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT929L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT929L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT930L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT930L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT930L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT930L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT931L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT931L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT931L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT931L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT932L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT932L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT932L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT932L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT933L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT933L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT933L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT933L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT934L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT934L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT934L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT934L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT935L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT935L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT935L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT935L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT936L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT936L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT936L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT936L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT937L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT937L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT937L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT937L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT938L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT938L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT938L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT938L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT939L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT939L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT939L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT939L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT940L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT940L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT940L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT940L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT941L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT941L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT941L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT941L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT942L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT942L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT942L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT942L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT943L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT943L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT943L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT943L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT944L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT944L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT944L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT944L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT945L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT945L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT945L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT945L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT946L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT946L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT946L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT946L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT947L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT947L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT947L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT947L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT948L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT948L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT948L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT948L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT949L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT949L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT949L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT949L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT950L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT950L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT950L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT950L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT951L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT951L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT951L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT951L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT952L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT952L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT952L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT952L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT953L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT953L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT953L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT953L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT954L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT954L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT954L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT954L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT955L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT955L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT955L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT955L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT956L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT956L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT956L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT956L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT957L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT957L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT957L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT957L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT958L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT958L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT958L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT958L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT959L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT959L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT959L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT959L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT960L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT960L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT960L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT960L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT961L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT961L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT961L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT961L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT962L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT962L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT962L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT962L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT963L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT963L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT963L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT963L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT964L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT964L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT964L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT964L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT965L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT965L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT965L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT965L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT966L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT966L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT966L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT966L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT967L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT967L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT967L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT967L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT968L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT968L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT968L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT968L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT969L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT969L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT969L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT969L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT970L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT970L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT970L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT970L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT971L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT971L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT971L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT971L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT972L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT972L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT972L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT972L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT973L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT973L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT973L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT973L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT974L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT974L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT974L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT974L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT975L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT975L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT975L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT975L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT976L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT976L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT976L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT976L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT977L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT977L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT977L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT977L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT978L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT978L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT978L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT978L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT979L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT979L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT979L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT979L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT980L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT980L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT980L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT980L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT981L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT981L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT981L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT981L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT982L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT982L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT982L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT982L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT983L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT983L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT983L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT983L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT984L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT984L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT984L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT984L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT985L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT985L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT985L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT985L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT986L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT986L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT986L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT986L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT987L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT987L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT987L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT987L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT988L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT988L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT988L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT988L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT989L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT989L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT989L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT989L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT990L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT990L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT990L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT990L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT991L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT991L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT991L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT991L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT992L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT992L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT992L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT992L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT993L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT993L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT993L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT993L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT994L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT994L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT994L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT994L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT995L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT995L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT995L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT995L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT996L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT996L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT996L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT996L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT997L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT997L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT997L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT997L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT998L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT998L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT998L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT998L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT999L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT999L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT999L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT999L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT1000L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT1000L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT1000L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT1000L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT1001L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT1001L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT1001L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT1001L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT1002L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT1002L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT1002L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT1002L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT1003L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT1003L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT1003L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT1003L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT1004L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT1004L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT1004L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT1004L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT1005L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT1005L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT1005L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT1005L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT1006L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT1006L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT1006L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT1006L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT1007L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT1007L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT1007L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT1007L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT1008L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT1008L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT1008L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT1008L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT1009L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT1009L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT1009L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT1009L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT1010L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT1010L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT1010L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT1010L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT1011L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT1011L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT1011L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT1011L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT1012L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT1012L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT1012L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT1012L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT1013L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT1013L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT1013L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT1013L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT1014L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT1014L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT1014L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT1014L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT1015L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT1015L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT1015L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT1015L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT1016L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT1016L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT1016L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT1016L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT1017L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT1017L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT1017L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT1017L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT1018L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT1018L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT1018L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT1018L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT1019L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT1019L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT1019L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT1019L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT1020L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT1020L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT1020L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT1020L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT1021L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT1021L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT1021L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT1021L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT1022L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT1022L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT1022L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT1022L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT1023L_RESET_VALUE = 0x0;
    static constexpr uint32_t LUT1023L_EN = 0x1; // Enable
    template<uint32_t X>
    static constexpr uint32_t LUT1023L_FVB =     // First Valid Block
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LUT1023L_LVB =     // Last Valid Block
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t LUT0H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT0H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT1H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT1H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT2H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT2H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT3H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT3H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT4H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT4H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT5H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT5H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT6H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT6H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT7H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT7H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT8H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT8H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT9H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT9H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT10H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT10H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT11H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT11H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT12H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT12H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT13H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT13H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT14H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT14H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT15H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT15H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT16H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT16H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT17H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT17H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT18H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT18H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT19H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT19H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT20H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT20H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT21H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT21H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT22H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT22H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT23H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT23H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT24H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT24H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT25H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT25H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT26H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT26H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT27H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT27H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT28H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT28H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT29H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT29H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT30H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT30H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT31H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT31H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT32H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT32H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT33H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT33H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT34H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT34H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT35H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT35H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT36H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT36H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT37H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT37H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT38H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT38H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT39H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT39H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT40H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT40H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT41H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT41H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT42H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT42H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT43H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT43H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT44H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT44H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT45H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT45H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT46H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT46H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT47H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT47H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT48H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT48H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT49H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT49H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT50H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT50H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT51H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT51H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT52H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT52H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT53H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT53H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT54H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT54H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT55H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT55H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT56H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT56H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT57H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT57H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT58H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT58H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT59H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT59H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT60H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT60H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT61H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT61H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT62H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT62H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT63H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT63H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT64H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT64H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT65H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT65H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT66H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT66H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT67H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT67H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT68H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT68H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT69H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT69H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT70H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT70H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT71H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT71H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT72H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT72H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT73H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT73H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT74H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT74H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT75H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT75H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT76H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT76H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT77H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT77H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT78H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT78H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT79H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT79H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT80H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT80H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT81H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT81H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT82H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT82H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT83H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT83H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT84H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT84H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT85H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT85H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT86H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT86H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT87H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT87H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT88H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT88H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT89H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT89H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT90H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT90H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT91H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT91H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT92H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT92H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT93H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT93H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT94H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT94H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT95H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT95H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT96H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT96H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT97H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT97H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT98H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT98H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT99H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT99H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT100H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT100H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT101H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT101H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT102H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT102H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT103H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT103H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT104H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT104H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT105H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT105H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT106H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT106H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT107H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT107H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT108H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT108H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT109H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT109H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT110H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT110H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT111H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT111H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT112H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT112H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT113H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT113H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT114H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT114H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT115H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT115H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT116H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT116H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT117H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT117H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT118H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT118H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT119H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT119H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT120H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT120H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT121H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT121H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT122H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT122H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT123H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT123H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT124H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT124H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT125H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT125H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT126H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT126H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT127H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT127H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT128H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT128H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT129H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT129H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT130H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT130H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT131H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT131H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT132H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT132H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT133H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT133H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT134H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT134H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT135H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT135H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT136H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT136H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT137H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT137H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT138H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT138H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT139H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT139H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT140H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT140H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT141H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT141H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT142H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT142H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT143H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT143H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT144H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT144H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT145H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT145H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT146H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT146H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT147H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT147H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT148H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT148H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT149H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT149H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT150H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT150H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT151H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT151H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT152H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT152H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT153H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT153H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT154H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT154H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT155H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT155H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT156H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT156H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT157H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT157H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT158H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT158H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT159H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT159H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT160H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT160H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT161H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT161H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT162H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT162H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT163H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT163H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT164H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT164H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT165H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT165H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT166H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT166H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT167H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT167H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT168H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT168H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT169H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT169H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT170H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT170H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT171H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT171H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT172H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT172H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT173H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT173H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT174H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT174H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT175H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT175H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT176H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT176H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT177H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT177H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT178H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT178H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT179H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT179H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT180H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT180H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT181H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT181H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT182H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT182H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT183H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT183H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT184H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT184H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT185H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT185H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT186H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT186H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT187H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT187H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT188H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT188H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT189H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT189H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT190H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT190H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT191H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT191H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT192H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT192H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT193H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT193H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT194H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT194H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT195H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT195H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT196H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT196H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT197H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT197H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT198H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT198H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT199H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT199H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT200H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT200H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT201H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT201H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT202H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT202H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT203H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT203H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT204H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT204H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT205H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT205H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT206H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT206H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT207H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT207H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT208H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT208H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT209H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT209H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT210H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT210H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT211H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT211H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT212H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT212H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT213H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT213H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT214H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT214H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT215H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT215H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT216H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT216H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT217H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT217H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT218H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT218H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT219H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT219H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT220H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT220H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT221H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT221H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT222H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT222H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT223H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT223H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT224H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT224H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT225H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT225H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT226H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT226H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT227H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT227H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT228H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT228H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT229H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT229H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT230H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT230H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT231H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT231H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT232H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT232H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT233H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT233H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT234H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT234H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT235H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT235H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT236H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT236H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT237H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT237H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT238H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT238H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT239H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT239H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT240H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT240H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT241H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT241H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT242H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT242H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT243H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT243H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT244H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT244H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT245H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT245H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT246H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT246H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT247H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT247H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT248H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT248H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT249H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT249H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT250H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT250H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT251H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT251H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT252H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT252H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT253H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT253H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT254H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT254H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT255H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT255H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT256H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT256H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT257H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT257H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT258H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT258H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT259H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT259H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT260H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT260H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT261H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT261H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT262H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT262H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT263H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT263H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT264H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT264H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT265H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT265H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT266H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT266H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT267H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT267H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT268H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT268H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT269H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT269H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT270H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT270H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT271H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT271H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT272H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT272H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT273H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT273H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT274H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT274H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT275H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT275H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT276H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT276H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT277H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT277H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT278H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT278H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT279H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT279H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT280H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT280H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT281H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT281H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT282H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT282H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT283H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT283H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT284H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT284H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT285H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT285H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT286H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT286H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT287H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT287H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT288H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT288H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT289H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT289H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT290H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT290H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT291H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT291H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT292H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT292H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT293H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT293H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT294H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT294H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT295H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT295H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT296H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT296H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT297H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT297H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT298H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT298H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT299H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT299H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT300H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT300H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT301H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT301H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT302H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT302H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT303H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT303H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT304H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT304H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT305H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT305H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT306H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT306H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT307H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT307H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT308H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT308H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT309H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT309H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT310H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT310H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT311H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT311H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT312H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT312H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT313H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT313H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT314H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT314H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT315H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT315H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT316H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT316H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT317H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT317H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT318H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT318H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT319H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT319H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT320H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT320H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT321H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT321H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT322H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT322H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT323H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT323H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT324H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT324H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT325H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT325H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT326H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT326H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT327H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT327H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT328H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT328H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT329H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT329H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT330H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT330H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT331H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT331H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT332H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT332H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT333H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT333H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT334H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT334H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT335H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT335H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT336H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT336H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT337H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT337H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT338H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT338H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT339H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT339H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT340H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT340H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT341H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT341H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT342H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT342H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT343H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT343H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT344H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT344H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT345H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT345H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT346H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT346H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT347H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT347H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT348H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT348H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT349H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT349H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT350H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT350H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT351H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT351H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT352H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT352H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT353H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT353H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT354H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT354H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT355H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT355H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT356H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT356H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT357H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT357H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT358H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT358H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT359H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT359H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT360H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT360H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT361H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT361H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT362H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT362H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT363H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT363H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT364H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT364H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT365H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT365H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT366H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT366H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT367H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT367H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT368H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT368H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT369H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT369H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT370H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT370H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT371H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT371H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT372H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT372H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT373H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT373H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT374H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT374H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT375H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT375H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT376H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT376H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT377H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT377H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT378H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT378H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT379H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT379H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT380H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT380H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT381H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT381H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT382H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT382H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT383H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT383H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT384H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT384H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT385H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT385H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT386H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT386H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT387H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT387H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT388H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT388H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT389H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT389H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT390H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT390H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT391H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT391H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT392H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT392H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT393H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT393H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT394H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT394H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT395H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT395H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT396H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT396H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT397H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT397H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT398H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT398H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT399H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT399H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT400H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT400H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT401H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT401H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT402H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT402H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT403H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT403H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT404H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT404H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT405H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT405H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT406H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT406H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT407H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT407H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT408H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT408H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT409H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT409H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT410H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT410H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT411H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT411H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT412H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT412H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT413H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT413H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT414H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT414H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT415H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT415H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT416H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT416H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT417H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT417H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT418H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT418H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT419H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT419H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT420H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT420H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT421H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT421H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT422H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT422H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT423H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT423H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT424H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT424H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT425H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT425H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT426H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT426H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT427H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT427H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT428H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT428H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT429H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT429H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT430H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT430H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT431H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT431H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT432H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT432H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT433H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT433H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT434H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT434H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT435H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT435H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT436H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT436H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT437H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT437H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT438H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT438H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT439H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT439H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT440H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT440H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT441H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT441H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT442H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT442H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT443H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT443H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT444H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT444H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT445H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT445H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT446H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT446H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT447H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT447H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT448H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT448H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT449H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT449H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT450H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT450H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT451H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT451H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT452H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT452H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT453H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT453H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT454H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT454H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT455H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT455H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT456H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT456H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT457H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT457H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT458H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT458H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT459H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT459H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT460H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT460H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT461H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT461H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT462H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT462H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT463H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT463H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT464H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT464H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT465H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT465H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT466H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT466H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT467H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT467H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT468H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT468H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT469H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT469H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT470H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT470H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT471H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT471H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT472H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT472H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT473H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT473H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT474H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT474H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT475H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT475H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT476H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT476H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT477H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT477H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT478H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT478H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT479H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT479H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT480H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT480H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT481H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT481H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT482H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT482H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT483H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT483H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT484H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT484H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT485H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT485H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT486H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT486H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT487H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT487H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT488H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT488H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT489H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT489H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT490H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT490H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT491H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT491H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT492H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT492H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT493H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT493H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT494H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT494H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT495H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT495H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT496H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT496H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT497H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT497H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT498H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT498H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT499H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT499H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT500H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT500H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT501H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT501H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT502H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT502H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT503H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT503H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT504H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT504H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT505H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT505H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT506H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT506H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT507H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT507H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT508H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT508H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT509H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT509H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT510H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT510H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT511H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT511H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT512H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT512H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT513H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT513H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT514H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT514H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT515H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT515H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT516H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT516H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT517H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT517H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT518H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT518H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT519H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT519H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT520H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT520H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT521H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT521H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT522H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT522H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT523H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT523H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT524H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT524H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT525H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT525H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT526H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT526H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT527H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT527H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT528H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT528H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT529H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT529H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT530H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT530H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT531H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT531H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT532H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT532H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT533H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT533H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT534H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT534H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT535H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT535H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT536H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT536H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT537H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT537H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT538H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT538H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT539H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT539H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT540H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT540H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT541H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT541H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT542H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT542H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT543H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT543H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT544H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT544H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT545H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT545H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT546H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT546H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT547H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT547H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT548H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT548H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT549H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT549H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT550H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT550H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT551H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT551H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT552H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT552H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT553H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT553H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT554H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT554H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT555H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT555H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT556H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT556H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT557H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT557H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT558H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT558H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT559H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT559H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT560H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT560H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT561H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT561H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT562H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT562H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT563H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT563H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT564H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT564H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT565H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT565H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT566H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT566H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT567H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT567H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT568H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT568H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT569H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT569H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT570H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT570H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT571H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT571H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT572H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT572H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT573H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT573H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT574H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT574H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT575H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT575H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT576H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT576H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT577H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT577H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT578H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT578H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT579H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT579H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT580H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT580H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT581H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT581H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT582H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT582H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT583H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT583H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT584H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT584H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT585H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT585H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT586H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT586H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT587H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT587H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT588H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT588H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT589H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT589H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT590H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT590H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT591H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT591H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT592H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT592H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT593H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT593H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT594H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT594H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT595H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT595H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT596H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT596H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT597H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT597H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT598H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT598H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT599H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT599H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT600H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT600H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT601H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT601H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT602H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT602H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT603H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT603H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT604H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT604H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT605H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT605H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT606H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT606H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT607H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT607H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT608H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT608H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT609H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT609H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT610H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT610H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT611H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT611H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT612H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT612H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT613H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT613H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT614H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT614H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT615H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT615H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT616H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT616H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT617H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT617H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT618H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT618H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT619H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT619H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT620H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT620H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT621H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT621H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT622H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT622H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT623H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT623H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT624H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT624H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT625H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT625H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT626H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT626H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT627H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT627H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT628H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT628H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT629H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT629H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT630H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT630H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT631H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT631H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT632H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT632H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT633H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT633H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT634H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT634H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT635H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT635H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT636H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT636H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT637H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT637H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT638H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT638H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT639H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT639H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT640H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT640H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT641H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT641H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT642H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT642H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT643H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT643H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT644H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT644H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT645H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT645H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT646H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT646H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT647H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT647H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT648H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT648H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT649H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT649H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT650H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT650H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT651H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT651H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT652H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT652H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT653H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT653H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT654H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT654H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT655H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT655H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT656H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT656H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT657H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT657H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT658H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT658H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT659H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT659H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT660H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT660H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT661H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT661H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT662H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT662H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT663H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT663H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT664H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT664H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT665H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT665H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT666H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT666H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT667H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT667H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT668H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT668H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT669H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT669H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT670H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT670H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT671H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT671H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT672H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT672H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT673H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT673H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT674H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT674H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT675H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT675H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT676H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT676H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT677H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT677H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT678H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT678H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT679H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT679H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT680H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT680H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT681H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT681H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT682H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT682H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT683H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT683H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT684H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT684H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT685H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT685H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT686H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT686H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT687H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT687H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT688H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT688H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT689H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT689H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT690H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT690H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT691H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT691H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT692H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT692H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT693H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT693H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT694H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT694H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT695H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT695H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT696H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT696H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT697H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT697H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT698H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT698H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT699H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT699H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT700H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT700H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT701H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT701H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT702H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT702H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT703H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT703H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT704H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT704H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT705H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT705H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT706H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT706H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT707H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT707H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT708H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT708H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT709H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT709H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT710H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT710H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT711H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT711H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT712H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT712H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT713H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT713H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT714H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT714H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT715H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT715H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT716H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT716H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT717H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT717H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT718H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT718H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT719H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT719H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT720H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT720H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT721H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT721H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT722H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT722H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT723H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT723H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT724H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT724H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT725H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT725H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT726H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT726H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT727H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT727H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT728H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT728H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT729H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT729H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT730H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT730H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT731H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT731H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT732H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT732H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT733H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT733H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT734H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT734H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT735H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT735H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT736H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT736H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT737H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT737H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT738H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT738H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT739H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT739H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT740H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT740H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT741H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT741H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT742H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT742H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT743H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT743H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT744H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT744H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT745H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT745H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT746H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT746H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT747H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT747H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT748H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT748H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT749H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT749H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT750H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT750H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT751H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT751H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT752H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT752H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT753H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT753H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT754H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT754H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT755H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT755H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT756H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT756H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT757H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT757H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT758H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT758H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT759H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT759H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT760H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT760H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT761H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT761H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT762H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT762H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT763H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT763H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT764H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT764H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT765H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT765H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT766H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT766H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT767H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT767H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT768H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT768H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT769H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT769H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT770H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT770H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT771H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT771H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT772H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT772H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT773H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT773H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT774H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT774H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT775H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT775H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT776H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT776H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT777H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT777H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT778H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT778H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT779H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT779H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT780H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT780H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT781H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT781H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT782H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT782H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT783H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT783H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT784H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT784H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT785H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT785H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT786H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT786H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT787H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT787H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT788H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT788H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT789H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT789H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT790H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT790H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT791H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT791H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT792H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT792H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT793H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT793H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT794H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT794H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT795H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT795H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT796H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT796H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT797H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT797H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT798H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT798H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT799H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT799H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT800H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT800H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT801H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT801H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT802H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT802H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT803H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT803H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT804H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT804H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT805H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT805H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT806H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT806H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT807H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT807H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT808H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT808H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT809H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT809H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT810H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT810H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT811H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT811H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT812H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT812H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT813H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT813H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT814H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT814H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT815H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT815H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT816H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT816H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT817H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT817H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT818H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT818H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT819H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT819H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT820H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT820H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT821H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT821H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT822H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT822H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT823H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT823H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT824H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT824H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT825H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT825H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT826H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT826H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT827H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT827H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT828H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT828H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT829H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT829H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT830H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT830H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT831H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT831H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT832H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT832H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT833H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT833H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT834H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT834H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT835H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT835H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT836H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT836H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT837H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT837H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT838H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT838H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT839H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT839H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT840H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT840H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT841H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT841H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT842H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT842H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT843H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT843H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT844H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT844H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT845H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT845H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT846H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT846H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT847H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT847H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT848H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT848H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT849H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT849H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT850H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT850H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT851H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT851H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT852H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT852H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT853H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT853H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT854H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT854H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT855H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT855H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT856H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT856H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT857H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT857H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT858H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT858H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT859H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT859H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT860H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT860H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT861H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT861H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT862H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT862H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT863H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT863H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT864H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT864H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT865H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT865H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT866H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT866H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT867H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT867H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT868H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT868H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT869H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT869H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT870H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT870H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT871H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT871H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT872H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT872H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT873H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT873H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT874H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT874H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT875H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT875H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT876H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT876H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT877H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT877H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT878H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT878H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT879H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT879H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT880H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT880H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT881H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT881H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT882H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT882H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT883H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT883H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT884H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT884H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT885H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT885H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT886H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT886H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT887H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT887H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT888H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT888H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT889H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT889H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT890H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT890H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT891H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT891H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT892H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT892H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT893H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT893H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT894H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT894H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT895H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT895H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT896H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT896H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT897H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT897H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT898H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT898H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT899H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT899H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT900H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT900H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT901H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT901H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT902H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT902H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT903H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT903H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT904H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT904H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT905H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT905H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT906H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT906H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT907H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT907H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT908H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT908H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT909H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT909H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT910H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT910H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT911H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT911H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT912H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT912H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT913H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT913H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT914H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT914H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT915H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT915H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT916H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT916H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT917H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT917H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT918H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT918H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT919H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT919H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT920H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT920H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT921H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT921H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT922H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT922H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT923H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT923H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT924H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT924H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT925H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT925H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT926H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT926H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT927H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT927H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT928H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT928H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT929H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT929H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT930H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT930H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT931H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT931H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT932H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT932H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT933H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT933H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT934H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT934H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT935H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT935H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT936H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT936H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT937H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT937H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT938H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT938H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT939H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT939H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT940H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT940H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT941H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT941H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT942H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT942H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT943H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT943H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT944H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT944H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT945H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT945H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT946H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT946H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT947H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT947H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT948H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT948H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT949H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT949H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT950H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT950H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT951H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT951H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT952H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT952H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT953H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT953H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT954H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT954H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT955H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT955H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT956H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT956H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT957H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT957H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT958H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT958H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT959H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT959H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT960H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT960H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT961H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT961H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT962H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT962H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT963H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT963H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT964H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT964H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT965H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT965H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT966H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT966H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT967H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT967H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT968H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT968H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT969H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT969H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT970H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT970H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT971H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT971H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT972H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT972H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT973H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT973H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT974H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT974H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT975H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT975H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT976H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT976H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT977H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT977H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT978H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT978H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT979H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT979H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT980H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT980H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT981H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT981H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT982H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT982H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT983H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT983H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT984H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT984H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT985H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT985H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT986H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT986H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT987H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT987H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT988H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT988H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT989H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT989H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT990H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT990H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT991H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT991H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT992H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT992H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT993H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT993H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT994H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT994H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT995H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT995H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT996H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT996H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT997H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT997H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT998H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT998H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT999H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT999H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT1000H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT1000H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT1001H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT1001H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT1002H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT1002H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT1003H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT1003H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT1004H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT1004H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT1005H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT1005H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT1006H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT1006H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT1007H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT1007H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT1008H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT1008H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT1009H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT1009H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT1010H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT1010H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT1011H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT1011H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT1012H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT1012H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT1013H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT1013H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT1014H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT1014H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT1015H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT1015H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT1016H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT1016H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT1017H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT1017H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT1018H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT1018H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT1019H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT1019H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT1020H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT1020H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT1021H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT1021H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT1022H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT1022H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();

    static constexpr uint32_t LUT1023H_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LUT1023H_LO =   // Line offset
        bit_field_t<4, 0x3ffff>::value<X>();
};


template<>
struct peripheral_t<STM32L4R5, GFXMMU>
{
    typedef stm32l4r5_gfxmmu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R7, GFXMMU>
{
    typedef stm32l4r5_gfxmmu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R9, GFXMMU>
{
    typedef stm32l4r5_gfxmmu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S5, GFXMMU>
{
    typedef stm32l4r5_gfxmmu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S7, GFXMMU>
{
    typedef stm32l4r5_gfxmmu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S9, GFXMMU>
{
    typedef stm32l4r5_gfxmmu_t T;
    static T& V;
};

using gfxmmu_t = peripheral_t<mcu_svd, GFXMMU>;

