#pragma once

////
//
//      STM32F7 CAN peripherals
//
///

// CAN1: Controller area network

struct stm32f722_can1_t
{
    volatile uint32_t MCR; // master control register
    volatile uint32_t MSR; // master status register
    volatile uint32_t TSR; // transmit status register
    volatile uint32_t RF0R; // receive FIFO 0 register
    volatile uint32_t RF1R; // receive FIFO 1 register
    volatile uint32_t IER; // interrupt enable register
    volatile uint32_t ESR; // interrupt enable register
    volatile uint32_t BTR; // bit timing register
    reserved_t<0x58> _0x20;
    volatile uint32_t TI0R; // TX mailbox identifier register
    volatile uint32_t TDT0R; // mailbox data length control and time stamp register
    volatile uint32_t TDL0R; // mailbox data low register
    volatile uint32_t TDH0R; // mailbox data high register
    volatile uint32_t TI1R; // mailbox identifier register
    volatile uint32_t TDT1R; // mailbox data length control and time stamp register
    volatile uint32_t TDL1R; // mailbox data low register
    volatile uint32_t TDH1R; // mailbox data high register
    volatile uint32_t TI2R; // mailbox identifier register
    volatile uint32_t TDT2R; // mailbox data length control and time stamp register
    volatile uint32_t TDL2R; // mailbox data low register
    volatile uint32_t TDH2R; // mailbox data high register
    volatile uint32_t RI0R; // receive FIFO mailbox identifier register
    volatile uint32_t RDT0R; // mailbox data high register
    volatile uint32_t RDL0R; // mailbox data high register
    volatile uint32_t RDH0R; // receive FIFO mailbox data high register
    volatile uint32_t RI1R; // mailbox data high register
    volatile uint32_t RDT1R; // mailbox data high register
    volatile uint32_t RDL1R; // mailbox data high register
    volatile uint32_t RDH1R; // mailbox data high register
    reserved_t<0xc> _0x1d0;
    volatile uint32_t FMR; // filter master register
    volatile uint32_t FM1R; // filter mode register
    reserved_t<0x1> _0x208;
    volatile uint32_t FS1R; // filter scale register
    reserved_t<0x1> _0x210;
    volatile uint32_t FFA1R; // filter FIFO assignment register
    reserved_t<0x1> _0x218;
    volatile uint32_t FA1R; // filter activation register
    reserved_t<0x8> _0x220;
    volatile uint32_t F0R1; // Filter bank 0 register 1
    volatile uint32_t F0R2; // Filter bank 0 register 2
    volatile uint32_t F1R1; // Filter bank 1 register 1
    volatile uint32_t F1R2; // Filter bank 1 register 2
    volatile uint32_t F2R1; // Filter bank 2 register 1
    volatile uint32_t F2R2; // Filter bank 2 register 2
    volatile uint32_t F3R1; // Filter bank 3 register 1
    volatile uint32_t F3R2; // Filter bank 3 register 2
    volatile uint32_t F4R1; // Filter bank 4 register 1
    volatile uint32_t F4R2; // Filter bank 4 register 2
    volatile uint32_t F5R1; // Filter bank 5 register 1
    volatile uint32_t F5R2; // Filter bank 5 register 2
    volatile uint32_t F6R1; // Filter bank 6 register 1
    volatile uint32_t F6R2; // Filter bank 6 register 2
    volatile uint32_t F7R1; // Filter bank 7 register 1
    volatile uint32_t F7R2; // Filter bank 7 register 2
    volatile uint32_t F8R1; // Filter bank 8 register 1
    volatile uint32_t F8R2; // Filter bank 8 register 2
    volatile uint32_t F9R1; // Filter bank 9 register 1
    volatile uint32_t F9R2; // Filter bank 9 register 2
    volatile uint32_t F10R1; // Filter bank 10 register 1
    volatile uint32_t F10R2; // Filter bank 10 register 2
    volatile uint32_t F11R1; // Filter bank 11 register 1
    volatile uint32_t F11R2; // Filter bank 11 register 2
    volatile uint32_t F12R1; // Filter bank 4 register 1
    volatile uint32_t F12R2; // Filter bank 12 register 2
    volatile uint32_t F13R1; // Filter bank 13 register 1
    volatile uint32_t F13R2; // Filter bank 13 register 2
    volatile uint32_t F14R1; // Filter bank 14 register 1
    volatile uint32_t F14R2; // Filter bank 14 register 2
    volatile uint32_t F15R1; // Filter bank 15 register 1
    volatile uint32_t F15R2; // Filter bank 15 register 2
    volatile uint32_t F16R1; // Filter bank 16 register 1
    volatile uint32_t F16R2; // Filter bank 16 register 2
    volatile uint32_t F17R1; // Filter bank 17 register 1
    volatile uint32_t F17R2; // Filter bank 17 register 2
    volatile uint32_t F18R1; // Filter bank 18 register 1
    volatile uint32_t F18R2; // Filter bank 18 register 2
    volatile uint32_t F19R1; // Filter bank 19 register 1
    volatile uint32_t F19R2; // Filter bank 19 register 2
    volatile uint32_t F20R1; // Filter bank 20 register 1
    volatile uint32_t F20R2; // Filter bank 20 register 2
    volatile uint32_t F21R1; // Filter bank 21 register 1
    volatile uint32_t F21R2; // Filter bank 21 register 2
    volatile uint32_t F22R1; // Filter bank 22 register 1
    volatile uint32_t F22R2; // Filter bank 22 register 2
    volatile uint32_t F23R1; // Filter bank 23 register 1
    volatile uint32_t F23R2; // Filter bank 23 register 2
    volatile uint32_t F24R1; // Filter bank 24 register 1
    volatile uint32_t F24R2; // Filter bank 24 register 2
    volatile uint32_t F25R1; // Filter bank 25 register 1
    volatile uint32_t F25R2; // Filter bank 25 register 2
    volatile uint32_t F26R1; // Filter bank 26 register 1
    volatile uint32_t F26R2; // Filter bank 26 register 2
    volatile uint32_t F27R1; // Filter bank 27 register 1
    volatile uint32_t F27R2; // Filter bank 27 register 2

    static constexpr uint32_t MCR_RESET_VALUE = 0x10002; // Reset value
    static constexpr uint32_t MCR_DBF = 0x10000; // DBF
    static constexpr uint32_t MCR_RESET = 0x8000; // RESET
    static constexpr uint32_t MCR_TTCM = 0x80; // TTCM
    static constexpr uint32_t MCR_ABOM = 0x40; // ABOM
    static constexpr uint32_t MCR_AWUM = 0x20; // AWUM
    static constexpr uint32_t MCR_NART = 0x10; // NART
    static constexpr uint32_t MCR_RFLM = 0x8; // RFLM
    static constexpr uint32_t MCR_TXFP = 0x4; // TXFP
    static constexpr uint32_t MCR_SLEEP = 0x2; // SLEEP
    static constexpr uint32_t MCR_INRQ = 0x1; // INRQ

    static constexpr uint32_t MSR_RESET_VALUE = 0xc02; // Reset value
    static constexpr uint32_t MSR_RX = 0x800; // RX
    static constexpr uint32_t MSR_SAMP = 0x400; // SAMP
    static constexpr uint32_t MSR_RXM = 0x200; // RXM
    static constexpr uint32_t MSR_TXM = 0x100; // TXM
    static constexpr uint32_t MSR_SLAKI = 0x10; // SLAKI
    static constexpr uint32_t MSR_WKUI = 0x8; // WKUI
    static constexpr uint32_t MSR_ERRI = 0x4; // ERRI
    static constexpr uint32_t MSR_SLAK = 0x2; // SLAK
    static constexpr uint32_t MSR_INAK = 0x1; // INAK

    static constexpr uint32_t TSR_RESET_VALUE = 0x1c000000; // Reset value
    static constexpr uint32_t TSR_LOW2 = 0x80000000; // Lowest priority flag for mailbox 2
    static constexpr uint32_t TSR_LOW1 = 0x40000000; // Lowest priority flag for mailbox 1
    static constexpr uint32_t TSR_LOW0 = 0x20000000; // Lowest priority flag for mailbox 0
    static constexpr uint32_t TSR_TME2 = 0x10000000; // Lowest priority flag for mailbox 2
    static constexpr uint32_t TSR_TME1 = 0x8000000; // Lowest priority flag for mailbox 1
    static constexpr uint32_t TSR_TME0 = 0x4000000; // Lowest priority flag for mailbox 0
    typedef bit_field_t<24, 0x3> TSR_CODE; // CODE
    static constexpr uint32_t TSR_ABRQ2 = 0x800000; // ABRQ2
    static constexpr uint32_t TSR_TERR2 = 0x80000; // TERR2
    static constexpr uint32_t TSR_ALST2 = 0x40000; // ALST2
    static constexpr uint32_t TSR_TXOK2 = 0x20000; // TXOK2
    static constexpr uint32_t TSR_RQCP2 = 0x10000; // RQCP2
    static constexpr uint32_t TSR_ABRQ1 = 0x8000; // ABRQ1
    static constexpr uint32_t TSR_TERR1 = 0x800; // TERR1
    static constexpr uint32_t TSR_ALST1 = 0x400; // ALST1
    static constexpr uint32_t TSR_TXOK1 = 0x200; // TXOK1
    static constexpr uint32_t TSR_RQCP1 = 0x100; // RQCP1
    static constexpr uint32_t TSR_ABRQ0 = 0x80; // ABRQ0
    static constexpr uint32_t TSR_TERR0 = 0x8; // TERR0
    static constexpr uint32_t TSR_ALST0 = 0x4; // ALST0
    static constexpr uint32_t TSR_TXOK0 = 0x2; // TXOK0
    static constexpr uint32_t TSR_RQCP0 = 0x1; // RQCP0

    static constexpr uint32_t RF0R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RF0R_RFOM0 = 0x20; // RFOM0
    static constexpr uint32_t RF0R_FOVR0 = 0x10; // FOVR0
    static constexpr uint32_t RF0R_FULL0 = 0x8; // FULL0
    typedef bit_field_t<0, 0x3> RF0R_FMP0; // FMP0

    static constexpr uint32_t RF1R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RF1R_RFOM1 = 0x20; // RFOM1
    static constexpr uint32_t RF1R_FOVR1 = 0x10; // FOVR1
    static constexpr uint32_t RF1R_FULL1 = 0x8; // FULL1
    typedef bit_field_t<0, 0x3> RF1R_FMP1; // FMP1

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_SLKIE = 0x20000; // SLKIE
    static constexpr uint32_t IER_WKUIE = 0x10000; // WKUIE
    static constexpr uint32_t IER_ERRIE = 0x8000; // ERRIE
    static constexpr uint32_t IER_LECIE = 0x800; // LECIE
    static constexpr uint32_t IER_BOFIE = 0x400; // BOFIE
    static constexpr uint32_t IER_EPVIE = 0x200; // EPVIE
    static constexpr uint32_t IER_EWGIE = 0x100; // EWGIE
    static constexpr uint32_t IER_FOVIE1 = 0x40; // FOVIE1
    static constexpr uint32_t IER_FFIE1 = 0x20; // FFIE1
    static constexpr uint32_t IER_FMPIE1 = 0x10; // FMPIE1
    static constexpr uint32_t IER_FOVIE0 = 0x8; // FOVIE0
    static constexpr uint32_t IER_FFIE0 = 0x4; // FFIE0
    static constexpr uint32_t IER_FMPIE0 = 0x2; // FMPIE0
    static constexpr uint32_t IER_TMEIE = 0x1; // TMEIE

    static constexpr uint32_t ESR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> ESR_REC; // REC
    typedef bit_field_t<16, 0xff> ESR_TEC; // TEC
    typedef bit_field_t<4, 0x7> ESR_LEC; // LEC
    static constexpr uint32_t ESR_BOFF = 0x4; // BOFF
    static constexpr uint32_t ESR_EPVF = 0x2; // EPVF
    static constexpr uint32_t ESR_EWGF = 0x1; // EWGF

    static constexpr uint32_t BTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BTR_SILM = 0x80000000; // SILM
    static constexpr uint32_t BTR_LBKM = 0x40000000; // LBKM
    typedef bit_field_t<24, 0x3> BTR_SJW; // SJW
    typedef bit_field_t<20, 0x7> BTR_TS2; // TS2
    typedef bit_field_t<16, 0xf> BTR_TS1; // TS1
    typedef bit_field_t<0, 0x3ff> BTR_BRP; // BRP


    static constexpr uint32_t TI0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<21, 0x7ff> TI0R_STID; // STID
    typedef bit_field_t<3, 0x3ffff> TI0R_EXID; // EXID
    static constexpr uint32_t TI0R_IDE = 0x4; // IDE
    static constexpr uint32_t TI0R_RTR = 0x2; // RTR
    static constexpr uint32_t TI0R_TXRQ = 0x1; // TXRQ

    static constexpr uint32_t TDT0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> TDT0R_TIME; // TIME
    static constexpr uint32_t TDT0R_TGT = 0x100; // TGT
    typedef bit_field_t<0, 0xf> TDT0R_DLC; // DLC

    static constexpr uint32_t TDL0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> TDL0R_DATA3; // DATA3
    typedef bit_field_t<16, 0xff> TDL0R_DATA2; // DATA2
    typedef bit_field_t<8, 0xff> TDL0R_DATA1; // DATA1
    typedef bit_field_t<0, 0xff> TDL0R_DATA0; // DATA0

    static constexpr uint32_t TDH0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> TDH0R_DATA7; // DATA7
    typedef bit_field_t<16, 0xff> TDH0R_DATA6; // DATA6
    typedef bit_field_t<8, 0xff> TDH0R_DATA5; // DATA5
    typedef bit_field_t<0, 0xff> TDH0R_DATA4; // DATA4

    static constexpr uint32_t TI1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<21, 0x7ff> TI1R_STID; // STID
    typedef bit_field_t<3, 0x3ffff> TI1R_EXID; // EXID
    static constexpr uint32_t TI1R_IDE = 0x4; // IDE
    static constexpr uint32_t TI1R_RTR = 0x2; // RTR
    static constexpr uint32_t TI1R_TXRQ = 0x1; // TXRQ

    static constexpr uint32_t TDT1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> TDT1R_TIME; // TIME
    static constexpr uint32_t TDT1R_TGT = 0x100; // TGT
    typedef bit_field_t<0, 0xf> TDT1R_DLC; // DLC

    static constexpr uint32_t TDL1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> TDL1R_DATA3; // DATA3
    typedef bit_field_t<16, 0xff> TDL1R_DATA2; // DATA2
    typedef bit_field_t<8, 0xff> TDL1R_DATA1; // DATA1
    typedef bit_field_t<0, 0xff> TDL1R_DATA0; // DATA0

    static constexpr uint32_t TDH1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> TDH1R_DATA7; // DATA7
    typedef bit_field_t<16, 0xff> TDH1R_DATA6; // DATA6
    typedef bit_field_t<8, 0xff> TDH1R_DATA5; // DATA5
    typedef bit_field_t<0, 0xff> TDH1R_DATA4; // DATA4

    static constexpr uint32_t TI2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<21, 0x7ff> TI2R_STID; // STID
    typedef bit_field_t<3, 0x3ffff> TI2R_EXID; // EXID
    static constexpr uint32_t TI2R_IDE = 0x4; // IDE
    static constexpr uint32_t TI2R_RTR = 0x2; // RTR
    static constexpr uint32_t TI2R_TXRQ = 0x1; // TXRQ

    static constexpr uint32_t TDT2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> TDT2R_TIME; // TIME
    static constexpr uint32_t TDT2R_TGT = 0x100; // TGT
    typedef bit_field_t<0, 0xf> TDT2R_DLC; // DLC

    static constexpr uint32_t TDL2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> TDL2R_DATA3; // DATA3
    typedef bit_field_t<16, 0xff> TDL2R_DATA2; // DATA2
    typedef bit_field_t<8, 0xff> TDL2R_DATA1; // DATA1
    typedef bit_field_t<0, 0xff> TDL2R_DATA0; // DATA0

    static constexpr uint32_t TDH2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> TDH2R_DATA7; // DATA7
    typedef bit_field_t<16, 0xff> TDH2R_DATA6; // DATA6
    typedef bit_field_t<8, 0xff> TDH2R_DATA5; // DATA5
    typedef bit_field_t<0, 0xff> TDH2R_DATA4; // DATA4

    static constexpr uint32_t RI0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<21, 0x7ff> RI0R_STID; // STID
    typedef bit_field_t<3, 0x3ffff> RI0R_EXID; // EXID
    static constexpr uint32_t RI0R_IDE = 0x4; // IDE
    static constexpr uint32_t RI0R_RTR = 0x2; // RTR

    static constexpr uint32_t RDT0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> RDT0R_TIME; // TIME
    typedef bit_field_t<8, 0xff> RDT0R_FMI; // FMI
    typedef bit_field_t<0, 0xf> RDT0R_DLC; // DLC

    static constexpr uint32_t RDL0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> RDL0R_DATA3; // DATA3
    typedef bit_field_t<16, 0xff> RDL0R_DATA2; // DATA2
    typedef bit_field_t<8, 0xff> RDL0R_DATA1; // DATA1
    typedef bit_field_t<0, 0xff> RDL0R_DATA0; // DATA0

    static constexpr uint32_t RDH0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> RDH0R_DATA7; // DATA7
    typedef bit_field_t<16, 0xff> RDH0R_DATA6; // DATA6
    typedef bit_field_t<8, 0xff> RDH0R_DATA5; // DATA5
    typedef bit_field_t<0, 0xff> RDH0R_DATA4; // DATA4

    static constexpr uint32_t RI1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<21, 0x7ff> RI1R_STID; // STID
    typedef bit_field_t<3, 0x3ffff> RI1R_EXID; // EXID
    static constexpr uint32_t RI1R_IDE = 0x4; // IDE
    static constexpr uint32_t RI1R_RTR = 0x2; // RTR

    static constexpr uint32_t RDT1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> RDT1R_TIME; // TIME
    typedef bit_field_t<8, 0xff> RDT1R_FMI; // FMI
    typedef bit_field_t<0, 0xf> RDT1R_DLC; // DLC

    static constexpr uint32_t RDL1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> RDL1R_DATA3; // DATA3
    typedef bit_field_t<16, 0xff> RDL1R_DATA2; // DATA2
    typedef bit_field_t<8, 0xff> RDL1R_DATA1; // DATA1
    typedef bit_field_t<0, 0xff> RDL1R_DATA0; // DATA0

    static constexpr uint32_t RDH1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> RDH1R_DATA7; // DATA7
    typedef bit_field_t<16, 0xff> RDH1R_DATA6; // DATA6
    typedef bit_field_t<8, 0xff> RDH1R_DATA5; // DATA5
    typedef bit_field_t<0, 0xff> RDH1R_DATA4; // DATA4


    static constexpr uint32_t FMR_RESET_VALUE = 0x2a1c0e01; // Reset value
    static constexpr uint32_t FMR_FINIT = 0x1; // FINIT

    static constexpr uint32_t FM1R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FM1R_FBM0 = 0x1; // Filter mode
    static constexpr uint32_t FM1R_FBM1 = 0x2; // Filter mode
    static constexpr uint32_t FM1R_FBM2 = 0x4; // Filter mode
    static constexpr uint32_t FM1R_FBM3 = 0x8; // Filter mode
    static constexpr uint32_t FM1R_FBM4 = 0x10; // Filter mode
    static constexpr uint32_t FM1R_FBM5 = 0x20; // Filter mode
    static constexpr uint32_t FM1R_FBM6 = 0x40; // Filter mode
    static constexpr uint32_t FM1R_FBM7 = 0x80; // Filter mode
    static constexpr uint32_t FM1R_FBM8 = 0x100; // Filter mode
    static constexpr uint32_t FM1R_FBM9 = 0x200; // Filter mode
    static constexpr uint32_t FM1R_FBM10 = 0x400; // Filter mode
    static constexpr uint32_t FM1R_FBM11 = 0x800; // Filter mode
    static constexpr uint32_t FM1R_FBM12 = 0x1000; // Filter mode
    static constexpr uint32_t FM1R_FBM13 = 0x2000; // Filter mode


    static constexpr uint32_t FS1R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS1R_FSC0 = 0x1; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC1 = 0x2; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC2 = 0x4; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC3 = 0x8; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC4 = 0x10; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC5 = 0x20; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC6 = 0x40; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC7 = 0x80; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC8 = 0x100; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC9 = 0x200; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC10 = 0x400; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC11 = 0x800; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC12 = 0x1000; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC13 = 0x2000; // Filter scale configuration


    static constexpr uint32_t FFA1R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FFA1R_FFA0 = 0x1; // Filter FIFO assignment for filter 0
    static constexpr uint32_t FFA1R_FFA1 = 0x2; // Filter FIFO assignment for filter 1
    static constexpr uint32_t FFA1R_FFA2 = 0x4; // Filter FIFO assignment for filter 2
    static constexpr uint32_t FFA1R_FFA3 = 0x8; // Filter FIFO assignment for filter 3
    static constexpr uint32_t FFA1R_FFA4 = 0x10; // Filter FIFO assignment for filter 4
    static constexpr uint32_t FFA1R_FFA5 = 0x20; // Filter FIFO assignment for filter 5
    static constexpr uint32_t FFA1R_FFA6 = 0x40; // Filter FIFO assignment for filter 6
    static constexpr uint32_t FFA1R_FFA7 = 0x80; // Filter FIFO assignment for filter 7
    static constexpr uint32_t FFA1R_FFA8 = 0x100; // Filter FIFO assignment for filter 8
    static constexpr uint32_t FFA1R_FFA9 = 0x200; // Filter FIFO assignment for filter 9
    static constexpr uint32_t FFA1R_FFA10 = 0x400; // Filter FIFO assignment for filter 10
    static constexpr uint32_t FFA1R_FFA11 = 0x800; // Filter FIFO assignment for filter 11
    static constexpr uint32_t FFA1R_FFA12 = 0x1000; // Filter FIFO assignment for filter 12
    static constexpr uint32_t FFA1R_FFA13 = 0x2000; // Filter FIFO assignment for filter 13


    static constexpr uint32_t FA1R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FA1R_FACT0 = 0x1; // Filter active
    static constexpr uint32_t FA1R_FACT1 = 0x2; // Filter active
    static constexpr uint32_t FA1R_FACT2 = 0x4; // Filter active
    static constexpr uint32_t FA1R_FACT3 = 0x8; // Filter active
    static constexpr uint32_t FA1R_FACT4 = 0x10; // Filter active
    static constexpr uint32_t FA1R_FACT5 = 0x20; // Filter active
    static constexpr uint32_t FA1R_FACT6 = 0x40; // Filter active
    static constexpr uint32_t FA1R_FACT7 = 0x80; // Filter active
    static constexpr uint32_t FA1R_FACT8 = 0x100; // Filter active
    static constexpr uint32_t FA1R_FACT9 = 0x200; // Filter active
    static constexpr uint32_t FA1R_FACT10 = 0x400; // Filter active
    static constexpr uint32_t FA1R_FACT11 = 0x800; // Filter active
    static constexpr uint32_t FA1R_FACT12 = 0x1000; // Filter active
    static constexpr uint32_t FA1R_FACT13 = 0x2000; // Filter active


    static constexpr uint32_t F0R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F0R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F0R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F0R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F0R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F0R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F0R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F0R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F0R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F0R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F0R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F0R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F0R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F0R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F0R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F0R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F0R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F0R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F0R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F0R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F0R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F0R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F0R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F0R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F0R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F0R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F0R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F0R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F0R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F0R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F0R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F0R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F0R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F0R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F0R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F0R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F0R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F0R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F0R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F0R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F0R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F0R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F0R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F0R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F0R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F0R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F0R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F0R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F0R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F0R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F0R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F0R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F0R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F0R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F0R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F0R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F0R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F0R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F0R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F0R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F0R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F0R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F0R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F0R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F0R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F0R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F1R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F1R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F1R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F1R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F1R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F1R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F1R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F1R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F1R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F1R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F1R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F1R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F1R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F1R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F1R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F1R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F1R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F1R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F1R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F1R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F1R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F1R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F1R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F1R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F1R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F1R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F1R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F1R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F1R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F1R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F1R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F1R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F1R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F1R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F1R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F1R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F1R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F1R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F1R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F1R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F1R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F1R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F1R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F1R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F1R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F1R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F1R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F1R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F1R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F1R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F1R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F1R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F1R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F1R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F1R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F1R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F1R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F1R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F1R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F1R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F1R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F1R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F1R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F1R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F1R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F1R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F2R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F2R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F2R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F2R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F2R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F2R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F2R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F2R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F2R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F2R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F2R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F2R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F2R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F2R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F2R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F2R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F2R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F2R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F2R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F2R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F2R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F2R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F2R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F2R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F2R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F2R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F2R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F2R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F2R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F2R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F2R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F2R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F2R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F2R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F2R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F2R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F2R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F2R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F2R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F2R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F2R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F2R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F2R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F2R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F2R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F2R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F2R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F2R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F2R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F2R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F2R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F2R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F2R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F2R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F2R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F2R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F2R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F2R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F2R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F2R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F2R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F2R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F2R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F2R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F2R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F2R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F3R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F3R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F3R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F3R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F3R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F3R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F3R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F3R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F3R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F3R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F3R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F3R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F3R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F3R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F3R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F3R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F3R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F3R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F3R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F3R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F3R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F3R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F3R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F3R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F3R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F3R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F3R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F3R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F3R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F3R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F3R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F3R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F3R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F3R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F3R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F3R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F3R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F3R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F3R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F3R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F3R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F3R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F3R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F3R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F3R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F3R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F3R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F3R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F3R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F3R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F3R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F3R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F3R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F3R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F3R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F3R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F3R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F3R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F3R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F3R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F3R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F3R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F3R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F3R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F3R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F3R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F4R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F4R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F4R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F4R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F4R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F4R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F4R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F4R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F4R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F4R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F4R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F4R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F4R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F4R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F4R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F4R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F4R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F4R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F4R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F4R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F4R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F4R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F4R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F4R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F4R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F4R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F4R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F4R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F4R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F4R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F4R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F4R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F4R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F4R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F4R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F4R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F4R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F4R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F4R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F4R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F4R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F4R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F4R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F4R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F4R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F4R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F4R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F4R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F4R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F4R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F4R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F4R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F4R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F4R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F4R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F4R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F4R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F4R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F4R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F4R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F4R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F4R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F4R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F4R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F4R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F4R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F5R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F5R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F5R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F5R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F5R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F5R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F5R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F5R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F5R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F5R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F5R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F5R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F5R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F5R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F5R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F5R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F5R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F5R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F5R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F5R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F5R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F5R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F5R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F5R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F5R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F5R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F5R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F5R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F5R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F5R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F5R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F5R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F5R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F5R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F5R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F5R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F5R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F5R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F5R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F5R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F5R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F5R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F5R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F5R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F5R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F5R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F5R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F5R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F5R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F5R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F5R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F5R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F5R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F5R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F5R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F5R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F5R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F5R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F5R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F5R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F5R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F5R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F5R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F5R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F5R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F5R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F6R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F6R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F6R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F6R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F6R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F6R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F6R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F6R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F6R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F6R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F6R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F6R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F6R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F6R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F6R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F6R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F6R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F6R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F6R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F6R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F6R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F6R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F6R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F6R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F6R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F6R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F6R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F6R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F6R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F6R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F6R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F6R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F6R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F6R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F6R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F6R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F6R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F6R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F6R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F6R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F6R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F6R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F6R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F6R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F6R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F6R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F6R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F6R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F6R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F6R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F6R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F6R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F6R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F6R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F6R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F6R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F6R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F6R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F6R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F6R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F6R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F6R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F6R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F6R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F6R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F6R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F7R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F7R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F7R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F7R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F7R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F7R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F7R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F7R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F7R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F7R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F7R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F7R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F7R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F7R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F7R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F7R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F7R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F7R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F7R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F7R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F7R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F7R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F7R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F7R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F7R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F7R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F7R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F7R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F7R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F7R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F7R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F7R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F7R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F7R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F7R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F7R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F7R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F7R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F7R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F7R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F7R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F7R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F7R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F7R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F7R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F7R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F7R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F7R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F7R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F7R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F7R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F7R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F7R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F7R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F7R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F7R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F7R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F7R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F7R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F7R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F7R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F7R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F7R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F7R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F7R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F7R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F8R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F8R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F8R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F8R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F8R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F8R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F8R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F8R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F8R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F8R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F8R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F8R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F8R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F8R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F8R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F8R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F8R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F8R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F8R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F8R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F8R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F8R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F8R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F8R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F8R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F8R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F8R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F8R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F8R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F8R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F8R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F8R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F8R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F8R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F8R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F8R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F8R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F8R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F8R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F8R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F8R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F8R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F8R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F8R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F8R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F8R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F8R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F8R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F8R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F8R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F8R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F8R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F8R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F8R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F8R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F8R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F8R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F8R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F8R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F8R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F8R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F8R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F8R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F8R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F8R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F8R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F9R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F9R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F9R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F9R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F9R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F9R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F9R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F9R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F9R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F9R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F9R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F9R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F9R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F9R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F9R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F9R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F9R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F9R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F9R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F9R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F9R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F9R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F9R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F9R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F9R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F9R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F9R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F9R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F9R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F9R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F9R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F9R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F9R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F9R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F9R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F9R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F9R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F9R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F9R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F9R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F9R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F9R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F9R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F9R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F9R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F9R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F9R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F9R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F9R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F9R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F9R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F9R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F9R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F9R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F9R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F9R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F9R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F9R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F9R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F9R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F9R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F9R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F9R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F9R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F9R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F9R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F10R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F10R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F10R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F10R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F10R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F10R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F10R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F10R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F10R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F10R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F10R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F10R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F10R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F10R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F10R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F10R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F10R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F10R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F10R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F10R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F10R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F10R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F10R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F10R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F10R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F10R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F10R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F10R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F10R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F10R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F10R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F10R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F10R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F10R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F10R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F10R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F10R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F10R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F10R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F10R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F10R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F10R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F10R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F10R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F10R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F10R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F10R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F10R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F10R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F10R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F10R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F10R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F10R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F10R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F10R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F10R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F10R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F10R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F10R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F10R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F10R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F10R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F10R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F10R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F10R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F10R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F11R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F11R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F11R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F11R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F11R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F11R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F11R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F11R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F11R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F11R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F11R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F11R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F11R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F11R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F11R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F11R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F11R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F11R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F11R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F11R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F11R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F11R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F11R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F11R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F11R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F11R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F11R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F11R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F11R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F11R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F11R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F11R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F11R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F11R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F11R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F11R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F11R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F11R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F11R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F11R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F11R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F11R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F11R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F11R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F11R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F11R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F11R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F11R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F11R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F11R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F11R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F11R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F11R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F11R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F11R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F11R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F11R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F11R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F11R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F11R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F11R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F11R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F11R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F11R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F11R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F11R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F12R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F12R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F12R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F12R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F12R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F12R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F12R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F12R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F12R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F12R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F12R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F12R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F12R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F12R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F12R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F12R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F12R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F12R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F12R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F12R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F12R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F12R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F12R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F12R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F12R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F12R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F12R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F12R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F12R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F12R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F12R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F12R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F12R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F12R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F12R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F12R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F12R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F12R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F12R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F12R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F12R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F12R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F12R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F12R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F12R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F12R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F12R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F12R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F12R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F12R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F12R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F12R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F12R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F12R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F12R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F12R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F12R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F12R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F12R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F12R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F12R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F12R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F12R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F12R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F12R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F12R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F13R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F13R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F13R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F13R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F13R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F13R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F13R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F13R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F13R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F13R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F13R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F13R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F13R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F13R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F13R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F13R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F13R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F13R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F13R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F13R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F13R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F13R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F13R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F13R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F13R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F13R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F13R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F13R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F13R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F13R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F13R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F13R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F13R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F13R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F13R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F13R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F13R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F13R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F13R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F13R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F13R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F13R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F13R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F13R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F13R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F13R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F13R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F13R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F13R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F13R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F13R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F13R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F13R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F13R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F13R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F13R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F13R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F13R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F13R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F13R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F13R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F13R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F13R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F13R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F13R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F13R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F14R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F14R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F14R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F14R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F14R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F14R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F14R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F14R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F14R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F14R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F14R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F14R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F14R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F14R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F14R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F14R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F14R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F14R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F14R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F14R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F14R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F14R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F14R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F14R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F14R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F14R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F14R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F14R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F14R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F14R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F14R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F14R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F14R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F14R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F14R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F14R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F14R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F14R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F14R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F14R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F14R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F14R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F14R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F14R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F14R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F14R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F14R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F14R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F14R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F14R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F14R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F14R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F14R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F14R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F14R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F14R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F14R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F14R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F14R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F14R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F14R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F14R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F14R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F14R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F14R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F14R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F15R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F15R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F15R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F15R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F15R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F15R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F15R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F15R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F15R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F15R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F15R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F15R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F15R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F15R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F15R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F15R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F15R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F15R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F15R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F15R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F15R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F15R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F15R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F15R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F15R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F15R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F15R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F15R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F15R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F15R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F15R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F15R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F15R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F15R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F15R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F15R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F15R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F15R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F15R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F15R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F15R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F15R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F15R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F15R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F15R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F15R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F15R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F15R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F15R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F15R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F15R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F15R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F15R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F15R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F15R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F15R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F15R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F15R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F15R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F15R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F15R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F15R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F15R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F15R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F15R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F15R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F16R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F16R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F16R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F16R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F16R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F16R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F16R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F16R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F16R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F16R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F16R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F16R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F16R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F16R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F16R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F16R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F16R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F16R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F16R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F16R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F16R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F16R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F16R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F16R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F16R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F16R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F16R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F16R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F16R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F16R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F16R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F16R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F16R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F16R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F16R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F16R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F16R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F16R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F16R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F16R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F16R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F16R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F16R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F16R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F16R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F16R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F16R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F16R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F16R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F16R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F16R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F16R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F16R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F16R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F16R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F16R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F16R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F16R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F16R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F16R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F16R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F16R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F16R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F16R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F16R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F16R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F17R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F17R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F17R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F17R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F17R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F17R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F17R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F17R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F17R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F17R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F17R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F17R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F17R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F17R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F17R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F17R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F17R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F17R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F17R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F17R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F17R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F17R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F17R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F17R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F17R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F17R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F17R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F17R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F17R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F17R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F17R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F17R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F17R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F17R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F17R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F17R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F17R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F17R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F17R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F17R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F17R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F17R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F17R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F17R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F17R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F17R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F17R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F17R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F17R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F17R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F17R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F17R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F17R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F17R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F17R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F17R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F17R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F17R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F17R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F17R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F17R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F17R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F17R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F17R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F17R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F17R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F18R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F18R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F18R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F18R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F18R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F18R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F18R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F18R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F18R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F18R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F18R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F18R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F18R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F18R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F18R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F18R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F18R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F18R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F18R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F18R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F18R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F18R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F18R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F18R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F18R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F18R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F18R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F18R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F18R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F18R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F18R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F18R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F18R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F18R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F18R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F18R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F18R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F18R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F18R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F18R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F18R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F18R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F18R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F18R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F18R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F18R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F18R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F18R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F18R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F18R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F18R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F18R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F18R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F18R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F18R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F18R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F18R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F18R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F18R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F18R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F18R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F18R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F18R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F18R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F18R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F18R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F19R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F19R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F19R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F19R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F19R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F19R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F19R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F19R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F19R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F19R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F19R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F19R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F19R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F19R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F19R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F19R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F19R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F19R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F19R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F19R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F19R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F19R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F19R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F19R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F19R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F19R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F19R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F19R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F19R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F19R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F19R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F19R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F19R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F19R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F19R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F19R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F19R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F19R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F19R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F19R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F19R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F19R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F19R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F19R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F19R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F19R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F19R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F19R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F19R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F19R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F19R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F19R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F19R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F19R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F19R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F19R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F19R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F19R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F19R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F19R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F19R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F19R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F19R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F19R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F19R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F19R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F20R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F20R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F20R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F20R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F20R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F20R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F20R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F20R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F20R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F20R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F20R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F20R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F20R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F20R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F20R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F20R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F20R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F20R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F20R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F20R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F20R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F20R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F20R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F20R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F20R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F20R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F20R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F20R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F20R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F20R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F20R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F20R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F20R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F20R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F20R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F20R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F20R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F20R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F20R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F20R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F20R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F20R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F20R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F20R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F20R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F20R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F20R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F20R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F20R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F20R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F20R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F20R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F20R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F20R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F20R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F20R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F20R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F20R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F20R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F20R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F20R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F20R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F20R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F20R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F20R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F20R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F21R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F21R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F21R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F21R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F21R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F21R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F21R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F21R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F21R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F21R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F21R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F21R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F21R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F21R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F21R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F21R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F21R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F21R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F21R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F21R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F21R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F21R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F21R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F21R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F21R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F21R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F21R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F21R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F21R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F21R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F21R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F21R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F21R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F21R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F21R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F21R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F21R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F21R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F21R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F21R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F21R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F21R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F21R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F21R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F21R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F21R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F21R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F21R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F21R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F21R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F21R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F21R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F21R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F21R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F21R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F21R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F21R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F21R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F21R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F21R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F21R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F21R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F21R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F21R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F21R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F21R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F22R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F22R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F22R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F22R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F22R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F22R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F22R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F22R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F22R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F22R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F22R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F22R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F22R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F22R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F22R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F22R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F22R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F22R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F22R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F22R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F22R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F22R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F22R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F22R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F22R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F22R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F22R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F22R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F22R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F22R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F22R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F22R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F22R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F22R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F22R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F22R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F22R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F22R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F22R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F22R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F22R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F22R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F22R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F22R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F22R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F22R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F22R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F22R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F22R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F22R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F22R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F22R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F22R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F22R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F22R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F22R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F22R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F22R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F22R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F22R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F22R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F22R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F22R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F22R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F22R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F22R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F23R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F23R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F23R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F23R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F23R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F23R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F23R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F23R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F23R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F23R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F23R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F23R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F23R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F23R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F23R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F23R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F23R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F23R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F23R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F23R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F23R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F23R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F23R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F23R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F23R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F23R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F23R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F23R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F23R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F23R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F23R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F23R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F23R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F23R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F23R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F23R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F23R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F23R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F23R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F23R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F23R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F23R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F23R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F23R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F23R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F23R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F23R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F23R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F23R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F23R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F23R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F23R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F23R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F23R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F23R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F23R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F23R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F23R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F23R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F23R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F23R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F23R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F23R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F23R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F23R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F23R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F24R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F24R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F24R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F24R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F24R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F24R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F24R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F24R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F24R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F24R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F24R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F24R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F24R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F24R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F24R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F24R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F24R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F24R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F24R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F24R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F24R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F24R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F24R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F24R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F24R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F24R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F24R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F24R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F24R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F24R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F24R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F24R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F24R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F24R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F24R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F24R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F24R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F24R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F24R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F24R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F24R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F24R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F24R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F24R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F24R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F24R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F24R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F24R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F24R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F24R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F24R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F24R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F24R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F24R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F24R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F24R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F24R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F24R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F24R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F24R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F24R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F24R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F24R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F24R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F24R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F24R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F25R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F25R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F25R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F25R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F25R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F25R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F25R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F25R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F25R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F25R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F25R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F25R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F25R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F25R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F25R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F25R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F25R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F25R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F25R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F25R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F25R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F25R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F25R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F25R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F25R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F25R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F25R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F25R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F25R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F25R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F25R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F25R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F25R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F25R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F25R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F25R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F25R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F25R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F25R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F25R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F25R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F25R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F25R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F25R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F25R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F25R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F25R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F25R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F25R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F25R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F25R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F25R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F25R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F25R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F25R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F25R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F25R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F25R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F25R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F25R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F25R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F25R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F25R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F25R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F25R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F25R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F26R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F26R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F26R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F26R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F26R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F26R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F26R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F26R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F26R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F26R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F26R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F26R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F26R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F26R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F26R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F26R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F26R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F26R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F26R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F26R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F26R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F26R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F26R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F26R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F26R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F26R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F26R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F26R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F26R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F26R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F26R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F26R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F26R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F26R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F26R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F26R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F26R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F26R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F26R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F26R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F26R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F26R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F26R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F26R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F26R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F26R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F26R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F26R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F26R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F26R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F26R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F26R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F26R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F26R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F26R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F26R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F26R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F26R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F26R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F26R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F26R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F26R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F26R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F26R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F26R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F26R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F27R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F27R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F27R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F27R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F27R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F27R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F27R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F27R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F27R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F27R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F27R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F27R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F27R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F27R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F27R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F27R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F27R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F27R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F27R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F27R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F27R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F27R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F27R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F27R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F27R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F27R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F27R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F27R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F27R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F27R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F27R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F27R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F27R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F27R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F27R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F27R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F27R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F27R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F27R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F27R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F27R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F27R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F27R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F27R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F27R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F27R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F27R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F27R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F27R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F27R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F27R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F27R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F27R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F27R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F27R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F27R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F27R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F27R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F27R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F27R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F27R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F27R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F27R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F27R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F27R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F27R2_FB31 = 0x80000000; // Filter bits
};

// CAN1: Controller area network

struct stm32f745_can1_t
{
    volatile uint32_t MCR; // master control register
    volatile uint32_t MSR; // master status register
    volatile uint32_t TSR; // transmit status register
    volatile uint32_t RF0R; // receive FIFO 0 register
    volatile uint32_t RF1R; // receive FIFO 1 register
    volatile uint32_t IER; // interrupt enable register
    volatile uint32_t ESR; // interrupt enable register
    volatile uint32_t BTR; // bit timing register
    reserved_t<0x58> _0x20;
    volatile uint32_t TI0R; // TX mailbox identifier register
    volatile uint32_t TDT0R; // mailbox data length control and time stamp register
    volatile uint32_t TDL0R; // mailbox data low register
    volatile uint32_t TDH0R; // mailbox data high register
    volatile uint32_t TI1R; // mailbox identifier register
    volatile uint32_t TDT1R; // mailbox data length control and time stamp register
    volatile uint32_t TDL1R; // mailbox data low register
    volatile uint32_t TDH1R; // mailbox data high register
    volatile uint32_t TI2R; // mailbox identifier register
    volatile uint32_t TDT2R; // mailbox data length control and time stamp register
    volatile uint32_t TDL2R; // mailbox data low register
    volatile uint32_t TDH2R; // mailbox data high register
    volatile uint32_t RI0R; // receive FIFO mailbox identifier register
    volatile uint32_t RDT0R; // mailbox data high register
    volatile uint32_t RDL0R; // mailbox data high register
    volatile uint32_t RDH0R; // receive FIFO mailbox data high register
    volatile uint32_t RI1R; // mailbox data high register
    volatile uint32_t RDT1R; // mailbox data high register
    volatile uint32_t RDL1R; // mailbox data high register
    volatile uint32_t RDH1R; // mailbox data high register
    reserved_t<0xc> _0x1d0;
    volatile uint32_t FMR; // filter master register
    volatile uint32_t FM1R; // filter mode register
    reserved_t<0x1> _0x208;
    volatile uint32_t FS1R; // filter scale register
    reserved_t<0x1> _0x210;
    volatile uint32_t FFA1R; // filter FIFO assignment register
    reserved_t<0x1> _0x218;
    volatile uint32_t FA1R; // filter activation register
    reserved_t<0x8> _0x220;
    volatile uint32_t F0R1; // Filter bank 0 register 1
    volatile uint32_t F0R2; // Filter bank 0 register 2
    volatile uint32_t F1R1; // Filter bank 1 register 1
    volatile uint32_t F1R2; // Filter bank 1 register 2
    volatile uint32_t F2R1; // Filter bank 2 register 1
    volatile uint32_t F2R2; // Filter bank 2 register 2
    volatile uint32_t F3R1; // Filter bank 3 register 1
    volatile uint32_t F3R2; // Filter bank 3 register 2
    volatile uint32_t F4R1; // Filter bank 4 register 1
    volatile uint32_t F4R2; // Filter bank 4 register 2
    volatile uint32_t F5R1; // Filter bank 5 register 1
    volatile uint32_t F5R2; // Filter bank 5 register 2
    volatile uint32_t F6R1; // Filter bank 6 register 1
    volatile uint32_t F6R2; // Filter bank 6 register 2
    volatile uint32_t F7R1; // Filter bank 7 register 1
    volatile uint32_t F7R2; // Filter bank 7 register 2
    volatile uint32_t F8R1; // Filter bank 8 register 1
    volatile uint32_t F8R2; // Filter bank 8 register 2
    volatile uint32_t F9R1; // Filter bank 9 register 1
    volatile uint32_t F9R2; // Filter bank 9 register 2
    volatile uint32_t F10R1; // Filter bank 10 register 1
    volatile uint32_t F10R2; // Filter bank 10 register 2
    volatile uint32_t F11R1; // Filter bank 11 register 1
    volatile uint32_t F11R2; // Filter bank 11 register 2
    volatile uint32_t F12R1; // Filter bank 4 register 1
    volatile uint32_t F12R2; // Filter bank 12 register 2
    volatile uint32_t F13R1; // Filter bank 13 register 1
    volatile uint32_t F13R2; // Filter bank 13 register 2
    volatile uint32_t F14R1; // Filter bank 14 register 1
    volatile uint32_t F14R2; // Filter bank 14 register 2
    volatile uint32_t F15R1; // Filter bank 15 register 1
    volatile uint32_t F15R2; // Filter bank 15 register 2
    volatile uint32_t F16R1; // Filter bank 16 register 1
    volatile uint32_t F16R2; // Filter bank 16 register 2
    volatile uint32_t F17R1; // Filter bank 17 register 1
    volatile uint32_t F17R2; // Filter bank 17 register 2
    volatile uint32_t F18R1; // Filter bank 18 register 1
    volatile uint32_t F18R2; // Filter bank 18 register 2
    volatile uint32_t F19R1; // Filter bank 19 register 1
    volatile uint32_t F19R2; // Filter bank 19 register 2
    volatile uint32_t F20R1; // Filter bank 20 register 1
    volatile uint32_t F20R2; // Filter bank 20 register 2
    volatile uint32_t F21R1; // Filter bank 21 register 1
    volatile uint32_t F21R2; // Filter bank 21 register 2
    volatile uint32_t F22R1; // Filter bank 22 register 1
    volatile uint32_t F22R2; // Filter bank 22 register 2
    volatile uint32_t F23R1; // Filter bank 23 register 1
    volatile uint32_t F23R2; // Filter bank 23 register 2
    volatile uint32_t F24R1; // Filter bank 24 register 1
    volatile uint32_t F24R2; // Filter bank 24 register 2
    volatile uint32_t F25R1; // Filter bank 25 register 1
    volatile uint32_t F25R2; // Filter bank 25 register 2
    volatile uint32_t F26R1; // Filter bank 26 register 1
    volatile uint32_t F26R2; // Filter bank 26 register 2
    volatile uint32_t F27R1; // Filter bank 27 register 1
    volatile uint32_t F27R2; // Filter bank 27 register 2

    static constexpr uint32_t MCR_RESET_VALUE = 0x10002; // Reset value
    static constexpr uint32_t MCR_DBF = 0x10000; // DBF
    static constexpr uint32_t MCR_RESET = 0x8000; // RESET
    static constexpr uint32_t MCR_TTCM = 0x80; // TTCM
    static constexpr uint32_t MCR_ABOM = 0x40; // ABOM
    static constexpr uint32_t MCR_AWUM = 0x20; // AWUM
    static constexpr uint32_t MCR_NART = 0x10; // NART
    static constexpr uint32_t MCR_RFLM = 0x8; // RFLM
    static constexpr uint32_t MCR_TXFP = 0x4; // TXFP
    static constexpr uint32_t MCR_SLEEP = 0x2; // SLEEP
    static constexpr uint32_t MCR_INRQ = 0x1; // INRQ

    static constexpr uint32_t MSR_RESET_VALUE = 0xc02; // Reset value
    static constexpr uint32_t MSR_RX = 0x800; // RX
    static constexpr uint32_t MSR_SAMP = 0x400; // SAMP
    static constexpr uint32_t MSR_RXM = 0x200; // RXM
    static constexpr uint32_t MSR_TXM = 0x100; // TXM
    static constexpr uint32_t MSR_SLAKI = 0x10; // SLAKI
    static constexpr uint32_t MSR_WKUI = 0x8; // WKUI
    static constexpr uint32_t MSR_ERRI = 0x4; // ERRI
    static constexpr uint32_t MSR_SLAK = 0x2; // SLAK
    static constexpr uint32_t MSR_INAK = 0x1; // INAK

    static constexpr uint32_t TSR_RESET_VALUE = 0x1c000000; // Reset value
    static constexpr uint32_t TSR_LOW2 = 0x80000000; // Lowest priority flag for mailbox 2
    static constexpr uint32_t TSR_LOW1 = 0x40000000; // Lowest priority flag for mailbox 1
    static constexpr uint32_t TSR_LOW0 = 0x20000000; // Lowest priority flag for mailbox 0
    static constexpr uint32_t TSR_TME2 = 0x10000000; // Lowest priority flag for mailbox 2
    static constexpr uint32_t TSR_TME1 = 0x8000000; // Lowest priority flag for mailbox 1
    static constexpr uint32_t TSR_TME0 = 0x4000000; // Lowest priority flag for mailbox 0
    typedef bit_field_t<24, 0x3> TSR_CODE; // CODE
    static constexpr uint32_t TSR_ABRQ2 = 0x800000; // ABRQ2
    static constexpr uint32_t TSR_TERR2 = 0x80000; // TERR2
    static constexpr uint32_t TSR_ALST2 = 0x40000; // ALST2
    static constexpr uint32_t TSR_TXOK2 = 0x20000; // TXOK2
    static constexpr uint32_t TSR_RQCP2 = 0x10000; // RQCP2
    static constexpr uint32_t TSR_ABRQ1 = 0x8000; // ABRQ1
    static constexpr uint32_t TSR_TERR1 = 0x800; // TERR1
    static constexpr uint32_t TSR_ALST1 = 0x400; // ALST1
    static constexpr uint32_t TSR_TXOK1 = 0x200; // TXOK1
    static constexpr uint32_t TSR_RQCP1 = 0x100; // RQCP1
    static constexpr uint32_t TSR_ABRQ0 = 0x80; // ABRQ0
    static constexpr uint32_t TSR_TERR0 = 0x8; // TERR0
    static constexpr uint32_t TSR_ALST0 = 0x4; // ALST0
    static constexpr uint32_t TSR_TXOK0 = 0x2; // TXOK0
    static constexpr uint32_t TSR_RQCP0 = 0x1; // RQCP0

    static constexpr uint32_t RF0R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RF0R_RFOM0 = 0x20; // RFOM0
    static constexpr uint32_t RF0R_FOVR0 = 0x10; // FOVR0
    static constexpr uint32_t RF0R_FULL0 = 0x8; // FULL0
    typedef bit_field_t<0, 0x3> RF0R_FMP0; // FMP0

    static constexpr uint32_t RF1R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RF1R_RFOM1 = 0x20; // RFOM1
    static constexpr uint32_t RF1R_FOVR1 = 0x10; // FOVR1
    static constexpr uint32_t RF1R_FULL1 = 0x8; // FULL1
    typedef bit_field_t<0, 0x3> RF1R_FMP1; // FMP1

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_SLKIE = 0x20000; // SLKIE
    static constexpr uint32_t IER_WKUIE = 0x10000; // WKUIE
    static constexpr uint32_t IER_ERRIE = 0x8000; // ERRIE
    static constexpr uint32_t IER_LECIE = 0x800; // LECIE
    static constexpr uint32_t IER_BOFIE = 0x400; // BOFIE
    static constexpr uint32_t IER_EPVIE = 0x200; // EPVIE
    static constexpr uint32_t IER_EWGIE = 0x100; // EWGIE
    static constexpr uint32_t IER_FOVIE1 = 0x40; // FOVIE1
    static constexpr uint32_t IER_FFIE1 = 0x20; // FFIE1
    static constexpr uint32_t IER_FMPIE1 = 0x10; // FMPIE1
    static constexpr uint32_t IER_FOVIE0 = 0x8; // FOVIE0
    static constexpr uint32_t IER_FFIE0 = 0x4; // FFIE0
    static constexpr uint32_t IER_FMPIE0 = 0x2; // FMPIE0
    static constexpr uint32_t IER_TMEIE = 0x1; // TMEIE

    static constexpr uint32_t ESR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> ESR_REC; // REC
    typedef bit_field_t<16, 0xff> ESR_TEC; // TEC
    typedef bit_field_t<4, 0x7> ESR_LEC; // LEC
    static constexpr uint32_t ESR_BOFF = 0x4; // BOFF
    static constexpr uint32_t ESR_EPVF = 0x2; // EPVF
    static constexpr uint32_t ESR_EWGF = 0x1; // EWGF

    static constexpr uint32_t BTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BTR_SILM = 0x80000000; // SILM
    static constexpr uint32_t BTR_LBKM = 0x40000000; // LBKM
    typedef bit_field_t<24, 0x3> BTR_SJW; // SJW
    typedef bit_field_t<20, 0x7> BTR_TS2; // TS2
    typedef bit_field_t<16, 0xf> BTR_TS1; // TS1
    typedef bit_field_t<0, 0x3ff> BTR_BRP; // BRP


    static constexpr uint32_t TI0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<21, 0x7ff> TI0R_STID; // STID
    typedef bit_field_t<3, 0x3ffff> TI0R_EXID; // EXID
    static constexpr uint32_t TI0R_IDE = 0x4; // IDE
    static constexpr uint32_t TI0R_RTR = 0x2; // RTR
    static constexpr uint32_t TI0R_TXRQ = 0x1; // TXRQ

    static constexpr uint32_t TDT0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> TDT0R_TIME; // TIME
    static constexpr uint32_t TDT0R_TGT = 0x100; // TGT
    typedef bit_field_t<0, 0xf> TDT0R_DLC; // DLC

    static constexpr uint32_t TDL0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> TDL0R_DATA3; // DATA3
    typedef bit_field_t<16, 0xff> TDL0R_DATA2; // DATA2
    typedef bit_field_t<8, 0xff> TDL0R_DATA1; // DATA1
    typedef bit_field_t<0, 0xff> TDL0R_DATA0; // DATA0

    static constexpr uint32_t TDH0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> TDH0R_DATA7; // DATA7
    typedef bit_field_t<16, 0xff> TDH0R_DATA6; // DATA6
    typedef bit_field_t<8, 0xff> TDH0R_DATA5; // DATA5
    typedef bit_field_t<0, 0xff> TDH0R_DATA4; // DATA4

    static constexpr uint32_t TI1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<21, 0x7ff> TI1R_STID; // STID
    typedef bit_field_t<3, 0x3ffff> TI1R_EXID; // EXID
    static constexpr uint32_t TI1R_IDE = 0x4; // IDE
    static constexpr uint32_t TI1R_RTR = 0x2; // RTR
    static constexpr uint32_t TI1R_TXRQ = 0x1; // TXRQ

    static constexpr uint32_t TDT1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> TDT1R_TIME; // TIME
    static constexpr uint32_t TDT1R_TGT = 0x100; // TGT
    typedef bit_field_t<0, 0xf> TDT1R_DLC; // DLC

    static constexpr uint32_t TDL1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> TDL1R_DATA3; // DATA3
    typedef bit_field_t<16, 0xff> TDL1R_DATA2; // DATA2
    typedef bit_field_t<8, 0xff> TDL1R_DATA1; // DATA1
    typedef bit_field_t<0, 0xff> TDL1R_DATA0; // DATA0

    static constexpr uint32_t TDH1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> TDH1R_DATA7; // DATA7
    typedef bit_field_t<16, 0xff> TDH1R_DATA6; // DATA6
    typedef bit_field_t<8, 0xff> TDH1R_DATA5; // DATA5
    typedef bit_field_t<0, 0xff> TDH1R_DATA4; // DATA4

    static constexpr uint32_t TI2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<21, 0x7ff> TI2R_STID; // STID
    typedef bit_field_t<3, 0x3ffff> TI2R_EXID; // EXID
    static constexpr uint32_t TI2R_IDE = 0x4; // IDE
    static constexpr uint32_t TI2R_RTR = 0x2; // RTR
    static constexpr uint32_t TI2R_TXRQ = 0x1; // TXRQ

    static constexpr uint32_t TDT2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> TDT2R_TIME; // TIME
    static constexpr uint32_t TDT2R_TGT = 0x100; // TGT
    typedef bit_field_t<0, 0xf> TDT2R_DLC; // DLC

    static constexpr uint32_t TDL2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> TDL2R_DATA3; // DATA3
    typedef bit_field_t<16, 0xff> TDL2R_DATA2; // DATA2
    typedef bit_field_t<8, 0xff> TDL2R_DATA1; // DATA1
    typedef bit_field_t<0, 0xff> TDL2R_DATA0; // DATA0

    static constexpr uint32_t TDH2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> TDH2R_DATA7; // DATA7
    typedef bit_field_t<16, 0xff> TDH2R_DATA6; // DATA6
    typedef bit_field_t<8, 0xff> TDH2R_DATA5; // DATA5
    typedef bit_field_t<0, 0xff> TDH2R_DATA4; // DATA4

    static constexpr uint32_t RI0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<21, 0x7ff> RI0R_STID; // STID
    typedef bit_field_t<3, 0x3ffff> RI0R_EXID; // EXID
    static constexpr uint32_t RI0R_IDE = 0x4; // IDE
    static constexpr uint32_t RI0R_RTR = 0x2; // RTR

    static constexpr uint32_t RDT0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> RDT0R_TIME; // TIME
    typedef bit_field_t<8, 0xff> RDT0R_FMI; // FMI
    typedef bit_field_t<0, 0xf> RDT0R_DLC; // DLC

    static constexpr uint32_t RDL0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> RDL0R_DATA3; // DATA3
    typedef bit_field_t<16, 0xff> RDL0R_DATA2; // DATA2
    typedef bit_field_t<8, 0xff> RDL0R_DATA1; // DATA1
    typedef bit_field_t<0, 0xff> RDL0R_DATA0; // DATA0

    static constexpr uint32_t RDH0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> RDH0R_DATA7; // DATA7
    typedef bit_field_t<16, 0xff> RDH0R_DATA6; // DATA6
    typedef bit_field_t<8, 0xff> RDH0R_DATA5; // DATA5
    typedef bit_field_t<0, 0xff> RDH0R_DATA4; // DATA4

    static constexpr uint32_t RI1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<21, 0x7ff> RI1R_STID; // STID
    typedef bit_field_t<3, 0x3ffff> RI1R_EXID; // EXID
    static constexpr uint32_t RI1R_IDE = 0x4; // IDE
    static constexpr uint32_t RI1R_RTR = 0x2; // RTR

    static constexpr uint32_t RDT1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> RDT1R_TIME; // TIME
    typedef bit_field_t<8, 0xff> RDT1R_FMI; // FMI
    typedef bit_field_t<0, 0xf> RDT1R_DLC; // DLC

    static constexpr uint32_t RDL1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> RDL1R_DATA3; // DATA3
    typedef bit_field_t<16, 0xff> RDL1R_DATA2; // DATA2
    typedef bit_field_t<8, 0xff> RDL1R_DATA1; // DATA1
    typedef bit_field_t<0, 0xff> RDL1R_DATA0; // DATA0

    static constexpr uint32_t RDH1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> RDH1R_DATA7; // DATA7
    typedef bit_field_t<16, 0xff> RDH1R_DATA6; // DATA6
    typedef bit_field_t<8, 0xff> RDH1R_DATA5; // DATA5
    typedef bit_field_t<0, 0xff> RDH1R_DATA4; // DATA4


    static constexpr uint32_t FMR_RESET_VALUE = 0x2a1c0e01; // Reset value
    typedef bit_field_t<8, 0x3f> FMR_CAN2SB; // CAN2SB
    static constexpr uint32_t FMR_FINIT = 0x1; // FINIT

    static constexpr uint32_t FM1R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FM1R_FBM0 = 0x1; // Filter mode
    static constexpr uint32_t FM1R_FBM1 = 0x2; // Filter mode
    static constexpr uint32_t FM1R_FBM2 = 0x4; // Filter mode
    static constexpr uint32_t FM1R_FBM3 = 0x8; // Filter mode
    static constexpr uint32_t FM1R_FBM4 = 0x10; // Filter mode
    static constexpr uint32_t FM1R_FBM5 = 0x20; // Filter mode
    static constexpr uint32_t FM1R_FBM6 = 0x40; // Filter mode
    static constexpr uint32_t FM1R_FBM7 = 0x80; // Filter mode
    static constexpr uint32_t FM1R_FBM8 = 0x100; // Filter mode
    static constexpr uint32_t FM1R_FBM9 = 0x200; // Filter mode
    static constexpr uint32_t FM1R_FBM10 = 0x400; // Filter mode
    static constexpr uint32_t FM1R_FBM11 = 0x800; // Filter mode
    static constexpr uint32_t FM1R_FBM12 = 0x1000; // Filter mode
    static constexpr uint32_t FM1R_FBM13 = 0x2000; // Filter mode
    static constexpr uint32_t FM1R_FBM14 = 0x4000; // Filter mode
    static constexpr uint32_t FM1R_FBM15 = 0x8000; // Filter mode
    static constexpr uint32_t FM1R_FBM16 = 0x10000; // Filter mode
    static constexpr uint32_t FM1R_FBM17 = 0x20000; // Filter mode
    static constexpr uint32_t FM1R_FBM18 = 0x40000; // Filter mode
    static constexpr uint32_t FM1R_FBM19 = 0x80000; // Filter mode
    static constexpr uint32_t FM1R_FBM20 = 0x100000; // Filter mode
    static constexpr uint32_t FM1R_FBM21 = 0x200000; // Filter mode
    static constexpr uint32_t FM1R_FBM22 = 0x400000; // Filter mode
    static constexpr uint32_t FM1R_FBM23 = 0x800000; // Filter mode
    static constexpr uint32_t FM1R_FBM24 = 0x1000000; // Filter mode
    static constexpr uint32_t FM1R_FBM25 = 0x2000000; // Filter mode
    static constexpr uint32_t FM1R_FBM26 = 0x4000000; // Filter mode
    static constexpr uint32_t FM1R_FBM27 = 0x8000000; // Filter mode


    static constexpr uint32_t FS1R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS1R_FSC0 = 0x1; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC1 = 0x2; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC2 = 0x4; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC3 = 0x8; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC4 = 0x10; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC5 = 0x20; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC6 = 0x40; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC7 = 0x80; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC8 = 0x100; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC9 = 0x200; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC10 = 0x400; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC11 = 0x800; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC12 = 0x1000; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC13 = 0x2000; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC14 = 0x4000; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC15 = 0x8000; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC16 = 0x10000; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC17 = 0x20000; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC18 = 0x40000; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC19 = 0x80000; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC20 = 0x100000; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC21 = 0x200000; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC22 = 0x400000; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC23 = 0x800000; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC24 = 0x1000000; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC25 = 0x2000000; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC26 = 0x4000000; // Filter scale configuration
    static constexpr uint32_t FS1R_FSC27 = 0x8000000; // Filter scale configuration


    static constexpr uint32_t FFA1R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FFA1R_FFA0 = 0x1; // Filter FIFO assignment for filter 0
    static constexpr uint32_t FFA1R_FFA1 = 0x2; // Filter FIFO assignment for filter 1
    static constexpr uint32_t FFA1R_FFA2 = 0x4; // Filter FIFO assignment for filter 2
    static constexpr uint32_t FFA1R_FFA3 = 0x8; // Filter FIFO assignment for filter 3
    static constexpr uint32_t FFA1R_FFA4 = 0x10; // Filter FIFO assignment for filter 4
    static constexpr uint32_t FFA1R_FFA5 = 0x20; // Filter FIFO assignment for filter 5
    static constexpr uint32_t FFA1R_FFA6 = 0x40; // Filter FIFO assignment for filter 6
    static constexpr uint32_t FFA1R_FFA7 = 0x80; // Filter FIFO assignment for filter 7
    static constexpr uint32_t FFA1R_FFA8 = 0x100; // Filter FIFO assignment for filter 8
    static constexpr uint32_t FFA1R_FFA9 = 0x200; // Filter FIFO assignment for filter 9
    static constexpr uint32_t FFA1R_FFA10 = 0x400; // Filter FIFO assignment for filter 10
    static constexpr uint32_t FFA1R_FFA11 = 0x800; // Filter FIFO assignment for filter 11
    static constexpr uint32_t FFA1R_FFA12 = 0x1000; // Filter FIFO assignment for filter 12
    static constexpr uint32_t FFA1R_FFA13 = 0x2000; // Filter FIFO assignment for filter 13
    static constexpr uint32_t FFA1R_FFA14 = 0x4000; // Filter FIFO assignment for filter 14
    static constexpr uint32_t FFA1R_FFA15 = 0x8000; // Filter FIFO assignment for filter 15
    static constexpr uint32_t FFA1R_FFA16 = 0x10000; // Filter FIFO assignment for filter 16
    static constexpr uint32_t FFA1R_FFA17 = 0x20000; // Filter FIFO assignment for filter 17
    static constexpr uint32_t FFA1R_FFA18 = 0x40000; // Filter FIFO assignment for filter 18
    static constexpr uint32_t FFA1R_FFA19 = 0x80000; // Filter FIFO assignment for filter 19
    static constexpr uint32_t FFA1R_FFA20 = 0x100000; // Filter FIFO assignment for filter 20
    static constexpr uint32_t FFA1R_FFA21 = 0x200000; // Filter FIFO assignment for filter 21
    static constexpr uint32_t FFA1R_FFA22 = 0x400000; // Filter FIFO assignment for filter 22
    static constexpr uint32_t FFA1R_FFA23 = 0x800000; // Filter FIFO assignment for filter 23
    static constexpr uint32_t FFA1R_FFA24 = 0x1000000; // Filter FIFO assignment for filter 24
    static constexpr uint32_t FFA1R_FFA25 = 0x2000000; // Filter FIFO assignment for filter 25
    static constexpr uint32_t FFA1R_FFA26 = 0x4000000; // Filter FIFO assignment for filter 26
    static constexpr uint32_t FFA1R_FFA27 = 0x8000000; // Filter FIFO assignment for filter 27


    static constexpr uint32_t FA1R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FA1R_FACT0 = 0x1; // Filter active
    static constexpr uint32_t FA1R_FACT1 = 0x2; // Filter active
    static constexpr uint32_t FA1R_FACT2 = 0x4; // Filter active
    static constexpr uint32_t FA1R_FACT3 = 0x8; // Filter active
    static constexpr uint32_t FA1R_FACT4 = 0x10; // Filter active
    static constexpr uint32_t FA1R_FACT5 = 0x20; // Filter active
    static constexpr uint32_t FA1R_FACT6 = 0x40; // Filter active
    static constexpr uint32_t FA1R_FACT7 = 0x80; // Filter active
    static constexpr uint32_t FA1R_FACT8 = 0x100; // Filter active
    static constexpr uint32_t FA1R_FACT9 = 0x200; // Filter active
    static constexpr uint32_t FA1R_FACT10 = 0x400; // Filter active
    static constexpr uint32_t FA1R_FACT11 = 0x800; // Filter active
    static constexpr uint32_t FA1R_FACT12 = 0x1000; // Filter active
    static constexpr uint32_t FA1R_FACT13 = 0x2000; // Filter active
    static constexpr uint32_t FA1R_FACT14 = 0x4000; // Filter active
    static constexpr uint32_t FA1R_FACT15 = 0x8000; // Filter active
    static constexpr uint32_t FA1R_FACT16 = 0x10000; // Filter active
    static constexpr uint32_t FA1R_FACT17 = 0x20000; // Filter active
    static constexpr uint32_t FA1R_FACT18 = 0x40000; // Filter active
    static constexpr uint32_t FA1R_FACT19 = 0x80000; // Filter active
    static constexpr uint32_t FA1R_FACT20 = 0x100000; // Filter active
    static constexpr uint32_t FA1R_FACT21 = 0x200000; // Filter active
    static constexpr uint32_t FA1R_FACT22 = 0x400000; // Filter active
    static constexpr uint32_t FA1R_FACT23 = 0x800000; // Filter active
    static constexpr uint32_t FA1R_FACT24 = 0x1000000; // Filter active
    static constexpr uint32_t FA1R_FACT25 = 0x2000000; // Filter active
    static constexpr uint32_t FA1R_FACT26 = 0x4000000; // Filter active
    static constexpr uint32_t FA1R_FACT27 = 0x8000000; // Filter active


    static constexpr uint32_t F0R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F0R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F0R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F0R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F0R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F0R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F0R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F0R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F0R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F0R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F0R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F0R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F0R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F0R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F0R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F0R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F0R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F0R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F0R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F0R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F0R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F0R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F0R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F0R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F0R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F0R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F0R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F0R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F0R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F0R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F0R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F0R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F0R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F0R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F0R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F0R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F0R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F0R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F0R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F0R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F0R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F0R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F0R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F0R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F0R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F0R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F0R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F0R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F0R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F0R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F0R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F0R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F0R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F0R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F0R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F0R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F0R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F0R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F0R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F0R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F0R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F0R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F0R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F0R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F0R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F0R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F1R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F1R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F1R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F1R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F1R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F1R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F1R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F1R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F1R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F1R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F1R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F1R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F1R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F1R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F1R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F1R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F1R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F1R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F1R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F1R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F1R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F1R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F1R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F1R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F1R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F1R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F1R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F1R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F1R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F1R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F1R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F1R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F1R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F1R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F1R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F1R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F1R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F1R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F1R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F1R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F1R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F1R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F1R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F1R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F1R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F1R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F1R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F1R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F1R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F1R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F1R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F1R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F1R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F1R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F1R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F1R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F1R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F1R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F1R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F1R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F1R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F1R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F1R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F1R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F1R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F1R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F2R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F2R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F2R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F2R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F2R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F2R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F2R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F2R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F2R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F2R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F2R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F2R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F2R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F2R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F2R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F2R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F2R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F2R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F2R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F2R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F2R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F2R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F2R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F2R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F2R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F2R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F2R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F2R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F2R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F2R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F2R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F2R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F2R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F2R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F2R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F2R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F2R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F2R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F2R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F2R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F2R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F2R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F2R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F2R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F2R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F2R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F2R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F2R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F2R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F2R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F2R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F2R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F2R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F2R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F2R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F2R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F2R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F2R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F2R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F2R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F2R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F2R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F2R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F2R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F2R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F2R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F3R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F3R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F3R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F3R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F3R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F3R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F3R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F3R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F3R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F3R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F3R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F3R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F3R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F3R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F3R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F3R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F3R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F3R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F3R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F3R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F3R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F3R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F3R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F3R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F3R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F3R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F3R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F3R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F3R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F3R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F3R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F3R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F3R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F3R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F3R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F3R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F3R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F3R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F3R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F3R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F3R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F3R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F3R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F3R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F3R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F3R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F3R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F3R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F3R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F3R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F3R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F3R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F3R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F3R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F3R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F3R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F3R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F3R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F3R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F3R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F3R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F3R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F3R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F3R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F3R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F3R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F4R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F4R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F4R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F4R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F4R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F4R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F4R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F4R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F4R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F4R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F4R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F4R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F4R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F4R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F4R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F4R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F4R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F4R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F4R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F4R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F4R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F4R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F4R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F4R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F4R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F4R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F4R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F4R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F4R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F4R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F4R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F4R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F4R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F4R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F4R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F4R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F4R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F4R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F4R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F4R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F4R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F4R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F4R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F4R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F4R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F4R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F4R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F4R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F4R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F4R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F4R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F4R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F4R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F4R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F4R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F4R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F4R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F4R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F4R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F4R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F4R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F4R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F4R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F4R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F4R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F4R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F5R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F5R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F5R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F5R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F5R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F5R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F5R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F5R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F5R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F5R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F5R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F5R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F5R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F5R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F5R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F5R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F5R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F5R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F5R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F5R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F5R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F5R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F5R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F5R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F5R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F5R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F5R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F5R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F5R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F5R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F5R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F5R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F5R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F5R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F5R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F5R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F5R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F5R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F5R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F5R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F5R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F5R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F5R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F5R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F5R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F5R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F5R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F5R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F5R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F5R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F5R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F5R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F5R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F5R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F5R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F5R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F5R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F5R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F5R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F5R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F5R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F5R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F5R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F5R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F5R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F5R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F6R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F6R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F6R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F6R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F6R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F6R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F6R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F6R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F6R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F6R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F6R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F6R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F6R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F6R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F6R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F6R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F6R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F6R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F6R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F6R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F6R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F6R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F6R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F6R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F6R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F6R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F6R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F6R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F6R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F6R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F6R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F6R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F6R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F6R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F6R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F6R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F6R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F6R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F6R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F6R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F6R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F6R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F6R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F6R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F6R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F6R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F6R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F6R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F6R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F6R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F6R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F6R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F6R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F6R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F6R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F6R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F6R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F6R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F6R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F6R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F6R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F6R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F6R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F6R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F6R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F6R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F7R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F7R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F7R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F7R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F7R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F7R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F7R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F7R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F7R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F7R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F7R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F7R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F7R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F7R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F7R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F7R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F7R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F7R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F7R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F7R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F7R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F7R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F7R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F7R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F7R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F7R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F7R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F7R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F7R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F7R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F7R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F7R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F7R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F7R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F7R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F7R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F7R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F7R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F7R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F7R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F7R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F7R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F7R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F7R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F7R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F7R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F7R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F7R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F7R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F7R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F7R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F7R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F7R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F7R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F7R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F7R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F7R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F7R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F7R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F7R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F7R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F7R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F7R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F7R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F7R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F7R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F8R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F8R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F8R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F8R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F8R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F8R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F8R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F8R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F8R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F8R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F8R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F8R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F8R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F8R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F8R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F8R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F8R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F8R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F8R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F8R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F8R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F8R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F8R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F8R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F8R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F8R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F8R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F8R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F8R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F8R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F8R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F8R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F8R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F8R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F8R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F8R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F8R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F8R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F8R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F8R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F8R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F8R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F8R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F8R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F8R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F8R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F8R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F8R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F8R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F8R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F8R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F8R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F8R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F8R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F8R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F8R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F8R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F8R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F8R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F8R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F8R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F8R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F8R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F8R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F8R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F8R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F9R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F9R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F9R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F9R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F9R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F9R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F9R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F9R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F9R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F9R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F9R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F9R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F9R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F9R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F9R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F9R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F9R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F9R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F9R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F9R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F9R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F9R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F9R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F9R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F9R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F9R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F9R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F9R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F9R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F9R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F9R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F9R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F9R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F9R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F9R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F9R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F9R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F9R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F9R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F9R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F9R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F9R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F9R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F9R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F9R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F9R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F9R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F9R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F9R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F9R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F9R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F9R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F9R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F9R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F9R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F9R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F9R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F9R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F9R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F9R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F9R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F9R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F9R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F9R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F9R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F9R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F10R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F10R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F10R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F10R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F10R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F10R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F10R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F10R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F10R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F10R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F10R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F10R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F10R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F10R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F10R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F10R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F10R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F10R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F10R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F10R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F10R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F10R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F10R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F10R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F10R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F10R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F10R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F10R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F10R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F10R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F10R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F10R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F10R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F10R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F10R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F10R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F10R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F10R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F10R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F10R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F10R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F10R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F10R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F10R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F10R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F10R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F10R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F10R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F10R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F10R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F10R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F10R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F10R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F10R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F10R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F10R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F10R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F10R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F10R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F10R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F10R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F10R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F10R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F10R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F10R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F10R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F11R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F11R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F11R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F11R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F11R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F11R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F11R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F11R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F11R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F11R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F11R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F11R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F11R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F11R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F11R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F11R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F11R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F11R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F11R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F11R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F11R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F11R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F11R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F11R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F11R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F11R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F11R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F11R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F11R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F11R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F11R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F11R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F11R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F11R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F11R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F11R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F11R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F11R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F11R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F11R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F11R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F11R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F11R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F11R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F11R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F11R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F11R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F11R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F11R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F11R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F11R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F11R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F11R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F11R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F11R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F11R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F11R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F11R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F11R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F11R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F11R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F11R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F11R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F11R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F11R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F11R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F12R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F12R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F12R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F12R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F12R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F12R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F12R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F12R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F12R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F12R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F12R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F12R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F12R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F12R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F12R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F12R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F12R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F12R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F12R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F12R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F12R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F12R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F12R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F12R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F12R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F12R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F12R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F12R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F12R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F12R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F12R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F12R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F12R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F12R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F12R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F12R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F12R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F12R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F12R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F12R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F12R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F12R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F12R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F12R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F12R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F12R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F12R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F12R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F12R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F12R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F12R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F12R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F12R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F12R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F12R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F12R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F12R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F12R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F12R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F12R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F12R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F12R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F12R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F12R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F12R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F12R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F13R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F13R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F13R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F13R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F13R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F13R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F13R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F13R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F13R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F13R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F13R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F13R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F13R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F13R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F13R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F13R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F13R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F13R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F13R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F13R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F13R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F13R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F13R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F13R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F13R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F13R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F13R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F13R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F13R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F13R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F13R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F13R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F13R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F13R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F13R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F13R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F13R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F13R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F13R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F13R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F13R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F13R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F13R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F13R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F13R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F13R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F13R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F13R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F13R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F13R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F13R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F13R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F13R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F13R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F13R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F13R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F13R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F13R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F13R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F13R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F13R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F13R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F13R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F13R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F13R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F13R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F14R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F14R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F14R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F14R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F14R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F14R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F14R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F14R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F14R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F14R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F14R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F14R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F14R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F14R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F14R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F14R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F14R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F14R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F14R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F14R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F14R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F14R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F14R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F14R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F14R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F14R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F14R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F14R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F14R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F14R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F14R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F14R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F14R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F14R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F14R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F14R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F14R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F14R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F14R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F14R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F14R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F14R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F14R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F14R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F14R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F14R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F14R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F14R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F14R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F14R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F14R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F14R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F14R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F14R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F14R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F14R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F14R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F14R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F14R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F14R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F14R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F14R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F14R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F14R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F14R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F14R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F15R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F15R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F15R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F15R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F15R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F15R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F15R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F15R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F15R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F15R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F15R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F15R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F15R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F15R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F15R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F15R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F15R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F15R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F15R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F15R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F15R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F15R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F15R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F15R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F15R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F15R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F15R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F15R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F15R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F15R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F15R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F15R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F15R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F15R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F15R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F15R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F15R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F15R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F15R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F15R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F15R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F15R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F15R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F15R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F15R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F15R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F15R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F15R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F15R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F15R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F15R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F15R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F15R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F15R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F15R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F15R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F15R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F15R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F15R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F15R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F15R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F15R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F15R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F15R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F15R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F15R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F16R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F16R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F16R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F16R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F16R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F16R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F16R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F16R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F16R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F16R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F16R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F16R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F16R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F16R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F16R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F16R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F16R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F16R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F16R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F16R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F16R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F16R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F16R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F16R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F16R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F16R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F16R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F16R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F16R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F16R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F16R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F16R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F16R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F16R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F16R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F16R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F16R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F16R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F16R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F16R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F16R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F16R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F16R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F16R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F16R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F16R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F16R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F16R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F16R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F16R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F16R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F16R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F16R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F16R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F16R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F16R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F16R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F16R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F16R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F16R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F16R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F16R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F16R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F16R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F16R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F16R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F17R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F17R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F17R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F17R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F17R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F17R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F17R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F17R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F17R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F17R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F17R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F17R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F17R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F17R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F17R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F17R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F17R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F17R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F17R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F17R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F17R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F17R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F17R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F17R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F17R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F17R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F17R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F17R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F17R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F17R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F17R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F17R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F17R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F17R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F17R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F17R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F17R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F17R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F17R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F17R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F17R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F17R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F17R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F17R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F17R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F17R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F17R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F17R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F17R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F17R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F17R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F17R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F17R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F17R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F17R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F17R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F17R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F17R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F17R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F17R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F17R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F17R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F17R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F17R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F17R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F17R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F18R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F18R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F18R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F18R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F18R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F18R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F18R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F18R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F18R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F18R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F18R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F18R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F18R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F18R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F18R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F18R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F18R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F18R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F18R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F18R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F18R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F18R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F18R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F18R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F18R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F18R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F18R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F18R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F18R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F18R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F18R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F18R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F18R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F18R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F18R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F18R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F18R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F18R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F18R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F18R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F18R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F18R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F18R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F18R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F18R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F18R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F18R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F18R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F18R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F18R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F18R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F18R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F18R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F18R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F18R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F18R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F18R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F18R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F18R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F18R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F18R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F18R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F18R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F18R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F18R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F18R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F19R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F19R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F19R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F19R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F19R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F19R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F19R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F19R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F19R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F19R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F19R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F19R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F19R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F19R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F19R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F19R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F19R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F19R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F19R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F19R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F19R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F19R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F19R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F19R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F19R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F19R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F19R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F19R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F19R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F19R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F19R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F19R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F19R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F19R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F19R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F19R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F19R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F19R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F19R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F19R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F19R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F19R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F19R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F19R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F19R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F19R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F19R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F19R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F19R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F19R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F19R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F19R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F19R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F19R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F19R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F19R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F19R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F19R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F19R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F19R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F19R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F19R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F19R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F19R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F19R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F19R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F20R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F20R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F20R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F20R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F20R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F20R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F20R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F20R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F20R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F20R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F20R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F20R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F20R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F20R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F20R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F20R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F20R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F20R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F20R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F20R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F20R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F20R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F20R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F20R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F20R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F20R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F20R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F20R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F20R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F20R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F20R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F20R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F20R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F20R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F20R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F20R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F20R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F20R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F20R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F20R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F20R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F20R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F20R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F20R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F20R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F20R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F20R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F20R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F20R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F20R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F20R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F20R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F20R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F20R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F20R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F20R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F20R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F20R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F20R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F20R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F20R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F20R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F20R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F20R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F20R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F20R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F21R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F21R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F21R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F21R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F21R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F21R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F21R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F21R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F21R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F21R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F21R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F21R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F21R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F21R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F21R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F21R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F21R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F21R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F21R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F21R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F21R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F21R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F21R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F21R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F21R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F21R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F21R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F21R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F21R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F21R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F21R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F21R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F21R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F21R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F21R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F21R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F21R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F21R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F21R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F21R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F21R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F21R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F21R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F21R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F21R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F21R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F21R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F21R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F21R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F21R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F21R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F21R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F21R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F21R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F21R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F21R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F21R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F21R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F21R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F21R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F21R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F21R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F21R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F21R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F21R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F21R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F22R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F22R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F22R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F22R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F22R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F22R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F22R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F22R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F22R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F22R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F22R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F22R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F22R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F22R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F22R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F22R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F22R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F22R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F22R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F22R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F22R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F22R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F22R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F22R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F22R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F22R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F22R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F22R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F22R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F22R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F22R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F22R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F22R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F22R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F22R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F22R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F22R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F22R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F22R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F22R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F22R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F22R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F22R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F22R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F22R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F22R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F22R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F22R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F22R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F22R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F22R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F22R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F22R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F22R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F22R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F22R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F22R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F22R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F22R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F22R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F22R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F22R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F22R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F22R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F22R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F22R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F23R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F23R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F23R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F23R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F23R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F23R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F23R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F23R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F23R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F23R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F23R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F23R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F23R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F23R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F23R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F23R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F23R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F23R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F23R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F23R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F23R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F23R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F23R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F23R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F23R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F23R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F23R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F23R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F23R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F23R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F23R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F23R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F23R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F23R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F23R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F23R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F23R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F23R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F23R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F23R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F23R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F23R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F23R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F23R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F23R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F23R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F23R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F23R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F23R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F23R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F23R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F23R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F23R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F23R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F23R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F23R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F23R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F23R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F23R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F23R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F23R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F23R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F23R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F23R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F23R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F23R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F24R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F24R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F24R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F24R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F24R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F24R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F24R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F24R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F24R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F24R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F24R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F24R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F24R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F24R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F24R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F24R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F24R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F24R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F24R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F24R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F24R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F24R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F24R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F24R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F24R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F24R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F24R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F24R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F24R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F24R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F24R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F24R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F24R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F24R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F24R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F24R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F24R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F24R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F24R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F24R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F24R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F24R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F24R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F24R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F24R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F24R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F24R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F24R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F24R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F24R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F24R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F24R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F24R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F24R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F24R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F24R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F24R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F24R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F24R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F24R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F24R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F24R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F24R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F24R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F24R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F24R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F25R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F25R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F25R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F25R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F25R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F25R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F25R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F25R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F25R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F25R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F25R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F25R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F25R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F25R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F25R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F25R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F25R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F25R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F25R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F25R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F25R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F25R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F25R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F25R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F25R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F25R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F25R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F25R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F25R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F25R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F25R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F25R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F25R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F25R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F25R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F25R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F25R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F25R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F25R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F25R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F25R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F25R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F25R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F25R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F25R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F25R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F25R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F25R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F25R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F25R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F25R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F25R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F25R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F25R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F25R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F25R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F25R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F25R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F25R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F25R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F25R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F25R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F25R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F25R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F25R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F25R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F26R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F26R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F26R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F26R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F26R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F26R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F26R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F26R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F26R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F26R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F26R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F26R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F26R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F26R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F26R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F26R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F26R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F26R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F26R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F26R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F26R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F26R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F26R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F26R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F26R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F26R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F26R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F26R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F26R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F26R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F26R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F26R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F26R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F26R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F26R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F26R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F26R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F26R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F26R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F26R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F26R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F26R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F26R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F26R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F26R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F26R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F26R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F26R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F26R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F26R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F26R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F26R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F26R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F26R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F26R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F26R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F26R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F26R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F26R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F26R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F26R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F26R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F26R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F26R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F26R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F26R2_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F27R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F27R1_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F27R1_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F27R1_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F27R1_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F27R1_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F27R1_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F27R1_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F27R1_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F27R1_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F27R1_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F27R1_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F27R1_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F27R1_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F27R1_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F27R1_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F27R1_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F27R1_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F27R1_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F27R1_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F27R1_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F27R1_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F27R1_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F27R1_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F27R1_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F27R1_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F27R1_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F27R1_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F27R1_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F27R1_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F27R1_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F27R1_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F27R1_FB31 = 0x80000000; // Filter bits

    static constexpr uint32_t F27R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t F27R2_FB0 = 0x1; // Filter bits
    static constexpr uint32_t F27R2_FB1 = 0x2; // Filter bits
    static constexpr uint32_t F27R2_FB2 = 0x4; // Filter bits
    static constexpr uint32_t F27R2_FB3 = 0x8; // Filter bits
    static constexpr uint32_t F27R2_FB4 = 0x10; // Filter bits
    static constexpr uint32_t F27R2_FB5 = 0x20; // Filter bits
    static constexpr uint32_t F27R2_FB6 = 0x40; // Filter bits
    static constexpr uint32_t F27R2_FB7 = 0x80; // Filter bits
    static constexpr uint32_t F27R2_FB8 = 0x100; // Filter bits
    static constexpr uint32_t F27R2_FB9 = 0x200; // Filter bits
    static constexpr uint32_t F27R2_FB10 = 0x400; // Filter bits
    static constexpr uint32_t F27R2_FB11 = 0x800; // Filter bits
    static constexpr uint32_t F27R2_FB12 = 0x1000; // Filter bits
    static constexpr uint32_t F27R2_FB13 = 0x2000; // Filter bits
    static constexpr uint32_t F27R2_FB14 = 0x4000; // Filter bits
    static constexpr uint32_t F27R2_FB15 = 0x8000; // Filter bits
    static constexpr uint32_t F27R2_FB16 = 0x10000; // Filter bits
    static constexpr uint32_t F27R2_FB17 = 0x20000; // Filter bits
    static constexpr uint32_t F27R2_FB18 = 0x40000; // Filter bits
    static constexpr uint32_t F27R2_FB19 = 0x80000; // Filter bits
    static constexpr uint32_t F27R2_FB20 = 0x100000; // Filter bits
    static constexpr uint32_t F27R2_FB21 = 0x200000; // Filter bits
    static constexpr uint32_t F27R2_FB22 = 0x400000; // Filter bits
    static constexpr uint32_t F27R2_FB23 = 0x800000; // Filter bits
    static constexpr uint32_t F27R2_FB24 = 0x1000000; // Filter bits
    static constexpr uint32_t F27R2_FB25 = 0x2000000; // Filter bits
    static constexpr uint32_t F27R2_FB26 = 0x4000000; // Filter bits
    static constexpr uint32_t F27R2_FB27 = 0x8000000; // Filter bits
    static constexpr uint32_t F27R2_FB28 = 0x10000000; // Filter bits
    static constexpr uint32_t F27R2_FB29 = 0x20000000; // Filter bits
    static constexpr uint32_t F27R2_FB30 = 0x40000000; // Filter bits
    static constexpr uint32_t F27R2_FB31 = 0x80000000; // Filter bits
};

template<>
struct peripheral_t<STM32F722, CAN1>
{
    static constexpr periph_t P = CAN1;
    using T = stm32f722_can1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, CAN1>
{
    static constexpr periph_t P = CAN1;
    using T = stm32f722_can1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, CAN1>
{
    static constexpr periph_t P = CAN1;
    using T = stm32f722_can1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, CAN1>
{
    static constexpr periph_t P = CAN1;
    using T = stm32f722_can1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, CAN1>
{
    static constexpr periph_t P = CAN1;
    using T = stm32f722_can1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, CAN1>
{
    static constexpr periph_t P = CAN1;
    using T = stm32f745_can1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, CAN2>
{
    static constexpr periph_t P = CAN2;
    using T = stm32f745_can1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, CAN1>
{
    static constexpr periph_t P = CAN1;
    using T = stm32f745_can1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, CAN2>
{
    static constexpr periph_t P = CAN2;
    using T = stm32f745_can1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, CAN1>
{
    static constexpr periph_t P = CAN1;
    using T = stm32f745_can1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, CAN2>
{
    static constexpr periph_t P = CAN2;
    using T = stm32f745_can1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, CAN1>
{
    static constexpr periph_t P = CAN1;
    using T = stm32f745_can1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, CAN2>
{
    static constexpr periph_t P = CAN2;
    using T = stm32f745_can1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, CAN1>
{
    static constexpr periph_t P = CAN1;
    using T = stm32f745_can1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, CAN2>
{
    static constexpr periph_t P = CAN2;
    using T = stm32f745_can1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, CAN1>
{
    static constexpr periph_t P = CAN1;
    using T = stm32f745_can1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, CAN2>
{
    static constexpr periph_t P = CAN2;
    using T = stm32f745_can1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, CAN3>
{
    static constexpr periph_t P = CAN3;
    using T = stm32f745_can1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, CAN1>
{
    static constexpr periph_t P = CAN1;
    using T = stm32f745_can1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, CAN2>
{
    static constexpr periph_t P = CAN2;
    using T = stm32f745_can1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, CAN3>
{
    static constexpr periph_t P = CAN3;
    using T = stm32f745_can1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, CAN1>
{
    static constexpr periph_t P = CAN1;
    using T = stm32f745_can1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, CAN2>
{
    static constexpr periph_t P = CAN2;
    using T = stm32f745_can1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, CAN3>
{
    static constexpr periph_t P = CAN3;
    using T = stm32f745_can1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, CAN1>
{
    static constexpr periph_t P = CAN1;
    using T = stm32f745_can1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, CAN2>
{
    static constexpr periph_t P = CAN2;
    using T = stm32f745_can1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, CAN3>
{
    static constexpr periph_t P = CAN3;
    using T = stm32f745_can1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, CAN1>
{
    static constexpr periph_t P = CAN1;
    using T = stm32f745_can1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, CAN2>
{
    static constexpr periph_t P = CAN2;
    using T = stm32f745_can1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, CAN3>
{
    static constexpr periph_t P = CAN3;
    using T = stm32f745_can1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, CAN1>
{
    static constexpr periph_t P = CAN1;
    using T = stm32f745_can1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, CAN2>
{
    static constexpr periph_t P = CAN2;
    using T = stm32f745_can1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, CAN3>
{
    static constexpr periph_t P = CAN3;
    using T = stm32f745_can1_t;
    static T& V;
};

using can1_t = peripheral_t<svd, CAN1>;
using can2_t = peripheral_t<svd, CAN2>;
using can3_t = peripheral_t<svd, CAN3>;

template<int INST> struct can_traits {};

template<> struct can_traits<1>
{
    using can = can1_t;
    static constexpr signal_t RX = CAN1_RX;
    static constexpr signal_t TX = CAN1_TX;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_CAN1EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_CAN1EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_CAN1RST;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }
};

template<> struct can_traits<2>
{
    using can = can2_t;
    static constexpr signal_t RX = CAN2_RX;
    static constexpr signal_t TX = CAN2_TX;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_CAN2EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_CAN2EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_CAN2RST;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }
};

template<> struct can_traits<3>
{
    using can = can3_t;
    static constexpr signal_t RX = CAN3_RX;
    static constexpr signal_t TX = CAN3_TX;
};
