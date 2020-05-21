#pragma once

////
//
//      STM32H7 PWR peripherals
//
////

////
//
//      PWR
//
////

struct stm32h742x_pwr_t
{
    volatile uint32_t CR1;     // [read-write] PWR control register 1
    volatile uint32_t CSR1;    // [read-only] PWR control status register 1
    volatile uint32_t CR2;     // This register is not reset by wakeup from Standby mode, RESET signal and VDD POR. It is only reset by VSW POR and VSWRST reset. This register shall not be accessed when VSWRST bit in RCC_BDCR register resets the VSW domain.After reset, PWR_CR2 register is write-protected. Prior to modifying its content, the DBP bit in PWR_CR1 register must be set to disable the write protection.
    volatile uint32_t CR3;     // Reset only by POR only, not reset by wakeup from Standby mode and RESET pad. The lower byte of this register is written once after POR and shall be written before changing VOS level or ck_sys clock frequency. No limitation applies to the upper bytes.Programming data corresponding to an invalid combination of SDLEVEL, SDEXTHP, SDEN, LDOEN and BYPASS bits (see Table9) will be ignored: data will not be written, the written-once mechanism will lock the register and any further write access will be ignored. The default supply configuration will be kept and the ACTVOSRDY bit in PWR control status register 1 (PWR_CSR1) will go on indicating invalid voltage levels. The system shall be power cycled before writing a new value.
    volatile uint32_t CPUCR;   // This register allows controlling CPU1 power.
    reserved_t<0x1> _0x18;
    volatile uint32_t D3CR;    // This register allows controlling D3 domain power.Following reset VOSRDY will be read 1 by software
    reserved_t<0x1> _0x20;
    volatile uint32_t WKUPCR;  // [read-write] reset only by system reset, not reset by wakeup from Standby mode5 wait states are required when writing this register (when clearing a WKUPF bit in PWR_WKUPFR, the AHB write access will complete after the WKUPF has been cleared).
    volatile uint32_t WKUPFR;  // [read-write] reset only by system reset, not reset by wakeup from Standby mode
    volatile uint32_t WKUPEPR; // [read-write] Reset only by system reset, not reset by wakeup from Standby mode

    static constexpr uint32_t CR1_RESET_VALUE = 0xf000c000;
    static constexpr uint32_t CR1_LPDS = 0x1;      // Low-power Deepsleep with SVOS3 (SVOS4 and SVOS5 always use low-power, regardless of the setting of this bit)
    static constexpr uint32_t CR1_PVDE = 0x10;     // Programmable voltage detector enable
    template<uint32_t X>
    static constexpr uint32_t CR1_PLS =            // Programmable voltage detector level selection These bits select the voltage threshold detected by the PVD. Note: Refer to Section Electrical characteristics of the product datasheet for more details.
        bit_field_t<5, 0x7>::value<X>();
    static constexpr uint32_t CR1_DBP = 0x100;     // Disable backup domain write protection In reset state, the RCC_BDCR register, the RTC registers (including the backup registers), BREN and MOEN bits in PWR_CR2 register, are protected against parasitic write access. This bit must be set to enable write access to these registers.
    static constexpr uint32_t CR1_FLPS = 0x200;    // Flash low-power mode in DStop mode This bit allows to obtain the best trade-off between low-power consumption and restart time when exiting from DStop mode. When it is set, the Flash memory enters low-power mode when D1 domain is in DStop mode.
    template<uint32_t X>
    static constexpr uint32_t CR1_SVOS =           // System Stop mode voltage scaling selection These bits control the VCORE voltage level in system Stop mode, to obtain the best trade-off between power consumption and performance.
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t CR1_AVDEN = 0x10000; // Peripheral voltage monitor on VDDA enable
    template<uint32_t X>
    static constexpr uint32_t CR1_ALS =            // Analog voltage detector level selection These bits select the voltage threshold detected by the AVD.
        bit_field_t<17, 0x3>::value<X>();

    static constexpr uint32_t CSR1_RESET_VALUE = 0x4000;
    static constexpr uint32_t CSR1_PVDO = 0x10;        // Programmable voltage detect output This bit is set and cleared by hardware. It is valid only if the PVD has been enabled by the PVDE bit. Note: since the PVD is disabled in Standby mode, this bit is equal to 0 after Standby or reset until the PVDE bit is set.
    static constexpr uint32_t CSR1_ACTVOSRDY = 0x2000; // Voltage levels ready bit for currently used VOS and SDLEVEL This bit is set to 1 by hardware when the voltage regulator and the SD converter are both disabled and Bypass mode is selected in PWR control register 3 (PWR_CR3).
    template<uint32_t X>
    static constexpr uint32_t CSR1_ACTVOS =            // VOS currently applied for VCORE voltage scaling selection. These bits reflect the last VOS value applied to the PMU.
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t CSR1_AVDO = 0x10000;     // Analog voltage detector output on VDDA This bit is set and cleared by hardware. It is valid only if AVD on VDDA is enabled by the AVDEN bit. Note: Since the AVD is disabled in Standby mode, this bit is equal to 0 after Standby or reset until the AVDEN bit is set.

    static constexpr uint32_t CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CR2_BREN = 0x1;       // Backup regulator enable When set, the Backup regulator (used to maintain the backup RAM content in Standby and VBAT modes) is enabled. If BREN is reset, the backup regulator is switched off. The backup RAM can still be used in Run and Stop modes. However, its content will be lost in Standby and VBAT modes. If BREN is set, the application must wait till the Backup Regulator Ready flag (BRRDY) is set to indicate that the data written into the SRAM will be maintained in Standby and VBAT modes.
    static constexpr uint32_t CR2_MONEN = 0x10;     // VBAT and temperature monitoring enable When set, the VBAT supply and temperature monitoring is enabled.
    static constexpr uint32_t CR2_BRRDY = 0x10000;  // Backup regulator ready This bit is set by hardware to indicate that the Backup regulator is ready.
    static constexpr uint32_t CR2_VBATL = 0x100000; // VBAT level monitoring versus low threshold
    static constexpr uint32_t CR2_VBATH = 0x200000; // VBAT level monitoring versus high threshold
    static constexpr uint32_t CR2_TEMPL = 0x400000; // Temperature level monitoring versus low threshold
    static constexpr uint32_t CR2_TEMPH = 0x800000; // Temperature level monitoring versus high threshold

    static constexpr uint32_t CR3_RESET_VALUE = 0x6;
    static constexpr uint32_t CR3_BYPASS = 0x1;         // Power management unit bypass
    static constexpr uint32_t CR3_LDOEN = 0x2;          // Low drop-out regulator enable
    static constexpr uint32_t CR3_SCUEN = 0x4;          // SD converter Enable
    static constexpr uint32_t CR3_VBE = 0x100;          // VBAT charging enable
    static constexpr uint32_t CR3_VBRS = 0x200;         // VBAT charging resistor selection
    static constexpr uint32_t CR3_USB33DEN = 0x1000000; // VDD33USB voltage level detector enable.
    static constexpr uint32_t CR3_USBREGEN = 0x2000000; // USB regulator enable.
    static constexpr uint32_t CR3_USB33RDY = 0x4000000; // USB supply ready.

    static constexpr uint32_t CPUCR_RESET_VALUE = 0x0;
    static constexpr uint32_t CPUCR_PDDS_D1 = 0x1;  // D1 domain Power Down Deepsleep selection. This bit allows CPU1 to define the Deepsleep mode for D1 domain.
    static constexpr uint32_t CPUCR_PDDS_D2 = 0x2;  // D2 domain Power Down Deepsleep. This bit allows CPU1 to define the Deepsleep mode for D2 domain.
    static constexpr uint32_t CPUCR_PDDS_D3 = 0x4;  // System D3 domain Power Down Deepsleep. This bit allows CPU1 to define the Deepsleep mode for System D3 domain.
    static constexpr uint32_t CPUCR_STOPF = 0x20;   // STOP flag This bit is set by hardware and cleared only by any reset or by setting the CPU1 CSSF bit.
    static constexpr uint32_t CPUCR_SBF = 0x40;     // System Standby flag This bit is set by hardware and cleared only by a POR (Power-on Reset) or by setting the CPU1 CSSF bit
    static constexpr uint32_t CPUCR_SBF_D1 = 0x80;  // D1 domain DStandby flag This bit is set by hardware and cleared by any system reset or by setting the CPU1 CSSF bit. Once set, this bit can be cleared only when the D1 domain is no longer in DStandby mode.
    static constexpr uint32_t CPUCR_SBF_D2 = 0x100; // D2 domain DStandby flag This bit is set by hardware and cleared by any system reset or by setting the CPU1 CSSF bit. Once set, this bit can be cleared only when the D2 domain is no longer in DStandby mode.
    static constexpr uint32_t CPUCR_CSSF = 0x200;   // Clear D1 domain CPU1 Standby, Stop and HOLD flags (always read as 0) This bit is cleared to 0 by hardware.
    static constexpr uint32_t CPUCR_RUN_D3 = 0x800; // Keep system D3 domain in Run mode regardless of the CPU sub-systems modes

    static constexpr uint32_t D3CR_RESET_VALUE = 0x4000;
    static constexpr uint32_t D3CR_VOSRDY = 0x2000; // VOS Ready bit for VCORE voltage scaling output selection. This bit is set to 1 by hardware when Bypass mode is selected in PWR control register 3 (PWR_CR3).
    template<uint32_t X>
    static constexpr uint32_t D3CR_VOS =            // Voltage scaling selection according to performance These bits control the VCORE voltage level and allow to obtains the best trade-off between power consumption and performance: When increasing the performance, the voltage scaling shall be changed before increasing the system frequency. When decreasing performance, the system frequency shall first be decreased before changing the voltage scaling.
        bit_field_t<14, 0x3>::value<X>();

    static constexpr uint32_t WKUPCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t WKUPCR_WKUPC =   // Clear Wakeup pin flag for WKUP. These bits are always read as 0.
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t WKUPFR_RESET_VALUE = 0x0;
    static constexpr uint32_t WKUPFR_WKUPF1 = 0x1;  // Wakeup pin WKUPF flag. This bit is set by hardware and cleared only by a Reset pin or by setting the WKUPCn+1 bit in the PWR wakeup clear register (PWR_WKUPCR).
    static constexpr uint32_t WKUPFR_WKUPF2 = 0x2;  // Wakeup pin WKUPF flag. This bit is set by hardware and cleared only by a Reset pin or by setting the WKUPCn+1 bit in the PWR wakeup clear register (PWR_WKUPCR).
    static constexpr uint32_t WKUPFR_WKUPF3 = 0x4;  // Wakeup pin WKUPF flag. This bit is set by hardware and cleared only by a Reset pin or by setting the WKUPCn+1 bit in the PWR wakeup clear register (PWR_WKUPCR).
    static constexpr uint32_t WKUPFR_WKUPF4 = 0x8;  // Wakeup pin WKUPF flag. This bit is set by hardware and cleared only by a Reset pin or by setting the WKUPCn+1 bit in the PWR wakeup clear register (PWR_WKUPCR).
    static constexpr uint32_t WKUPFR_WKUPF5 = 0x10; // Wakeup pin WKUPF flag. This bit is set by hardware and cleared only by a Reset pin or by setting the WKUPCn+1 bit in the PWR wakeup clear register (PWR_WKUPCR).
    static constexpr uint32_t WKUPFR_WKUPF6 = 0x20; // Wakeup pin WKUPF flag. This bit is set by hardware and cleared only by a Reset pin or by setting the WKUPCn+1 bit in the PWR wakeup clear register (PWR_WKUPCR).

    static constexpr uint32_t WKUPEPR_RESET_VALUE = 0x0;
    static constexpr uint32_t WKUPEPR_WKUPEN1 = 0x1;   // Enable Wakeup Pin WKUPn+1 Each bit is set and cleared by software. Note: An additional wakeup event is detected if WKUPn+1 pin is enabled (by setting the WKUPENn+1 bit) when WKUPn+1 pin level is already high when WKUPPn+1 selects rising edge, or low when WKUPPn+1 selects falling edge.
    static constexpr uint32_t WKUPEPR_WKUPEN2 = 0x2;   // Enable Wakeup Pin WKUPn+1 Each bit is set and cleared by software. Note: An additional wakeup event is detected if WKUPn+1 pin is enabled (by setting the WKUPENn+1 bit) when WKUPn+1 pin level is already high when WKUPPn+1 selects rising edge, or low when WKUPPn+1 selects falling edge.
    static constexpr uint32_t WKUPEPR_WKUPEN3 = 0x4;   // Enable Wakeup Pin WKUPn+1 Each bit is set and cleared by software. Note: An additional wakeup event is detected if WKUPn+1 pin is enabled (by setting the WKUPENn+1 bit) when WKUPn+1 pin level is already high when WKUPPn+1 selects rising edge, or low when WKUPPn+1 selects falling edge.
    static constexpr uint32_t WKUPEPR_WKUPEN4 = 0x8;   // Enable Wakeup Pin WKUPn+1 Each bit is set and cleared by software. Note: An additional wakeup event is detected if WKUPn+1 pin is enabled (by setting the WKUPENn+1 bit) when WKUPn+1 pin level is already high when WKUPPn+1 selects rising edge, or low when WKUPPn+1 selects falling edge.
    static constexpr uint32_t WKUPEPR_WKUPEN5 = 0x10;  // Enable Wakeup Pin WKUPn+1 Each bit is set and cleared by software. Note: An additional wakeup event is detected if WKUPn+1 pin is enabled (by setting the WKUPENn+1 bit) when WKUPn+1 pin level is already high when WKUPPn+1 selects rising edge, or low when WKUPPn+1 selects falling edge.
    static constexpr uint32_t WKUPEPR_WKUPEN6 = 0x20;  // Enable Wakeup Pin WKUPn+1 Each bit is set and cleared by software. Note: An additional wakeup event is detected if WKUPn+1 pin is enabled (by setting the WKUPENn+1 bit) when WKUPn+1 pin level is already high when WKUPPn+1 selects rising edge, or low when WKUPPn+1 selects falling edge.
    static constexpr uint32_t WKUPEPR_WKUPP1 = 0x100;  // Wakeup pin polarity bit for WKUPn-7 These bits define the polarity used for event detection on WKUPn-7 external wakeup pin.
    static constexpr uint32_t WKUPEPR_WKUPP2 = 0x200;  // Wakeup pin polarity bit for WKUPn-7 These bits define the polarity used for event detection on WKUPn-7 external wakeup pin.
    static constexpr uint32_t WKUPEPR_WKUPP3 = 0x400;  // Wakeup pin polarity bit for WKUPn-7 These bits define the polarity used for event detection on WKUPn-7 external wakeup pin.
    static constexpr uint32_t WKUPEPR_WKUPP4 = 0x800;  // Wakeup pin polarity bit for WKUPn-7 These bits define the polarity used for event detection on WKUPn-7 external wakeup pin.
    static constexpr uint32_t WKUPEPR_WKUPP5 = 0x1000; // Wakeup pin polarity bit for WKUPn-7 These bits define the polarity used for event detection on WKUPn-7 external wakeup pin.
    static constexpr uint32_t WKUPEPR_WKUPP6 = 0x2000; // Wakeup pin polarity bit for WKUPn-7 These bits define the polarity used for event detection on WKUPn-7 external wakeup pin.
    template<uint32_t X>
    static constexpr uint32_t WKUPEPR_WKUPPUPD1 =      // Wakeup pin pull configuration
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WKUPEPR_WKUPPUPD2 =      // Wakeup pin pull configuration
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WKUPEPR_WKUPPUPD3 =      // Wakeup pin pull configuration
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WKUPEPR_WKUPPUPD4 =      // Wakeup pin pull configuration
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WKUPEPR_WKUPPUPD5 =      // Wakeup pin pull configuration
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WKUPEPR_WKUPPUPD6 =      // Wakeup pin pull configuration for WKUP(truncate(n/2)-7) These bits define the I/O pad pull configuration used when WKUPEN(truncate(n/2)-7) = 1. The associated GPIO port pull configuration shall be set to the same value or to 00. The Wakeup pin pull configuration is kept in Standby mode.
        bit_field_t<26, 0x3>::value<X>();
};


////
//
//      PWR
//
////

struct stm32h745_cm4_pwr_t
{
    volatile uint32_t CR1;     // [read-write] PWR control register 1
    volatile uint32_t CSR1;    // [read-only] PWR control status register 1
    volatile uint32_t CR2;     // This register is not reset by wakeup from Standby mode, RESET signal and VDD POR. It is only reset by VSW POR and VSWRST reset. This register shall not be accessed when VSWRST bit in RCC_BDCR register resets the VSW domain.After reset, PWR_CR2 register is write-protected. Prior to modifying its content, the DBP bit in PWR_CR1 register must be set to disable the write protection.
    volatile uint32_t CR3;     // Reset only by POR only, not reset by wakeup from Standby mode and RESET pad. The lower byte of this register is written once after POR and shall be written before changing VOS level or ck_sys clock frequency. No limitation applies to the upper bytes.Programming data corresponding to an invalid combination of SDLEVEL, SDEXTHP, SDEN, LDOEN and BYPASS bits (see Table9) will be ignored: data will not be written, the written-once mechanism will lock the register and any further write access will be ignored. The default supply configuration will be kept and the ACTVOSRDY bit in PWR control status register 1 (PWR_CSR1) will go on indicating invalid voltage levels. The system shall be power cycled before writing a new value.
    volatile uint32_t CPUCR;   // This register allows controlling CPU1 power.
    reserved_t<0x1> _0x18;
    volatile uint32_t D3CR;    // This register allows controlling D3 domain power.Following reset VOSRDY will be read 1 by software
    reserved_t<0x1> _0x20;
    volatile uint32_t WKUPCR;  // [read-write] reset only by system reset, not reset by wakeup from Standby mode5 wait states are required when writing this register (when clearing a WKUPF bit in PWR_WKUPFR, the AHB write access will complete after the WKUPF has been cleared).
    volatile uint32_t WKUPFR;  // [read-write] reset only by system reset, not reset by wakeup from Standby mode
    volatile uint32_t WKUPEPR; // [read-write] Reset only by system reset, not reset by wakeup from Standby mode

    static constexpr uint32_t CR1_RESET_VALUE = 0xf000c000;
    static constexpr uint32_t CR1_LPDS = 0x1;      // Low-power Deepsleep with SVOS3 (SVOS4 and SVOS5 always use low-power, regardless of the setting of this bit)
    static constexpr uint32_t CR1_PVDE = 0x10;     // Programmable voltage detector enable
    template<uint32_t X>
    static constexpr uint32_t CR1_PLS =            // Programmable voltage detector level selection These bits select the voltage threshold detected by the PVD. Note: Refer to Section Electrical characteristics of the product datasheet for more details.
        bit_field_t<5, 0x7>::value<X>();
    static constexpr uint32_t CR1_DBP = 0x100;     // Disable backup domain write protection In reset state, the RCC_BDCR register, the RTC registers (including the backup registers), BREN and MOEN bits in PWR_CR2 register, are protected against parasitic write access. This bit must be set to enable write access to these registers.
    static constexpr uint32_t CR1_FLPS = 0x200;    // Flash low-power mode in DStop mode This bit allows to obtain the best trade-off between low-power consumption and restart time when exiting from DStop mode. When it is set, the Flash memory enters low-power mode when D1 domain is in DStop mode.
    template<uint32_t X>
    static constexpr uint32_t CR1_SVOS =           // System Stop mode voltage scaling selection These bits control the VCORE voltage level in system Stop mode, to obtain the best trade-off between power consumption and performance.
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t CR1_AVDEN = 0x10000; // Peripheral voltage monitor on VDDA enable
    template<uint32_t X>
    static constexpr uint32_t CR1_ALS =            // Analog voltage detector level selection These bits select the voltage threshold detected by the AVD.
        bit_field_t<17, 0x3>::value<X>();

    static constexpr uint32_t CSR1_RESET_VALUE = 0x4000;
    static constexpr uint32_t CSR1_PVDO = 0x10;        // Programmable voltage detect output This bit is set and cleared by hardware. It is valid only if the PVD has been enabled by the PVDE bit. Note: since the PVD is disabled in Standby mode, this bit is equal to 0 after Standby or reset until the PVDE bit is set.
    static constexpr uint32_t CSR1_ACTVOSRDY = 0x2000; // Voltage levels ready bit for currently used VOS and SDLEVEL This bit is set to 1 by hardware when the voltage regulator and the SD converter are both disabled and Bypass mode is selected in PWR control register 3 (PWR_CR3).
    template<uint32_t X>
    static constexpr uint32_t CSR1_ACTVOS =            // VOS currently applied for VCORE voltage scaling selection. These bits reflect the last VOS value applied to the PMU.
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t CSR1_AVDO = 0x10000;     // Analog voltage detector output on VDDA This bit is set and cleared by hardware. It is valid only if AVD on VDDA is enabled by the AVDEN bit. Note: Since the AVD is disabled in Standby mode, this bit is equal to 0 after Standby or reset until the AVDEN bit is set.

    static constexpr uint32_t CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CR2_BREN = 0x1;       // Backup regulator enable When set, the Backup regulator (used to maintain the backup RAM content in Standby and VBAT modes) is enabled. If BREN is reset, the backup regulator is switched off. The backup RAM can still be used in Run and Stop modes. However, its content will be lost in Standby and VBAT modes. If BREN is set, the application must wait till the Backup Regulator Ready flag (BRRDY) is set to indicate that the data written into the SRAM will be maintained in Standby and VBAT modes.
    static constexpr uint32_t CR2_MONEN = 0x10;     // VBAT and temperature monitoring enable When set, the VBAT supply and temperature monitoring is enabled.
    static constexpr uint32_t CR2_BRRDY = 0x10000;  // Backup regulator ready This bit is set by hardware to indicate that the Backup regulator is ready.
    static constexpr uint32_t CR2_VBATL = 0x100000; // VBAT level monitoring versus low threshold
    static constexpr uint32_t CR2_VBATH = 0x200000; // VBAT level monitoring versus high threshold
    static constexpr uint32_t CR2_TEMPL = 0x400000; // Temperature level monitoring versus low threshold
    static constexpr uint32_t CR2_TEMPH = 0x800000; // Temperature level monitoring versus high threshold

    static constexpr uint32_t CR3_RESET_VALUE = 0x6;
    static constexpr uint32_t CR3_BYPASS = 0x1;         // Power management unit bypass
    static constexpr uint32_t CR3_LDOEN = 0x2;          // Low drop-out regulator enable
    static constexpr uint32_t CR3_SDEN = 0x4;           // SD converter Enable
    static constexpr uint32_t CR3_VBE = 0x100;          // VBAT charging enable
    static constexpr uint32_t CR3_VBRS = 0x200;         // VBAT charging resistor selection
    static constexpr uint32_t CR3_USB33DEN = 0x1000000; // VDD33USB voltage level detector enable.
    static constexpr uint32_t CR3_USBREGEN = 0x2000000; // USB regulator enable.
    static constexpr uint32_t CR3_USB33RDY = 0x4000000; // USB supply ready.

    static constexpr uint32_t CPUCR_RESET_VALUE = 0x0;
    static constexpr uint32_t CPUCR_PDDS_D1 = 0x1;  // D1 domain Power Down Deepsleep selection. This bit allows CPU1 to define the Deepsleep mode for D1 domain.
    static constexpr uint32_t CPUCR_PDDS_D2 = 0x2;  // D2 domain Power Down Deepsleep. This bit allows CPU1 to define the Deepsleep mode for D2 domain.
    static constexpr uint32_t CPUCR_PDDS_D3 = 0x4;  // System D3 domain Power Down Deepsleep. This bit allows CPU1 to define the Deepsleep mode for System D3 domain.
    static constexpr uint32_t CPUCR_STOPF = 0x20;   // STOP flag This bit is set by hardware and cleared only by any reset or by setting the CPU1 CSSF bit.
    static constexpr uint32_t CPUCR_SBF = 0x40;     // System Standby flag This bit is set by hardware and cleared only by a POR (Power-on Reset) or by setting the CPU1 CSSF bit
    static constexpr uint32_t CPUCR_SBF_D1 = 0x80;  // D1 domain DStandby flag This bit is set by hardware and cleared by any system reset or by setting the CPU1 CSSF bit. Once set, this bit can be cleared only when the D1 domain is no longer in DStandby mode.
    static constexpr uint32_t CPUCR_SBF_D2 = 0x100; // D2 domain DStandby flag This bit is set by hardware and cleared by any system reset or by setting the CPU1 CSSF bit. Once set, this bit can be cleared only when the D2 domain is no longer in DStandby mode.
    static constexpr uint32_t CPUCR_CSSF = 0x200;   // Clear D1 domain CPU1 Standby, Stop and HOLD flags (always read as 0) This bit is cleared to 0 by hardware.
    static constexpr uint32_t CPUCR_RUN_D3 = 0x800; // Keep system D3 domain in Run mode regardless of the CPU sub-systems modes

    static constexpr uint32_t D3CR_RESET_VALUE = 0x4000;
    static constexpr uint32_t D3CR_VOSRDY = 0x2000; // VOS Ready bit for VCORE voltage scaling output selection. This bit is set to 1 by hardware when Bypass mode is selected in PWR control register 3 (PWR_CR3).
    template<uint32_t X>
    static constexpr uint32_t D3CR_VOS =            // Voltage scaling selection according to performance These bits control the VCORE voltage level and allow to obtains the best trade-off between power consumption and performance: When increasing the performance, the voltage scaling shall be changed before increasing the system frequency. When decreasing performance, the system frequency shall first be decreased before changing the voltage scaling.
        bit_field_t<14, 0x3>::value<X>();

    static constexpr uint32_t WKUPCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t WKUPCR_WKUPC =   // Clear Wakeup pin flag for WKUP. These bits are always read as 0.
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t WKUPFR_RESET_VALUE = 0x0;
    static constexpr uint32_t WKUPFR_WKUPF1 = 0x1;  // Wakeup pin WKUPF flag. This bit is set by hardware and cleared only by a Reset pin or by setting the WKUPCn+1 bit in the PWR wakeup clear register (PWR_WKUPCR).
    static constexpr uint32_t WKUPFR_WKUPF2 = 0x2;  // Wakeup pin WKUPF flag. This bit is set by hardware and cleared only by a Reset pin or by setting the WKUPCn+1 bit in the PWR wakeup clear register (PWR_WKUPCR).
    static constexpr uint32_t WKUPFR_WKUPF3 = 0x4;  // Wakeup pin WKUPF flag. This bit is set by hardware and cleared only by a Reset pin or by setting the WKUPCn+1 bit in the PWR wakeup clear register (PWR_WKUPCR).
    static constexpr uint32_t WKUPFR_WKUPF4 = 0x8;  // Wakeup pin WKUPF flag. This bit is set by hardware and cleared only by a Reset pin or by setting the WKUPCn+1 bit in the PWR wakeup clear register (PWR_WKUPCR).
    static constexpr uint32_t WKUPFR_WKUPF5 = 0x10; // Wakeup pin WKUPF flag. This bit is set by hardware and cleared only by a Reset pin or by setting the WKUPCn+1 bit in the PWR wakeup clear register (PWR_WKUPCR).
    static constexpr uint32_t WKUPFR_WKUPF6 = 0x20; // Wakeup pin WKUPF flag. This bit is set by hardware and cleared only by a Reset pin or by setting the WKUPCn+1 bit in the PWR wakeup clear register (PWR_WKUPCR).

    static constexpr uint32_t WKUPEPR_RESET_VALUE = 0x0;
    static constexpr uint32_t WKUPEPR_WKUPEN1 = 0x1;   // Enable Wakeup Pin WKUPn+1 Each bit is set and cleared by software. Note: An additional wakeup event is detected if WKUPn+1 pin is enabled (by setting the WKUPENn+1 bit) when WKUPn+1 pin level is already high when WKUPPn+1 selects rising edge, or low when WKUPPn+1 selects falling edge.
    static constexpr uint32_t WKUPEPR_WKUPEN2 = 0x2;   // Enable Wakeup Pin WKUPn+1 Each bit is set and cleared by software. Note: An additional wakeup event is detected if WKUPn+1 pin is enabled (by setting the WKUPENn+1 bit) when WKUPn+1 pin level is already high when WKUPPn+1 selects rising edge, or low when WKUPPn+1 selects falling edge.
    static constexpr uint32_t WKUPEPR_WKUPEN3 = 0x4;   // Enable Wakeup Pin WKUPn+1 Each bit is set and cleared by software. Note: An additional wakeup event is detected if WKUPn+1 pin is enabled (by setting the WKUPENn+1 bit) when WKUPn+1 pin level is already high when WKUPPn+1 selects rising edge, or low when WKUPPn+1 selects falling edge.
    static constexpr uint32_t WKUPEPR_WKUPEN4 = 0x8;   // Enable Wakeup Pin WKUPn+1 Each bit is set and cleared by software. Note: An additional wakeup event is detected if WKUPn+1 pin is enabled (by setting the WKUPENn+1 bit) when WKUPn+1 pin level is already high when WKUPPn+1 selects rising edge, or low when WKUPPn+1 selects falling edge.
    static constexpr uint32_t WKUPEPR_WKUPEN5 = 0x10;  // Enable Wakeup Pin WKUPn+1 Each bit is set and cleared by software. Note: An additional wakeup event is detected if WKUPn+1 pin is enabled (by setting the WKUPENn+1 bit) when WKUPn+1 pin level is already high when WKUPPn+1 selects rising edge, or low when WKUPPn+1 selects falling edge.
    static constexpr uint32_t WKUPEPR_WKUPEN6 = 0x20;  // Enable Wakeup Pin WKUPn+1 Each bit is set and cleared by software. Note: An additional wakeup event is detected if WKUPn+1 pin is enabled (by setting the WKUPENn+1 bit) when WKUPn+1 pin level is already high when WKUPPn+1 selects rising edge, or low when WKUPPn+1 selects falling edge.
    static constexpr uint32_t WKUPEPR_WKUPP1 = 0x100;  // Wakeup pin polarity bit for WKUPn-7 These bits define the polarity used for event detection on WKUPn-7 external wakeup pin.
    static constexpr uint32_t WKUPEPR_WKUPP2 = 0x200;  // Wakeup pin polarity bit for WKUPn-7 These bits define the polarity used for event detection on WKUPn-7 external wakeup pin.
    static constexpr uint32_t WKUPEPR_WKUPP3 = 0x400;  // Wakeup pin polarity bit for WKUPn-7 These bits define the polarity used for event detection on WKUPn-7 external wakeup pin.
    static constexpr uint32_t WKUPEPR_WKUPP4 = 0x800;  // Wakeup pin polarity bit for WKUPn-7 These bits define the polarity used for event detection on WKUPn-7 external wakeup pin.
    static constexpr uint32_t WKUPEPR_WKUPP5 = 0x1000; // Wakeup pin polarity bit for WKUPn-7 These bits define the polarity used for event detection on WKUPn-7 external wakeup pin.
    static constexpr uint32_t WKUPEPR_WKUPP6 = 0x2000; // Wakeup pin polarity bit for WKUPn-7 These bits define the polarity used for event detection on WKUPn-7 external wakeup pin.
    template<uint32_t X>
    static constexpr uint32_t WKUPEPR_WKUPPUPD1 =      // Wakeup pin pull configuration
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WKUPEPR_WKUPPUPD2 =      // Wakeup pin pull configuration
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WKUPEPR_WKUPPUPD3 =      // Wakeup pin pull configuration
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WKUPEPR_WKUPPUPD4 =      // Wakeup pin pull configuration
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WKUPEPR_WKUPPUPD5 =      // Wakeup pin pull configuration
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WKUPEPR_WKUPPUPD6 =      // Wakeup pin pull configuration for WKUP(truncate(n/2)-7) These bits define the I/O pad pull configuration used when WKUPEN(truncate(n/2)-7) = 1. The associated GPIO port pull configuration shall be set to the same value or to 00. The Wakeup pin pull configuration is kept in Standby mode.
        bit_field_t<26, 0x3>::value<X>();
};


////
//
//      PWR
//
////

struct stm32h750x_pwr_t
{
    volatile uint32_t PWR_CR1;     // [read-write] PWR control register 1
    volatile uint32_t PWR_CSR1;    // [read-only] PWR control status register 1
    volatile uint32_t PWR_CR2;     // This register is not reset by wakeup from Standby mode, RESET signal and VDD POR. It is only reset by VSW POR and VSWRST reset. This register shall not be accessed when VSWRST bit in RCC_BDCR register resets the VSW domain.After reset, PWR_CR2 register is write-protected. Prior to modifying its content, the DBP bit in PWR_CR1 register must be set to disable the write protection.
    volatile uint32_t PWR_CR3;     // Reset only by POR only, not reset by wakeup from Standby mode and RESET pad. The lower byte of this register is written once after POR and shall be written before changing VOS level or ck_sys clock frequency. No limitation applies to the upper bytes.Programming data corresponding to an invalid combination of SDLEVEL, SDEXTHP, SDEN, LDOEN and BYPASS bits (see Table9) will be ignored: data will not be written, the written-once mechanism will lock the register and any further write access will be ignored. The default supply configuration will be kept and the ACTVOSRDY bit in PWR control status register 1 (PWR_CSR1) will go on indicating invalid voltage levels. The system shall be power cycled before writing a new value.
    volatile uint32_t PWR_CPUCR;   // This register allows controlling CPU1 power.
    reserved_t<0x1> _0x18;
    volatile uint32_t PWR_D3CR;    // This register allows controlling D3 domain power.Following reset VOSRDY will be read 1 by software
    reserved_t<0x1> _0x20;
    volatile uint32_t PWR_WKUPCR;  // [read-write] reset only by system reset, not reset by wakeup from Standby mode5 wait states are required when writing this register (when clearing a WKUPF bit in PWR_WKUPFR, the AHB write access will complete after the WKUPF has been cleared).
    volatile uint32_t PWR_WKUPFR;  // [read-write] reset only by system reset, not reset by wakeup from Standby mode
    volatile uint32_t PWR_WKUPEPR; // [read-write] Reset only by system reset, not reset by wakeup from Standby mode

    static constexpr uint32_t PWR_CR1_RESET_VALUE = 0xf000c000;
    static constexpr uint32_t PWR_CR1_LPDS = 0x1;      // Low-power Deepsleep with SVOS3 (SVOS4 and SVOS5 always use low-power, regardless of the setting of this bit)
    static constexpr uint32_t PWR_CR1_PVDE = 0x10;     // Programmable voltage detector enable
    template<uint32_t X>
    static constexpr uint32_t PWR_CR1_PLS =            // Programmable voltage detector level selection These bits select the voltage threshold detected by the PVD. Note: Refer to Section Electrical characteristics of the product datasheet for more details.
        bit_field_t<5, 0x7>::value<X>();
    static constexpr uint32_t PWR_CR1_DBP = 0x100;     // Disable backup domain write protection In reset state, the RCC_BDCR register, the RTC registers (including the backup registers), BREN and MOEN bits in PWR_CR2 register, are protected against parasitic write access. This bit must be set to enable write access to these registers.
    static constexpr uint32_t PWR_CR1_FLPS = 0x200;    // Flash low-power mode in DStop mode This bit allows to obtain the best trade-off between low-power consumption and restart time when exiting from DStop mode. When it is set, the Flash memory enters low-power mode when D1 domain is in DStop mode.
    template<uint32_t X>
    static constexpr uint32_t PWR_CR1_SVOS =           // System Stop mode voltage scaling selection These bits control the VCORE voltage level in system Stop mode, to obtain the best trade-off between power consumption and performance.
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t PWR_CR1_AVDEN = 0x10000; // Peripheral voltage monitor on VDDA enable
    template<uint32_t X>
    static constexpr uint32_t PWR_CR1_ALS =            // Analog voltage detector level selection These bits select the voltage threshold detected by the AVD.
        bit_field_t<17, 0x3>::value<X>();

    static constexpr uint32_t PWR_CSR1_RESET_VALUE = 0x4000;
    static constexpr uint32_t PWR_CSR1_PVDO = 0x10;        // Programmable voltage detect output This bit is set and cleared by hardware. It is valid only if the PVD has been enabled by the PVDE bit. Note: since the PVD is disabled in Standby mode, this bit is equal to 0 after Standby or reset until the PVDE bit is set.
    static constexpr uint32_t PWR_CSR1_ACTVOSRDY = 0x2000; // Voltage levels ready bit for currently used VOS and SDLEVEL This bit is set to 1 by hardware when the voltage regulator and the SD converter are both disabled and Bypass mode is selected in PWR control register 3 (PWR_CR3).
    template<uint32_t X>
    static constexpr uint32_t PWR_CSR1_ACTVOS =            // VOS currently applied for VCORE voltage scaling selection. These bits reflect the last VOS value applied to the PMU.
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t PWR_CSR1_AVDO = 0x10000;     // Analog voltage detector output on VDDA This bit is set and cleared by hardware. It is valid only if AVD on VDDA is enabled by the AVDEN bit. Note: Since the AVD is disabled in Standby mode, this bit is equal to 0 after Standby or reset until the AVDEN bit is set.

    static constexpr uint32_t PWR_CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t PWR_CR2_BREN = 0x1;       // Backup regulator enable When set, the Backup regulator (used to maintain the backup RAM content in Standby and VBAT modes) is enabled. If BREN is reset, the backup regulator is switched off. The backup RAM can still be used in Run and Stop modes. However, its content will be lost in Standby and VBAT modes. If BREN is set, the application must wait till the Backup Regulator Ready flag (BRRDY) is set to indicate that the data written into the SRAM will be maintained in Standby and VBAT modes.
    static constexpr uint32_t PWR_CR2_MONEN = 0x10;     // VBAT and temperature monitoring enable When set, the VBAT supply and temperature monitoring is enabled.
    static constexpr uint32_t PWR_CR2_BRRDY = 0x10000;  // Backup regulator ready This bit is set by hardware to indicate that the Backup regulator is ready.
    static constexpr uint32_t PWR_CR2_VBATL = 0x100000; // VBAT level monitoring versus low threshold
    static constexpr uint32_t PWR_CR2_VBATH = 0x200000; // VBAT level monitoring versus high threshold
    static constexpr uint32_t PWR_CR2_TEMPL = 0x400000; // Temperature level monitoring versus low threshold
    static constexpr uint32_t PWR_CR2_TEMPH = 0x800000; // Temperature level monitoring versus high threshold

    static constexpr uint32_t PWR_CR3_RESET_VALUE = 0x6;
    static constexpr uint32_t PWR_CR3_BYPASS = 0x1;         // Power management unit bypass
    static constexpr uint32_t PWR_CR3_LDOEN = 0x2;          // Low drop-out regulator enable
    static constexpr uint32_t PWR_CR3_SDEN = 0x4;           // SD converter Enable
    static constexpr uint32_t PWR_CR3_VBE = 0x100;          // VBAT charging enable
    static constexpr uint32_t PWR_CR3_VBRS = 0x200;         // VBAT charging resistor selection
    static constexpr uint32_t PWR_CR3_USB33DEN = 0x1000000; // VDD33USB voltage level detector enable.
    static constexpr uint32_t PWR_CR3_USBREGEN = 0x2000000; // USB regulator enable.
    static constexpr uint32_t PWR_CR3_USB33RDY = 0x4000000; // USB supply ready.

    static constexpr uint32_t PWR_CPUCR_RESET_VALUE = 0x0;
    static constexpr uint32_t PWR_CPUCR_PDDS_D1 = 0x1;  // D1 domain Power Down Deepsleep selection. This bit allows CPU1 to define the Deepsleep mode for D1 domain.
    static constexpr uint32_t PWR_CPUCR_PDDS_D2 = 0x2;  // D2 domain Power Down Deepsleep. This bit allows CPU1 to define the Deepsleep mode for D2 domain.
    static constexpr uint32_t PWR_CPUCR_PDDS_D3 = 0x4;  // System D3 domain Power Down Deepsleep. This bit allows CPU1 to define the Deepsleep mode for System D3 domain.
    static constexpr uint32_t PWR_CPUCR_STOPF = 0x20;   // STOP flag This bit is set by hardware and cleared only by any reset or by setting the CPU1 CSSF bit.
    static constexpr uint32_t PWR_CPUCR_SBF = 0x40;     // System Standby flag This bit is set by hardware and cleared only by a POR (Power-on Reset) or by setting the CPU1 CSSF bit
    static constexpr uint32_t PWR_CPUCR_SBF_D1 = 0x80;  // D1 domain DStandby flag This bit is set by hardware and cleared by any system reset or by setting the CPU1 CSSF bit. Once set, this bit can be cleared only when the D1 domain is no longer in DStandby mode.
    static constexpr uint32_t PWR_CPUCR_SBF_D2 = 0x100; // D2 domain DStandby flag This bit is set by hardware and cleared by any system reset or by setting the CPU1 CSSF bit. Once set, this bit can be cleared only when the D2 domain is no longer in DStandby mode.
    static constexpr uint32_t PWR_CPUCR_CSSF = 0x200;   // Clear D1 domain CPU1 Standby, Stop and HOLD flags (always read as 0) This bit is cleared to 0 by hardware.
    static constexpr uint32_t PWR_CPUCR_RUN_D3 = 0x800; // Keep system D3 domain in Run mode regardless of the CPU sub-systems modes

    static constexpr uint32_t PWR_D3CR_RESET_VALUE = 0x4000;
    static constexpr uint32_t PWR_D3CR_VOSRDY = 0x2000; // VOS Ready bit for VCORE voltage scaling output selection. This bit is set to 1 by hardware when Bypass mode is selected in PWR control register 3 (PWR_CR3).
    template<uint32_t X>
    static constexpr uint32_t PWR_D3CR_VOS =            // Voltage scaling selection according to performance These bits control the VCORE voltage level and allow to obtains the best trade-off between power consumption and performance: When increasing the performance, the voltage scaling shall be changed before increasing the system frequency. When decreasing performance, the system frequency shall first be decreased before changing the voltage scaling.
        bit_field_t<14, 0x3>::value<X>();

    static constexpr uint32_t PWR_WKUPCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PWR_WKUPCR_WKUPC =   // Clear Wakeup pin flag for WKUP. These bits are always read as 0.
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t PWR_WKUPFR_RESET_VALUE = 0x0;
    static constexpr uint32_t PWR_WKUPFR_WKUPF1 = 0x1;  // Wakeup pin WKUPF flag. This bit is set by hardware and cleared only by a Reset pin or by setting the WKUPCn+1 bit in the PWR wakeup clear register (PWR_WKUPCR).
    static constexpr uint32_t PWR_WKUPFR_WKUPF2 = 0x2;  // Wakeup pin WKUPF flag. This bit is set by hardware and cleared only by a Reset pin or by setting the WKUPCn+1 bit in the PWR wakeup clear register (PWR_WKUPCR).
    static constexpr uint32_t PWR_WKUPFR_WKUPF3 = 0x4;  // Wakeup pin WKUPF flag. This bit is set by hardware and cleared only by a Reset pin or by setting the WKUPCn+1 bit in the PWR wakeup clear register (PWR_WKUPCR).
    static constexpr uint32_t PWR_WKUPFR_WKUPF4 = 0x8;  // Wakeup pin WKUPF flag. This bit is set by hardware and cleared only by a Reset pin or by setting the WKUPCn+1 bit in the PWR wakeup clear register (PWR_WKUPCR).
    static constexpr uint32_t PWR_WKUPFR_WKUPF5 = 0x10; // Wakeup pin WKUPF flag. This bit is set by hardware and cleared only by a Reset pin or by setting the WKUPCn+1 bit in the PWR wakeup clear register (PWR_WKUPCR).
    static constexpr uint32_t PWR_WKUPFR_WKUPF6 = 0x20; // Wakeup pin WKUPF flag. This bit is set by hardware and cleared only by a Reset pin or by setting the WKUPCn+1 bit in the PWR wakeup clear register (PWR_WKUPCR).

    static constexpr uint32_t PWR_WKUPEPR_RESET_VALUE = 0x0;
    static constexpr uint32_t PWR_WKUPEPR_WKUPEN1 = 0x1;   // Enable Wakeup Pin WKUPn+1 Each bit is set and cleared by software. Note: An additional wakeup event is detected if WKUPn+1 pin is enabled (by setting the WKUPENn+1 bit) when WKUPn+1 pin level is already high when WKUPPn+1 selects rising edge, or low when WKUPPn+1 selects falling edge.
    static constexpr uint32_t PWR_WKUPEPR_WKUPEN2 = 0x2;   // Enable Wakeup Pin WKUPn+1 Each bit is set and cleared by software. Note: An additional wakeup event is detected if WKUPn+1 pin is enabled (by setting the WKUPENn+1 bit) when WKUPn+1 pin level is already high when WKUPPn+1 selects rising edge, or low when WKUPPn+1 selects falling edge.
    static constexpr uint32_t PWR_WKUPEPR_WKUPEN3 = 0x4;   // Enable Wakeup Pin WKUPn+1 Each bit is set and cleared by software. Note: An additional wakeup event is detected if WKUPn+1 pin is enabled (by setting the WKUPENn+1 bit) when WKUPn+1 pin level is already high when WKUPPn+1 selects rising edge, or low when WKUPPn+1 selects falling edge.
    static constexpr uint32_t PWR_WKUPEPR_WKUPEN4 = 0x8;   // Enable Wakeup Pin WKUPn+1 Each bit is set and cleared by software. Note: An additional wakeup event is detected if WKUPn+1 pin is enabled (by setting the WKUPENn+1 bit) when WKUPn+1 pin level is already high when WKUPPn+1 selects rising edge, or low when WKUPPn+1 selects falling edge.
    static constexpr uint32_t PWR_WKUPEPR_WKUPEN5 = 0x10;  // Enable Wakeup Pin WKUPn+1 Each bit is set and cleared by software. Note: An additional wakeup event is detected if WKUPn+1 pin is enabled (by setting the WKUPENn+1 bit) when WKUPn+1 pin level is already high when WKUPPn+1 selects rising edge, or low when WKUPPn+1 selects falling edge.
    static constexpr uint32_t PWR_WKUPEPR_WKUPEN6 = 0x20;  // Enable Wakeup Pin WKUPn+1 Each bit is set and cleared by software. Note: An additional wakeup event is detected if WKUPn+1 pin is enabled (by setting the WKUPENn+1 bit) when WKUPn+1 pin level is already high when WKUPPn+1 selects rising edge, or low when WKUPPn+1 selects falling edge.
    static constexpr uint32_t PWR_WKUPEPR_WKUPP1 = 0x100;  // Wakeup pin polarity bit for WKUPn-7 These bits define the polarity used for event detection on WKUPn-7 external wakeup pin.
    static constexpr uint32_t PWR_WKUPEPR_WKUPP2 = 0x200;  // Wakeup pin polarity bit for WKUPn-7 These bits define the polarity used for event detection on WKUPn-7 external wakeup pin.
    static constexpr uint32_t PWR_WKUPEPR_WKUPP3 = 0x400;  // Wakeup pin polarity bit for WKUPn-7 These bits define the polarity used for event detection on WKUPn-7 external wakeup pin.
    static constexpr uint32_t PWR_WKUPEPR_WKUPP4 = 0x800;  // Wakeup pin polarity bit for WKUPn-7 These bits define the polarity used for event detection on WKUPn-7 external wakeup pin.
    static constexpr uint32_t PWR_WKUPEPR_WKUPP5 = 0x1000; // Wakeup pin polarity bit for WKUPn-7 These bits define the polarity used for event detection on WKUPn-7 external wakeup pin.
    static constexpr uint32_t PWR_WKUPEPR_WKUPP6 = 0x2000; // Wakeup pin polarity bit for WKUPn-7 These bits define the polarity used for event detection on WKUPn-7 external wakeup pin.
    template<uint32_t X>
    static constexpr uint32_t PWR_WKUPEPR_WKUPPUPD1 =      // Wakeup pin pull configuration
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PWR_WKUPEPR_WKUPPUPD2 =      // Wakeup pin pull configuration
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PWR_WKUPEPR_WKUPPUPD3 =      // Wakeup pin pull configuration
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PWR_WKUPEPR_WKUPPUPD4 =      // Wakeup pin pull configuration
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PWR_WKUPEPR_WKUPPUPD5 =      // Wakeup pin pull configuration
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PWR_WKUPEPR_WKUPPUPD6 =      // Wakeup pin pull configuration for WKUP(truncate(n/2)-7) These bits define the I/O pad pull configuration used when WKUPEN(truncate(n/2)-7) = 1. The associated GPIO port pull configuration shall be set to the same value or to 00. The Wakeup pin pull configuration is kept in Standby mode.
        bit_field_t<26, 0x3>::value<X>();
};


template<>
struct peripheral_t<STM32H742x, PWR>
{
    typedef stm32h742x_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, PWR>
{
    typedef stm32h742x_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, PWR>
{
    typedef stm32h742x_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, PWR>
{
    typedef stm32h745_cm4_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, PWR>
{
    typedef stm32h745_cm4_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, PWR>
{
    typedef stm32h745_cm4_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, PWR>
{
    typedef stm32h745_cm4_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, PWR>
{
    typedef stm32h745_cm4_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, PWR>
{
    typedef stm32h745_cm4_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, PWR>
{
    typedef stm32h745_cm4_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, PWR>
{
    typedef stm32h745_cm4_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, PWR>
{
    typedef stm32h750x_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, PWR>
{
    typedef stm32h750x_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, PWR>
{
    typedef stm32h750x_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, PWR>
{
    typedef stm32h750x_pwr_t T;
    static T& V;
};

using pwr_t = peripheral_t<mcu_svd, PWR>;

