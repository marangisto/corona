#pragma once

////
//
//      STM32U5 RCC peripherals
//
///

// RCC: Reset and clock control

struct stm32u5xx_rcc_t
{
    volatile uint32_t RCC_CR; // RCC clock control register
    reserved_t<0x1> _0x4;
    volatile uint32_t RCC_ICSCR1; // RCC internal clock sources calibration register 1
    volatile uint32_t RCC_ICSCR2; // RCC internal clock sources calibration register 2
    volatile uint32_t RCC_ICSCR3; // RCC internal clock sources calibration register 3
    volatile uint32_t RCC_CRRCR; // RCC clock recovery RC register
    reserved_t<0x1> _0x18;
    volatile uint32_t RCC_CFGR1; // RCC clock configuration register 1
    volatile uint32_t RCC_CFGR2; // RCC clock configuration register 2
    volatile uint32_t RCC_CFGR3; // RCC clock configuration register 3
    volatile uint32_t RCC_PLL1CFGR; // RCC PLL1 configuration register
    volatile uint32_t RCC_PLL2CFGR; // RCC PLL2 configuration register
    volatile uint32_t RCC_PLL3CFGR; // RCC PLL3 configuration register
    volatile uint32_t RCC_PLL1DIVR; // RCC PLL1 dividers register
    volatile uint32_t RCC_PLL1FRACR; // RCC PLL1 fractional divider register
    volatile uint32_t RCC_PLL2DIVR; // RCC PLL2 dividers configuration register
    volatile uint32_t RCC_PLL2FRACR; // RCC PLL2 fractional divider register
    volatile uint32_t RCC_PLL3DIVR; // RCC PLL3 dividers configuration register
    volatile uint32_t RCC_PLL3FRACR; // RCC PLL3 fractional divider register
    reserved_t<0x1> _0x4c;
    volatile uint32_t RCC_CIER; // RCC clock interrupt enable register
    volatile uint32_t RCC_CIFR; // RCC clock interrupt flag register
    volatile uint32_t RCC_CICR; // RCC clock interrupt clear register
    reserved_t<0x1> _0x5c;
    volatile uint32_t RCC_AHB1RSTR; // RCC AHB1 peripheral reset register
    volatile uint32_t RCC_AHB2RSTR1; // RCC AHB2 peripheral reset register 1
    volatile uint32_t RCC_AHB2RSTR2; // RCC AHB2 peripheral reset register 2
    volatile uint32_t RCC_AHB3RSTR; // RCC AHB3 peripheral reset register
    reserved_t<0x1> _0x70;
    volatile uint32_t RCC_APB1RSTR1; // RCC APB1 peripheral reset register 1
    volatile uint32_t RCC_APB1RSTR2; // RCC APB1 peripheral reset register 2
    volatile uint32_t RCC_APB2RSTR; // RCC APB2 peripheral reset register
    volatile uint32_t RCC_APB3RSTR; // RCC APB3 peripheral reset register
    reserved_t<0x1> _0x84;
    volatile uint32_t RCC_AHB1ENR; // RCC AHB1 peripheral clock enable register
    volatile uint32_t RCC_AHB2ENR1; // RCC AHB2 peripheral clock enable register 1
    volatile uint32_t RCC_AHB2ENR2; // RCC AHB2 peripheral clock enable register 2
    volatile uint32_t RCC_AHB3ENR; // RCC AHB3 peripheral clock enable register
    reserved_t<0x1> _0x98;
    volatile uint32_t RCC_APB1ENR1; // RCC APB1 peripheral clock enable register 1
    volatile uint32_t RCC_APB1ENR2; // RCC APB1 peripheral clock enable register 2
    volatile uint32_t RCC_APB2ENR; // RCC APB2 peripheral clock enable register
    volatile uint32_t RCC_APB3ENR; // RCC APB3 peripheral clock enable register
    reserved_t<0x1> _0xac;
    volatile uint32_t RCC_AHB1SMENR; // RCC AHB1 peripheral clocks enable in Sleep and Stop modes register
    volatile uint32_t RCC_AHB2SMENR1; // RCC AHB2 peripheral clocks enable in Sleep and Stop modes register 1
    volatile uint32_t RCC_AHB2SMENR2; // RCC AHB2 peripheral clocks enable in Sleep and Stop modes register 2
    volatile uint32_t RCC_AHB3SMENR; // RCC AHB3 peripheral clocks enable in Sleep and Stop modes register
    reserved_t<0x1> _0xc0;
    volatile uint32_t RCC_APB1SMENR1; // RCC APB1 peripheral clocks enable in Sleep and Stop modes register 1
    volatile uint32_t RCC_APB1SMENR2; // RCC APB1 peripheral clocks enable in Sleep and Stop modes register 2
    volatile uint32_t RCC_APB2SMENR; // RCC APB2 peripheral clocks enable in Sleep and Stop modes register
    volatile uint32_t RCC_APB3SMENR; // RCC APB3 peripheral clock enable in Sleep and Stop modes register
    reserved_t<0x1> _0xd4;
    volatile uint32_t RCC_SRDAMR; // RCC SmartRun domain peripheral autonomous mode register
    reserved_t<0x1> _0xdc;
    volatile uint32_t RCC_CCIPR1; // RCC peripherals independent clock configuration register 1
    volatile uint32_t RCC_CCIPR2; // RCC peripherals independent clock configuration register 2
    volatile uint32_t RCC_CCIPR3; // RCC peripherals independent clock configuration register 3
    reserved_t<0x1> _0xec;
    volatile uint32_t RCC_BDCR; // RCC Backup domain control register
    volatile uint32_t RCC_CSR; // RCC control/status register
    reserved_t<0x6> _0xf8;
    volatile uint32_t RCC_SECCFGR; // RCC secure configuration register
    volatile uint32_t RCC_PRIVCFGR; // RCC privilege configuration register

    static constexpr uint32_t RCC_CR_RESET_VALUE = 0x35; // Reset value
    static constexpr uint32_t RCC_CR_MSISON = 0x1; // MSIS clock enable Set and cleared by software. Cleared by hardware to stop the MSIS oscillator when entering Stop, Standby or Shutdown mode. Set by hardware to force the MSIS oscillator ON when exiting Standby or Shutdown mode. Set by hardware to force the MSIS oscillator ON when STOPWUCK = 0 when exiting Stop modes or in case of a failure of the HSE oscillator. Set by hardware when used directly or indirectly as system clock.
    static constexpr uint32_t RCC_CR_MSIKERON = 0x2; // MSI enable for some peripheral kernels Set and cleared by software to force MSI ON even in Stop modes. Keeping the MSI ON in Stop mode allows the communication speed not to be reduced by the MSI startup time. This bit has no effect on MSISON and MSIKON values (see autonomous mode for more details). The MSIKERON must be configured at 0 before entering Stop 3 mode.
    static constexpr uint32_t RCC_CR_MSISRDY = 0x4; // MSIS clock ready flag Set by hardware to indicate that the MSIS oscillator is stable. This bit is set only when MSIS is enabled by software by setting MSISON. Note: Once the MSISON bit is cleared, MSISRDY goes low after six MSIS clock cycles.
    static constexpr uint32_t RCC_CR_MSIPLLEN = 0x8; // MSI clock PLL-mode enable Set and cleared by software to enable/disable the PLL part of the MSI clock source. MSIPLLEN must be enabled after LSE is enabled (LSEON enabled) and ready (LSERDY set by hardware). A hardware protection prevents from enabling MSIPLLEN if LSE is not ready. This bit is cleared by hardware when LSE is disabled (LSEON = 0) or when the CSS on LSE detects a LSE failure (see RCC_CSR).
    static constexpr uint32_t RCC_CR_MSIKON = 0x10; // MSIK clock enable Set and cleared by software. Cleared by hardware to stop the MSIK when entering Stop, Standby or Shutdown mode. Set by hardware to force the MSIK oscillator ON when exiting Standby or Shutdown mode. Set by hardware to force the MSIK oscillator ON when STOPWUCK = 0 or STOPKERWUCK=0 when exiting Stop modes or in case of a failure of the HSE oscillator.
    static constexpr uint32_t RCC_CR_MSIKRDY = 0x20; // MSIK clock ready flag Set by hardware to indicate that the MSIK is stable. This bit is set only when MSI kernel oscillator is enabled by software by setting MSIKON. Note: Once the MSIKON bit is cleared, MSIKRDY goes low after six MSIK oscillator clock cycles.
    static constexpr uint32_t RCC_CR_MSIPLLSEL = 0x40; // MSI clock with PLL mode selection Set and cleared by software to select which MSI output clock uses the PLL mode. This bit can be written only when the MSI PLL mode is disabled (MSIPLLEN = 0). Note: If the MSI kernel clock output uses the same oscillator source than the MSI system clock output, then the PLL mode is applied to the both clocks outputs.
    static constexpr uint32_t RCC_CR_MSIPLLFAST = 0x80; // MSI PLL mode fast startup Set and reset by software to enable/disable the fast PLL mode start-up of the MSI clock source. This bit is used only if PLL mode is selected (MSIPLLEN = 1). The fast start-up feature is not active the first time the PLL mode is selected. The fast start-up is active when the MSI in PLL mode returns from switch off.
    static constexpr uint32_t RCC_CR_HSION = 0x100; // HSI16 clock enable Set and cleared by software. Cleared by hardware to stop the HSI16 oscillator when entering Stop, Standby or Shutdown mode. Set by hardware to force the HSI16 oscillator ON when STOPWUCK = 1 when leaving Stop modes, or in case of failure of the HSE crystal oscillator. This bit is set by hardware if the HSI16 is used directly or indirectly as system clock.
    static constexpr uint32_t RCC_CR_HSIKERON = 0x200; // HSI16 enable for some peripheral kernels Set and cleared by software to force HSI16 ON even in Stop modes. Keeping the HSI16 ON in Stop mode allows the communication speed not to be reduced by the HSI16 startup time. This bit has no effect on HSION value. Refer to for more details. The HSIKERON must be configured at 0 before entering Stop 3 mode.
    static constexpr uint32_t RCC_CR_HSIRDY = 0x400; // HSI16 clock ready flag Set by hardware to indicate that HSI16 oscillator is stable. This bit is set only when HSI16 is enabled by software by setting HSION. Note: Once the HSION bit is cleared, HSIRDY goes low after six HSI16 clock cycles.
    static constexpr uint32_t RCC_CR_HSI48ON = 0x1000; // HSI48 clock enable Set and cleared by software. Cleared by hardware to stop the HSI48 when entering in Stop, Standby or Shutdown modes.
    static constexpr uint32_t RCC_CR_HSI48RDY = 0x2000; // HSI48 clock ready flag Set by hardware to indicate that HSI48 oscillator is stable. This bit is set only when HSI48 is enabled by software by setting HSI48ON.
    static constexpr uint32_t RCC_CR_SHSION = 0x4000; // SHSI clock enable Set and cleared by software. Cleared by hardware to stop the SHSI when entering in Stop, Standby or Shutdown modes.
    static constexpr uint32_t RCC_CR_SHSIRDY = 0x8000; // SHSI clock ready flag Set by hardware to indicate that the SHSI oscillator is stable. This bit is set only when SHSI is enabled by software by setting SHSION. Note: Once the SHSION bit is cleared, SHSIRDY goes low after six SHSI clock cycles.
    static constexpr uint32_t RCC_CR_HSEON = 0x10000; // HSE clock enable Set and cleared by software. Cleared by hardware to stop the HSE oscillator when entering Stop, Standby or Shutdown mode. This bit cannot be reset if the HSE oscillator is used directly or indirectly as the system clock.
    static constexpr uint32_t RCC_CR_HSERDY = 0x20000; // HSE clock ready flag Set by hardware to indicate that the HSE oscillator is stable. Note: Once the HSEON bit is cleared, HSERDY goes low after six HSE clock cycles.
    static constexpr uint32_t RCC_CR_HSEBYP = 0x40000; // HSE crystal oscillator bypass Set and cleared by software to bypass the oscillator with an external clock. The external clock must be enabled with the HSEON bit set, to be used by the device. The HSEBYP bit can be written only if the HSE oscillator is disabled.
    static constexpr uint32_t RCC_CR_CSSON = 0x80000; // Clock security system enable Set by software to enable the clock security system. When CSSON is set, the clock detector is enabled by hardware when the HSE oscillator is ready, and disabled by hardware if a HSE clock failure is detected. This bit is set only and is cleared by reset.
    static constexpr uint32_t RCC_CR_HSEEXT = 0x100000; // HSE external clock bypass mode Set and reset by software to select the external clock mode in bypass mode. External clock mode must be configured with HSEON bit to be used by the device. This bit can be written only if the HSE oscillator is disabled. This bit is active only if the HSE bypass mode is enabled.
    static constexpr uint32_t RCC_CR_PLL1ON = 0x1000000; // PLL1 enable Set and cleared by software to enable the main PLL. Cleared by hardware when entering Stop, Standby or Shutdown mode. This bit cannot be reset if the PLL1 clock is used as the system clock.
    static constexpr uint32_t RCC_CR_PLL1RDY = 0x2000000; // PLL1 clock ready flag Set by hardware to indicate that the PLL1 is locked.
    static constexpr uint32_t RCC_CR_PLL2ON = 0x4000000; // PLL2 enable Set and cleared by software to enable PLL2. Cleared by hardware when entering Stop, Standby or Shutdown mode.
    static constexpr uint32_t RCC_CR_PLL2RDY = 0x8000000; // PLL2 clock ready flag Set by hardware to indicate that the PLL2 is locked.
    static constexpr uint32_t RCC_CR_PLL3ON = 0x10000000; // PLL3 enable Set and cleared by software to enable PLL3. Cleared by hardware when entering Stop, Standby or Shutdown mode.
    static constexpr uint32_t RCC_CR_PLL3RDY = 0x20000000; // PLL3 clock ready flag Set by hardware to indicate that the PLL3 is locked.


    static constexpr uint32_t RCC_ICSCR1_RESET_VALUE = 0x44000000; // Reset value
    typedef bit_field_t<0, 0x1f> RCC_ICSCR1_MSICAL3; // MSIRC3 clock calibration for MSI ranges 12 to 15 These bits are initialized at startup with the factory-programmed MSIRC3 calibration trim value for ranges 12 to 15. When MSITRIM3 is written, MSICAL3 is updated with the sum of MSITRIM3[4:0] and the factory calibration trim value MSIRC2[4:0]. There is no hardware protection to limit a potential overflow due to the addition of MSITRIM bitfield and factory program bitfield for this calibration value. Control must be managed by software at user level.
    typedef bit_field_t<5, 0x1f> RCC_ICSCR1_MSICAL2; // MSIRC2 clock calibration for MSI ranges 8 to 11 These bits are initialized at startup with the factory-programmed MSIRC2 calibration trim value for ranges 8 to 11. When MSITRIM2 is written, MSICAL2 is updated with the sum of MSITRIM2[4:0] and the factory calibration trim value MSIRC2[4:0]. There is no hardware protection to limit a potential overflow due to the addition of MSITRIM bitfield and factory program bitfield for this calibration value. Control must be managed by software at user level.
    typedef bit_field_t<10, 0x1f> RCC_ICSCR1_MSICAL1; // MSIRC1 clock calibration for MSI ranges 4 to 7 These bits are initialized at startup with the factory-programmed MSIRC1 calibration trim value for ranges 4 to 7. When MSITRIM1 is written, MSICAL1 is updated with the sum of MSITRIM1[4:0] and the factory calibration trim value MSIRC1[4:0]. There is no hardware protection to limit a potential overflow due to the addition of MSITRIM bitfield and factory program bitfield for this calibration value. Control must be managed by software at user level.
    typedef bit_field_t<15, 0x1f> RCC_ICSCR1_MSICAL0; // MSIRC0 clock calibration for MSI ranges 0 to 3 These bits are initialized at startup with the factory-programmed MSIRC0 calibration trim value for ranges 0 to 3. When MSITRIM0 is written, MSICAL0 is updated with the sum of MSITRIM0[4:0] and the factory-programmed calibration trim value MSIRC0[4:0].
    static constexpr uint32_t RCC_ICSCR1_MSIBIAS = 0x400000; // MSI bias mode selection Set by software to select the MSI bias mode. By default, the MSI bias is in continuous mode in order to maintain the output clocks accuracy. Setting this bit reduces the MSI consumption under range 4 but decrease its accuracy.
    static constexpr uint32_t RCC_ICSCR1_MSIRGSEL = 0x800000; // MSI clock range selection Set by software to select the MSIS and MSIK clocks range with MSISRANGE[3:0] and MSIKRANGE[3:0]. Write 0 has no effect. After exiting Standby or Shutdown mode, or after a reset, this bit is at 0 and the MSIS and MSIK ranges are provided by MSISSRANGE[3:0] and MSIKSRANGE[3:0] in RCC_CSR.
    typedef bit_field_t<24, 0xf> RCC_ICSCR1_MSIKRANGE; // MSIK clock ranges These bits are configured by software to choose the frequency range of MSIK oscillator when MSIRGSEL is set. 16 frequency ranges are available: Note: MSIKRANGE can be modified when MSIK is OFF (MSISON = 0) or when MSIK is ready (MSIKRDY=1). MSIKRANGE must NOT be modified when MSIK is ON and NOT ready (MSIKON = 1 and MSIKRDY = 0) MSIKRANGE is kept when the device wakes up from Stop mode, except when the MSIK range is above 24 MHz. In this case MSIKRANGE is changed by hardware into Range 2 (24 MHz).
    typedef bit_field_t<28, 0xf> RCC_ICSCR1_MSISRANGE; // MSIS clock ranges These bits are configured by software to choose the frequency range of MSIS oscillator when MSIRGSEL is set. 16 frequency ranges are available: Note: MSISRANGE can be modified when MSIS is OFF (MSISON = 0) or when MSIS is ready (MSISRDY=1). MSISRANGE must NOT be modified when MSIS is ON and NOT ready (MSISON=1 and MSISRDY=0) MSISRANGE is kept when the device wakes up from Stop mode, except when the MSIS range is above 24 MHz. In this case MSISRANGE is changed by hardware into Range 2 (24 MHz).

    static constexpr uint32_t RCC_ICSCR2_RESET_VALUE = 0x84210; // Reset value
    typedef bit_field_t<0, 0x1f> RCC_ICSCR2_MSITRIM3; // MSI clock trimming for ranges 12 to 15 These bits provide an additional user-programmable trimming value that is added to the factory-programmed calibration trim value MSIRC3[4:0] bits. It can be programmed to adjust to voltage and temperature variations that influence the frequency of the MSI.
    typedef bit_field_t<5, 0x1f> RCC_ICSCR2_MSITRIM2; // MSI clock trimming for ranges 8 to 11 These bits provide an additional user-programmable trimming value that is added to the factory-programmed calibration trim value MSIRC2[4:0] bits. It can be programmed to adjust to voltage and temperature variations that influence the frequency of the MSI.
    typedef bit_field_t<10, 0x1f> RCC_ICSCR2_MSITRIM1; // MSI clock trimming for ranges 4 to 7 These bits provide an additional user-programmable trimming value that is added to the factory-programmed calibration trim value MSIRC1[4:0] bits. It can be programmed to adjust to voltage and temperature variations that influence the frequency of the MSI.
    typedef bit_field_t<15, 0x1f> RCC_ICSCR2_MSITRIM0; // MSI clock trimming for ranges 0 to 3 These bits provide an additional user-programmable trimming value that is added to the factory-programmed calibration trim value MSIRC0[4:0] bits. It can be programmed to adjust to voltage and temperature variations that influence the frequency of the MSI.

    static constexpr uint32_t RCC_ICSCR3_RESET_VALUE = 0x100000; // Reset value
    typedef bit_field_t<0, 0xfff> RCC_ICSCR3_HSICAL; // HSI clock calibration These bits are initialized at startup with the factory-programmed HSI calibration trim value. When HSITRIM is written, HSICAL is updated with the sum of HSITRIM and the factory trim value.
    typedef bit_field_t<16, 0x1f> RCC_ICSCR3_HSITRIM; // HSI clock trimming These bits provide an additional user-programmable trimming value that is added to the HSICAL[11:0] bits. It can be programmed to adjust to voltage and temperature variations that influence the frequency of the HSI.

    static constexpr uint32_t RCC_CRRCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> RCC_CRRCR_HSI48CAL; // HSI48 clock calibration These bits are initialized at startup with the factory-programmed HSI48 calibration trim value.


    static constexpr uint32_t RCC_CFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> RCC_CFGR1_SW; // system clock switch Set and cleared by software to select system clock source (SYSCLK). Configured by hardware to force MSIS oscillator selection when exiting Standby or Shutdown mode. Configured by hardware to force MSIS or HSI16 oscillator selection when exiting Stop mode or in case of HSE oscillator failure, depending on STOPWUCK value.
    typedef bit_field_t<2, 0x3> RCC_CFGR1_SWS; // system clock switch status Set and cleared by hardware to indicate which clock source is used as system clock.
    static constexpr uint32_t RCC_CFGR1_STOPWUCK = 0x10; // wakeup from Stop and CSS backup clock selection Set and cleared by software to select the system clock used when exiting Stop mode. The selected clock is also used as emergency clock for the clock security system on HSE. Warning: STOPWUCK must not be modified when the CSS is enabled by HSECSSON bit in RCC_CR and the system clock is HSE (SWS = 10) or a switch on HSE is requested (SW=10).
    static constexpr uint32_t RCC_CFGR1_STOPKERWUCK = 0x20; // wakeup from Stop kernel clock automatic enable selection Set and cleared by software to enable automatically another oscillator when exiting Stop mode. This oscillator can be used as independent kernel clock by peripherals.
    typedef bit_field_t<24, 0xf> RCC_CFGR1_MCOSEL; // microcontroller clock output Set and cleared by software. Others: reserved Note: This clock output may have some truncated cycles at startup or during MCO clock source switching.
    typedef bit_field_t<28, 0x7> RCC_CFGR1_MCOPRE; // microcontroller clock output prescaler Set and cleared by software. It is highly recommended to change this prescaler before MCO output is enabled. Others: not allowed

    static constexpr uint32_t RCC_CFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> RCC_CFGR2_HPRE; // AHB prescaler Set and cleared by software to control the division factor of the AHB clock (HCLK). Depending on the device voltage range, the software must set these bits correctly to ensure that the system frequency does not exceed the maximum allowed frequency (for more details, refer to ). After a write operation to these bits and before decreasing the voltage range, this register must be read to be sure that the new value is taken into account. 0xxx: SYSCLK not divided
    typedef bit_field_t<4, 0x7> RCC_CFGR2_PPRE1; // APB1 prescaler Set and cleared by software to control the division factor of the APB1 clock (PCLK1). 0xx: HCLK not divided
    typedef bit_field_t<8, 0x7> RCC_CFGR2_PPRE2; // APB2 prescaler Set and cleared by software to control the division factor of the APB2 clock (PCLK2). 0xx: HCLK not divided
    static constexpr uint32_t RCC_CFGR2_AHB1DIS = 0x10000; // AHB1 clock disable This bit can be set in order to further reduce power consumption, when none of the AHB1 peripherals (except those listed hereafter) are used and when their clocks are disabled in RCC_AHB1ENR. When this bit is set, all the AHB1 peripherals clocks are off, except for FLASH, BKPSRAM, ICACHE, DCACHE1 and SRAM1.
    static constexpr uint32_t RCC_CFGR2_AHB2DIS1 = 0x20000; // AHB2_1 clock disable This bit can be set in order to further reduce power consumption, when none of the AHB2 peripherals from RCC_AHB2ENR1 (except SRAM2 and SRAM3) are used and when their clocks are disabled in RCC_AHB2ENR1. When this bit is set, all the AHB2 peripherals clocks from RCC_AHB2ENR1 are off, except for SRAM2 and SRAM3.
    static constexpr uint32_t RCC_CFGR2_AHB2DIS2 = 0x40000; // AHB2_2 clock disable This bit can be set in order to further reduce power consumption, when none of the AHB2 peripherals from RCC_AHB2ENR2 are used and when their clocks are disabled in RCC_AHB2ENR2. When this bit is set, all the AHB2 peripherals clocks from RCC_AHB2EBNR2 are off.
    static constexpr uint32_t RCC_CFGR2_APB1DIS = 0x80000; // APB1 clock disable This bit can be set in order to further reduce power consumption, when none of the APB1 peripherals (except IWDG) are used and when their clocks are disabled in RCC_APB1ENR. When this bit is set, all the APB1 peripherals clocks are off, except for IWDG.
    static constexpr uint32_t RCC_CFGR2_APB2DIS = 0x100000; // APB2 clock disable This bit can be set in order to further reduce power consumption, when none of the APB2 peripherals are used and when their clocks are disabled in RCC_APB2ENR. When this bit is set, all the APB2 peripherals clocks are off.

    static constexpr uint32_t RCC_CFGR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0x7> RCC_CFGR3_PPRE3; // APB3 prescaler Set and cleared by software to control the division factor of the APB3 clock (PCLK3). 0xx: HCLK not divided
    static constexpr uint32_t RCC_CFGR3_AHB3DIS = 0x10000; // AHB3 clock disable This bit can be set in order to further reduce power consumption, when none of the AHB3 peripherals (except SRAM4) are used and when their clocks are disabled in RCC_AHB3ENR. When this bit is set, all the AHB3 peripherals clocks are off, except for SRAM4.
    static constexpr uint32_t RCC_CFGR3_APB3DIS = 0x20000; // APB3 clock disable This bit can be set in order to further reduce power consumption, when none of the APB3 peripherals from RCC_APB3ENR are used and when their clocks are disabled in RCC_APB3ENR. When this bit is set, all the APB3 peripherals clocks are off.

    static constexpr uint32_t RCC_PLL1CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> RCC_PLL1CFGR_PLL1SRC; // PLL1 entry clock source Set and cleared by software to select PLL1 clock source. These bits can be written only when the PLL1 is disabled. In order to save power, when no PLL1 is used, the value of PLL1SRC must be 0.
    typedef bit_field_t<2, 0x3> RCC_PLL1CFGR_PLL1RGE; // PLL1 input frequency range Set and reset by software to select the proper reference frequency range used for PLL1. This bit must be written before enabling the PLL1. 00-01-10: PLL1 input (ref1_ck) clock range frequency between 4 and 8 MHz
    static constexpr uint32_t RCC_PLL1CFGR_PLL1FRACEN = 0x10; // PLL1 fractional latch enable Set and reset by software to latch the content of PLL1FRACN into the modulator. In order to latch the PLL1FRACN value into the modulator, PLL1FRACEN must be setto0, then set to 1: the transition 0 to 1 transfers the content of PLL1FRACN into the modulator (see for details).
    typedef bit_field_t<8, 0xf> RCC_PLL1CFGR_PLL1M; // Prescaler for PLL1 Set and cleared by software to configure the prescaler of the PLL1. The VCO1 input frequency is PLL1 input clock frequency/PLL1M. This bit can be written only when the PLL1 is disabled (PLL1ON = 0 and PLL1RDY = 0). ...
    typedef bit_field_t<12, 0xf> RCC_PLL1CFGR_PLL1MBOOST; // Prescaler for EPOD booster input clock Set and cleared by software to configure the prescaler of the PLL1, used for the EPOD booster. The EPOD booster input frequency is PLL1 input clock frequency/PLL1MBOOST. This bit can be written only when the PLL1 is disabled (PLL1ON = 0 and PLL1RDY = 0) and EPOD Boost mode is disabled (see ). others: reserved
    static constexpr uint32_t RCC_PLL1CFGR_PLL1PEN = 0x10000; // PLL1 DIVP divider output enable Set and reset by software to enable the pll1_p_ck output of the PLL1. To save power, PLL1PEN and PLL1P bits must be set to 0 when the pll1_p_ck is not used. This bit can be written only when the PLL1 is disabled (PLL1ON = 0 and PLL1RDY = 0).
    static constexpr uint32_t RCC_PLL1CFGR_PLL1QEN = 0x20000; // PLL1 DIVQ divider output enable Set and reset by software to enable the pll1_q_ck output of the PLL1. To save power, PLL1QEN and PLL1Q bits must be set to 0 when the pll1_q_ck is not used. This bit can be written only when the PLL1 is disabled (PLL1ON = 0 and PLL1RDY = 0).
    static constexpr uint32_t RCC_PLL1CFGR_PLL1REN = 0x40000; // PLL1 DIVR divider output enable Set and reset by software to enable the pll1_r_ck output of the PLL1. To save power, PLL1RENPLL2REN and PLL1R bits must be set to 0 when the pll1_r_ck is not used. This bit can be written only when the PLL1 is disabled (PLL1ON = 0 and PLL1RDY = 0).

    static constexpr uint32_t RCC_PLL2CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> RCC_PLL2CFGR_PLL2SRC; // PLL2 entry clock source Set and cleared by software to select PLL2 clock source. These bits can be written only when the PLL2 is disabled. In order to save power, when no PLL2 is used, the value of PLL2SRC must be 0.
    typedef bit_field_t<2, 0x3> RCC_PLL2CFGR_PLL2RGE; // PLL2 input frequency range Set and reset by software to select the proper reference frequency range used for PLL2. This bit must be written before enabling the PLL2. 00-01-10: PLL2 input (ref2_ck) clock range frequency between 4 and 8 MHz
    static constexpr uint32_t RCC_PLL2CFGR_PLL2FRACEN = 0x10; // PLL2 fractional latch enable Set and reset by software to latch the content of PLL2FRACN into the modulator. In order to latch the PLL2FRACN value into the modulator, PLL2FRACEN must be setto0, then set to 1: the transition 0 to 1 transfers the content of PLL2FRACN into the modulator (see for details).
    typedef bit_field_t<8, 0xf> RCC_PLL2CFGR_PLL2M; // Prescaler for PLL2 Set and cleared by software to configure the prescaler of the PLL2. The VCO2 input frequency is PLL2 input clock frequency/PLL2M. This bit can be written only when the PLL2 is disabled (PLL2ON = 0 and PLL2RDY = 0). ...
    static constexpr uint32_t RCC_PLL2CFGR_PLL2PEN = 0x10000; // PLL2 DIVP divider output enable Set and reset by software to enable the pll2_p_ck output of the PLL2. To save power, PLL2PEN and PLL2P bits must be set to 0 when the pll2_p_ck is not used. This bit can be written only when the PLL2 is disabled (PLL2ON = 0 and PLL2RDY = 0).
    static constexpr uint32_t RCC_PLL2CFGR_PLL2QEN = 0x20000; // PLL2 DIVQ divider output enable Set and reset by software to enable the pll2_q_ck output of the PLL2. To save power, PLL2QEN and PLL2Q bits must be set to 0 when the pll2_q_ck is not used. This bit can be written only when the PLL2 is disabled (PLL2ON = 0 and PLL2RDY = 0.
    static constexpr uint32_t RCC_PLL2CFGR_PLL2REN = 0x40000; // PLL2 DIVR divider output enable Set and reset by software to enable the pll2_r_ck output of the PLL2. To save power, PLL2REN and PLL2R bits must be set to 0 when the pll2_r_ck is not used. This bit can be written only when the PLL2 is disabled (PLL2ON = 0 and PLL2RDY = 0).

    static constexpr uint32_t RCC_PLL3CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> RCC_PLL3CFGR_PLL3SRC; // PLL3 entry clock source Set and cleared by software to select PLL3 clock source. These bits can be written only when the PLL3 is disabled. In order to save power, when no PLL3 is used, the value of PLL3SRC must be 00.
    typedef bit_field_t<2, 0x3> RCC_PLL3CFGR_PLL3RGE; // PLL3 input frequency range Set and reset by software to select the proper reference frequency range used for PLL3. This bit must be written before enabling the PLL3. 00-01-10: PLL3 input (ref3_ck) clock range frequency between 4 and 8 MHz
    static constexpr uint32_t RCC_PLL3CFGR_PLL3FRACEN = 0x10; // PLL3 fractional latch enable Set and reset by software to latch the content of PLL3FRACN into the modulator. In order to latch the PLL3FRACN value into the modulator, PLL3FRACEN must be setto0, then set to 1: the transition 0 to 1 transfers the content of PLL3FRACN into the modulator (see for details).
    typedef bit_field_t<8, 0xf> RCC_PLL3CFGR_PLL3M; // Prescaler for PLL3 Set and cleared by software to configure the prescaler of the PLL3. The VCO3 input frequency is PLL3 input clock frequency/PLL3M. This bit can be written only when the PLL3 is disabled (PLL3ON = 0 and PLL3RDY = 0). ...
    static constexpr uint32_t RCC_PLL3CFGR_PLL3PEN = 0x10000; // PLL3 DIVP divider output enable Set and reset by software to enable the pll3_p_ck output of the PLL3. To save power, PLL3PEN and PLL3P bits must be set to 0 when the pll3_p_ck is not used. This bit can be written only when the PLL3 is disabled (PLL3ON = 0 and PLL3RDY = 0).
    static constexpr uint32_t RCC_PLL3CFGR_PLL3QEN = 0x20000; // PLL3 DIVQ divider output enable Set and reset by software to enable the pll3_q_ck output of the PLL3. To save power, PLL3QEN and PLL3Q bits must be set to 0 when the pll3_q_ck is not used. This bit can be written only when the PLL3 is disabled (PLL3ON = 0 and PLL3RDY = 0).
    static constexpr uint32_t RCC_PLL3CFGR_PLL3REN = 0x40000; // PLL3 DIVR divider output enable Set and reset by software to enable the pll3_r_ck output of the PLL3. To save power, PLL3REN and PLL3R bits must be set to 0 when the pll3_r_ck is not used. This bit can be written only when the PLL3 is disabled (PLL3ON = 0 and PLL3RDY = 0).

    static constexpr uint32_t RCC_PLL1DIVR_RESET_VALUE = 0x1010280; // Reset value
    typedef bit_field_t<0, 0x1ff> RCC_PLL1DIVR_PLL1N; // Multiplication factor for PLL1 VCO Set and reset by software to control the multiplication factor of the VCO. These bits can be written only when the PLL is disabled (PLL1ON = 0 and PLL1RDY = 0). ... ... Others: reserved VCO output frequency = Fref1_ck x PLL1N, when fractional value 0 has been loaded into PLL1FRACN, with: PLL1N between 4 and 512 input frequency Fref1_ck between 4 and 16MHz
    typedef bit_field_t<9, 0x7f> RCC_PLL1DIVR_PLL1P; // PLL1 DIVP division factor Set and reset by software to control the frequency of the pll1_p_ck clock. These bits can be written only when the PLL1 is disabled (PLL1ON = 0 and PLL1RDY = 0). Note that odd division factors are not allowed. ...
    typedef bit_field_t<16, 0x7f> RCC_PLL1DIVR_PLL1Q; // PLL1 DIVQ division factor Set and reset by software to control the frequency of the pll1_q_ck clock. These bits can be written only when the PLL1 is disabled (PLL1ON = 0 and PLL1RDY = 0). ...
    typedef bit_field_t<24, 0x7f> RCC_PLL1DIVR_PLL1R; // PLL1 DIVR division factor Set and reset by software to control the frequency of the pll1_r_ck clock. These bits can be written only when the PLL1 is disabled (PLL1ON = 0 and PLL1RDY = 0). ...

    static constexpr uint32_t RCC_PLL1FRACR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1fff> RCC_PLL1FRACR_PLL1FRACN; // Fractional part of the multiplication factor for PLL1 VCO Set and reset by software to control the fractional part of the multiplication factor of the VCO. These bits can be written at any time, allowing dynamic fine-tuning of the PLL1 VCO. VCO output frequency = Fref1_ck x (PLL1N + (PLL1FRACN / 213)), with: PLL1N must be between 4 and 512. PLL1FRACN can be between 0 and 213- 1. The input frequency Fref1_ck must be between 4 and 16 MHz. To change the FRACN value on-the-fly even if the PLL is enabled, the application must proceed as follows: Set the bit PLL1FRACEN to 0. Write the new fractional value into PLL1FRACN. Set the bit PLL1FRACEN to 1.

    static constexpr uint32_t RCC_PLL2DIVR_RESET_VALUE = 0x1010280; // Reset value
    typedef bit_field_t<0, 0x1ff> RCC_PLL2DIVR_PLL2N; // Multiplication factor for PLL2 VCO Set and reset by software to control the multiplication factor of the VCO. These bits can be written only when the PLL is disabled (PLL2ON = 0 and PLL2RDY = 0). ... ... Others: reserved VCO output frequency = Fref2_ck x PLL2N, when fractional value 0 has been loaded into PLL2FRACN, with: PLL2N between 4 and 512 input frequency Fref2_ck between 1MHz and 16MHz
    typedef bit_field_t<9, 0x7f> RCC_PLL2DIVR_PLL2P; // PLL2 DIVP division factor Set and reset by software to control the frequency of the pll2_p_ck clock. These bits can be written only when the PLL2 is disabled (PLL2ON = 0 and PLL2RDY = 0). ...
    typedef bit_field_t<16, 0x7f> RCC_PLL2DIVR_PLL2Q; // PLL2 DIVQ division factor Set and reset by software to control the frequency of the pll2_q_ck clock. These bits can be written only when the PLL2 is disabled (PLL2ON = 0 and PLL2RDY = 0). ...
    typedef bit_field_t<24, 0x7f> RCC_PLL2DIVR_PLL2R; // PLL2 DIVR division factor Set and reset by software to control the frequency of the pll2_r_ck clock. These bits can be written only when the PLL2 is disabled (PLL2ON = 0 and PLL2RDY = 0). ...

    static constexpr uint32_t RCC_PLL2FRACR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1fff> RCC_PLL2FRACR_PLL2FRACN; // Fractional part of the multiplication factor for PLL2 VCO Set and reset by software to control the fractional part of the multiplication factor of the VCO. These bits can be written at any time, allowing dynamic fine-tuning of the PLL2 VCO. VCO output frequency = Fref2_ck x (PLL2N + (PLL2FRACN / 213)), with PLL2N must be between 4 and 512. PLL2FRACN can be between 0 and 213 - 1. The input frequency Fref2_ck must be between 4 and 16 MHz. In order to change the FRACN value on-the-fly even if the PLL is enabled, the application must proceed as follows: Set the bit PLL2FRACEN to 0. Write the new fractional value into PLL2FRACN. Set the bit PLL2FRACEN to 1.

    static constexpr uint32_t RCC_PLL3DIVR_RESET_VALUE = 0x1010280; // Reset value
    typedef bit_field_t<0, 0x1ff> RCC_PLL3DIVR_PLL3N; // Multiplication factor for PLL3 VCO Set and reset by software to control the multiplication factor of the VCO. These bits can be written only when the PLL is disabled (PLL3ON = 0 and PLL3RDY = 0). ... ... Others: reserved VCO output frequency = Fref3_ck x PLL3N, when fractional value 0 has been loaded into PLL3FRACN, with: PLL3N between 4 and 512 input frequency Fref3_ck between 4 and 16MHz
    typedef bit_field_t<9, 0x7f> RCC_PLL3DIVR_PLL3P; // PLL3 DIVP division factor Set and reset by software to control the frequency of the pll3_p_ck clock. These bits can be written only when the PLL3 is disabled (PLL3ON = 0 and PLL3RDY = 0). ...
    typedef bit_field_t<16, 0x7f> RCC_PLL3DIVR_PLL3Q; // PLL3 DIVQ division factor Set and reset by software to control the frequency of the pll3_q_ck clock. These bits can be written only when the PLL3 is disabled (PLL3ON = 0 and PLL3RDY = 0). ...
    typedef bit_field_t<24, 0x7f> RCC_PLL3DIVR_PLL3R; // PLL3 DIVR division factor Set and reset by software to control the frequency of the pll3_r_ck clock. These bits can be written only when the PLL3 is disabled (PLL3ON = 0 and PLL3RDY = 0). ...

    static constexpr uint32_t RCC_PLL3FRACR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1fff> RCC_PLL3FRACR_PLL3FRACN; // Fractional part of the multiplication factor for PLL3 VCO Set and reset by software to control the fractional part of the multiplication factor of the VCO. These bits can be written at any time, allowing dynamic fine-tuning of the PLL3 VCO. VCO output frequency = Fref3_ck x (PLL3N + (PLL3FRACN / 213)), with: PLL3N must be between 4 and 512. PLL3FRACN can be between 0 and 213 - 1. The input frequency Fref3_ck must be between 4 and 16 MHz. In order to change the FRACN value on-the-fly even if the PLL is enabled, the application must proceed as follows: Set the bit PLL3FRACEN to 0. Write the new fractional value into PLL3FRACN. Set the bit PLL3FRACEN to 1.


    static constexpr uint32_t RCC_CIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RCC_CIER_LSIRDYIE = 0x1; // LSI ready interrupt enable Set and cleared by software to enable/disable interrupt caused by the LSI oscillator stabilization.
    static constexpr uint32_t RCC_CIER_LSERDYIE = 0x2; // LSE ready interrupt enable Set and cleared by software to enable/disable interrupt caused by the LSE oscillator stabilization.
    static constexpr uint32_t RCC_CIER_MSISRDYIE = 0x4; // MSIS ready interrupt enable Set and cleared by software to enable/disable interrupt caused by the MSIS oscillator stabilization.
    static constexpr uint32_t RCC_CIER_HSIRDYIE = 0x8; // HSI16 ready interrupt enable Set and cleared by software to enable/disable interrupt caused by the HSI16 oscillator stabilization.
    static constexpr uint32_t RCC_CIER_HSERDYIE = 0x10; // HSE ready interrupt enable Set and cleared by software to enable/disable interrupt caused by the HSE oscillator stabilization.
    static constexpr uint32_t RCC_CIER_HSI48RDYIE = 0x20; // HSI48 ready interrupt enable Set and cleared by software to enable/disable interrupt caused by the HSI48 oscillator stabilization.
    static constexpr uint32_t RCC_CIER_PLL1RDYIE = 0x40; // PLL ready interrupt enable Set and cleared by software to enable/disable interrupt caused by PLL1 lock.
    static constexpr uint32_t RCC_CIER_PLL2RDYIE = 0x80; // PLL2 ready interrupt enable Set and cleared by software to enable/disable interrupt caused by PLL2 lock.
    static constexpr uint32_t RCC_CIER_PLL3RDYIE = 0x100; // PLL3 ready interrupt enable Set and cleared by software to enable/disable interrupt caused by PLL3 lock.
    static constexpr uint32_t RCC_CIER_MSIKRDYIE = 0x800; // MSIK ready interrupt enable Set and cleared by software to enable/disable interrupt caused by the MSIK oscillator stabilization.
    static constexpr uint32_t RCC_CIER_SHSIRDYIE = 0x1000; // SHSI ready interrupt enable Set and cleared by software to enable/disable interrupt caused by the SHSI oscillator stabilization.

    static constexpr uint32_t RCC_CIFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RCC_CIFR_LSIRDYF = 0x1; // LSI ready interrupt flag Set by hardware when the LSI clock becomes stable and LSIRDYIE is set. Cleared by software setting the LSIRDYC bit.
    static constexpr uint32_t RCC_CIFR_LSERDYF = 0x2; // LSE ready interrupt flag Set by hardware when the LSE clock becomes stable and LSERDYIE is set. Cleared by software setting the LSERDYC bit.
    static constexpr uint32_t RCC_CIFR_MSISRDYF = 0x4; // MSIS ready interrupt flag Set by hardware when the MSIS clock becomes stable and MSISRDYIE is set. Cleared by software setting the MSISRDYC bit.
    static constexpr uint32_t RCC_CIFR_HSIRDYF = 0x8; // HSI16 ready interrupt flag Set by hardware when the HSI16 clock becomes stable and HSIRDYIE is set in a response to setting the HSION (see RCC_CR). When HSION is not set but the HSI16 oscillator is enabled by the peripheral through a clock request, this bit is not set and no interrupt is generated. Cleared by software setting the HSIRDYC bit.
    static constexpr uint32_t RCC_CIFR_HSERDYF = 0x10; // HSE ready interrupt flag Set by hardware when the HSE clock becomes stable and HSERDYIE is set. Cleared by software setting the HSERDYC bit.
    static constexpr uint32_t RCC_CIFR_HSI48RDYF = 0x20; // HSI48 ready interrupt flag Set by hardware when the HSI48 clock becomes stable and HSI48RDYIE is set. Cleared by software setting the HSI48RDYC bit.
    static constexpr uint32_t RCC_CIFR_PLL1RDYF = 0x40; // PLL1 ready interrupt flag Set by hardware when the PLL1 locks and PLL1RDYIE is set. Cleared by software setting the PLL1RDYC bit.
    static constexpr uint32_t RCC_CIFR_PLL2RDYF = 0x80; // PLL2 ready interrupt flag Set by hardware when the PLL2 locks and PLL2RDYIE is set. Cleared by software setting the PLL2RDYC bit.
    static constexpr uint32_t RCC_CIFR_PLL3RDYF = 0x100; // PLL3 ready interrupt flag Set by hardware when the PLL3 locks and PLL3RDYIE is set. Cleared by software setting the PLL3RDYC bit.
    static constexpr uint32_t RCC_CIFR_CSSF = 0x400; // Clock security system interrupt flag Set by hardware when a failure is detected in the HSE oscillator. Cleared by software setting the CSSC bit.
    static constexpr uint32_t RCC_CIFR_MSIKRDYF = 0x800; // MSIK ready interrupt flag Set by hardware when the MSIK clock becomes stable and MSIKRDYIE is set. Cleared by software setting the MSIKRDYC bit.
    static constexpr uint32_t RCC_CIFR_SHSIRDYF = 0x1000; // SHSI ready interrupt flag Set by hardware when the SHSI clock becomes stable and SHSIRDYIE is set. Cleared by software setting the SHSIRDYC bit.

    static constexpr uint32_t RCC_CICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RCC_CICR_LSIRDYC = 0x1; // LSI ready interrupt clear Writing this bit to 1 clears the LSIRDYF flag. Writing 0 has no effect.
    static constexpr uint32_t RCC_CICR_LSERDYC = 0x2; // LSE ready interrupt clear Writing this bit to 1 clears the LSERDYF flag. Writing 0 has no effect.
    static constexpr uint32_t RCC_CICR_MSISRDYC = 0x4; // MSIS ready interrupt clear Writing this bit to 1 clears the MSISRDYF flag. Writing 0 has no effect.
    static constexpr uint32_t RCC_CICR_HSIRDYC = 0x8; // HSI16 ready interrupt clear Writing this bit to 1 clears the HSIRDYF flag. Writing 0 has no effect.
    static constexpr uint32_t RCC_CICR_HSERDYC = 0x10; // HSE ready interrupt clear Writing this bit to 1 clears the HSERDYF flag. Writing 0 has no effect.
    static constexpr uint32_t RCC_CICR_HSI48RDYC = 0x20; // HSI48 ready interrupt clear Writing this bit to 1 clears the HSI48RDYF flag. Writing 0 has no effect.
    static constexpr uint32_t RCC_CICR_PLL1RDYC = 0x40; // PLL1 ready interrupt clear Writing this bit to 1 clears the PLL1RDYF flag. Writing 0 has no effect.
    static constexpr uint32_t RCC_CICR_PLL2RDYC = 0x80; // PLL2 ready interrupt clear Writing this bit to 1 clears the PLL2RDYF flag. Writing 0 has no effect.
    static constexpr uint32_t RCC_CICR_PLL3RDYC = 0x100; // PLL3 ready interrupt clear Writing this bit to 1 clears the PLL3RDYF flag. Writing 0 has no effect.
    static constexpr uint32_t RCC_CICR_CSSC = 0x400; // Clock security system interrupt clear Writing this bit to 1 clears the CSSF flag. Writing 0 has no effect.
    static constexpr uint32_t RCC_CICR_MSIKRDYC = 0x800; // MSIK oscillator ready interrupt clear Writing this bit to 1 clears the MSIKRDYF flag. Writing 0 has no effect.
    static constexpr uint32_t RCC_CICR_SHSIRDYC = 0x1000; // SHSI oscillator ready interrupt clear Writing this bit to 1 clears the SHSIRDYF flag. Writing 0 has no effect.


    static constexpr uint32_t RCC_AHB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RCC_AHB1RSTR_GPDMA1RST = 0x1; // GPDMA1 reset Set and cleared by software.
    static constexpr uint32_t RCC_AHB1RSTR_CORDICRST = 0x2; // CORDIC reset Set and cleared by software.
    static constexpr uint32_t RCC_AHB1RSTR_FMACRST = 0x4; // FMAC reset Set and cleared by software.
    static constexpr uint32_t RCC_AHB1RSTR_MDF1RST = 0x8; // MDF1 reset Set and cleared by software.
    static constexpr uint32_t RCC_AHB1RSTR_CRCRST = 0x1000; // CRC reset Set and cleared by software.
    static constexpr uint32_t RCC_AHB1RSTR_TSCRST = 0x10000; // TSC reset Set and cleared by software.
    static constexpr uint32_t RCC_AHB1RSTR_RAMCFGRST = 0x20000; // RAMCFG reset Set and cleared by software.
    static constexpr uint32_t RCC_AHB1RSTR_DMA2DRST = 0x40000; // DMA2D reset Set and cleared by software.

    static constexpr uint32_t RCC_AHB2RSTR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RCC_AHB2RSTR1_GPIOARST = 0x1; // IO port A reset Set and cleared by software.
    static constexpr uint32_t RCC_AHB2RSTR1_GPIOBRST = 0x2; // IO port B reset Set and cleared by software.
    static constexpr uint32_t RCC_AHB2RSTR1_GPIOCRST = 0x4; // IO port C reset Set and cleared by software.
    static constexpr uint32_t RCC_AHB2RSTR1_GPIODRST = 0x8; // IO port D reset Set and cleared by software.
    static constexpr uint32_t RCC_AHB2RSTR1_GPIOERST = 0x10; // IO port E reset Set and cleared by software.
    static constexpr uint32_t RCC_AHB2RSTR1_GPIOFRST = 0x20; // IO port F reset Set and cleared by software.
    static constexpr uint32_t RCC_AHB2RSTR1_GPIOGRST = 0x40; // IO port G reset Set and cleared by software.
    static constexpr uint32_t RCC_AHB2RSTR1_GPIOHRST = 0x80; // IO port H reset Set and cleared by software.
    static constexpr uint32_t RCC_AHB2RSTR1_GPIOIRST = 0x100; // IO port I reset Set and cleared by software.
    static constexpr uint32_t RCC_AHB2RSTR1_ADC1RST = 0x400; // ADC1 reset Set and cleared by software.
    static constexpr uint32_t RCC_AHB2RSTR1_DCMI_PSSIRST = 0x1000; // DCMI and PSSI reset Set and cleared by software.
    static constexpr uint32_t RCC_AHB2RSTR1_OTGRST = 0x4000; // OTG_FS reset Set and cleared by software.
    static constexpr uint32_t RCC_AHB2RSTR1_AESRST = 0x10000; // AES hardware accelerator reset Set and cleared by software.
    static constexpr uint32_t RCC_AHB2RSTR1_HASHRST = 0x20000; // Hash reset Set and cleared by software.
    static constexpr uint32_t RCC_AHB2RSTR1_RNGRST = 0x40000; // Random number generator reset Set and cleared by software.
    static constexpr uint32_t RCC_AHB2RSTR1_PKARST = 0x80000; // PKA reset Set and cleared by software.
    static constexpr uint32_t RCC_AHB2RSTR1_SAESRST = 0x100000; // SAES hardware accelerator reset Set and cleared by software.
    static constexpr uint32_t RCC_AHB2RSTR1_OCTOSPIMRST = 0x200000; // OCTOSPIM reset Set and cleared by software.
    static constexpr uint32_t RCC_AHB2RSTR1_OTFDEC1RST = 0x800000; // OTFDEC1 reset Set and cleared by software.
    static constexpr uint32_t RCC_AHB2RSTR1_OTFDEC2RST = 0x1000000; // OTFDEC2 reset Set and cleared by software.
    static constexpr uint32_t RCC_AHB2RSTR1_SDMMC1RST = 0x8000000; // SDMMC1 reset Set and cleared by software.
    static constexpr uint32_t RCC_AHB2RSTR1_SDMMC2RST = 0x10000000; // SDMMC2 reset Set and cleared by software.

    static constexpr uint32_t RCC_AHB2RSTR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RCC_AHB2RSTR2_FSMCRST = 0x1; // Flexible memory controller reset Set and cleared by software.
    static constexpr uint32_t RCC_AHB2RSTR2_OCTOSPI1RST = 0x10; // OCTOSPI1 reset Set and cleared by software.
    static constexpr uint32_t RCC_AHB2RSTR2_OCTOSPI2RST = 0x100; // OCTOSPI2 reset Set and cleared by software.

    static constexpr uint32_t RCC_AHB3RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RCC_AHB3RSTR_LPGPIO1RST = 0x1; // LPGPIO1 reset Set and cleared by software.
    static constexpr uint32_t RCC_AHB3RSTR_ADC4RST = 0x20; // ADC4 reset Set and cleared by software.
    static constexpr uint32_t RCC_AHB3RSTR_DAC1RST = 0x40; // DAC1 reset Set and cleared by software.
    static constexpr uint32_t RCC_AHB3RSTR_LPDMA1RST = 0x200; // LPDMA1 reset Set and cleared by software.
    static constexpr uint32_t RCC_AHB3RSTR_ADF1RST = 0x400; // ADF1 reset Set and cleared by software.


    static constexpr uint32_t RCC_APB1RSTR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RCC_APB1RSTR1_TIM2RST = 0x1; // TIM2 reset Set and cleared by software.
    static constexpr uint32_t RCC_APB1RSTR1_TIM3RST = 0x2; // TIM3 reset Set and cleared by software.
    static constexpr uint32_t RCC_APB1RSTR1_TIM4RST = 0x4; // TIM4 reset Set and cleared by software.
    static constexpr uint32_t RCC_APB1RSTR1_TIM5RST = 0x8; // TIM5 reset Set and cleared by software.
    static constexpr uint32_t RCC_APB1RSTR1_TIM6RST = 0x10; // TIM6 reset Set and cleared by software.
    static constexpr uint32_t RCC_APB1RSTR1_TIM7RST = 0x20; // TIM7 reset Set and cleared by software.
    static constexpr uint32_t RCC_APB1RSTR1_SPI2RST = 0x4000; // SPI2 reset Set and cleared by software.
    static constexpr uint32_t RCC_APB1RSTR1_USART2RST = 0x20000; // USART2 reset Set and cleared by software.
    static constexpr uint32_t RCC_APB1RSTR1_USART3RST = 0x40000; // USART3 reset Set and cleared by software.
    static constexpr uint32_t RCC_APB1RSTR1_UART4RST = 0x80000; // UART4 reset Set and cleared by software.
    static constexpr uint32_t RCC_APB1RSTR1_UART5RST = 0x100000; // UART5 reset Set and cleared by software.
    static constexpr uint32_t RCC_APB1RSTR1_I2C1RST = 0x200000; // I2C1 reset Set and cleared by software.
    static constexpr uint32_t RCC_APB1RSTR1_I2C2RST = 0x400000; // I2C2 reset Set and cleared by software.
    static constexpr uint32_t RCC_APB1RSTR1_CRSRST = 0x1000000; // CRS reset Set and cleared by software.

    static constexpr uint32_t RCC_APB1RSTR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RCC_APB1RSTR2_I2C4RST = 0x2; // I2C4 reset Set and cleared by software
    static constexpr uint32_t RCC_APB1RSTR2_LPTIM2RST = 0x20; // LPTIM2 reset Set and cleared by software.
    static constexpr uint32_t RCC_APB1RSTR2_FDCAN1RST = 0x200; // FDCAN1 reset Set and cleared by software.
    static constexpr uint32_t RCC_APB1RSTR2_UCPD1RST = 0x800000; // UCPD1 reset Set and cleared by software.

    static constexpr uint32_t RCC_APB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RCC_APB2RSTR_TIM1RST = 0x800; // TIM1 reset Set and cleared by software.
    static constexpr uint32_t RCC_APB2RSTR_SPI1RST = 0x1000; // SPI1 reset Set and cleared by software.
    static constexpr uint32_t RCC_APB2RSTR_TIM8RST = 0x2000; // TIM8 reset Set and cleared by software.
    static constexpr uint32_t RCC_APB2RSTR_USART1RST = 0x4000; // USART1 reset Set and cleared by software.
    static constexpr uint32_t RCC_APB2RSTR_TIM15RST = 0x10000; // TIM15 reset Set and cleared by software.
    static constexpr uint32_t RCC_APB2RSTR_TIM16RST = 0x20000; // TIM16 reset Set and cleared by software.
    static constexpr uint32_t RCC_APB2RSTR_TIM17RST = 0x40000; // TIM17 reset Set and cleared by software.
    static constexpr uint32_t RCC_APB2RSTR_SAI1RST = 0x200000; // SAI1 reset Set and cleared by software.
    static constexpr uint32_t RCC_APB2RSTR_SAI2RST = 0x400000; // SAI2 reset Set and cleared by software.

    static constexpr uint32_t RCC_APB3RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RCC_APB3RSTR_SYSCFGRST = 0x2; // SYSCFG reset Set and cleared by software.
    static constexpr uint32_t RCC_APB3RSTR_SPI3RST = 0x20; // SPI3 reset Set and cleared by software.
    static constexpr uint32_t RCC_APB3RSTR_LPUART1RST = 0x40; // LPUART1 reset Set and cleared by software.
    static constexpr uint32_t RCC_APB3RSTR_I2C3RST = 0x80; // I2C3 reset Set and cleared by software.
    static constexpr uint32_t RCC_APB3RSTR_LPTIM1RST = 0x800; // LPTIM1 reset Set and cleared by software.
    static constexpr uint32_t RCC_APB3RSTR_LPTIM3RST = 0x1000; // LPTIM3 reset Set and cleared by software.
    static constexpr uint32_t RCC_APB3RSTR_LPTIM4RST = 0x2000; // LPTIM4 reset Set and cleared by software.
    static constexpr uint32_t RCC_APB3RSTR_OPAMPRST = 0x4000; // OPAMP reset Set and cleared by software.
    static constexpr uint32_t RCC_APB3RSTR_COMPRST = 0x8000; // COMP reset Set and cleared by software.
    static constexpr uint32_t RCC_APB3RSTR_VREFRST = 0x100000; // VREFBUF reset Set and cleared by software.


    static constexpr uint32_t RCC_AHB1ENR_RESET_VALUE = 0xd0000100; // Reset value
    static constexpr uint32_t RCC_AHB1ENR_GPDMA1EN = 0x1; // GPDMA1 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_AHB1ENR_CORDICEN = 0x2; // CORDIC clock enable Set and cleared by software.
    static constexpr uint32_t RCC_AHB1ENR_FMACEN = 0x4; // FMAC clock enable Set and reset by software.
    static constexpr uint32_t RCC_AHB1ENR_MDF1EN = 0x8; // MDF1 clock enable Set and reset by software.
    static constexpr uint32_t RCC_AHB1ENR_FLASHEN = 0x100; // FLASH clock enable Set and cleared by software. This bit can be disabled only when the Flash memory is in power down mode.
    static constexpr uint32_t RCC_AHB1ENR_CRCEN = 0x1000; // CRC clock enable Set and cleared by software.
    static constexpr uint32_t RCC_AHB1ENR_TSCEN = 0x10000; // Touch sensing controller clock enable Set and cleared by software.
    static constexpr uint32_t RCC_AHB1ENR_RAMCFGEN = 0x20000; // RAMCFG clock enable Set and cleared by software.
    static constexpr uint32_t RCC_AHB1ENR_DMA2DEN = 0x40000; // DMA2D clock enable Set and cleared by software.
    static constexpr uint32_t RCC_AHB1ENR_GTZC1EN = 0x1000000; // GTZC1 clock enable Set and reset by software.
    static constexpr uint32_t RCC_AHB1ENR_BKPSRAMEN = 0x10000000; // BKPSRAM clock enable Set and reset by software.
    static constexpr uint32_t RCC_AHB1ENR_DCACHE1EN = 0x40000000; // DCACHE1 clock enable Set and reset by software. Note: DCACHE1 clock must be enabled when external memories are accessed through OCTOSPI1, OCTOSPI2 or FSMC, even if the DCACHE1 is bypassed.
    static constexpr uint32_t RCC_AHB1ENR_SRAM1EN = 0x80000000; // SRAM1 clock enable Set and reset by software.

    static constexpr uint32_t RCC_AHB2ENR1_RESET_VALUE = 0xc0000000; // Reset value
    static constexpr uint32_t RCC_AHB2ENR1_GPIOAEN = 0x1; // IO port A clock enable Set and cleared by software.
    static constexpr uint32_t RCC_AHB2ENR1_GPIOBEN = 0x2; // IO port B clock enable Set and cleared by software.
    static constexpr uint32_t RCC_AHB2ENR1_GPIOCEN = 0x4; // IO port C clock enable Set and cleared by software.
    static constexpr uint32_t RCC_AHB2ENR1_GPIODEN = 0x8; // IO port D clock enable Set and cleared by software.
    static constexpr uint32_t RCC_AHB2ENR1_GPIOEEN = 0x10; // IO port E clock enable Set and cleared by software.
    static constexpr uint32_t RCC_AHB2ENR1_GPIOFEN = 0x20; // IO port F clock enable Set and cleared by software.
    static constexpr uint32_t RCC_AHB2ENR1_GPIOGEN = 0x40; // IO port G clock enable Set and cleared by software.
    static constexpr uint32_t RCC_AHB2ENR1_GPIOHEN = 0x80; // IO port H clock enable Set and cleared by software.
    static constexpr uint32_t RCC_AHB2ENR1_GPIOIEN = 0x100; // IO port I clock enable Set and cleared by software.
    static constexpr uint32_t RCC_AHB2ENR1_ADC1EN = 0x400; // ADC1 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_AHB2ENR1_DCMI_PSSIEN = 0x1000; // DCMI and PSSI clock enable Set and cleared by software.
    static constexpr uint32_t RCC_AHB2ENR1_OTGEN = 0x4000; // OTG_FS clock enable Set and cleared by software.
    static constexpr uint32_t RCC_AHB2ENR1_AESEN = 0x10000; // AES clock enable Set and cleared by software.
    static constexpr uint32_t RCC_AHB2ENR1_HASHEN = 0x20000; // HASH clock enable Set and cleared by software
    static constexpr uint32_t RCC_AHB2ENR1_RNGEN = 0x40000; // RNG clock enable Set and cleared by software.
    static constexpr uint32_t RCC_AHB2ENR1_PKAEN = 0x80000; // PKA clock enable Set and cleared by software.
    static constexpr uint32_t RCC_AHB2ENR1_SAESEN = 0x100000; // SAES clock enable Set and cleared by software.
    static constexpr uint32_t RCC_AHB2ENR1_OCTOSPIMEN = 0x200000; // OCTOSPIM clock enable Set and cleared by software.
    static constexpr uint32_t RCC_AHB2ENR1_OTFDEC1EN = 0x800000; // OTFDEC1 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_AHB2ENR1_OTFDEC2EN = 0x1000000; // OTFDEC2 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_AHB2ENR1_SDMMC1EN = 0x8000000; // SDMMC1 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_AHB2ENR1_SDMMC2EN = 0x10000000; // SDMMC2 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_AHB2ENR1_SRAM2EN = 0x40000000; // SRAM2 clock enable Set and reset by software.
    static constexpr uint32_t RCC_AHB2ENR1_SRAM3EN = 0x80000000; // SRAM3 clock enable Set and reset by software.

    static constexpr uint32_t RCC_AHB2ENR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RCC_AHB2ENR2_FSMCEN = 0x1; // FSMC clock enable Set and cleared by software.
    static constexpr uint32_t RCC_AHB2ENR2_OCTOSPI1EN = 0x10; // OCTOSPI1 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_AHB2ENR2_OCTOSPI2EN = 0x100; // OCTOSPI2 clock enable Set and cleared by software.

    static constexpr uint32_t RCC_AHB3ENR_RESET_VALUE = 0x80000000; // Reset value
    static constexpr uint32_t RCC_AHB3ENR_LPGPIO1EN = 0x1; // LPGPIO1 enable Set and cleared by software.
    static constexpr uint32_t RCC_AHB3ENR_PWREN = 0x4; // PWR clock enable Set and cleared by software.
    static constexpr uint32_t RCC_AHB3ENR_ADC4EN = 0x20; // ADC4 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_AHB3ENR_DAC1EN = 0x40; // DAC1 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_AHB3ENR_LPDMA1EN = 0x200; // LPDMA1 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_AHB3ENR_ADF1EN = 0x400; // ADF1 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_AHB3ENR_GTZC2EN = 0x1000; // GTZC2 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_AHB3ENR_SRAM4EN = 0x80000000; // SRAM4 clock enable Set and reset by software.


    static constexpr uint32_t RCC_APB1ENR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RCC_APB1ENR1_TIM2EN = 0x1; // TIM2 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_APB1ENR1_TIM3EN = 0x2; // TIM3 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_APB1ENR1_TIM4EN = 0x4; // TIM4 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_APB1ENR1_TIM5EN = 0x8; // TIM5 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_APB1ENR1_TIM6EN = 0x10; // TIM6 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_APB1ENR1_TIM7EN = 0x20; // TIM7 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_APB1ENR1_WWDGEN = 0x800; // WWDG clock enable Set by software to enable the window watchdog clock. Reset by hardware system reset. This bit can also be set by hardware if the WWDG_SW option bit is reset.
    static constexpr uint32_t RCC_APB1ENR1_SPI2EN = 0x4000; // SPI2 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_APB1ENR1_USART2EN = 0x20000; // USART2 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_APB1ENR1_USART3EN = 0x40000; // USART3 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_APB1ENR1_UART4EN = 0x80000; // UART4 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_APB1ENR1_UART5EN = 0x100000; // UART5 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_APB1ENR1_I2C1EN = 0x200000; // I2C1 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_APB1ENR1_I2C2EN = 0x400000; // I2C2 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_APB1ENR1_CRSEN = 0x1000000; // CRS clock enable Set and cleared by software.

    static constexpr uint32_t RCC_APB1ENR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RCC_APB1ENR2_I2C4EN = 0x2; // I2C4 clock enable Set and cleared by software
    static constexpr uint32_t RCC_APB1ENR2_LPTIM2EN = 0x20; // LPTIM2 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_APB1ENR2_FDCAN1EN = 0x200; // FDCAN1 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_APB1ENR2_UCPD1EN = 0x800000; // UCPD1 clock enable Set and cleared by software.

    static constexpr uint32_t RCC_APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RCC_APB2ENR_TIM1EN = 0x800; // TIM1 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_APB2ENR_SPI1EN = 0x1000; // SPI1 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_APB2ENR_TIM8EN = 0x2000; // TIM8 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_APB2ENR_USART1EN = 0x4000; // USART1clock enable Set and cleared by software.
    static constexpr uint32_t RCC_APB2ENR_TIM15EN = 0x10000; // TIM15 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_APB2ENR_TIM16EN = 0x20000; // TIM16 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_APB2ENR_TIM17EN = 0x40000; // TIM17 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_APB2ENR_SAI1EN = 0x200000; // SAI1 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_APB2ENR_SAI2EN = 0x400000; // SAI2 clock enable Set and cleared by software.

    static constexpr uint32_t RCC_APB3ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RCC_APB3ENR_SYSCFGEN = 0x2; // SYSCFG clock enable Set and cleared by software.
    static constexpr uint32_t RCC_APB3ENR_SPI3EN = 0x20; // SPI3 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_APB3ENR_LPUART1EN = 0x40; // LPUART1 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_APB3ENR_I2C3EN = 0x80; // I2C3 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_APB3ENR_LPTIM1EN = 0x800; // LPTIM1 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_APB3ENR_LPTIM3EN = 0x1000; // LPTIM3 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_APB3ENR_LPTIM4EN = 0x2000; // LPTIM4 clock enable Set and cleared by software.
    static constexpr uint32_t RCC_APB3ENR_OPAMPEN = 0x4000; // OPAMP clock enable Set and cleared by software.
    static constexpr uint32_t RCC_APB3ENR_COMPEN = 0x8000; // COMP clock enable Set and cleared by software.
    static constexpr uint32_t RCC_APB3ENR_VREFEN = 0x100000; // VREFBUF clock enable Set and cleared by software.
    static constexpr uint32_t RCC_APB3ENR_RTCAPBEN = 0x200000; // RTC and TAMP APB clock enable Set and cleared by software.


    static constexpr uint32_t RCC_AHB1SMENR_RESET_VALUE = 0xffffffff; // Reset value
    static constexpr uint32_t RCC_AHB1SMENR_GPDMA1SMEN = 0x1; // GPDMA1 clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes.
    static constexpr uint32_t RCC_AHB1SMENR_CORDICSMEN = 0x2; // CORDIC clocks enable during Sleep and Stop modes Set and cleared by software during Sleep mode.
    static constexpr uint32_t RCC_AHB1SMENR_FMACSMEN = 0x4; // FMAC clocks enable during Sleep and Stop modes. Set and cleared by software.
    static constexpr uint32_t RCC_AHB1SMENR_MDF1SMEN = 0x8; // MDF1 clocks enable during Sleep and Stop modes. Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes.
    static constexpr uint32_t RCC_AHB1SMENR_FLASHSMEN = 0x100; // FLASH clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_AHB1SMENR_CRCSMEN = 0x1000; // CRC clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_AHB1SMENR_TSCSMEN = 0x10000; // TSC clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_AHB1SMENR_RAMCFGSMEN = 0x20000; // RAMCFG clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_AHB1SMENR_DMA2DSMEN = 0x40000; // DMA2D clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_AHB1SMENR_GTZC1SMEN = 0x1000000; // GTZC1 clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_AHB1SMENR_BKPSRAMSMEN = 0x10000000; // BKPSRAM clocks enable during Sleep and Stop modes Set and cleared by software
    static constexpr uint32_t RCC_AHB1SMENR_ICACHESMEN = 0x20000000; // ICACHE clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_AHB1SMENR_DCACHE1SMEN = 0x40000000; // DCACHE1 clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_AHB1SMENR_SRAM1SMEN = 0x80000000; // SRAM1 clocks enable during Sleep and Stop modes Set and cleared by software.

    static constexpr uint32_t RCC_AHB2SMENR1_RESET_VALUE = 0xffffffff; // Reset value
    static constexpr uint32_t RCC_AHB2SMENR1_GPIOASMEN = 0x1; // IO port A clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_AHB2SMENR1_GPIOBSMEN = 0x2; // IO port B clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_AHB2SMENR1_GPIOCSMEN = 0x4; // IO port C clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_AHB2SMENR1_GPIODSMEN = 0x8; // IO port D clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_AHB2SMENR1_GPIOESMEN = 0x10; // IO port E clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_AHB2SMENR1_GPIOFSMEN = 0x20; // IO port F clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_AHB2SMENR1_GPIOGSMEN = 0x40; // IO port G clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_AHB2SMENR1_GPIOHSMEN = 0x80; // IO port H clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_AHB2SMENR1_GPIOISMEN = 0x100; // IO port I clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_AHB2SMENR1_ADC1SMEN = 0x400; // ADC1 clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_AHB2SMENR1_DCMI_PSSISMEN = 0x1000; // DCMI and PSSI clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_AHB2SMENR1_OTGSMEN = 0x4000; // OTG_FS clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_AHB2SMENR1_AESSMEN = 0x10000; // AES clock enable during Sleep and Stop modes Set and cleared by software
    static constexpr uint32_t RCC_AHB2SMENR1_HASHSMEN = 0x20000; // HASH clock enable during Sleep and Stop modes Set and cleared by software
    static constexpr uint32_t RCC_AHB2SMENR1_RNGSMEN = 0x40000; // Random number generator (RNG) clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_AHB2SMENR1_PKASMEN = 0x80000; // PKA clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_AHB2SMENR1_SAESSMEN = 0x100000; // SAES accelerator clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_AHB2SMENR1_OCTOSPIMSMEN = 0x200000; // OCTOSPIM clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_AHB2SMENR1_OTFDEC1SMEN = 0x800000; // OTFDEC1 clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_AHB2SMENR1_OTFDEC2SMEN = 0x1000000; // OTFDEC2 clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_AHB2SMENR1_SDMMC1SMEN = 0x8000000; // SDMMC1 clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_AHB2SMENR1_SDMMC2SMEN = 0x10000000; // SDMMC2 clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_AHB2SMENR1_SRAM2SMEN = 0x40000000; // SRAM2 clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_AHB2SMENR1_SRAM3SMEN = 0x80000000; // SRAM3 clocks enable during Sleep and Stop modes Set and cleared by software.

    static constexpr uint32_t RCC_AHB2SMENR2_RESET_VALUE = 0xffffffff; // Reset value
    static constexpr uint32_t RCC_AHB2SMENR2_FSMCSMEN = 0x1; // FSMC clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_AHB2SMENR2_OCTOSPI1SMEN = 0x10; // OCTOSPI1 clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_AHB2SMENR2_OCTOSPI2SMEN = 0x100; // OCTOSPI2 clocks enable during Sleep and Stop modes Set and cleared by software.

    static constexpr uint32_t RCC_AHB3SMENR_RESET_VALUE = 0xffffffff; // Reset value
    static constexpr uint32_t RCC_AHB3SMENR_LPGPIO1SMEN = 0x1; // LPGPIO1 enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_AHB3SMENR_PWRSMEN = 0x4; // PWR clock enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_AHB3SMENR_ADC4SMEN = 0x20; // ADC4 clock enable during Sleep and Stop modes Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes.
    static constexpr uint32_t RCC_AHB3SMENR_DAC1SMEN = 0x40; // DAC1 clock enable during Sleep and Stop modes Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes.
    static constexpr uint32_t RCC_AHB3SMENR_LPDMA1SMEN = 0x200; // LPDMA1 clock enable during Sleep and Stop modes Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes.
    static constexpr uint32_t RCC_AHB3SMENR_ADF1SMEN = 0x400; // ADF1 clock enable during Sleep and Stop modes Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes.
    static constexpr uint32_t RCC_AHB3SMENR_GTZC2SMEN = 0x1000; // GTZC2 clock enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_AHB3SMENR_SRAM4SMEN = 0x80000000; // SRAM4 clocks enable during Sleep and Stop modes Set and cleared by software.


    static constexpr uint32_t RCC_APB1SMENR1_RESET_VALUE = 0xffffffff; // Reset value
    static constexpr uint32_t RCC_APB1SMENR1_TIM2SMEN = 0x1; // TIM2 clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_APB1SMENR1_TIM3SMEN = 0x2; // TIM3 clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_APB1SMENR1_TIM4SMEN = 0x4; // TIM4 clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_APB1SMENR1_TIM5SMEN = 0x8; // TIM5 clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_APB1SMENR1_TIM6SMEN = 0x10; // TIM6 clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_APB1SMENR1_TIM7SMEN = 0x20; // TIM7 clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_APB1SMENR1_WWDGSMEN = 0x800; // Window watchdog clocks enable during Sleep and Stop modes Set and cleared by software. This bit is forced to 1 by hardware when the hardware WWDG option is activated.
    static constexpr uint32_t RCC_APB1SMENR1_SPI2SMEN = 0x4000; // SPI2 clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes.
    static constexpr uint32_t RCC_APB1SMENR1_USART2SMEN = 0x20000; // USART2 clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes.
    static constexpr uint32_t RCC_APB1SMENR1_USART3SMEN = 0x40000; // USART3 clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes.
    static constexpr uint32_t RCC_APB1SMENR1_UART4SMEN = 0x80000; // UART4 clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes.
    static constexpr uint32_t RCC_APB1SMENR1_UART5SMEN = 0x100000; // UART5 clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes.
    static constexpr uint32_t RCC_APB1SMENR1_I2C1SMEN = 0x200000; // I2C1 clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes.
    static constexpr uint32_t RCC_APB1SMENR1_I2C2SMEN = 0x400000; // I2C2 clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes.
    static constexpr uint32_t RCC_APB1SMENR1_CRSSMEN = 0x1000000; // CRS clock enable during Sleep and Stop modes Set and cleared by software.

    static constexpr uint32_t RCC_APB1SMENR2_RESET_VALUE = 0xffffffff; // Reset value
    static constexpr uint32_t RCC_APB1SMENR2_I2C4SMEN = 0x2; // I2C4 clocks enable during Sleep and Stop modes Set and cleared by software Note: This bit must be set to allow the peripheral to wake up from Stop modes.
    static constexpr uint32_t RCC_APB1SMENR2_LPTIM2SMEN = 0x20; // LPTIM2 clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes.
    static constexpr uint32_t RCC_APB1SMENR2_FDCAN1SMEN = 0x200; // FDCAN1 clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_APB1SMENR2_UCPD1SMEN = 0x800000; // UCPD1 clocks enable during Sleep and Stop modes Set and cleared by software.

    static constexpr uint32_t RCC_APB2SMENR_RESET_VALUE = 0xffffffff; // Reset value
    static constexpr uint32_t RCC_APB2SMENR_TIM1SMEN = 0x800; // TIM1 clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_APB2SMENR_SPI1SMEN = 0x1000; // SPI1 clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes.
    static constexpr uint32_t RCC_APB2SMENR_TIM8SMEN = 0x2000; // TIM8 clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_APB2SMENR_USART1SMEN = 0x4000; // USART1clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes.
    static constexpr uint32_t RCC_APB2SMENR_TIM15SMEN = 0x10000; // TIM15 clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_APB2SMENR_TIM16SMEN = 0x20000; // TIM16 clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_APB2SMENR_TIM17SMEN = 0x40000; // TIM17 clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_APB2SMENR_SAI1SMEN = 0x200000; // SAI1 clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_APB2SMENR_SAI2SMEN = 0x400000; // SAI2 clocks enable during Sleep and Stop modes Set and cleared by software.

    static constexpr uint32_t RCC_APB3SMENR_RESET_VALUE = 0xffffffff; // Reset value
    static constexpr uint32_t RCC_APB3SMENR_SYSCFGSMEN = 0x2; // SYSCFG clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_APB3SMENR_SPI3SMEN = 0x20; // SPI3 clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes.
    static constexpr uint32_t RCC_APB3SMENR_LPUART1SMEN = 0x40; // LPUART1 clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes.
    static constexpr uint32_t RCC_APB3SMENR_I2C3SMEN = 0x80; // I2C3 clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes.
    static constexpr uint32_t RCC_APB3SMENR_LPTIM1SMEN = 0x800; // LPTIM1 clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes.
    static constexpr uint32_t RCC_APB3SMENR_LPTIM3SMEN = 0x1000; // LPTIM3 clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes.
    static constexpr uint32_t RCC_APB3SMENR_LPTIM4SMEN = 0x2000; // LPTIM4 clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes.
    static constexpr uint32_t RCC_APB3SMENR_OPAMPSMEN = 0x4000; // OPAMP clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_APB3SMENR_COMPSMEN = 0x8000; // COMP clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_APB3SMENR_VREFSMEN = 0x100000; // VREFBUF clocks enable during Sleep and Stop modes Set and cleared by software.
    static constexpr uint32_t RCC_APB3SMENR_RTCAPBSMEN = 0x200000; // RTC and TAMP APB clock enable during Sleep and Stop modes Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes.


    static constexpr uint32_t RCC_SRDAMR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RCC_SRDAMR_SPI3AMEN = 0x20; // SPI3 autonomous mode enable in Stop 0,1, 2 mode Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes.
    static constexpr uint32_t RCC_SRDAMR_LPUART1AMEN = 0x40; // LPUART1 autonomous mode enable in Stop 0,1, 2 mode Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes.
    static constexpr uint32_t RCC_SRDAMR_I2C3AMEN = 0x80; // I2C3 autonomous mode enable in Stop 0,1,2 mode Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes.
    static constexpr uint32_t RCC_SRDAMR_LPTIM1AMEN = 0x800; // LPTIM1 autonomous mode enable in Stop 0,1,2 mode Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes.
    static constexpr uint32_t RCC_SRDAMR_LPTIM3AMEN = 0x1000; // LPTIM3 autonomous mode enable in Stop 0,1,2 mode Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes.
    static constexpr uint32_t RCC_SRDAMR_LPTIM4AMEN = 0x2000; // LPTIM4 autonomous mode enable in Stop 0,1,2 mode Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes.
    static constexpr uint32_t RCC_SRDAMR_OPAMPAMEN = 0x4000; // OPAMP autonomous mode enable in Stop 0,1,2 mode Set and cleared by software.
    static constexpr uint32_t RCC_SRDAMR_COMPAMEN = 0x8000; // COMP autonomous mode enable in Stop 0,1,2 mode Set and cleared by software.
    static constexpr uint32_t RCC_SRDAMR_VREFAMEN = 0x100000; // VREFBUF autonomous mode enable in Stop 0,1,2 mode Set and cleared by software.
    static constexpr uint32_t RCC_SRDAMR_RTCAPBAMEN = 0x200000; // RTC and TAMP autonomous mode enable in Stop 0,1,2 mode Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes.
    static constexpr uint32_t RCC_SRDAMR_ADC4AMEN = 0x2000000; // ADC4 autonomous mode enable in Stop 0,1,2 mode Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes.
    static constexpr uint32_t RCC_SRDAMR_LPGPIO1AMEN = 0x4000000; // LPGPIO1 autonomous mode enable in Stop 0,1,2 mode Set and cleared by software.
    static constexpr uint32_t RCC_SRDAMR_DAC1AMEN = 0x8000000; // DAC1 autonomous mode enable in Stop 0,1,2 mode Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes.
    static constexpr uint32_t RCC_SRDAMR_LPDMA1AMEN = 0x10000000; // LPDMA1 autonomous mode enable in Stop 0,1,2 mode Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes.
    static constexpr uint32_t RCC_SRDAMR_ADF1AMEN = 0x20000000; // ADF1 autonomous mode enable in Stop 0,1,2 mode Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes.
    static constexpr uint32_t RCC_SRDAMR_SRAM4AMEN = 0x80000000; // SRAM4 autonomous mode enable in Stop 0,1,2 mode Set and cleared by software.


    static constexpr uint32_t RCC_CCIPR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> RCC_CCIPR1_USART1SEL; // USART1 kernel clock source selection This bits are used to select the USART1 kernel clock source. Note: The USART1 is functional in Stop 0 and Stop 1 mode only when the kernel clock is HSI16 or LSE.
    typedef bit_field_t<2, 0x3> RCC_CCIPR1_USART2SEL; // USART2 kernel clock source selection This bits are used to select the USART2 kernel clock source. Note: The USART2 is functional in Stop 0 and Stop 1 mode only when the kernel clock is HSI16 or LSE.
    typedef bit_field_t<4, 0x3> RCC_CCIPR1_USART3SEL; // USART3 kernel clock source selection This bits are used to select the USART3 kernel clock source. Note: The USART3 is functional in Stop 0 and Stop 1 mode only when the kernel clock is HSI16 or LSE.
    typedef bit_field_t<6, 0x3> RCC_CCIPR1_UART4SEL; // UART4 kernel clock source selection This bits are used to select the UART4 kernel clock source. Note: The UART4 is functional in Stop 0 and Stop 1 mode only when the kernel clock is HSI16 or LSE.
    typedef bit_field_t<8, 0x3> RCC_CCIPR1_UART5SEL; // UART5 kernel clock source selection These bits are used to select the UART5 kernel clock source. Note: The UART5 is functional in Stop 0 and Stop 1 mode only when the kernel clock is HSI16 or LSE.
    typedef bit_field_t<10, 0x3> RCC_CCIPR1_I2C1SEL; // I2C1 kernel clock source selection These bits are used to select the I2C1 kernel clock source. Note: The I2C1 is functional in Stop 0 and Stop 1 mode only when the kernel clock is HSI16 or MSIK.
    typedef bit_field_t<12, 0x3> RCC_CCIPR1_I2C2SEL; // I2C2 kernel clock source selection These bits are used to select the I2C2 kernel clock source. Note: The I2C2 is functional in Stop 0 and Stop 1 mode only when the kernel clock is HSI16 or MSIK.
    typedef bit_field_t<14, 0x3> RCC_CCIPR1_I2C4SEL; // I2C4 kernel clock source selection These bits are used to select the I2C4 kernel clock source. Note: The I2C4 is functional in Stop 0 and Stop 1 mode only when the kernel clock is HSI16 or MSIK.
    typedef bit_field_t<16, 0x3> RCC_CCIPR1_SPI2SEL; // SPI2 kernel clock source selection These bits are used to select the SPI2 kernel clock source. Note: The SPI2 is functional in Stop 0 and Stop 1 mode only when the kernel clock is HSI16 or MSIK.
    typedef bit_field_t<18, 0x3> RCC_CCIPR1_LPTIM2SEL; // Low-power timer 2 kernel clock source selection These bits are used to select the LPTIM2 kernel clock source. Note: The LPTIM2 is functional in Stop 0 and Stop 1 mode only when the kernel clock is LSI, LSE or HSI16 if HSIKERON = 1.
    typedef bit_field_t<20, 0x3> RCC_CCIPR1_SPI1SEL; // SPI1 kernel clock source selection These bits are used to select the SPI1 kernel clock source. Note: The SPI1 is functional in Stop 0 and Stop 1 mode only when the kernel clock is HSI16 or MSIK.
    typedef bit_field_t<22, 0x3> RCC_CCIPR1_SYSTICKSEL; // SysTick clock source selection These bits are used to select the SysTick clock source. Note: When LSE or LSI is selected, the AHB frequency must be at least four times higher than the LSI or LSE frequency. In addition, a jitter up to one HCLK cycle is introduced, due to the LSE or LSI sampling with HCLK in the SysTick circuitry.
    typedef bit_field_t<24, 0x3> RCC_CCIPR1_FDCAN1SEL; // FDCAN1 kernel clock source selection These bits are used to select the FDCAN1 kernel clock source.
    typedef bit_field_t<26, 0x3> RCC_CCIPR1_ICLKSEL; // intermediate clock source selection These bits are used to select the clock source used by OTG_FS and SDMMC.
    typedef bit_field_t<29, 0x7> RCC_CCIPR1_TIMICSEL; // Clocks sources for TIM16,TIM17 and LPTIM2 internal input capture When the TIMICSEL2 bit is set, the TIM16, TIM17 and LPTIM2 internal input capture can be connected either to HSI/256, MSI/4 or MSI/1024. Depending on TIMICSEL[1:0] value, MSI is either MSIK or MSIS. When TIMICSEL2 is cleared, the HSI, MSIK and MSIS clock sources cannot be selected as TIM16, TIM17 or LPTIM2 internal input capture. 0xx: HSI, MSIK and MSIS dividers disabled Note: The clock division must be disabled (TIMICSEL configured to 0xx) before selecting or changing a clock sources division.

    static constexpr uint32_t RCC_CCIPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> RCC_CCIPR2_MDF1SEL; // MDF1 kernel clock source selection These bits are used to select the MDF1 kernel clock source. others: reserved
    typedef bit_field_t<5, 0x7> RCC_CCIPR2_SAI1SEL; // SAI1 kernel clock source selection These bits are used to select the SAI1 kernel clock source. others: reserved Note: If the selected clock is the external clock and this clock is stopped, a switch to another clock is impossible.
    typedef bit_field_t<8, 0x7> RCC_CCIPR2_SAI2SEL; // SAI2 kernel clock source selection These bits are used to select the SAI2 kernel clock source. others: reserved Note: If the selected clock is the external clock and this clock is stopped, a switch to another clock is impossible.
    static constexpr uint32_t RCC_CCIPR2_SAESSEL = 0x800; // SAES kernel clock source selection This bit is used to select the SAES kernel clock source.
    typedef bit_field_t<12, 0x3> RCC_CCIPR2_RNGSEL; // RNGSEL kernel clock source selection These bits are used to select the RNG kernel clock source.
    static constexpr uint32_t RCC_CCIPR2_SDMMCSEL = 0x4000; // SDMMC1 and SDMMC2 kernel clock source selection This bit is used to select the SDMMC kernel clock source. It is recommended to change this bit only after reset and before enabling the SDMMC.
    typedef bit_field_t<20, 0x3> RCC_CCIPR2_OCTOSPISEL; // OCTOSPI1 and OCTOSPI2 kernel clock source selection These bits are used to select the OCTOSPI1 and OCTOSPI2 kernel clock source.

    static constexpr uint32_t RCC_CCIPR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> RCC_CCIPR3_LPUART1SEL; // LPUART1 kernel clock source selection These bits are used to select the LPUART1 kernel clock source. others: reserved Note: The LPUART1 is functional in Stop 0, Stop 1 and Stop 2 modes only when the kernel clock is HSI16, LSE or MSIK.
    typedef bit_field_t<3, 0x3> RCC_CCIPR3_SPI3SEL; // SPI3 kernel clock source selection These bits are used to select the SPI3 kernel clock source. Note: The SPI3 is functional in Stop 0, Stop 1 and Stop 2 modes only when the kernel clock is HSI16 or MSIK.
    typedef bit_field_t<6, 0x3> RCC_CCIPR3_I2C3SEL; // I2C3 kernel clock source selection These bits are used to select the I2C3 kernel clock source. Note: The I2C3 is functional in Stop 0, Stop 1 and Stop 2 modes only when the kernel clock is HSI16 or MSIK.
    typedef bit_field_t<8, 0x3> RCC_CCIPR3_LPTIM34SEL; // LPTIM3 and LPTIM4 kernel clock source selection These bits are used to select the LPTIM3 and LPTIM4 kernel clock source. Note: The LPTIM3 and LPTIM4 are functional in Stop 0, Stop 1 and Stop 2 modes only when the kernel clock is LSI, LSE, HSI16 with HSIKERON = 1 or MSIK with MSIKERON=1.
    typedef bit_field_t<10, 0x3> RCC_CCIPR3_LPTIM1SEL; // LPTIM1 kernel clock source selection These bits are used to select the LPTIM1 kernel clock source. Note: The LPTIM1 is functional in Stop 0, Stop 1 and Stop 2 modes only when the kernel clock is LSI, LSE, HSI16 with HSIKERON = 1 or MSIK with MSIKERON = 1.
    typedef bit_field_t<12, 0x7> RCC_CCIPR3_ADCDACSEL; // ADC1, ADC4 and DAC1 kernel clock source selection These bits are used to select the ADC1, ADC4 and DAC1 kernel clock source. others: reserved Note: The ADC1, ADC4 and DAC1 are functional in Stop 0, Stop 1 and Stop 2 modes only when the kernel clock is HSI16 or MSIK (only ADC4 and DAC1 are functional in Stop 2 mode).
    static constexpr uint32_t RCC_CCIPR3_DAC1SEL = 0x8000; // DAC1 sample and hold clock source selection This bit is used to select the DAC1 sample and hold clock source.
    typedef bit_field_t<16, 0x7> RCC_CCIPR3_ADF1SEL; // ADF1 kernel clock source selection These bits are used to select the ADF1 kernel clock source. others: reserved Note: The ADF1 is functional in Stop 0, Stop 1 and Stop 2 modes only when the kernel clock is AUDIOCLK or MSIK.


    static constexpr uint32_t RCC_BDCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RCC_BDCR_LSEON = 0x1; // LSE oscillator enable Set and cleared by software.
    static constexpr uint32_t RCC_BDCR_LSERDY = 0x2; // LSE oscillator ready Set and cleared by hardware to indicate when the external 32kHz oscillator is stable. After the LSEON bit is cleared, LSERDY goes low after six external low-speed oscillator clock cycles.
    static constexpr uint32_t RCC_BDCR_LSEBYP = 0x4; // LSE oscillator bypass Set and cleared by software to bypass oscillator in debug mode. This bit can be written only when the external 32kHz oscillator is disabled (LSEON = 0 and LSERDY = 0).
    typedef bit_field_t<3, 0x3> RCC_BDCR_LSEDRV; // LSE oscillator drive capability Set by software to modulate the drive capability of the LSE oscillator. This field can be written only when the external 32 kHz oscillator is disabled (LSEON = 0 and LSERDY = 0). Note: The oscillator is in &#39;Xtal mode when it is not in bypass mode.
    static constexpr uint32_t RCC_BDCR_LSECSSON = 0x20; // CSS on LSE enable Set by software to enable the CSS on LSE. LSECSSON must be enabled after the LSE oscillator is enabled (LSEON bit enabled) and ready (LSERDY flag set by hardware), and after the RTCSEL bit is selected. Once enabled, this bit cannot be disabled, except after a LSE failure detection (LSECSSD=1). In that case, the software must disable the LSECSSON bit.
    static constexpr uint32_t RCC_BDCR_LSECSSD = 0x40; // CSS on LSE failure Detection Set by hardware to indicate when a failure is detected by the CCS on the external 32kHz oscillator (LSE).
    static constexpr uint32_t RCC_BDCR_LSESYSEN = 0x80; // LSE system clock (LSESYS) enable Set by software to enable always the LSE system clock generated by RCC. This clock can be used by any peripheral when its source clock is the LSE or at system level in case of one of the LSCOSEL, MCO, MSI PLL mode or CSS on LSE is needed. The LSESYS clock can be generated even if LSESYSEN= 0 if the LSE clock is requested by the CSS on LSE, by a peripheral or any other source clock using LSE.
    typedef bit_field_t<8, 0x3> RCC_BDCR_RTCSEL; // RTC and TAMP clock source selection Set by software to select the clock source for the RTC and TAMP . Once the RTC and TAMP clock source has been selected, it cannot be changed anymore unless the Backup domain is reset, or unless a failure is detected on LSE (LSECSSD is set). The BDRST bit can be used to reset them.
    static constexpr uint32_t RCC_BDCR_LSESYSRDY = 0x800; // LSE system clock (LSESYS) ready Set and cleared by hardware to indicate when the LSE system clock is stable.When the LSESYSEN bit is set, the LSESYSRDY flag is set after two LSE clock cycles. The LSE clock must be already enabled and stable (LSEON and LSERDY are set). When the LSEON bit is cleared, LSERDY goes low after six external low-speed oscillator clock cycles.
    static constexpr uint32_t RCC_BDCR_LSEGFON = 0x1000; // LSE clock glitch filter enable Set and cleared by hardware to enable the LSE glitch filter. This bit can be written only when the LSE is disabled (LSEON = 0 and LSERDY = 0)
    static constexpr uint32_t RCC_BDCR_RTCEN = 0x8000; // RTC and TAMP clock enable Set and cleared by software.
    static constexpr uint32_t RCC_BDCR_BDRST = 0x10000; // Backup domain software reset Set and cleared by software.
    static constexpr uint32_t RCC_BDCR_LSCOEN = 0x1000000; // Low-speed clock output (LSCO) enable Set and cleared by software.
    static constexpr uint32_t RCC_BDCR_LSCOSEL = 0x2000000; // Low-speed clock output selection Set and cleared by software.
    static constexpr uint32_t RCC_BDCR_LSION = 0x4000000; // LSI oscillator enable Set and cleared by software.
    static constexpr uint32_t RCC_BDCR_LSIRDY = 0x8000000; // LSI oscillator ready Set and cleared by hardware to indicate when the LSI oscillator is stable. After the LSION bit is cleared, LSIRDY goes low after three internal low-speed oscillator clock cycles. This bit is set when the LSI is used by IWDG or RTC, even if LSION = 0.
    static constexpr uint32_t RCC_BDCR_LSIPREDIV = 0x10000000; // Low-speed clock divider configuration Set and cleared by software to enable the LSI division. This bit can be written only when the LSI is disabled (LSION = 0 and LSIRDY = 0). If the LSI was previously enabled, it is necessary to wait for at least 60 s after clearing LSION bit (synchronization time for LSI to be really disabled), before writing LSIPREDIV. The LSIPREDIV cannot be changed if the LSI is used by the IWDG or by the RTC.

    static constexpr uint32_t RCC_CSR_RESET_VALUE = 0xc004400; // Reset value
    typedef bit_field_t<8, 0xf> RCC_CSR_MSIKSRANGE; // MSIK range after Standby mode Set by software to chose the MSIK frequency at startup. This range is used after exiting Standby mode until MSIRGSEL is set. After a NRST pin or a power-on reset or when exiting Shutdown mode, the range is always 4MHz. MSIKSRANGE can be written only when MSIRGSEL = 1. others: reserved Note: Changing the MSIKSRANGE does not change the current MSIK frequency.
    typedef bit_field_t<12, 0xf> RCC_CSR_MSISSRANGE; // MSIS range after Standby mode Set by software to chose the MSIS frequency at startup. This range is used after exiting Standby mode until MSIRGSEL is set. After a NRST pin or a power-on reset or when exiting Shutdown mode, the range is always 4MHz. MSISSRANGE can be written only when MSIRGSEL = 1. others: reserved Note: Changing the MSISSRANGE does not change the current MSIS frequency.
    static constexpr uint32_t RCC_CSR_RMVF = 0x800000; // Remove reset flag Set by software to clear the reset flags.
    static constexpr uint32_t RCC_CSR_OBLRSTF = 0x2000000; // Option byte loader reset flag Set by hardware when a reset from the option byte loading occurs. Cleared by writing to the RMVF bit.
    static constexpr uint32_t RCC_CSR_PINRSTF = 0x4000000; // NRST pin reset flag Set by hardware when a reset from the NRST pin occurs. Cleared by writing to the RMVF bit.
    static constexpr uint32_t RCC_CSR_BORRSTF = 0x8000000; // BOR flag Set by hardware when a BOR occurs. Cleared by writing to the RMVF bit.
    static constexpr uint32_t RCC_CSR_SFTRSTF = 0x10000000; // Software reset flag Set by hardware when a software reset occurs. Cleared by writing to the RMVF bit.
    static constexpr uint32_t RCC_CSR_IWDGRSTF = 0x20000000; // Independent watchdog reset flag Set by hardware when an independent watchdog reset domain occurs. Cleared by writing to the RMVF bit.
    static constexpr uint32_t RCC_CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag Set by hardware when a window watchdog reset occurs. Cleared by writing to the RMVF bit.
    static constexpr uint32_t RCC_CSR_LPWRRSTF = 0x80000000; // Low-power reset flag Set by hardware when a reset occurs due to Stop, Standby or Shutdown mode entry, whereas the corresponding nRST_STOP, nRST_STBY or nRST_SHDW option bit is cleared. Cleared by writing to the RMVF bit.


    static constexpr uint32_t RCC_SECCFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RCC_SECCFGR_HSISEC = 0x1; // HSI clock configuration and status bits security Set and reset by software.
    static constexpr uint32_t RCC_SECCFGR_HSESEC = 0x2; // HSE clock configuration bits, status bits and HSE_CSS security Set and reset by software.
    static constexpr uint32_t RCC_SECCFGR_MSISEC = 0x4; // MSI clock configuration and status bits security Set and reset by software.
    static constexpr uint32_t RCC_SECCFGR_LSISEC = 0x8; // LSI clock configuration and status bits security Set and reset by software.
    static constexpr uint32_t RCC_SECCFGR_LSESEC = 0x10; // LSE clock configuration and status bits security Set and reset by software.
    static constexpr uint32_t RCC_SECCFGR_SYSCLKSEC = 0x20; // SYSCLK clock selection, STOPWUCK bit, clock output on MCO configuration security Set and reset by software.
    static constexpr uint32_t RCC_SECCFGR_PRESCSEC = 0x40; // AHBx/APBx prescaler configuration bits security Set and reset by software.
    static constexpr uint32_t RCC_SECCFGR_PLL1SEC = 0x80; // PLL1 clock configuration and status bits security Set and reset by software.
    static constexpr uint32_t RCC_SECCFGR_PLL2SEC = 0x100; // PLL2 clock configuration and status bits security Set and reset by software.
    static constexpr uint32_t RCC_SECCFGR_PLL3SEC = 0x200; // PLL3 clock configuration and status bits security Set and reset by software.
    static constexpr uint32_t RCC_SECCFGR_ICLKSEC = 0x400; // intermediate clock source selection security Set and reset by software.
    static constexpr uint32_t RCC_SECCFGR_HSI48SEC = 0x800; // HSI48 clock configuration and status bits security Set and reset by software.
    static constexpr uint32_t RCC_SECCFGR_RMVFSEC = 0x1000; // Remove reset flag security Set and reset by software.

    static constexpr uint32_t RCC_PRIVCFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RCC_PRIVCFGR_SPRIV = 0x1; // RCC secure functions privilege configuration Set and reset by software. This bit can be written only by a secure privileged access.
    static constexpr uint32_t RCC_PRIVCFGR_NSPRIV = 0x2; // RCC non-secure functions privilege configuration Set and reset by software. This bit can be written only by privileged access, secure or non-secure.
};

template<>
struct peripheral_t<STM32U5xx, RCC>
{
    static constexpr periph_t P = RCC;
    using T = stm32u5xx_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_RCC>
{
    static constexpr periph_t P = SEC_RCC;
    using T = stm32u5xx_rcc_t;
    static T& V;
};

using rcc_t = peripheral_t<svd, RCC>;
using sec_rcc_t = peripheral_t<svd, SEC_RCC>;

template<int INST> struct rcc_traits {};

template<> struct rcc_traits<0>
{
    using rcc = rcc_t;
    static constexpr signal_t MCO = RCC_MCO;
};
