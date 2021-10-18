#pragma once

////
//
//      STM32U5 UCPD peripherals
//
///

// UCPD1: USB Power Delivery interface

struct stm32u5xx_ucpd1_t
{
    volatile uint32_t UCPD_CFGR1; // UCPD configuration register 1
    volatile uint32_t UCPD_CFGR2; // UCPD configuration register 2
    volatile uint32_t UCPD_CFGR3; // UCPD configuration register 3
    volatile uint32_t UCPD_CR; // UCPD control register
    volatile uint32_t UCPD_IMR; // UCPD interrupt mask register
    volatile uint32_t UCPD_SR; // UCPD status register
    volatile uint32_t UCPD_ICR; // UCPD interrupt clear register
    volatile uint32_t UCPD_TX_ORDSETR; // UCPD Tx ordered set type register
    volatile uint32_t UCPD_TX_PAYSZR; // UCPD Tx payload size register
    volatile uint32_t UCPD_TXDR; // UCPD Tx data register
    reserved_t<0x3> _0x28;
    volatile uint32_t UCPD_RX_ORDEXTR1; // UCPD Rx ordered set extension register 1
    volatile uint32_t UCPD_RX_ORDEXTR2; // UCPD Rx ordered set extension register 2

    static constexpr uint32_t UCPD_CFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> UCPD_CFGR1_HBITCLKDIV; // Division ratio for producing half-bit clock The bitfield determines the division ratio (the bitfield value plus one) of a ucpd_clk divider producing half-bit clock (hbit_clk).
    typedef bit_field_t<6, 0x1f> UCPD_CFGR1_IFRGAP; // Division ratio for producing inter-frame gap timer clock The bitfield determines the division ratio (the bitfield value minus one) of a ucpd_clk divider producing inter-frame gap timer clock (tInterFrameGap). The division ratio 15 is to apply for Tx clock at the USB PD 2.0 specification nominal value. The division ratios below 15 are to apply for Tx clock below nominal, and the division ratios above 15 for Tx clock above nominal.
    typedef bit_field_t<11, 0x1f> UCPD_CFGR1_TRANSWIN; // Transition window duration The bitfield determines the division ratio (the bitfield value minus one) of a hbit_clk divider producing tTransitionWindow interval. Set a value that produces an interval of 12 to 20 us, taking into account the ucpd_clk frequency and the HBITCLKDIV[5:0] bitfield setting.
    typedef bit_field_t<17, 0x7> UCPD_CFGR1_PSC_USBPDCLK; // Pre-scaler division ratio for generating ucpd_clk The bitfield determines the division ratio of a kernel clock pre-scaler producing UCPD peripheral clock (ucpd_clk). It is recommended to use the pre-scaler so as to set the ucpd_clk frequency in the range from 6 to 9 MHz.
    typedef bit_field_t<20, 0x1ff> UCPD_CFGR1_RXORDSETEN; // Receiver ordered set enable The bitfield determines the types of ordered sets that the receiver must detect. When set/cleared, each bit enables/disables a specific function: 0bxxxxxxxx1: SOP detect enabled 0bxxxxxxx1x: SOP&#39; detect enabled 0bxxxxxx1xx: SOP&#39;&#39; detect enabled 0bxxxxx1xxx: Hard Reset detect enabled 0bxxxx1xxxx: Cable Detect reset enabled 0bxxx1xxxxx: SOP&#39;_Debug enabled 0bxx1xxxxxx: SOP&#39;&#39;_Debug enabled 0bx1xxxxxxx: SOP extension#1 enabled 0b1xxxxxxxx: SOP extension#2 enabled
    static constexpr uint32_t UCPD_CFGR1_TXDMAEN = 0x20000000; // Transmission DMA mode enable When set, the bit enables DMA mode for transmission.
    static constexpr uint32_t UCPD_CFGR1_RXDMAEN = 0x40000000; // Reception DMA mode enable When set, the bit enables DMA mode for reception.
    static constexpr uint32_t UCPD_CFGR1_UCPDEN = 0x80000000; // UCPD peripheral enable General enable of the UCPD peripheral. Upon disabling, the peripheral instantly quits any ongoing activity and all control bits and bitfields default to their reset values. They must be set to their desired values each time the peripheral transits from disabled to enabled state.

    static constexpr uint32_t UCPD_CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t UCPD_CFGR2_RXFILTDIS = 0x1; // BMC decoder Rx pre-filter enable The sampling clock is that of the receiver (that is, after pre-scaler).
    static constexpr uint32_t UCPD_CFGR2_RXFILT2N3 = 0x2; // BMC decoder Rx pre-filter sampling method Number of consistent consecutive samples before confirming a new value.
    static constexpr uint32_t UCPD_CFGR2_FORCECLK = 0x4; // Force ClkReq clock request
    static constexpr uint32_t UCPD_CFGR2_WUPEN = 0x8; // Wakeup from Stop mode enable Setting the bit enables the UCPD_ASYNC_INT signal.

    static constexpr uint32_t UCPD_CFGR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> UCPD_CFGR3_TRIM1_NG_CCRPD; // SW trim value for RPD resistors on the CC1 line
    typedef bit_field_t<9, 0xf> UCPD_CFGR3_TRIM1_NG_CC3A0; // SW trim value for Iref on the CC1 line
    typedef bit_field_t<16, 0xf> UCPD_CFGR3_TRIM2_NG_CCRPD; // SW trim value for RPD resistors on the CC2 line
    typedef bit_field_t<25, 0xf> UCPD_CFGR3_TRIM2_NG_CC3A0; // SW trim value for Iref on the CC2 line

    static constexpr uint32_t UCPD_CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> UCPD_CR_TXMODE; // Type of Tx packet Writing the bitfield triggers the action as follows, depending on the value: Others: invalid From V1.1 of the USB PD specification, there is a counter defined for the duration of the BIST Carrier Mode 2. To quit this mode correctly (after the &quot;tBISTContMode&quot; delay), disable the peripheral (UCPDEN = 0).
    static constexpr uint32_t UCPD_CR_TXSEND = 0x4; // Command to send a Tx packet The bit is cleared by hardware as soon as the packet transmission begins or is discarded.
    static constexpr uint32_t UCPD_CR_TXHRST = 0x8; // Command to send a Tx Hard Reset The bit is cleared by hardware as soon as the message transmission begins or is discarded.
    static constexpr uint32_t UCPD_CR_RXMODE = 0x10; // Receiver mode Determines the mode of the receiver. When the bit is set, RXORDSET behaves normally, RXDR no longer receives bytes yet the CRC checking still proceeds as for a normal message.
    static constexpr uint32_t UCPD_CR_PHYRXEN = 0x20; // USB Power Delivery receiver enable Both CC1 and CC2 receivers are disabled when the bit is cleared. Only the CC receiver selected via the PHYCCSEL bit is enabled when the bit is set.
    static constexpr uint32_t UCPD_CR_PHYCCSEL = 0x40; // CC1/CC2 line selector for USB Power Delivery signaling The selection depends on the cable orientation as discovered at attach.
    typedef bit_field_t<7, 0x3> UCPD_CR_ANASUBMODE; // Analog PHY sub-mode Refer to TYPEC_VSTATE_CCx for the effect of this bitfield.
    static constexpr uint32_t UCPD_CR_ANAMODE = 0x200; // Analog PHY operating mode The use of CC1 and CC2 depends on CCENABLE. Refer to ANAMODE, ANASUBMODE and link with TYPEC_VSTATE_CCx for the effect of this bitfield in conjunction with ANASUBMODE[1:0].
    typedef bit_field_t<10, 0x3> UCPD_CR_CCENABLE; // CC line enable This bitfield enables CC1 and CC2 line analog PHYs (pull-ups and pull-downs) according to ANAMODE and ANASUBMODE[1:0] setting. A single line PHY can be enabled when, for example, the other line is driven by VCONN via an external VCONN switch. Enabling both PHYs is the normal usage for sink/source.
    static constexpr uint32_t UCPD_CR_CC1VCONNEN = 0x2000; // VCONN switch enable for CC1
    static constexpr uint32_t UCPD_CR_CC2VCONNEN = 0x4000; // VCONN switch enable for CC2
    static constexpr uint32_t UCPD_CR_FRSRXEN = 0x10000; // FRS event detection enable Setting the bit enables FRS Rx event (FRSEVT) detection on the CC line selected through the PHYCCSEL bit. 0: Disable Clear the bit when the device is attached to an FRS-incapable source/sink.
    static constexpr uint32_t UCPD_CR_FRSTX = 0x20000; // FRS Tx signaling enable. Setting the bit enables FRS Tx signaling. The bit is cleared by hardware after a delay respecting the USB Power Delivery specification Revision 3.0.
    static constexpr uint32_t UCPD_CR_RDCH = 0x40000; // Rdch condition drive The bit drives Rdch condition on the CC line selected through the PHYCCSEL bit (thus associated with VCONN), by remaining set during the source-only UnattachedWait.SRC state, to respect the Type-C state. Refer to &quot;USB Type-C ECN for Source VCONN Discharge&quot;. The CCENABLE[1:0] bitfield must be set accordingly, too.
    static constexpr uint32_t UCPD_CR_CC1TCDIS = 0x100000; // CC1 Type-C detector disable The bit disables the Type-C detector on the CC1 line. When enabled, the Type-C detector for CC1 is configured through ANAMODE and ANASUBMODE[1:0].
    static constexpr uint32_t UCPD_CR_CC2TCDIS = 0x200000; // CC2 Type-C detector disable The bit disables the Type-C detector on the CC2 line. When enabled, the Type-C detector for CC2 is configured through ANAMODE and ANASUBMODE[1:0].

    static constexpr uint32_t UCPD_IMR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t UCPD_IMR_TXISIE = 0x1; // TXIS interrupt enable
    static constexpr uint32_t UCPD_IMR_TXMSGDISCIE = 0x2; // TXMSGDISC interrupt enable
    static constexpr uint32_t UCPD_IMR_TXMSGSENTIE = 0x4; // TXMSGSENT interrupt enable
    static constexpr uint32_t UCPD_IMR_TXMSGABTIE = 0x8; // TXMSGABT interrupt enable
    static constexpr uint32_t UCPD_IMR_HRSTDISCIE = 0x10; // HRSTDISC interrupt enable
    static constexpr uint32_t UCPD_IMR_HRSTSENTIE = 0x20; // HRSTSENT interrupt enable
    static constexpr uint32_t UCPD_IMR_TXUNDIE = 0x40; // TXUND interrupt enable
    static constexpr uint32_t UCPD_IMR_RXNEIE = 0x100; // RXNE interrupt enable
    static constexpr uint32_t UCPD_IMR_RXORDDETIE = 0x200; // RXORDDET interrupt enable
    static constexpr uint32_t UCPD_IMR_RXHRSTDETIE = 0x400; // RXHRSTDET interrupt enable
    static constexpr uint32_t UCPD_IMR_RXOVRIE = 0x800; // RXOVR interrupt enable
    static constexpr uint32_t UCPD_IMR_RXMSGENDIE = 0x1000; // RXMSGEND interrupt enable
    static constexpr uint32_t UCPD_IMR_TYPECEVT1IE = 0x4000; // TYPECEVT1 interrupt enable
    static constexpr uint32_t UCPD_IMR_TYPECEVT2IE = 0x8000; // TYPECEVT2 interrupt enable
    static constexpr uint32_t UCPD_IMR_FRSEVTIE = 0x100000; // FRSEVT interrupt enable

    static constexpr uint32_t UCPD_SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t UCPD_SR_TXIS = 0x1; // Transmit interrupt status The flag indicates that the UCPD_TXDR register is empty and new data write is required (as the amount of data sent has not reached the payload size defined in the TXPAYSZ bitfield). The flag is cleared with the data write into the UCPD_TXDR register.
    static constexpr uint32_t UCPD_SR_TXMSGDISC = 0x2; // Message transmission discarded The flag indicates that a message transmission was dropped. The flag is cleared by setting the TXMSGDISCCF bit. Transmission of a message can be dropped if there is a concurrent receive in progress or at excessive noise on the line. After a Tx message is discarded, the flag is only raised when the CC line becomes idle.
    static constexpr uint32_t UCPD_SR_TXMSGSENT = 0x4; // Message transmission completed The flag indicates the completion of packet transmission. It is cleared by setting the TXMSGSENTCF bit. In the event of a message transmission interrupted by a Hard Reset, the flag is not raised.
    static constexpr uint32_t UCPD_SR_TXMSGABT = 0x8; // Transmit message abort The flag indicates that a Tx message is aborted due to a subsequent Hard Reset message send request taking priority during transmit. It is cleared by setting the TXMSGABTCF bit.
    static constexpr uint32_t UCPD_SR_HRSTDISC = 0x10; // Hard Reset discarded The flag indicates that the Hard Reset message is discarded. The flag is cleared by setting the HRSTDISCCF bit.
    static constexpr uint32_t UCPD_SR_HRSTSENT = 0x20; // Hard Reset message sent The flag indicates that the Hard Reset message is sent. The flag is cleared by setting the HRSTSENTCF bit.
    static constexpr uint32_t UCPD_SR_TXUND = 0x40; // Tx data underrun detection The flag indicates that the Tx data register (UCPD_TXDR) was not written in time for a transmit message to execute normally. It is cleared by setting the TXUNDCF bit.
    static constexpr uint32_t UCPD_SR_RXNE = 0x100; // Receive data register not empty detection The flag indicates that the UCPD_RXDR register is not empty. It is automatically cleared upon reading UCPD_RXDR.
    static constexpr uint32_t UCPD_SR_RXORDDET = 0x200; // Rx ordered set (4 K-codes) detection The flag indicates the detection of an ordered set. The relevant information is stored in the RXORDSET[2:0] bitfield of the UCPD_RX_ORDSET register. It is cleared by setting the RXORDDETCF bit.
    static constexpr uint32_t UCPD_SR_RXHRSTDET = 0x400; // Rx Hard Reset receipt detection The flag indicates the receipt of valid Hard Reset message. It is cleared by setting the RXHRSTDETCF bit.
    static constexpr uint32_t UCPD_SR_RXOVR = 0x800; // Rx data overflow detection The flag indicates Rx data buffer overflow. It is cleared by setting the RXOVRCF bit. The buffer overflow can occur if the received data are not read fast enough.
    static constexpr uint32_t UCPD_SR_RXMSGEND = 0x1000; // Rx message received The flag indicates whether a message (except Hard Reset message) has been received, regardless the CRC value. The flag is cleared by setting the RXMSGENDCF bit. The RXERR flag set when the RXMSGEND flag goes high indicates errors in the last-received message.
    static constexpr uint32_t UCPD_SR_RXERR = 0x2000; // Receive message error The flag indicates errors of the last Rx message declared (via RXMSGEND), such as incorrect CRC or truncated message (a line becoming static before EOP is met). It is asserted whenever the RXMSGEND flag is set.
    static constexpr uint32_t UCPD_SR_TYPECEVT1 = 0x4000; // Type-C voltage level event on CC1 line The flag indicates a change of the TYPEC_VSTATE_CC1[1:0] bitfield value, which corresponds to a new Type-C event. It is cleared by setting the TYPECEVT2CF bit.
    static constexpr uint32_t UCPD_SR_TYPECEVT2 = 0x8000; // Type-C voltage level event on CC2 line The flag indicates a change of the TYPEC_VSTATE_CC2[1:0] bitfield value, which corresponds to a new Type-C event. It is cleared by setting the TYPECEVT2CF bit.
    typedef bit_field_t<16, 0x3> UCPD_SR_TYPEC_VSTATE_CC1; // The status bitfield indicates the voltage level on the CC1 line in its steady state. The voltage variation on the CC1 line during USB PD messages due to the BMC PHY modulation does not impact the bitfield value.
    typedef bit_field_t<18, 0x3> UCPD_SR_TYPEC_VSTATE_CC2; // CC2 line voltage level The status bitfield indicates the voltage level on the CC2 line in its steady state. The voltage variation on the CC2 line during USB PD messages due to the BMC PHY modulation does not impact the bitfield value.
    static constexpr uint32_t UCPD_SR_FRSEVT = 0x100000; // FRS detection event The flag is cleared by setting the FRSEVTCF bit.

    static constexpr uint32_t UCPD_ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t UCPD_ICR_TXMSGDISCCF = 0x2; // Tx message discard flag (TXMSGDISC) clear Setting the bit clears the TXMSGDISC flag in the UCPD_SR register.
    static constexpr uint32_t UCPD_ICR_TXMSGSENTCF = 0x4; // Tx message send flag (TXMSGSENT) clear Setting the bit clears the TXMSGSENT flag in the UCPD_SR register.
    static constexpr uint32_t UCPD_ICR_TXMSGABTCF = 0x8; // Tx message abort flag (TXMSGABT) clear Setting the bit clears the TXMSGABT flag in the UCPD_SR register.
    static constexpr uint32_t UCPD_ICR_HRSTDISCCF = 0x10; // Hard reset discard flag (HRSTDISC) clear Setting the bit clears the HRSTDISC flag in the UCPD_SR register.
    static constexpr uint32_t UCPD_ICR_HRSTSENTCF = 0x20; // Hard reset send flag (HRSTSENT) clear Setting the bit clears the HRSTSENT flag in the UCPD_SR register.
    static constexpr uint32_t UCPD_ICR_TXUNDCF = 0x40; // Tx underflow flag (TXUND) clear Setting the bit clears the TXUND flag in the UCPD_SR register.
    static constexpr uint32_t UCPD_ICR_RXORDDETCF = 0x200; // Rx ordered set detect flag (RXORDDET) clear Setting the bit clears the RXORDDET flag in the UCPD_SR register.
    static constexpr uint32_t UCPD_ICR_RXHRSTDETCF = 0x400; // Rx Hard Reset detect flag (RXHRSTDET) clear Setting the bit clears the RXHRSTDET flag in the UCPD_SR register.
    static constexpr uint32_t UCPD_ICR_RXOVRCF = 0x800; // Rx overflow flag (RXOVR) clear Setting the bit clears the RXOVR flag in the UCPD_SR register.
    static constexpr uint32_t UCPD_ICR_RXMSGENDCF = 0x1000; // Rx message received flag (RXMSGEND) clear Setting the bit clears the RXMSGEND flag in the UCPD_SR register.
    static constexpr uint32_t UCPD_ICR_TYPECEVT1CF = 0x4000; // Type-C CC1 event flag (TYPECEVT1) clear Setting the bit clears the TYPECEVT1 flag in the UCPD_SR register
    static constexpr uint32_t UCPD_ICR_TYPECEVT2CF = 0x8000; // Type-C CC2 line event flag (TYPECEVT2) clear Setting the bit clears the TYPECEVT2 flag in the UCPD_SR register
    static constexpr uint32_t UCPD_ICR_FRSEVTCF = 0x100000; // FRS event flag (FRSEVT) clear Setting the bit clears the FRSEVT flag in the UCPD_SR register.

    static constexpr uint32_t UCPD_TX_ORDSETR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> UCPD_TX_ORDSETR_TXORDSET; // Ordered set to transmit The bitfield determines a full 20-bit sequence to transmit, consisting of four K-codes, each of five bits, defining the packet to transmit. The bit 0 (bit 0 of K-code1) is the first, the bit 19 (bit 4 of Kcode4) the last.

    static constexpr uint32_t UCPD_TX_PAYSZR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ff> UCPD_TX_PAYSZR_TXPAYSZ; // Payload size yet to transmit The bitfield is modified by software and by hardware. It contains the number of bytes of a payload (including header but excluding CRC) yet to transmit: each time a data byte is written into the UCPD_TXDR register, the bitfield value decrements and the TXIS bit is set, except when the bitfield value reaches zero. The enumerated values are standard payload sizes before the start of transmission.

    static constexpr uint32_t UCPD_TXDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> UCPD_TXDR_TXDATA; // Data byte to transmit


    static constexpr uint32_t UCPD_RX_ORDEXTR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> UCPD_RX_ORDEXTR1_RXSOPX1; // Ordered set 1 received The bitfield contains a full 20-bit sequence received, consisting of four Kcodes, each of five bits. The bit 0 (bit 0 of Kcode1) is receive first, the bit 19 (bit 4 of Kcode4) last.

    static constexpr uint32_t UCPD_RX_ORDEXTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> UCPD_RX_ORDEXTR2_RXSOPX2; // Ordered set 2 received The bitfield contains a full 20-bit sequence received, consisting of four Kcodes, each of five bits. The bit 0 (bit 0 of Kcode1) is receive first, the bit 19 (bit 4 of Kcode4) last.
};

template<>
struct peripheral_t<STM32U5xx, SEC_UCPD1>
{
    static constexpr periph_t P = SEC_UCPD1;
    using T = stm32u5xx_ucpd1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, UCPD1>
{
    static constexpr periph_t P = UCPD1;
    using T = stm32u5xx_ucpd1_t;
    static T& V;
};

using sec_ucpd1_t = peripheral_t<svd, SEC_UCPD1>;
using ucpd1_t = peripheral_t<svd, UCPD1>;

template<int INST> struct ucpd_traits {};

template<> struct ucpd_traits<1>
{
    using ucpd = ucpd1_t;
    static constexpr signal_t FRSTX1 = UCPD1_FRSTX1;
    static constexpr signal_t FRSTX2 = UCPD1_FRSTX2;
};
