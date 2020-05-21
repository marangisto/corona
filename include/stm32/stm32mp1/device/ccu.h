#pragma once

////
//
//      STM32MP1 CCU peripherals
//
////

////
//
//      CCU
//
////

struct stm32mp15xxx_ccu_t
{
    volatile uint32_t FCCAN_CCU_CREL;  // [read-only] Clock calibration unit core release register
    volatile uint32_t FCCAN_CCU_CCFG;  // [read-write] Calibration configuration register
    volatile uint32_t FCCAN_CCU_CSTAT; // [read-only] Calibration status register
    volatile uint32_t FCCAN_CCU_CWD;   // The calibration watchdog is started after the first falling edge when the calibration FSM is in state Not_Calibrated (CCU_CSTAT.CALS = 00). In this state the calibration watchdog monitors the message received. In case no message was received until the calibration watchdog has counted down to 0, the calibration FSM stays in state Not_Calibrated (CCU_CSTAT.CALS = 00), the counter is reloaded with FDCAN_RWD.WDC and basic calibration is restarted after the next falling edge. When in state Basic_Calibrated (CCU_CSTAT.CALS = 01), the calibration watchdog is restarted with each received message . In case no message was received until the calibration watchdog has counted down to 0, the calibration FSM returns to state Not_Calibrated (CCU_CSTAT.CALS = 00), the counter is reloaded with FDCAN_RWD.WDC and basic calibration is restarted after the next falling edge. When a quartz message is received, state Precision_Calibrated (CCU_CSTAT.CALS = 10) is entered and the calibration watchdog is restarted. In this state the calibration watchdog monitors the quartz message received input. In case no message from a quartz controlled node is received by the attached TTCAN until the calibration watchdog has counted down to 0, the calibration FSM transits back to state Basic_Calibrated (CCU_CSTAT.CALS = 01). The signal is active when the CAN protocol engine on the attached TTCAN is started i.e. when the INIT bit is reset. A calibration watchdog event also sets interrupt flag CCU_IR.CWE. If enabled by CCU_IE.CWEE, interrupt line is activated (set to high). Interrupt line remains active until interrupt flag CCU_IR.CWE is reset.
    volatile uint32_t FCCAN_CCU_IR;    // [read-write] The flags are set when one of the listed conditions is detected (edge-sensitive). The flags remain set until the Host clears them. A flag is cleared by writing a 1 to the corresponding bit position. Writing a 0 has no effect. A hard reset will clear the register. The configuration of CCU_IE controls whether an interrupt is generated or not.
    volatile uint32_t FCCAN_CCU_IE;    // [read-write] The settings in the CU interrupt enable register determine whether a status change in the CU interrupt register will be signaled on an interrupt line.

    static constexpr uint32_t FCCAN_CCU_CREL_RESET_VALUE = 0x11141218;
    template<uint32_t X>
    static constexpr uint32_t FCCAN_CCU_CREL_DAY =       // DAY
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FCCAN_CCU_CREL_MON =       // MON
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FCCAN_CCU_CREL_YEAR =      // YEAR
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FCCAN_CCU_CREL_SUBSTEP =   // SUBSTEP
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FCCAN_CCU_CREL_STEP =      // STEP
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FCCAN_CCU_CREL_REL =       // REL
        bit_field_t<28, 0xf>::value<X>();

    static constexpr uint32_t FCCAN_CCU_CCFG_RESET_VALUE = 0x4;
    template<uint32_t X>
    static constexpr uint32_t FCCAN_CCU_CCFG_TQBT =            // TQBT
        bit_field_t<0, 0x1f>::value<X>();
    static constexpr uint32_t FCCAN_CCU_CCFG_BCC = 0x40;       // BCC
    static constexpr uint32_t FCCAN_CCU_CCFG_CFL = 0x80;       // CFL
    template<uint32_t X>
    static constexpr uint32_t FCCAN_CCU_CCFG_OCPM =            // OCPM
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FCCAN_CCU_CCFG_CDIV =            // CDIV
        bit_field_t<16, 0xf>::value<X>();
    static constexpr uint32_t FCCAN_CCU_CCFG_SWR = 0x80000000; // SWR

    static constexpr uint32_t FCCAN_CCU_CSTAT_RESET_VALUE = 0x203ffff;
    template<uint32_t X>
    static constexpr uint32_t FCCAN_CCU_CSTAT_OCPC =   // OCPC
        bit_field_t<0, 0x3ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FCCAN_CCU_CSTAT_TQC =    // TQC
        bit_field_t<18, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FCCAN_CCU_CSTAT_CALS =   // CALS
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t FCCAN_CCU_CWD_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FCCAN_CCU_CWD_WDC =   // WDC
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FCCAN_CCU_CWD_WDV =   // WDV
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t FCCAN_CCU_IR_RESET_VALUE = 0x0;
    static constexpr uint32_t FCCAN_CCU_IR_CWE = 0x1; // CWE
    static constexpr uint32_t FCCAN_CCU_IR_CSC = 0x2; // CSC

    static constexpr uint32_t FCCAN_CCU_IE_RESET_VALUE = 0x0;
    static constexpr uint32_t FCCAN_CCU_IE_CWEE = 0x1; // CWEE
    static constexpr uint32_t FCCAN_CCU_IE_CSCE = 0x2; // CSCE
};


template<>
struct peripheral_t<STM32MP15xxx, CCU>
{
    typedef stm32mp15xxx_ccu_t T;
    static T& V;
};

using ccu_t = peripheral_t<mcu_svd, CCU>;

