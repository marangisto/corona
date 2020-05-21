#pragma once

////
//
//      STM32MP1 RCC peripherals
//
////

////
//
//      RCC
//
////

struct stm32mp15xxx_rcc_t
{
    volatile uint32_t RCC_TZCR;              // [read-write] This register is used to switch the RCC into secure mode. This register can only be accessed in secure mode.
    reserved_t<0x2> _0xc;
    volatile uint32_t RCC_OCENSETR;          // [read-write] This register is used to control the oscillators.Writing to this register has no effect, writing will set the corresponding bits. Reading will give the effective values of each bit.If TZEN = MCKPROT = , this register can only be modified in secure mode. Write access to this register is not allowed during the clock restore sequence. See Section: The clock restore sequence description for details.
    volatile uint32_t RCC_OCENCLRR;          // [read-write] This register is used to control the oscillators.Writing to this register has no effect, writing will clear the corresponding bits. Reading will give the effective values of the enable bits.If TZEN = , this register can only be modified in secure mode. Write access to this register is not allowed during the clock restore sequence. See Section: The clock restore sequence description for details.
    reserved_t<0x1> _0x18;
    volatile uint32_t RCC_HSICFGR;           // This register is used to configure the HSI. If TZEN = , this register can only be modified in secure mode. Write access to this register is not allowed during the clock restore sequence. See Section: The clock restore sequence description for details.
    volatile uint32_t RCC_CSICFGR;           // This register is used to fine-tune the CSI frequency. If TZEN = MCKPROT = , this register can only be modified in secure mode. Write access to this register is not allowed during the clock restore sequence. See The clock restore sequence description for details.
    volatile uint32_t RCC_MPCKSELR;          // This register is used to select the clock source for the MPU. If TZEN = , this register can only be modified in secure mode. Write access to this register is not allowed during the clock restore sequence. See Section: The clock restore sequence description for details.
    volatile uint32_t RCC_ASSCKSELR;         // This register is used to select the clock source for the AXI sub-system. If TZEN = , this register can only be modified in secure mode. Write access to this register is not allowed during the clock restore sequence. See Section: The clock restore sequence description for details.
    volatile uint32_t RCC_RCK12SELR;         // This register is used to select the reference clock for PLL1 and PLL2. If TZEN = , this register can only be modified in secure mode. Write access to this register is not allowed during the clock restore sequence. See Section: The clock restore sequence description for details.
    volatile uint32_t RCC_MPCKDIVR;          // This register is used to control the MPU clock prescaler. Refer to Section: Sub-system clock generation for additional information. If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_AXIDIVR;           // This register is used to control the AXI Matrix clock prescaler. Refer to Section: Sub-system clock generation for additional information. If TZEN = , this register can only be modified in secure mode.
    reserved_t<0x2> _0x3c;
    volatile uint32_t RCC_APB4DIVR;          // This register is used to control the APB4 clock divider. Refer to Section: Sub-system clock generation for additional information. If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_APB5DIVR;          // This register is used to control the APB5 clock divider. Refer to Section: Sub-system clock generation for additional information. If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_RTCDIVR;           // [read-write] This register is used to divide the HSE clock for RTC. If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_MSSCKSELR;         // This register is used to select the clock source for the MCU sub-system, including the MCU itself. If TZEN = MCKPROT = , this register can only be modified in secure mode. Write access to this register is not allowed during the clock restore sequence. See Section: The clock restore sequence description for details.
    reserved_t<0xd> _0x80;
    volatile uint32_t RCC_PLL1CR;            // This register is used to control the PLL1. If TZEN = , this register can only be modified in secure mode. Write access to this register is not allowed during the clock restore sequence. See Section: The clock restore sequence description for details.
    volatile uint32_t RCC_PLL1CFGR1;         // [read-write] This register is used to configure the PLL1. If TZEN = , this register can only be modified in secure mode. Write access to this register is not allowed during the clock restore sequence. See Section: The clock restore sequence description for details.
    volatile uint32_t RCC_PLL1CFGR2;         // [read-write] This register is used to configure the PLL1. If TZEN = , this register can only be modified in secure mode. Write access to this register is not allowed during the clock restore sequence. See Section: The clock restore sequence description for details.
    volatile uint32_t RCC_PLL1FRACR;         // [read-write] This register is used to fine-tune the frequency of the PLL1 VCO. If TZEN = , this register can only be modified in secure mode. Write access to this register is not allowed during the clock restore sequence. See Section: The clock restore sequence description for details.
    volatile uint32_t RCC_PLL1CSGR;          // [read-write] This register is used to configure the PLL1.It is not recommended to change the content of this register when the PLL1 is enabled (PLLON = ). Refer to Section: Using the PLLs in spread spectrum mode for details. If TZEN = , this register can only be modified in secure mode. Write access to this register is not allowed during the clock restore sequence. See Section: The clock restore sequence description for details.
    volatile uint32_t RCC_PLL2CR;            // This register is used to control the PLL2. If TZEN = , this register can only be modified in secure mode. Write access to this register is not allowed during the clock restore sequence. See Section: The clock restore sequence description for details.
    volatile uint32_t RCC_PLL2CFGR1;         // [read-write] This register is used to configure the PLL2. If TZEN = , this register can only be modified in secure mode. Write access to this register is not allowed during the clock restore sequence. See Section: The clock restore sequence description for details.
    volatile uint32_t RCC_PLL2CFGR2;         // [read-write] This register is used to configure the PLL2. If TZEN = , this register can only be modified in secure mode. Write access to this register is not allowed during the clock restore sequence. See Section: The clock restore sequence description for details.
    volatile uint32_t RCC_PLL2FRACR;         // [read-write] This register is used to fine-tune the frequency of the PLL2 VCO. If TZEN = , this register can only be modified in secure mode. Write access to this register is not allowed during the clock restore sequence. See Section: The clock restore sequence description for details.
    volatile uint32_t RCC_PLL2CSGR;          // [read-write] This register is used to configure the PLL2. It is not recommended to change the content of this register when the PLL2 is enabled (PLLON = ). Refer to Section: Using the PLLs in spread spectrum mode for details. If TZEN = , this register can only be modified in secure mode. Write access to this register is not allowed during the clock restore sequence. See Section: The clock restore sequence description for details.
    reserved_t<0x6> _0xc0;
    volatile uint32_t RCC_I2C46CKSELR;       // [read-write] This register is used to control the selection of the kernel clock for the I2C4 and I2C6. Note that changing the clock source on-the-fly is allowed, and will not generate any timing violation, however the user has to ensure that both the previous and the new clock sources are present during the switching, and for the whole transition time. Refer to Section: Clock enabling delays. If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_SPI6CKSELR;        // [read-write] This register is used to control the selection of the kernel clock for the SPI6. Note that changing the clock source on-the-fly is allowed, and will not generate any timing violation, however the user has to ensure that both the previous and the new clock sources are present during the switching, and for the whole transition time. Refer to Section: Clock enabling delays. If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_UART1CKSELR;       // [read-write] This register is used to control the selection of the kernel clock for the USART1. Note that changing the clock source on-the-fly is allowed, and will not generate any timing violation, however the user has to ensure that both the previous and the new clock sources are present during the switching, and for the whole transition time. Refer to Section: Clock enabling delays. If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_RNG1CKSELR;        // [read-write] This register is used to control the selection of the kernel clock for the RNG1. Note that changing the clock source on-the-fly is allowed, and will not generate any timing violation, however the user has to ensure that both the previous and the new clock sources are present during the switching, and for the whole transition time. Refer to Section: Clock enabling delays. If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_CPERCKSELR;        // [read-write] This register is used to select an oscillator source as kernel clock for the per_ck clock. The per_ck clock is distributed to several peripherals. Refer to Section: Clock enabling delays.
    volatile uint32_t RCC_STGENCKSELR;       // [read-write] This register is used to select the peripheral clock for the STGEN block. Note that this clock is used to provide a time reference for the application. Refer to Section: Clock enabling delays. If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_DDRITFCR;          // [read-write] This register is used to control the DDR interface, including the DDRC and DDRPHYC. If TZEN = , this register can only be modified in secure mode.
    reserved_t<0x9> _0x100;
    volatile uint32_t RCC_MP_BOOTCR;         // [read-write] This register is used to control the HOLD boot function when the system exits from Standby. Refer to Section: MCU HOLD_BOOT after processor reset. This register is reset when a system reset occurs, but not when the circuit exits from Standby (app_rst reset).If TZEN = , this register can only be modified in secure mode. This register can only be accessed by the MPU.
    volatile uint32_t RCC_MP_SREQSETR;       // [read-write] Writing has no effect, reading will return the values of the bits. Writing a sets the corresponding bit to . The MCU cannot access to this register. If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_MP_SREQCLRR;       // [read-write] Writing has no effect, reading will return the effective values of the bits. Writing a sets the corresponding bit to . The MCU cannot access to this register. If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_MP_GCR;            // [read-write] The register contains global control bits. If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_MP_APRSTCR;        // [read-write] This register is used to control the behavior of the warm reset. If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_MP_APRSTSR;        // [read-only] This register provides a status of the RDCTL. If TZEN = , this register can only be modified in secure mode.
    reserved_t<0xa> _0x140;
    volatile uint32_t RCC_BDCR;              // This register is used to control the LSE function. Wait states are inserted in case of successive write accesses to this register. The number of wait states may be up to 7 cycles of AHB4 clock.After a system reset, the register RCC_BDCR is write-protected. In order to modify this register, the DBP bit in the PWR control register 1 (PWR_CR1) has to be set to . Bits of RCC_BDCR register are only reset after a backup domain reset: nreset_vsw (see Section10.3.6: Backup domain reset). Any other internal or external reset will not have any effect on these bits.This register is located into the VSW domain. If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_RDLSICR;           // This register is used to control the minimum NRST active duration and LSI function.0 to 7 wait states are inserted for word, half-word and byte accesses. Wait states are inserted in case of successive accesses to this register.This register is reset by the por_rst reset, and it is located into the VDD domain. If TZEN = , this register can only be modified in secure mode.
    reserved_t<0xe> _0x180;
    volatile uint32_t RCC_APB4RSTSETR;       // [read-write] This register is used to activate the reset of the corresponding peripheral. Writing has no effect, reading will return the effective values of the corresponding bits. Writing a activates the reset of the corresponding peripheral.
    volatile uint32_t RCC_APB4RSTCLRR;       // [read-write] This register is used to release the reset of the corresponding peripheral. Writing has no effect, reading will return the effective values of the corresponding bits. Writing a releases the reset of the corresponding peripheral.
    volatile uint32_t RCC_APB5RSTSETR;       // [read-write] This register is used to activate the reset of the corresponding peripheral. Writing has no effect, reading will return the effective values of the corresponding bits. Writing a activates the reset of the corresponding peripheral. If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_APB5RSTCLRR;       // [read-write] This register is used to release the reset of the corresponding peripheral. Writing has no effect, reading will return the effective values of the corresponding bits. Writing a releases the reset of the corresponding peripheral. If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_AHB5RSTSETR;       // [read-write] This register is used to activate the reset of the corresponding peripheral. Writing has no effect, reading will return the effective values of the corresponding bits. Writing a activates the reset of the corresponding peripheral. If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_AHB5RSTCLRR;       // [read-write] This register is used to release the reset of the corresponding peripheral. Writing has no effect, reading will return the effective values of the corresponding bits. Writing a releases the reset of the corresponding peripheral. If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_AHB6RSTSETR;       // [read-write] This register is used to activate the reset of the corresponding peripheral. Writing has no effect, reading will return the effective values of the corresponding bits. Writing a activates the reset of the corresponding peripheral.
    volatile uint32_t RCC_AHB6RSTCLRR;       // [read-write] This register is used to release the reset of the corresponding peripheral. Writing has no effect, reading will return the effective values of the corresponding bits. Writing a releases the reset of the corresponding peripheral.
    volatile uint32_t RCC_TZAHB6RSTSETR;     // [read-write] This register is used to activate the reset of the corresponding peripheral. Writing has no effect, reading will return the effective values of the corresponding bits. Writing a activates the reset of the corresponding peripheral. If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_TZAHB6RSTCLRR;     // [read-write] This register is used to release the reset of the corresponding peripheral. Writing has no effect, reading will return the effective values of the corresponding bits. Writing a releases the reset of the corresponding peripheral. If TZEN = , this register can only be modified in secure mode.
    reserved_t<0x16> _0x200;
    volatile uint32_t RCC_MP_APB4ENSETR;     // [read-write] This register is used to set the peripheral clock enable bit of the corresponding peripheral to . It shall be used to allocate a peripheral to the MPU. Writing has no effect, reading will return the effective values of the corresponding bits. Writing a sets the corresponding bit to .
    volatile uint32_t RCC_MP_APB4ENCLRR;     // [read-write] This register is used to clear the peripheral clock enable bit of the corresponding peripheral. It shall be used to deallocate a peripheral from MPU. Writing has no effect, reading will return the effective values of the corresponding bits. Writing a sets the corresponding bit to .
    volatile uint32_t RCC_MP_APB5ENSETR;     // [read-write] This register is used to set the peripheral clock enable bit of the corresponding peripheral to . It shall be used to allocate a peripheral to the MPU. Writing has no effect, reading will return the effective values of the corresponding bits. Writing a sets the corresponding bit to .
    volatile uint32_t RCC_MP_APB5ENCLRR;     // [read-write] This register is used to clear the peripheral clock enable bit of the corresponding peripheral. It shall be used to deallocate a peripheral from MPU. Writing has no effect, reading will return the effective values of the corresponding bits. Writing a sets the corresponding bit to .
    volatile uint32_t RCC_MP_AHB5ENSETR;     // [read-write] This register is used to set the peripheral clock enable bit of the corresponding peripheral to . It shall be used to allocate a peripheral to the MPU. Writing has no effect, reading will return the effective values of the corresponding bits. Writing a sets the corresponding bit to . If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_MP_AHB5ENCLRR;     // [read-write] This register is used to clear the peripheral clock enable bit of the corresponding peripheral. It shall be used to deallocate a peripheral from MPU. Writing has no effect, reading will return the effective values of the corresponding bits. Writing a sets the corresponding bit to . If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_MP_AHB6ENSETR;     // [read-write] This register is used to set the peripheral clock enable bit of the corresponding peripheral to . It shall be used to allocate a peripheral to the MPU. Writing has no effect, reading will return the effective values of the corresponding bits. Writing a sets the corresponding bit to .
    volatile uint32_t RCC_MP_AHB6ENCLRR;     // [read-write] This register is used to clear the peripheral clock enable bit of the corresponding peripheral. It shall be used to deallocate a peripheral from MPU. Writing has no effect, reading will return the effective values of the corresponding bits. Writing a sets the corresponding bit to .
    volatile uint32_t RCC_MP_TZAHB6ENSETR;   // [read-write] This register is used to set the peripheral clock enable bit of the corresponding peripheral to . It shall be used to allocate a peripheral to the MPU. Writing has no effect, reading will return the effective values of the corresponding bits. Writing a sets the corresponding bit to . If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_MP_TZAHB6ENCLRR;   // [read-write] This register is used to clear the peripheral clock enable bit of the corresponding peripheral. It shall be used to deallocate a peripheral from MPU. Writing has no effect, reading will return the effective values of the corresponding bits. Writing a sets the corresponding bit to . If TZEN = , this register can only be modified in secure mode.
    reserved_t<0x16> _0x280;
    volatile uint32_t RCC_MC_APB4ENSETR;     // [read-write] This register is used to set the peripheral clock enable bit
    volatile uint32_t RCC_MC_APB4ENCLRR;     // [read-write] This register is used to clear the peripheral clock enable bit
    volatile uint32_t RCC_MC_APB5ENSETR;     // [read-write] This register is used to set the peripheral clock enable bit
    volatile uint32_t RCC_MC_APB5ENCLRR;     // [read-write] This register is used to clear the peripheral clock enable bit
    volatile uint32_t RCC_MC_AHB5ENSETR;     // [read-write] This register is used to set the peripheral clock enable bit If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_MC_AHB5ENCLRR;     // [read-write] This register is used to clear the peripheral clock enable bit If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_MC_AHB6ENSETR;     // [read-write] This register is used to set the peripheral clock enable bit
    volatile uint32_t RCC_MC_AHB6ENCLRR;     // [read-write] This register is used to clear the peripheral clock enable bit
    reserved_t<0x18> _0x300;
    volatile uint32_t RCC_MP_APB4LPENSETR;   // [read-write] This register is used by the MCU in order to clear the PERxLPEN bits
    volatile uint32_t RCC_MP_APB4LPENCLRR;   // [read-write] This register is used by the MCU
    volatile uint32_t RCC_MP_APB5LPENSETR;   // [read-write] This register is used by the MCU in order to clear the PERxLPEN bits If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_MP_APB5LPENCLRR;   // [read-write] This register is used by the Mpu.
    volatile uint32_t RCC_MP_AHB5LPENSETR;   // [read-write] This register is used by the MCU in order to clear the PERxLPEN bits If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_MP_AHB5LPENCLRR;   // [read-write] This register is used by the MCU
    volatile uint32_t RCC_MP_AHB6LPENSETR;   // [read-write] This register is used by the MCU in order to clear the PERxLPEN bits
    volatile uint32_t RCC_MP_AHB6LPENCLRR;   // [read-write] This register is used by the MCU in order to clear the PERxLPEN bits
    volatile uint32_t RCC_MP_TZAHB6LPENSETR; // [read-write] This register is used by the MCU in order to clear the PERxLPEN bits If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_MP_TZAHB6LPENCLRR; // [read-write] This register is used by the MCU in order to clear the PERxLPEN bits If TZEN = , this register can only be modified in secure mode.
    reserved_t<0x16> _0x380;
    volatile uint32_t RCC_MC_APB4LPENSETR;   // [read-write] This register is used by the MCU in order to set the PERxLPEN bit.
    volatile uint32_t RCC_MC_APB4LPENCLRR;   // [read-write] This register is used by the MCU in order to clear the PERxLPEN bit
    volatile uint32_t RCC_MC_APB5LPENSETR;   // [read-write] This register is used by the MCU in order to set the PERxLPEN bit.
    volatile uint32_t RCC_MC_APB5LPENCLRR;   // [read-write] This register is used by the MCU in order to clear the PERxLPEN bit
    volatile uint32_t RCC_MC_AHB5LPENSETR;   // [read-write] This register is used by the MCU in order to set the PERxLPEN bit. If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_MC_AHB5LPENCLRR;   // [read-write] This register is used by the MCU in order to clear the PERxLPEN bit If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_MC_AHB6LPENSETR;   // [read-write] This register is used by the MCU in order to set the PERxLPEN bit.
    volatile uint32_t RCC_MC_AHB6LPENCLRR;   // [read-write] This register is used by the MCU in order to clear the PERxLPEN bit
    reserved_t<0x18> _0x400;
    volatile uint32_t RCC_BR_RSTSCLRR;       // [read-write] This register is used by the BOOTROM to check the reset source. Writing has no effect, reading will return the effective values of the corresponding bits. Writing a clears the corresponding bit to . In order to identify the reset source, the MPU application must use RCC MPU Reset Status Clear Register (RCC_MP_RSTSCLRR), and the MCU application must use the RCC MCU Reset Status Clear Register (RCC_MC_RSTSCLRR). Refer to Section10.3.13: Reset source identification for details.This register except MPUP[1:0]RSTF flags is located into VDD domain, and is reset by por_rst reset. The MPUP[1:0]RSTF flags are located into VDDCORE and are reset by nreset. If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_MP_GRSTCSETR;      // [read-write] This register is used by the MPU in order to generate either a MCU reset or a system reset or a reset of one of the two MPU processors. Writing has no effect, reading returns the effective values of the corresponding bits. Writing a activates the reset.
    volatile uint32_t RCC_MP_RSTSCLRR;       // [read-write] This register is used by the MPU to check the reset source. This register is updated by the BOOTROM code, after a power-on reset (por_rst), a system reset (nreset), or an exit from Standby or CStandby.Writing has no effect, reading will return the effective values of the corresponding bits. Writing a clears the corresponding bit to .Refer to Section10.3.13: Reset source identification for details.The register is located in VDDCORE.If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_MP_IWDGFZSETR;     // [read-write] This register is used by the BOOTROM in order to freeze the IWDGs clocks. After a system reset or Standby reset (nreset), or a CStandby reset (cstby_rst) the MPU is allowed to write it once.Writing has no effect, reading will return the effective values of the corresponding bits. Writing a sets the corresponding bit to . If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_MP_IWDGFZCLRR;     // [read-write] This register is used by the BOOTROM in order to unfreeze the IWDGs clocks. Writing has no effect, reading will return the effective values of the corresponding bits. Writing a clears the corresponding bit to . If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_MP_CIER;           // [read-write] This register shall be used by the MPU to control the interrupt source enable. Refer to Section10.5: RCC interrupts for more details. If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_MP_CIFR;           // [read-write] This register shall be used by the MPU in order to read and clear the interrupt flags.Writing has no effect, writing will clear the corresponding flag.Refer to Section10.5: RCC interrupts for more details. If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_PWRLPDLYCR;        // [read-write] This register is used to program the delay between the moment where the system exits from one of the Stop modes, and the moment where it is allowed to enable the PLLs and provide a clock to bridges and processors. If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_MP_RSTSSETR;       // [read-write] This register is dedicated to the BOOTROM code in order to update the reset source. This register is updated by the BOOTROM code, after a power-on reset (por_rst), a system reset (nreset), or an exit from Standby or CStandby. The application software shall not use this register. In order to identify the reset source, the MPU application must use RCC MPU Reset Status Clear Register (RCC_MP_RSTSCLRR), and the MCU application must use the RCC MCU Reset Status Clear Register (RCC_MC_RSTSCLRR).Writing has no effect, reading will return the effective values of the corresponding bits. Writing a sets the corresponding bit to .Refer to Section10.3.13: Reset source identification for details.The register is located in VDDCORE.If TZEN = , this register can only be modified in secure mode.
    reserved_t<0xf7> _0x800;
    volatile uint32_t RCC_MCO1CFGR;          // [read-write] This register is used to select the clock generated on MCO1 output.
    volatile uint32_t RCC_MCO2CFGR;          // [read-write] This register is used to select the clock generated on MCO2 output.
    volatile uint32_t RCC_OCRDYR;            // [read-only] This is a read-only access register, It contains the status flags of oscillators. Writing has no effect.
    volatile uint32_t RCC_DBGCFGR;           // [read-write] This is register contains the enable control of the debug and trace function, and the clock divider for the trace function.
    reserved_t<0x4> _0x820;
    volatile uint32_t RCC_RCK3SELR;          // This register is used to select the reference clock for PLL3. If TZEN = MCKPROT = , this register can only be modified in secure mode.
    volatile uint32_t RCC_RCK4SELR;          // This register is used to select the reference clock for PLL4.
    volatile uint32_t RCC_TIMG1PRER;         // This register is used to control the prescaler value of timers located into APB1 domain. It concerns TIM2, TIM3, TIM4, TIM5, TIM6, TIM7, TIM12, TIM13 and TIM14. Refer to Section: Sub-system clock generation for additional information.
    volatile uint32_t RCC_TIMG2PRER;         // This register is used to control the prescaler value of timers located into APB2 domain. It concerns TIM1, TIM8, TIM15, TIM16, and TIM17. Refer to Section: Sub-system clock generation for additional information.
    volatile uint32_t RCC_MCUDIVR;           // This register is used to control the MCU sub-system clock prescaler. Refer to Section: Sub-system clock generation for additional information. If TZEN = , this register can only be modified in secure mode.
    volatile uint32_t RCC_APB1DIVR;          // This register is used to control the APB1 clock prescaler. Refer to section Section1.4.6.3: Sub-System Clock Generation for additional information.
    volatile uint32_t RCC_APB2DIVR;          // This register is used to control the APB2 clock prescaler. Refer to Section: Sub-system clock generation for additional information.
    volatile uint32_t RCC_APB3DIVR;          // This register is used to control the APB3 clock prescaler. Refer to Section: Sub-system clock generation for additional information.
    reserved_t<0x10> _0x880;
    volatile uint32_t RCC_PLL3CR;            // This register is used to control the PLL3. If TZEN = MCKPROT = , this register can only be modified in secure mode.
    volatile uint32_t RCC_PLL3CFGR1;         // [read-write] This register is used to configure the PLL3. If TZEN = MCKPROT = , this register can only be modified in secure mode.
    volatile uint32_t RCC_PLL3CFGR2;         // [read-write] This register is used to configure the PLL3. If TZEN = MCKPROT = , this register can only be modified in secure mode.
    volatile uint32_t RCC_PLL3FRACR;         // [read-write] This register is used to fine-tune the frequency of the PLL3 VCO. If TZEN = MCKPROT = , this register can only be modified in secure mode.
    volatile uint32_t RCC_PLL3CSGR;          // [read-write] This register is used to configure the PLL3.It is not recommended to change the content of this register when the PLL3 is enabled (PLLON = ). Refer to Section: Using the PLLs in spread spectrum mode for details. If TZEN = MCKPROT = , this register can only be modified in secure mode.
    volatile uint32_t RCC_PLL4CR;            // This register is used to control the PLL4.
    volatile uint32_t RCC_PLL4CFGR1;         // [read-write] This register is used to configure the PLL4.
    volatile uint32_t RCC_PLL4CFGR2;         // [read-write] This register is used to configure the PLL4.
    volatile uint32_t RCC_PLL4FRACR;         // [read-write] This register is used to fine-tune the frequency of the PLL4 VCO.
    volatile uint32_t RCC_PLL4CSGR;          // [read-write] This register is used to configure the PLL4.It is not recommended to change the content of this register when the PLL4 is enabled (PLLON = ). Refer to Section: Using the PLLs in spread spectrum mode for details. If TZEN = MCKPROT = , this register can only be modified in secure mode.
    reserved_t<0x6> _0x8c0;
    volatile uint32_t RCC_I2C12CKSELR;       // [read-write] This register is used to control the selection of the kernel clock for the I2C1 and I2C2. Note that changing the clock source on-the-fly is allowed, and will not generate any timing violation, however the user has to ensure that both the previous and the new clock sources are present during the switching, and for the whole transition time. Refer to Section: Clock enabling delays.
    volatile uint32_t RCC_I2C35CKSELR;       // [read-write] This register is used to control the selection of the kernel clock for the I2C3 and I2C5. Note that changing the clock source on-the-fly is allowed, and will not generate any timing violation, however the user has to ensure that both the previous and the new clock sources are present during the switching, and for the whole transition time. Refer to Section: Clock enabling delays.
    volatile uint32_t RCC_SAI1CKSELR;        // [read-write] This register is used to control the selection of the kernel clock for the SAI1 and DFSDM audio clock. Note that changing the clock source on-the-fly is allowed, and will not generate any timing violation, however the user has to ensure that both the previous and the new clock sources are present during the switching, and for the whole transition time. Refer to Section: Clock enabling delays.
    volatile uint32_t RCC_SAI2CKSELR;        // [read-write] This register is used to control the selection of the kernel clock for the SAI2. Note that changing the clock source on-the-fly is allowed, and will not generate any timing violation, however the user has to ensure that both the previous and the new clock sources are present during the switching, and for the whole transition time. Refer to Section: Clock enabling delays.
    volatile uint32_t RCC_SAI3CKSELR;        // [read-write] This register is used to control the selection of the kernel clock for the SAI3. Note that changing the clock source on-the-fly is allowed, and will not generate any timing violation, however the user has to ensure that both the previous and the new clock sources are present during the switching, and for the whole transition time. Refer to Section: Clock enabling delays.
    volatile uint32_t RCC_SAI4CKSELR;        // [read-write] This register is used to control the selection of the kernel clock for the SAI4. Note that changing the clock source on-the-fly is allowed, and will not generate any timing violation, however the user has to ensure that both the previous and the new clock sources are present during the switching, and for the whole transition time. Refer to Section: Clock enabling delays.
    volatile uint32_t RCC_SPI2S1CKSELR;      // [read-write] This register is used to control the selection of the kernel clock for the SPI/I2S1. Note that changing the clock source on-the-fly is allowed, and will not generate any timing violation, however the user has to ensure that both the previous and the new clock sources are present during the switching, and for the whole transition time. Refer to Section: Clock enabling delays.
    volatile uint32_t RCC_SPI2S23CKSELR;     // [read-write] This register is used to control the selection of the kernel clock for the SPI/I2S2,3. Note that changing the clock source on-the-fly is allowed, and will not generate any timing violation, however the user has to ensure that both the previous and the new clock sources are present during the switching, and for the whole transition time. Refer to Section: Clock enabling delays.
    volatile uint32_t RCC_SPI45CKSELR;       // [read-write] This register is used to control the selection of the kernel clock for the SPI4,5. Note that changing the clock source on-the-fly is allowed, and will not generate any timing violation, however the user has to ensure that both the previous and the new clock sources are present during the switching, and for the whole transition time. Refer to Section: Clock enabling delays.
    volatile uint32_t RCC_UART6CKSELR;       // [read-write] This register is used to control the selection of the kernel clock for the USART6. Note that changing the clock source on-the-fly is allowed, and will not generate any timing violation, however the user has to ensure that both the previous and the new clock sources are present during the switching, and for the whole transition time. Refer to Section: Clock enabling delays.
    volatile uint32_t RCC_UART24CKSELR;      // [read-write] This register is used to control the selection of the kernel clock for the USART2 and UART4. Note that changing the clock source on-the-fly is allowed, and will not generate any timing violation, however the user has to ensure that both the previous and the new clock sources are present during the switching, and for the whole transition time. Refer to Section: Clock enabling delays.
    volatile uint32_t RCC_UART35CKSELR;      // [read-write] This register is used to control the selection of the kernel clock for the USART3 and UART5. Note that changing the clock source on-the-fly is allowed, and will not generate any timing violation, however the user has to ensure that both the previous and the new clock sources are present during the switching, and for the whole transition time. Refer to Section: Clock enabling delays.
    volatile uint32_t RCC_UART78CKSELR;      // [read-write] This register is used to control the selection of the kernel clock for the UART7 and UART8. Note that changing the clock source on-the-fly is allowed, and will not generate any timing violation, however the user has to ensure that both the previous and the new clock sources are present during the switching, and for the whole transition time. Refer to Section: Clock enabling delays.
    volatile uint32_t RCC_SDMMC12CKSELR;     // [read-write] This register is used to control the selection of the kernel clock for the SDMMC1 and SDMMC2. Note that changing the clock source on-the-fly is allowed, and will not generate any timing violation, however the user has to ensure that both the previous and the new clock sources are present during the switching, and for the whole transition time. Refer to Section: Clock enabling delays.
    volatile uint32_t RCC_SDMMC3CKSELR;      // [read-write] This register is used to control the selection of the kernel clock for the SDMMC3. Note that changing the clock source on-the-fly is allowed, and will not generate any timing violation, however the user has to ensure that both the previous and the new clock sources are present during the switching, and for the whole transition time. Refer to Section: Clock enabling delays.
    volatile uint32_t RCC_ETHCKSELR;         // [read-write] This register is used to control the selection of the kernel clock for the ETH block. Note that changing the clock source on-the-fly is allowed, and will not generate any timing violation, however the user has to ensure that both the previous and the new clock sources are present during the switching, and for the whole transition time. Refer to Section: Clock enabling delays.
    volatile uint32_t RCC_QSPICKSELR;        // [read-write] This register is used to control the selection of the kernel clock for the QUADSPI. Note that changing the clock source on-the-fly is allowed, and will not generate any timing violation, however the user has to ensure that both the previous and the new clock sources are present during the switching, and for the whole transition time. Refer to Section: Clock enabling delays.
    volatile uint32_t RCC_FMCCKSELR;         // [read-write] This register is used to control the selection of the kernel clock for the FMC block. Note that changing the clock source on-the-fly is allowed, and will not generate any timing violation, however the user has to ensure that both the previous and the new clock sources are present during the switching, and for the whole transition time. Refer to Section: Clock enabling delays.
    reserved_t<0x1> _0x90c;
    volatile uint32_t RCC_FDCANCKSELR;       // [read-write] This register is used to control the selection of the kernel clock for the FDCAN block. Note that changing the clock source on-the-fly is allowed, and will not generate any timing violation, however the user has to ensure that both the previous and the new clock sources are present during the switching, and for the whole transition time. Refer to Section: Clock enabling delays.
    reserved_t<0x1> _0x914;
    volatile uint32_t RCC_SPDIFCKSELR;       // [read-write] This register is used to control the selection of the kernel clock for the SPDIFRX. Note that changing the clock source on-the-fly is allowed, and will not generate any timing violation, however the user has to ensure that both the previous and the new clock sources are present during the switching, and for the whole transition time. Refer to Section: Clock enabling delays.
    volatile uint32_t RCC_CECCKSELR;         // [read-write] This register is used to control the selection of the kernel clock for the CEC-HDMI.
    volatile uint32_t RCC_USBCKSELR;         // [read-write] This register is used to control the selection of the kernel clock for the USBPHY PLL of the USB HOST and USB OTG
    volatile uint32_t RCC_RNG2CKSELR;        // [read-write] This register is used to control the selection of the kernel clock for the RNG2.
    volatile uint32_t RCC_DSICKSELR;         // [read-write] This register is used to control the selection of the kernel clock for the block.
    volatile uint32_t RCC_ADCCKSELR;         // [read-write] This register is used to control the selection of the kernel clock for the ADC block.
    volatile uint32_t RCC_LPTIM45CKSELR;     // [read-write] This register is used to control the selection of the kernel clock for the LPTIM4 and LPTIM5 blocks.
    volatile uint32_t RCC_LPTIM23CKSELR;     // [read-write] This register is used to control the selection of the kernel clock for the LPTIM2 and LPTIM3 blocks.
    volatile uint32_t RCC_LPTIM1CKSELR;      // [read-write] This register is used to control the selection of the kernel clock for the LPTIM1 block.
    reserved_t<0x12> _0x980;
    volatile uint32_t RCC_APB1RSTSETR;       // [read-write] This register is used to activate the reset of the corresponding peripheral.
    volatile uint32_t RCC_APB1RSTCLRR;       // [read-write] This register is used to release the reset of the corresponding peripheral.
    volatile uint32_t RCC_APB2RSTSETR;       // [read-write] This register is used to activate the reset of the corresponding peripheral.
    volatile uint32_t RCC_APB2RSTCLRR;       // [read-write] This register is used to release the reset of the corresponding peripheral.
    volatile uint32_t RCC_APB3RSTSETR;       // [read-write] This register is used to activate the reset of the corresponding peripheral.
    volatile uint32_t RCC_APB3RSTCLRR;       // [read-write] This register is used to release the reset of the corresponding peripheral.
    volatile uint32_t RCC_AHB2RSTSETR;       // [read-write] This register is used to activate the reset of the corresponding peripheral.
    volatile uint32_t RCC_AHB2RSTCLRR;       // [read-write] This register is used to release the reset of the corresponding peripheral.
    volatile uint32_t RCC_AHB3RSTSETR;       // [read-write] This register is used to activate the reset of the corresponding peripheral.
    volatile uint32_t RCC_AHB3RSTCLRR;       // [read-write] This register is used to release the reset of the corresponding peripheral.
    volatile uint32_t RCC_AHB4RSTSETR;       // [read-write] This register is used to activate the reset of the corresponding peripheral
    volatile uint32_t RCC_AHB4RSTCLRR;       // [read-write] This register is used to release the reset of the corresponding peripheral.
    reserved_t<0x14> _0xa00;
    volatile uint32_t RCC_MP_APB1ENSETR;     // [read-write] This register is used to set the peripheral clock enable bit
    volatile uint32_t RCC_MP_APB1ENCLRR;     // [read-write] This register is used to clear the peripheral clock enable bit
    volatile uint32_t RCC_MP_APB2ENSETR;     // [read-write] This register is used to set the peripheral clock enable bit
    volatile uint32_t RCC_MP_APB2ENCLRR;     // [read-write] This register is used to clear the peripheral clock enable bit of the corresponding peripheral.
    volatile uint32_t RCC_MP_APB3ENSETR;     // [read-write] This register is used to set the peripheral clock enable bit
    volatile uint32_t RCC_MP_APB3ENCLRR;     // [read-write] This register is used to clear the peripheral clock enable bit of the corresponding peripheral.
    volatile uint32_t RCC_MP_AHB2ENSETR;     // [read-write] This register is used to set the peripheral clock enable bit of the corresponding peripheral
    volatile uint32_t RCC_MP_AHB2ENCLRR;     // [read-write] This register is used to clear the peripheral clock enable bit of the corresponding peripheral.
    volatile uint32_t RCC_MP_AHB3ENSETR;     // [read-write] This register is used to set the peripheral clock enable bit of the corresponding peripheral
    volatile uint32_t RCC_MP_AHB3ENCLRR;     // [read-write] This register is used to clear the peripheral clock enable bit of the corresponding peripheral.
    volatile uint32_t RCC_MP_AHB4ENSETR;     // [read-write] This register is used to set the peripheral clock enable bit of the corresponding peripheral to . It shall be used to allocate a peripheral to the MPU.
    volatile uint32_t RCC_MP_AHB4ENCLRR;     // [read-write] This register is used to clear the peripheral clock enable bit
    reserved_t<0x2> _0xa38;
    volatile uint32_t RCC_MP_MLAHBENSETR;    // [read-write] This register is used to set the peripheral clock enable bit
    volatile uint32_t RCC_MP_MLAHBENCLRR;    // [read-write] This register is used to clear the peripheral clock enable bit.
    reserved_t<0x10> _0xa80;
    volatile uint32_t RCC_MC_APB1ENSETR;     // [read-write] This register is used to set the peripheral clock enable bit of the corresponding peripheral to . It shall be used to allocate a peripheral to the MCU. Writing has no effect, reading will return . Writing a sets the corresponding bit to .
    volatile uint32_t RCC_MC_APB1ENCLRR;     // [read-write] This register is used to clear the peripheral clock enable bit of the corresponding peripheral.
    volatile uint32_t RCC_MC_APB2ENSETR;     // [read-write] This register is used to set the peripheral clock enable bit
    volatile uint32_t RCC_MC_APB2ENCLRR;     // [read-write] This register is used to clear the peripheral clock enable bit
    volatile uint32_t RCC_MC_APB3ENSETR;     // [read-write] This register is used to set the peripheral clock enable bit
    volatile uint32_t RCC_MC_APB3ENCLRR;     // [read-write] This register is used to clear the peripheral clock enable bit
    volatile uint32_t RCC_MC_AHB2ENSETR;     // [read-write] This register is used to set the peripheral clock enable bit
    volatile uint32_t RCC_MC_AHB2ENCLRR;     // [read-write] This register is used to clear the peripheral clock enable bit
    volatile uint32_t RCC_MC_AHB3ENSETR;     // [read-write] This register is used to set the peripheral clock enable bit
    volatile uint32_t RCC_MC_AHB3ENCLRR;     // [read-write] This register is used to clear the peripheral clock enable bit
    volatile uint32_t RCC_MC_AHB4ENSETR;     // [read-write] This register is used to set the peripheral clock enable bit
    volatile uint32_t RCC_MC_AHB4ENCLRR;     // [read-write] This register is used to clear the peripheral clock enable bit
    volatile uint32_t RCC_MC_AXIMENSETR;     // [read-write] This register is used to set the peripheral clock enable bit
    volatile uint32_t RCC_MC_AXIMENCLRR;     // [read-write] This register is used to clear the peripheral clock enable bit
    volatile uint32_t RCC_MC_MLAHBENSETR;    // [read-write] This register is used to set the peripheral clock enable bit
    volatile uint32_t RCC_MC_MLAHBENCLRR;    // [read-write] This register is used to clear the peripheral clock enable bit
    reserved_t<0x10> _0xb00;
    volatile uint32_t RCC_MP_APB1LPENSETR;   // [read-write] This register is used by the MCU in order to clear the PERxLPEN bits
    volatile uint32_t RCC_MP_APB1LPENCLRR;   // [read-write] This register is used by the MPU in order to clear the PERxLPEN bits .
    volatile uint32_t RCC_MP_APB2LPENSETR;   // [read-write] This register is used by the MCU in order to clear the PERxLPEN bits
    volatile uint32_t RCC_MP_APB2LPENCLRR;   // [read-write] This register is used by the MCU in order to clear the PERxLPEN bits
    volatile uint32_t RCC_MP_APB3LPENSETR;   // [read-write] This register is used by the MCU in order to clear the PERxLPEN bits
    volatile uint32_t RCC_MP_APB3LPENCLRR;   // [read-write] This register is used by the MCU in order to clear the PERxLPEN bits
    volatile uint32_t RCC_MP_AHB2LPENSETR;   // [read-write] This register is used by the MPU in order to set the PERxLPEN bit.
    volatile uint32_t RCC_MP_AHB2LPENCLRR;   // [read-write] This register is used by the MCU in order to clear the PERxLPEN bits
    volatile uint32_t RCC_MP_AHB3LPENSETR;   // [read-write] This register is used by the MPU
    volatile uint32_t RCC_MP_AHB3LPENCLRR;   // [read-write] This register is used by the MPU in order to clear the PERxLPEN bit
    volatile uint32_t RCC_MP_AHB4LPENSETR;   // [read-write] This register is used by the MPU
    volatile uint32_t RCC_MP_AHB4LPENCLRR;   // [read-write] This register is used by the MPU
    volatile uint32_t RCC_MP_AXIMLPENSETR;   // [read-write] This register is used by the MPU
    volatile uint32_t RCC_MP_AXIMLPENCLRR;   // [read-write] This register is used by the MPU
    volatile uint32_t RCC_MP_MLAHBLPENSETR;  // [read-write] This register is used by the MPU in order to set the PERxLPEN bit
    volatile uint32_t RCC_MP_MLAHBLPENCLRR;  // [read-write] This register is used by the MPU in order to clear the PERxLPEN bit
    reserved_t<0x10> _0xb80;
    volatile uint32_t RCC_MC_APB1LPENSETR;   // [read-write] This register is used by the MCU in order to set the PERxLPEN bit.
    volatile uint32_t RCC_MC_APB1LPENCLRR;   // [read-write] This register is used by the MCU in order to clear the PERxLPEN bits
    volatile uint32_t RCC_MC_APB2LPENSETR;   // [read-write] This register is used by the MCU in order to set the PERxLPEN bit.
    volatile uint32_t RCC_MC_APB2LPENCLRR;   // [read-write] This register is used by the MCU in order to clear the PERxLPEN bit
    volatile uint32_t RCC_MC_APB3LPENSETR;   // [read-write] This register is used by the MCU in order to set the PERxLPEN bit.
    volatile uint32_t RCC_MC_APB3LPENCLRR;   // [read-write] This register is used by the MCU in order to clear the PERxLPEN bit
    volatile uint32_t RCC_MC_AHB2LPENSETR;   // [read-write] This register is used by the MCU in order to set the PERxLPEN bit.
    volatile uint32_t RCC_MC_AHB2LPENCLRR;   // [read-write] This register is used by the MCU in order to clear the PERxLPEN bit
    volatile uint32_t RCC_MC_AHB3LPENSETR;   // [read-write] This register is used by the MCU in order to set the PERxLPEN bit.
    volatile uint32_t RCC_MC_AHB3LPENCLRR;   // [read-write] This register is used by the MCU in order to clear the PERxLPEN bit
    volatile uint32_t RCC_MC_AHB4LPENSETR;   // [read-write] This register is used by the MCU in order to set the PERxLPEN bit.
    volatile uint32_t RCC_MC_AHB4LPENCLRR;   // [read-write] This register is used by the MCU in order to clear the PERxLPEN bit of the corresponding peripheral.
    volatile uint32_t RCC_MC_AXIMLPENSETR;   // [read-write] This register is used by the MCU in order to set the PERxLPEN bit of the corresponding peripheral.
    volatile uint32_t RCC_MC_AXIMLPENCLRR;   // [read-write] This register is used by the MCU in order to clear the PERxLPEN bit of the corresponding peripheral.
    volatile uint32_t RCC_MC_MLAHBLPENSETR;  // [read-write] This register is used by the MCU in order to set the PERxLPEN bit of the corresponding peripheral.
    volatile uint32_t RCC_MC_MLAHBLPENCLRR;  // [read-write] This register is used by the MCU in order to clear the PERxLPEN bit of the corresponding peripheral.
    reserved_t<0x10> _0xc00;
    volatile uint32_t RCC_MC_RSTSCLRR;       // [read-write] This register is used by the MCU to check the reset source.
    reserved_t<0x4> _0xc14;
    volatile uint32_t RCC_MC_CIER;           // [read-write] This register shall be used by the MCU to control the interrupt source enable. Refer to Section10.5: RCC interrupts for more details.
    volatile uint32_t RCC_MC_CIFR;           // [read-write] This register shall be used by the MCU in order to read and clear the interrupt flags.
    reserved_t<0xf6> _0xff4;
    volatile uint32_t RCC_VERR;              // [read-only] This register gives the IP version
    volatile uint32_t RCC_IDR;               // [read-only] This register gives the unique identifier of the RCC
    volatile uint32_t RCC_SIDR;              // [read-only] This register gives the decoding space, which is for the RCC of 4 kB.

    static constexpr uint32_t RCC_TZCR_RESET_VALUE = 0x3;
    static constexpr uint32_t RCC_TZCR_TZEN = 0x1;    // TZEN
    static constexpr uint32_t RCC_TZCR_MCKPROT = 0x2; // MCKPROT

    static constexpr uint32_t RCC_OCENSETR_RESET_VALUE = 0x1;
    static constexpr uint32_t RCC_OCENSETR_HSION = 0x1;      // HSION
    static constexpr uint32_t RCC_OCENSETR_HSIKERON = 0x2;   // HSIKERON
    static constexpr uint32_t RCC_OCENSETR_CSION = 0x10;     // CSION
    static constexpr uint32_t RCC_OCENSETR_CSIKERON = 0x20;  // CSIKERON
    static constexpr uint32_t RCC_OCENSETR_DIGBYP = 0x80;    // DIGBYP
    static constexpr uint32_t RCC_OCENSETR_HSEON = 0x100;    // HSEON
    static constexpr uint32_t RCC_OCENSETR_HSEKERON = 0x200; // HSEKERON
    static constexpr uint32_t RCC_OCENSETR_HSEBYP = 0x400;   // HSEBYP
    static constexpr uint32_t RCC_OCENSETR_HSECSSON = 0x800; // HSECSSON

    static constexpr uint32_t RCC_OCENCLRR_RESET_VALUE = 0x1;
    static constexpr uint32_t RCC_OCENCLRR_HSION = 0x1;      // HSION
    static constexpr uint32_t RCC_OCENCLRR_HSIKERON = 0x2;   // HSIKERON
    static constexpr uint32_t RCC_OCENCLRR_CSION = 0x10;     // CSION
    static constexpr uint32_t RCC_OCENCLRR_CSIKERON = 0x20;  // CSIKERON
    static constexpr uint32_t RCC_OCENCLRR_DIGBYP = 0x80;    // DIGBYP
    static constexpr uint32_t RCC_OCENCLRR_HSEON = 0x100;    // HSEON
    static constexpr uint32_t RCC_OCENCLRR_HSEKERON = 0x200; // HSEKERON
    static constexpr uint32_t RCC_OCENCLRR_HSEBYP = 0x400;   // HSEBYP

    static constexpr uint32_t RCC_HSICFGR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_HSICFGR_HSIDIV =    // HSIDIV
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RCC_HSICFGR_HSITRIM =   // HSITRIM
        bit_field_t<8, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RCC_HSICFGR_HSICAL =    // HSICAL
        bit_field_t<16, 0xfff>::value<X>();

    static constexpr uint32_t RCC_CSICFGR_RESET_VALUE = 0x1000;
    template<uint32_t X>
    static constexpr uint32_t RCC_CSICFGR_CSITRIM =   // CSITRIM
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RCC_CSICFGR_CSICAL =    // CSICAL
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t RCC_MPCKSELR_RESET_VALUE = 0x80000000;
    template<uint32_t X>
    static constexpr uint32_t RCC_MPCKSELR_MPUSRC =                // MPUSRC
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t RCC_MPCKSELR_MPUSRCRDY = 0x80000000; // MPUSRCRDY

    static constexpr uint32_t RCC_ASSCKSELR_RESET_VALUE = 0x80000000;
    template<uint32_t X>
    static constexpr uint32_t RCC_ASSCKSELR_AXISSRC =                // AXISSRC
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t RCC_ASSCKSELR_AXISSRCRDY = 0x80000000; // AXISSRCRDY

    static constexpr uint32_t RCC_RCK12SELR_RESET_VALUE = 0x80000000;
    template<uint32_t X>
    static constexpr uint32_t RCC_RCK12SELR_PLL12SRC =                // PLL12SRC
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t RCC_RCK12SELR_PLL12SRCRDY = 0x80000000; // PLL12SRCRDY

    static constexpr uint32_t RCC_MPCKDIVR_RESET_VALUE = 0x80000001;
    template<uint32_t X>
    static constexpr uint32_t RCC_MPCKDIVR_MPUDIV =                // MPUDIV
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t RCC_MPCKDIVR_MPUDIVRDY = 0x80000000; // MPUDIVRDY

    static constexpr uint32_t RCC_AXIDIVR_RESET_VALUE = 0x80000000;
    template<uint32_t X>
    static constexpr uint32_t RCC_AXIDIVR_AXIDIV =                // AXIDIV
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t RCC_AXIDIVR_AXIDIVRDY = 0x80000000; // AXIDIVRDY

    static constexpr uint32_t RCC_APB4DIVR_RESET_VALUE = 0x80000000;
    template<uint32_t X>
    static constexpr uint32_t RCC_APB4DIVR_APB4DIV =                // APB4DIV
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t RCC_APB4DIVR_APB4DIVRDY = 0x80000000; // APB4DIVRDY

    static constexpr uint32_t RCC_APB5DIVR_RESET_VALUE = 0x80000000;
    template<uint32_t X>
    static constexpr uint32_t RCC_APB5DIVR_APB5DIV =                // APB5DIV
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t RCC_APB5DIVR_APB5DIVRDY = 0x80000000; // APB5DIVRDY

    static constexpr uint32_t RCC_RTCDIVR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_RTCDIVR_RTCDIV =   // RTCDIV
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t RCC_MSSCKSELR_RESET_VALUE = 0x80000000;
    template<uint32_t X>
    static constexpr uint32_t RCC_MSSCKSELR_MCUSSRC =                // MCUSSRC
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t RCC_MSSCKSELR_MCUSSRCRDY = 0x80000000; // MCUSSRCRDY

    static constexpr uint32_t RCC_PLL1CR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_PLL1CR_PLLON = 0x1;     // PLLON
    static constexpr uint32_t RCC_PLL1CR_PLL1RDY = 0x2;   // PLL1RDY
    static constexpr uint32_t RCC_PLL1CR_SSCG_CTRL = 0x4; // SSCG_CTRL
    static constexpr uint32_t RCC_PLL1CR_DIVPEN = 0x10;   // DIVPEN
    static constexpr uint32_t RCC_PLL1CR_DIVQEN = 0x20;   // DIVQEN
    static constexpr uint32_t RCC_PLL1CR_DIVREN = 0x40;   // DIVREN

    static constexpr uint32_t RCC_PLL1CFGR1_RESET_VALUE = 0x10031;
    template<uint32_t X>
    static constexpr uint32_t RCC_PLL1CFGR1_DIVN =    // DIVN
        bit_field_t<0, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RCC_PLL1CFGR1_DIVM1 =   // DIVM1
        bit_field_t<16, 0x3f>::value<X>();

    static constexpr uint32_t RCC_PLL1CFGR2_RESET_VALUE = 0x10100;
    template<uint32_t X>
    static constexpr uint32_t RCC_PLL1CFGR2_DIVP =   // DIVP
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RCC_PLL1CFGR2_DIVQ =   // DIVQ
        bit_field_t<8, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RCC_PLL1CFGR2_DIVR =   // DIVR
        bit_field_t<16, 0x7f>::value<X>();

    static constexpr uint32_t RCC_PLL1FRACR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_PLL1FRACR_FRACV =           // FRACV
        bit_field_t<3, 0x1fff>::value<X>();
    static constexpr uint32_t RCC_PLL1FRACR_FRACLE = 0x10000; // FRACLE

    static constexpr uint32_t RCC_PLL1CSGR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_PLL1CSGR_MOD_PER =           // MOD_PER
        bit_field_t<0, 0x1fff>::value<X>();
    static constexpr uint32_t RCC_PLL1CSGR_TPDFN_DIS = 0x2000; // TPDFN_DIS
    static constexpr uint32_t RCC_PLL1CSGR_RPDFN_DIS = 0x4000; // RPDFN_DIS
    static constexpr uint32_t RCC_PLL1CSGR_SSCG_MODE = 0x8000; // SSCG_MODE
    template<uint32_t X>
    static constexpr uint32_t RCC_PLL1CSGR_INC_STEP =          // INC_STEP
        bit_field_t<16, 0x7fff>::value<X>();

    static constexpr uint32_t RCC_PLL2CR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_PLL2CR_PLLON = 0x1;     // PLLON
    static constexpr uint32_t RCC_PLL2CR_PLL2RDY = 0x2;   // PLL2RDY
    static constexpr uint32_t RCC_PLL2CR_SSCG_CTRL = 0x4; // SSCG_CTRL
    static constexpr uint32_t RCC_PLL2CR_DIVPEN = 0x10;   // DIVPEN
    static constexpr uint32_t RCC_PLL2CR_DIVQEN = 0x20;   // DIVQEN
    static constexpr uint32_t RCC_PLL2CR_DIVREN = 0x40;   // DIVREN

    static constexpr uint32_t RCC_PLL2CFGR1_RESET_VALUE = 0x10063;
    template<uint32_t X>
    static constexpr uint32_t RCC_PLL2CFGR1_DIVN =    // DIVN
        bit_field_t<0, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RCC_PLL2CFGR1_DIVM2 =   // DIVM2
        bit_field_t<16, 0x3f>::value<X>();

    static constexpr uint32_t RCC_PLL2CFGR2_RESET_VALUE = 0x10101;
    template<uint32_t X>
    static constexpr uint32_t RCC_PLL2CFGR2_DIVP =   // DIVP
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RCC_PLL2CFGR2_DIVQ =   // DIVQ
        bit_field_t<8, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RCC_PLL2CFGR2_DIVR =   // DIVR
        bit_field_t<16, 0x7f>::value<X>();

    static constexpr uint32_t RCC_PLL2FRACR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_PLL2FRACR_FRACV =           // FRACV
        bit_field_t<3, 0x1fff>::value<X>();
    static constexpr uint32_t RCC_PLL2FRACR_FRACLE = 0x10000; // FRACLE

    static constexpr uint32_t RCC_PLL2CSGR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_PLL2CSGR_MOD_PER =           // MOD_PER
        bit_field_t<0, 0x1fff>::value<X>();
    static constexpr uint32_t RCC_PLL2CSGR_TPDFN_DIS = 0x2000; // TPDFN_DIS
    static constexpr uint32_t RCC_PLL2CSGR_RPDFN_DIS = 0x4000; // RPDFN_DIS
    static constexpr uint32_t RCC_PLL2CSGR_SSCG_MODE = 0x8000; // SSCG_MODE
    template<uint32_t X>
    static constexpr uint32_t RCC_PLL2CSGR_INC_STEP =          // INC_STEP
        bit_field_t<16, 0x7fff>::value<X>();

    static constexpr uint32_t RCC_I2C46CKSELR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_I2C46CKSELR_I2C46SRC =   // I2C46SRC
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t RCC_SPI6CKSELR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_SPI6CKSELR_SPI6SRC =   // SPI6SRC
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t RCC_UART1CKSELR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_UART1CKSELR_UART1SRC =   // UART1SRC
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t RCC_RNG1CKSELR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_RNG1CKSELR_RNG1SRC =   // RNG1SRC
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t RCC_CPERCKSELR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_CPERCKSELR_CKPERSRC =   // CKPERSRC
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t RCC_STGENCKSELR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_STGENCKSELR_STGENSRC =   // STGENSRC
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t RCC_DDRITFCR_RESET_VALUE = 0xfd02a;
    static constexpr uint32_t RCC_DDRITFCR_DDRC1EN = 0x1;          // DDRC1EN
    static constexpr uint32_t RCC_DDRITFCR_DDRC1LPEN = 0x2;        // DDRC1LPEN
    static constexpr uint32_t RCC_DDRITFCR_DDRC2EN = 0x4;          // DDRC2EN
    static constexpr uint32_t RCC_DDRITFCR_DDRC2LPEN = 0x8;        // DDRC2LPEN
    static constexpr uint32_t RCC_DDRITFCR_DDRPHYCEN = 0x10;       // DDRPHYCEN
    static constexpr uint32_t RCC_DDRITFCR_DDRPHYCLPEN = 0x20;     // DDRPHYCLPEN
    static constexpr uint32_t RCC_DDRITFCR_DDRCAPBEN = 0x40;       // DDRCAPBEN
    static constexpr uint32_t RCC_DDRITFCR_DDRCAPBLPEN = 0x80;     // DDRCAPBLPEN
    static constexpr uint32_t RCC_DDRITFCR_AXIDCGEN = 0x100;       // AXIDCGEN
    static constexpr uint32_t RCC_DDRITFCR_DDRPHYCAPBEN = 0x200;   // DDRPHYCAPBEN
    static constexpr uint32_t RCC_DDRITFCR_DDRPHYCAPBLPEN = 0x400; // DDRPHYCAPBLPEN
    template<uint32_t X>
    static constexpr uint32_t RCC_DDRITFCR_KERDCG_DLY =            // KERDCG_DLY
        bit_field_t<11, 0x7>::value<X>();
    static constexpr uint32_t RCC_DDRITFCR_DDRCAPBRST = 0x4000;    // DDRCAPBRST
    static constexpr uint32_t RCC_DDRITFCR_DDRCAXIRST = 0x8000;    // DDRCAXIRST
    static constexpr uint32_t RCC_DDRITFCR_DDRCORERST = 0x10000;   // DDRCORERST
    static constexpr uint32_t RCC_DDRITFCR_DPHYAPBRST = 0x20000;   // DPHYAPBRST
    static constexpr uint32_t RCC_DDRITFCR_DPHYRST = 0x40000;      // DPHYRST
    static constexpr uint32_t RCC_DDRITFCR_DPHYCTLRST = 0x80000;   // DPHYCTLRST
    template<uint32_t X>
    static constexpr uint32_t RCC_DDRITFCR_DDRCKMOD =              // DDRCKMOD
        bit_field_t<20, 0x7>::value<X>();
    static constexpr uint32_t RCC_DDRITFCR_GSKPMOD = 0x800000;     // GSKPMOD
    static constexpr uint32_t RCC_DDRITFCR_GSKPCTRL = 0x1000000;   // GSKPCTRL
    template<uint32_t X>
    static constexpr uint32_t RCC_DDRITFCR_DFILP_WIDTH =           // DFILP_WIDTH
        bit_field_t<25, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RCC_DDRITFCR_GSKP_DUR =              // GSKP_DUR
        bit_field_t<28, 0xf>::value<X>();

    static constexpr uint32_t RCC_MP_BOOTCR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MP_BOOTCR_MCU_BEN = 0x1; // MCU_BEN
    static constexpr uint32_t RCC_MP_BOOTCR_MPU_BEN = 0x2; // MPU_BEN

    static constexpr uint32_t RCC_MP_SREQSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MP_SREQSETR_STPREQ_P0 = 0x1; // STPREQ_P0
    static constexpr uint32_t RCC_MP_SREQSETR_STPREQ_P1 = 0x2; // STPREQ_P1

    static constexpr uint32_t RCC_MP_SREQCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MP_SREQCLRR_STPREQ_P0 = 0x1; // STPREQ_P0
    static constexpr uint32_t RCC_MP_SREQCLRR_STPREQ_P1 = 0x2; // STPREQ_P1

    static constexpr uint32_t RCC_MP_GCR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MP_GCR_BOOT_MCU = 0x1; // BOOT_MCU

    static constexpr uint32_t RCC_MP_APRSTCR_RESET_VALUE = 0x7f00;
    static constexpr uint32_t RCC_MP_APRSTCR_RDCTLEN = 0x1; // RDCTLEN
    template<uint32_t X>
    static constexpr uint32_t RCC_MP_APRSTCR_RSTTO =        // RSTTO
        bit_field_t<8, 0x7f>::value<X>();

    static constexpr uint32_t RCC_MP_APRSTSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_MP_APRSTSR_RSTTOV =   // RSTTOV
        bit_field_t<8, 0x7f>::value<X>();

    static constexpr uint32_t RCC_BDCR_RESET_VALUE = 0x20;
    static constexpr uint32_t RCC_BDCR_LSEON = 0x1;         // LSEON
    static constexpr uint32_t RCC_BDCR_LSEBYP = 0x2;        // LSEBYP
    static constexpr uint32_t RCC_BDCR_LSERDY = 0x4;        // LSERDY
    static constexpr uint32_t RCC_BDCR_DIGBYP = 0x8;        // DIGBYP
    template<uint32_t X>
    static constexpr uint32_t RCC_BDCR_LSEDRV =             // LSEDRV
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t RCC_BDCR_LSECSSON = 0x100;    // LSECSSON
    static constexpr uint32_t RCC_BDCR_LSECSSD = 0x200;     // LSECSSD
    template<uint32_t X>
    static constexpr uint32_t RCC_BDCR_RTCSRC =             // RTCSRC
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t RCC_BDCR_RTCCKEN = 0x100000;  // RTCCKEN
    static constexpr uint32_t RCC_BDCR_VSWRST = 0x80000000; // VSWRST

    static constexpr uint32_t RCC_RDLSICR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_RDLSICR_LSION = 0x1;  // LSION
    static constexpr uint32_t RCC_RDLSICR_LSIRDY = 0x2; // LSIRDY
    template<uint32_t X>
    static constexpr uint32_t RCC_RDLSICR_MRD =         // MRD
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RCC_RDLSICR_EADLY =       // EADLY
        bit_field_t<24, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RCC_RDLSICR_SPARE =       // SPARE
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t RCC_APB4RSTSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_APB4RSTSETR_LTDCRST = 0x1;       // LTDCRST
    static constexpr uint32_t RCC_APB4RSTSETR_DSIRST = 0x10;       // DSIRST
    static constexpr uint32_t RCC_APB4RSTSETR_DDRPERFMRST = 0x100; // DDRPERFMRST
    static constexpr uint32_t RCC_APB4RSTSETR_USBPHYRST = 0x10000; // USBPHYRST

    static constexpr uint32_t RCC_APB4RSTCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_APB4RSTCLRR_LTDCRST = 0x1;       // LTDCRST
    static constexpr uint32_t RCC_APB4RSTCLRR_DSIRST = 0x10;       // DSIRST
    static constexpr uint32_t RCC_APB4RSTCLRR_DDRPERFMRST = 0x100; // DDRPERFMRST
    static constexpr uint32_t RCC_APB4RSTCLRR_USBPHYRST = 0x10000; // USBPHYRST

    static constexpr uint32_t RCC_APB5RSTSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_APB5RSTSETR_SPI6RST = 0x1;       // SPI6RST
    static constexpr uint32_t RCC_APB5RSTSETR_I2C4RST = 0x4;       // I2C4RST
    static constexpr uint32_t RCC_APB5RSTSETR_I2C6RST = 0x8;       // I2C6RST
    static constexpr uint32_t RCC_APB5RSTSETR_USART1RST = 0x10;    // USART1RST
    static constexpr uint32_t RCC_APB5RSTSETR_STGENRST = 0x100000; // STGENRST

    static constexpr uint32_t RCC_APB5RSTCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_APB5RSTCLRR_SPI6RST = 0x1;       // SPI6RST
    static constexpr uint32_t RCC_APB5RSTCLRR_I2C4RST = 0x4;       // I2C4RST
    static constexpr uint32_t RCC_APB5RSTCLRR_I2C6RST = 0x8;       // I2C6RST
    static constexpr uint32_t RCC_APB5RSTCLRR_USART1RST = 0x10;    // USART1RST
    static constexpr uint32_t RCC_APB5RSTCLRR_STGENRST = 0x100000; // STGENRST

    static constexpr uint32_t RCC_AHB5RSTSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_AHB5RSTSETR_GPIOZRST = 0x1;     // GPIOZRST
    static constexpr uint32_t RCC_AHB5RSTSETR_CRYP1RST = 0x10;    // CRYP1RST
    static constexpr uint32_t RCC_AHB5RSTSETR_HASH1RST = 0x20;    // HASH1RST
    static constexpr uint32_t RCC_AHB5RSTSETR_RNG1RST = 0x40;     // RNG1RST
    static constexpr uint32_t RCC_AHB5RSTSETR_AXIMCRST = 0x10000; // AXIMCRST

    static constexpr uint32_t RCC_AHB5RSTCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_AHB5RSTCLRR_GPIOZRST = 0x1;     // GPIOZRST
    static constexpr uint32_t RCC_AHB5RSTCLRR_CRYP1RST = 0x10;    // CRYP1RST
    static constexpr uint32_t RCC_AHB5RSTCLRR_HASH1RST = 0x20;    // HASH1RST
    static constexpr uint32_t RCC_AHB5RSTCLRR_RNG1RST = 0x40;     // RNG1RST
    static constexpr uint32_t RCC_AHB5RSTCLRR_AXIMCRST = 0x10000; // AXIMCRST

    static constexpr uint32_t RCC_AHB6RSTSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_AHB6RSTSETR_GPURST = 0x20;       // GPURST
    static constexpr uint32_t RCC_AHB6RSTSETR_ETHMACRST = 0x400;   // ETHMACRST
    static constexpr uint32_t RCC_AHB6RSTSETR_FMCRST = 0x1000;     // FMCRST
    static constexpr uint32_t RCC_AHB6RSTSETR_QSPIRST = 0x4000;    // QSPIRST
    static constexpr uint32_t RCC_AHB6RSTSETR_SDMMC1RST = 0x10000; // SDMMC1RST
    static constexpr uint32_t RCC_AHB6RSTSETR_SDMMC2RST = 0x20000; // SDMMC2RST
    static constexpr uint32_t RCC_AHB6RSTSETR_CRC1RST = 0x100000;  // CRC1RST
    static constexpr uint32_t RCC_AHB6RSTSETR_USBHRST = 0x1000000; // USBHRST

    static constexpr uint32_t RCC_AHB6RSTCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_AHB6RSTCLRR_ETHMACRST = 0x400;   // ETHMACRST
    static constexpr uint32_t RCC_AHB6RSTCLRR_FMCRST = 0x1000;     // FMCRST
    static constexpr uint32_t RCC_AHB6RSTCLRR_QSPIRST = 0x4000;    // QSPIRST
    static constexpr uint32_t RCC_AHB6RSTCLRR_SDMMC1RST = 0x10000; // SDMMC1RST
    static constexpr uint32_t RCC_AHB6RSTCLRR_SDMMC2RST = 0x20000; // SDMMC2RST
    static constexpr uint32_t RCC_AHB6RSTCLRR_CRC1RST = 0x100000;  // CRC1RST
    static constexpr uint32_t RCC_AHB6RSTCLRR_USBHRST = 0x1000000; // USBHRST

    static constexpr uint32_t RCC_TZAHB6RSTSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_TZAHB6RSTSETR_MDMARST = 0x1; // MDMARST

    static constexpr uint32_t RCC_TZAHB6RSTCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_TZAHB6RSTCLRR_MDMARST = 0x1; // MDMARST

    static constexpr uint32_t RCC_MP_APB4ENSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MP_APB4ENSETR_LTDCEN = 0x1;         // LTDCEN
    static constexpr uint32_t RCC_MP_APB4ENSETR_DSIEN = 0x10;         // DSIEN
    static constexpr uint32_t RCC_MP_APB4ENSETR_DDRPERFMEN = 0x100;   // DDRPERFMEN
    static constexpr uint32_t RCC_MP_APB4ENSETR_IWDG2APBEN = 0x8000;  // IWDG2APBEN
    static constexpr uint32_t RCC_MP_APB4ENSETR_USBPHYEN = 0x10000;   // USBPHYEN
    static constexpr uint32_t RCC_MP_APB4ENSETR_STGENROEN = 0x100000; // STGENROEN

    static constexpr uint32_t RCC_MP_APB4ENCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MP_APB4ENCLRR_LTDCEN = 0x1;         // LTDCEN
    static constexpr uint32_t RCC_MP_APB4ENCLRR_DSIEN = 0x10;         // DSIEN
    static constexpr uint32_t RCC_MP_APB4ENCLRR_DDRPERFMEN = 0x100;   // DDRPERFMEN
    static constexpr uint32_t RCC_MP_APB4ENCLRR_IWDG2APBEN = 0x8000;  // IWDG2APBEN
    static constexpr uint32_t RCC_MP_APB4ENCLRR_USBPHYEN = 0x10000;   // USBPHYEN
    static constexpr uint32_t RCC_MP_APB4ENCLRR_STGENROEN = 0x100000; // STGENROEN

    static constexpr uint32_t RCC_MP_APB5ENSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MP_APB5ENSETR_SPI6EN = 0x1;        // SPI6EN
    static constexpr uint32_t RCC_MP_APB5ENSETR_I2C4EN = 0x4;        // I2C4EN
    static constexpr uint32_t RCC_MP_APB5ENSETR_I2C6EN = 0x8;        // I2C6EN
    static constexpr uint32_t RCC_MP_APB5ENSETR_USART1EN = 0x10;     // USART1EN
    static constexpr uint32_t RCC_MP_APB5ENSETR_RTCAPBEN = 0x100;    // RTCAPBEN
    static constexpr uint32_t RCC_MP_APB5ENSETR_TZC1EN = 0x800;      // TZC1EN
    static constexpr uint32_t RCC_MP_APB5ENSETR_TZC2EN = 0x1000;     // TZC2EN
    static constexpr uint32_t RCC_MP_APB5ENSETR_TZPCEN = 0x2000;     // TZPCEN
    static constexpr uint32_t RCC_MP_APB5ENSETR_IWDG1APBEN = 0x8000; // IWDG1APBEN
    static constexpr uint32_t RCC_MP_APB5ENSETR_BSECEN = 0x10000;    // BSECEN
    static constexpr uint32_t RCC_MP_APB5ENSETR_STGENEN = 0x100000;  // STGENEN

    static constexpr uint32_t RCC_MP_APB5ENCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MP_APB5ENCLRR_SPI6EN = 0x1;        // SPI6EN
    static constexpr uint32_t RCC_MP_APB5ENCLRR_I2C4EN = 0x4;        // I2C4EN
    static constexpr uint32_t RCC_MP_APB5ENCLRR_I2C6EN = 0x8;        // I2C6EN
    static constexpr uint32_t RCC_MP_APB5ENCLRR_USART1EN = 0x10;     // USART1EN
    static constexpr uint32_t RCC_MP_APB5ENCLRR_RTCAPBEN = 0x100;    // RTCAPBEN
    static constexpr uint32_t RCC_MP_APB5ENCLRR_TZC1EN = 0x800;      // TZC1EN
    static constexpr uint32_t RCC_MP_APB5ENCLRR_TZC2EN = 0x1000;     // TZC2EN
    static constexpr uint32_t RCC_MP_APB5ENCLRR_TZPCEN = 0x2000;     // TZPCEN
    static constexpr uint32_t RCC_MP_APB5ENCLRR_IWDG1APBEN = 0x8000; // IWDG1APBEN
    static constexpr uint32_t RCC_MP_APB5ENCLRR_BSECEN = 0x10000;    // BSECEN
    static constexpr uint32_t RCC_MP_APB5ENCLRR_STGENEN = 0x100000;  // STGENEN

    static constexpr uint32_t RCC_MP_AHB5ENSETR_RESET_VALUE = 0x10000;
    static constexpr uint32_t RCC_MP_AHB5ENSETR_GPIOZEN = 0x1;     // GPIOZEN
    static constexpr uint32_t RCC_MP_AHB5ENSETR_CRYP1EN = 0x10;    // CRYP1EN
    static constexpr uint32_t RCC_MP_AHB5ENSETR_HASH1EN = 0x20;    // HASH1EN
    static constexpr uint32_t RCC_MP_AHB5ENSETR_RNG1EN = 0x40;     // RNG1EN
    static constexpr uint32_t RCC_MP_AHB5ENSETR_BKPSRAMEN = 0x100; // BKPSRAMEN
    static constexpr uint32_t RCC_MP_AHB5ENSETR_AXIMCEN = 0x10000; // AXIMCEN

    static constexpr uint32_t RCC_MP_AHB5ENCLRR_RESET_VALUE = 0x10000;
    static constexpr uint32_t RCC_MP_AHB5ENCLRR_GPIOZEN = 0x1;     // GPIOZEN
    static constexpr uint32_t RCC_MP_AHB5ENCLRR_CRYP1EN = 0x10;    // CRYP1EN
    static constexpr uint32_t RCC_MP_AHB5ENCLRR_HASH1EN = 0x20;    // HASH1EN
    static constexpr uint32_t RCC_MP_AHB5ENCLRR_RNG1EN = 0x40;     // RNG1EN
    static constexpr uint32_t RCC_MP_AHB5ENCLRR_BKPSRAMEN = 0x100; // BKPSRAMEN
    static constexpr uint32_t RCC_MP_AHB5ENCLRR_AXIMCEN = 0x10000; // AXIMCEN

    static constexpr uint32_t RCC_MP_AHB6ENSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MP_AHB6ENSETR_MDMAEN = 0x1;       // MDMAEN
    static constexpr uint32_t RCC_MP_AHB6ENSETR_GPUEN = 0x20;       // GPUEN
    static constexpr uint32_t RCC_MP_AHB6ENSETR_ETHCKEN = 0x80;     // ETHCKEN
    static constexpr uint32_t RCC_MP_AHB6ENSETR_ETHTXEN = 0x100;    // ETHTXEN
    static constexpr uint32_t RCC_MP_AHB6ENSETR_ETHRXEN = 0x200;    // ETHRXEN
    static constexpr uint32_t RCC_MP_AHB6ENSETR_ETHMACEN = 0x400;   // ETHMACEN
    static constexpr uint32_t RCC_MP_AHB6ENSETR_FMCEN = 0x1000;     // FMCEN
    static constexpr uint32_t RCC_MP_AHB6ENSETR_QSPIEN = 0x4000;    // QSPIEN
    static constexpr uint32_t RCC_MP_AHB6ENSETR_SDMMC1EN = 0x10000; // SDMMC1EN
    static constexpr uint32_t RCC_MP_AHB6ENSETR_SDMMC2EN = 0x20000; // SDMMC2EN
    static constexpr uint32_t RCC_MP_AHB6ENSETR_CRC1EN = 0x100000;  // CRC1EN
    static constexpr uint32_t RCC_MP_AHB6ENSETR_USBHEN = 0x1000000; // USBHEN

    static constexpr uint32_t RCC_MP_AHB6ENCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MP_AHB6ENCLRR_MDMAEN = 0x1;       // MDMAEN
    static constexpr uint32_t RCC_MP_AHB6ENCLRR_GPUEN = 0x20;       // GPUEN
    static constexpr uint32_t RCC_MP_AHB6ENCLRR_ETHCKEN = 0x80;     // ETHCKEN
    static constexpr uint32_t RCC_MP_AHB6ENCLRR_ETHTXEN = 0x100;    // ETHTXEN
    static constexpr uint32_t RCC_MP_AHB6ENCLRR_ETHRXEN = 0x200;    // ETHRXEN
    static constexpr uint32_t RCC_MP_AHB6ENCLRR_ETHMACEN = 0x400;   // ETHMACEN
    static constexpr uint32_t RCC_MP_AHB6ENCLRR_FMCEN = 0x1000;     // FMCEN
    static constexpr uint32_t RCC_MP_AHB6ENCLRR_QSPIEN = 0x4000;    // QSPIEN
    static constexpr uint32_t RCC_MP_AHB6ENCLRR_SDMMC1EN = 0x10000; // SDMMC1EN
    static constexpr uint32_t RCC_MP_AHB6ENCLRR_SDMMC2EN = 0x20000; // SDMMC2EN
    static constexpr uint32_t RCC_MP_AHB6ENCLRR_CRC1EN = 0x100000;  // CRC1EN
    static constexpr uint32_t RCC_MP_AHB6ENCLRR_USBHEN = 0x1000000; // USBHEN

    static constexpr uint32_t RCC_MP_TZAHB6ENSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MP_TZAHB6ENSETR_MDMAEN = 0x1; // MDMAEN

    static constexpr uint32_t RCC_MP_TZAHB6ENCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MP_TZAHB6ENCLRR_MDMAEN = 0x1; // MDMAEN

    static constexpr uint32_t RCC_MC_APB4ENSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MC_APB4ENSETR_LTDCEN = 0x1;         // LTDCEN
    static constexpr uint32_t RCC_MC_APB4ENSETR_DSIEN = 0x10;         // DSIEN
    static constexpr uint32_t RCC_MC_APB4ENSETR_DDRPERFMEN = 0x100;   // DDRPERFMEN
    static constexpr uint32_t RCC_MC_APB4ENSETR_USBPHYEN = 0x10000;   // USBPHYEN
    static constexpr uint32_t RCC_MC_APB4ENSETR_STGENROEN = 0x100000; // STGENROEN

    static constexpr uint32_t RCC_MC_APB4ENCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MC_APB4ENCLRR_LTDCEN = 0x1;         // LTDCEN
    static constexpr uint32_t RCC_MC_APB4ENCLRR_DSIEN = 0x10;         // DSIEN
    static constexpr uint32_t RCC_MC_APB4ENCLRR_DDRPERFMEN = 0x100;   // DDRPERFMEN
    static constexpr uint32_t RCC_MC_APB4ENCLRR_USBPHYEN = 0x10000;   // USBPHYEN
    static constexpr uint32_t RCC_MC_APB4ENCLRR_STGENROEN = 0x100000; // STGENROEN

    static constexpr uint32_t RCC_MC_APB5ENSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MC_APB5ENSETR_SPI6EN = 0x1;       // SPI6EN
    static constexpr uint32_t RCC_MC_APB5ENSETR_I2C4EN = 0x4;       // I2C4EN
    static constexpr uint32_t RCC_MC_APB5ENSETR_I2C6EN = 0x8;       // I2C6EN
    static constexpr uint32_t RCC_MC_APB5ENSETR_USART1EN = 0x10;    // USART1EN
    static constexpr uint32_t RCC_MC_APB5ENSETR_RTCAPBEN = 0x100;   // RTCAPBEN
    static constexpr uint32_t RCC_MC_APB5ENSETR_TZC1EN = 0x800;     // TZC1EN
    static constexpr uint32_t RCC_MC_APB5ENSETR_TZC2EN = 0x1000;    // TZC2EN
    static constexpr uint32_t RCC_MC_APB5ENSETR_TZPCEN = 0x2000;    // TZPCEN
    static constexpr uint32_t RCC_MC_APB5ENSETR_BSECEN = 0x10000;   // BSECEN
    static constexpr uint32_t RCC_MC_APB5ENSETR_STGENEN = 0x100000; // STGENEN

    static constexpr uint32_t RCC_MC_APB5ENCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MC_APB5ENCLRR_SPI6EN = 0x1;       // SPI6EN
    static constexpr uint32_t RCC_MC_APB5ENCLRR_I2C4EN = 0x4;       // I2C4EN
    static constexpr uint32_t RCC_MC_APB5ENCLRR_I2C6EN = 0x8;       // I2C6EN
    static constexpr uint32_t RCC_MC_APB5ENCLRR_USART1EN = 0x10;    // USART1EN
    static constexpr uint32_t RCC_MC_APB5ENCLRR_RTCAPBEN = 0x100;   // RTCAPBEN
    static constexpr uint32_t RCC_MC_APB5ENCLRR_TZC1EN = 0x800;     // TZC1EN
    static constexpr uint32_t RCC_MC_APB5ENCLRR_TZC2EN = 0x1000;    // TZC2EN
    static constexpr uint32_t RCC_MC_APB5ENCLRR_TZPCEN = 0x2000;    // TZPCEN
    static constexpr uint32_t RCC_MC_APB5ENCLRR_BSECEN = 0x10000;   // BSECEN
    static constexpr uint32_t RCC_MC_APB5ENCLRR_STGENEN = 0x100000; // STGENEN

    static constexpr uint32_t RCC_MC_AHB5ENSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MC_AHB5ENSETR_GPIOZEN = 0x1;     // GPIOZEN
    static constexpr uint32_t RCC_MC_AHB5ENSETR_CRYP1EN = 0x10;    // CRYP1EN
    static constexpr uint32_t RCC_MC_AHB5ENSETR_HASH1EN = 0x20;    // HASH1EN
    static constexpr uint32_t RCC_MC_AHB5ENSETR_RNG1EN = 0x40;     // RNG1EN
    static constexpr uint32_t RCC_MC_AHB5ENSETR_BKPSRAMEN = 0x100; // BKPSRAMEN

    static constexpr uint32_t RCC_MC_AHB5ENCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MC_AHB5ENCLRR_GPIOZEN = 0x1;     // GPIOZEN
    static constexpr uint32_t RCC_MC_AHB5ENCLRR_CRYP1EN = 0x10;    // CRYP1EN
    static constexpr uint32_t RCC_MC_AHB5ENCLRR_HASH1EN = 0x20;    // HASH1EN
    static constexpr uint32_t RCC_MC_AHB5ENCLRR_RNG1EN = 0x40;     // RNG1EN
    static constexpr uint32_t RCC_MC_AHB5ENCLRR_BKPSRAMEN = 0x100; // BKPSRAMEN

    static constexpr uint32_t RCC_MC_AHB6ENSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MC_AHB6ENSETR_MDMAEN = 0x1;       // MDMAEN
    static constexpr uint32_t RCC_MC_AHB6ENSETR_GPUEN = 0x20;       // GPUEN
    static constexpr uint32_t RCC_MC_AHB6ENSETR_ETHCKEN = 0x80;     // ETHCKEN
    static constexpr uint32_t RCC_MC_AHB6ENSETR_ETHTXEN = 0x100;    // ETHTXEN
    static constexpr uint32_t RCC_MC_AHB6ENSETR_ETHRXEN = 0x200;    // ETHRXEN
    static constexpr uint32_t RCC_MC_AHB6ENSETR_ETHMACEN = 0x400;   // ETHMACEN
    static constexpr uint32_t RCC_MC_AHB6ENSETR_FMCEN = 0x1000;     // FMCEN
    static constexpr uint32_t RCC_MC_AHB6ENSETR_QSPIEN = 0x4000;    // QSPIEN
    static constexpr uint32_t RCC_MC_AHB6ENSETR_SDMMC1EN = 0x10000; // SDMMC1EN
    static constexpr uint32_t RCC_MC_AHB6ENSETR_SDMMC2EN = 0x20000; // SDMMC2EN
    static constexpr uint32_t RCC_MC_AHB6ENSETR_CRC1EN = 0x100000;  // CRC1EN
    static constexpr uint32_t RCC_MC_AHB6ENSETR_USBHEN = 0x1000000; // USBHEN

    static constexpr uint32_t RCC_MC_AHB6ENCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MC_AHB6ENCLRR_MDMAEN = 0x1;       // MDMAEN
    static constexpr uint32_t RCC_MC_AHB6ENCLRR_GPUEN = 0x20;       // GPUEN
    static constexpr uint32_t RCC_MC_AHB6ENCLRR_ETHCKEN = 0x80;     // ETHCKEN
    static constexpr uint32_t RCC_MC_AHB6ENCLRR_ETHTXEN = 0x100;    // ETHTXEN
    static constexpr uint32_t RCC_MC_AHB6ENCLRR_ETHRXEN = 0x200;    // ETHRXEN
    static constexpr uint32_t RCC_MC_AHB6ENCLRR_ETHMACEN = 0x400;   // ETHMACEN
    static constexpr uint32_t RCC_MC_AHB6ENCLRR_FMCEN = 0x1000;     // FMCEN
    static constexpr uint32_t RCC_MC_AHB6ENCLRR_QSPIEN = 0x4000;    // QSPIEN
    static constexpr uint32_t RCC_MC_AHB6ENCLRR_SDMMC1EN = 0x10000; // SDMMC1EN
    static constexpr uint32_t RCC_MC_AHB6ENCLRR_SDMMC2EN = 0x20000; // SDMMC2EN
    static constexpr uint32_t RCC_MC_AHB6ENCLRR_CRC1EN = 0x100000;  // CRC1EN
    static constexpr uint32_t RCC_MC_AHB6ENCLRR_USBHEN = 0x1000000; // USBHEN

    static constexpr uint32_t RCC_MP_APB4LPENSETR_RESET_VALUE = 0x118111;
    static constexpr uint32_t RCC_MP_APB4LPENSETR_LTDCLPEN = 0x1;          // LTDCLPEN
    static constexpr uint32_t RCC_MP_APB4LPENSETR_DSILPEN = 0x10;          // DSILPEN
    static constexpr uint32_t RCC_MP_APB4LPENSETR_DDRPERFMLPEN = 0x100;    // DDRPERFMLPEN
    static constexpr uint32_t RCC_MP_APB4LPENSETR_IWDG2APBLPEN = 0x8000;   // IWDG2APBLPEN
    static constexpr uint32_t RCC_MP_APB4LPENSETR_USBPHYLPEN = 0x10000;    // USBPHYLPEN
    static constexpr uint32_t RCC_MP_APB4LPENSETR_STGENROLPEN = 0x100000;  // STGENROLPEN
    static constexpr uint32_t RCC_MP_APB4LPENSETR_STGENROSTPEN = 0x200000; // STGENROSTPEN

    static constexpr uint32_t RCC_MP_APB4LPENCLRR_RESET_VALUE = 0x118111;
    static constexpr uint32_t RCC_MP_APB4LPENCLRR_LTDCLPEN = 0x1;          // LTDCLPEN
    static constexpr uint32_t RCC_MP_APB4LPENCLRR_DSILPEN = 0x10;          // DSILPEN
    static constexpr uint32_t RCC_MP_APB4LPENCLRR_DDRPERFMLPEN = 0x100;    // DDRPERFMLPEN
    static constexpr uint32_t RCC_MP_APB4LPENCLRR_IWDG2APBLPEN = 0x8000;   // IWDG2APBLPEN
    static constexpr uint32_t RCC_MP_APB4LPENCLRR_USBPHYLPEN = 0x10000;    // USBPHYLPEN
    static constexpr uint32_t RCC_MP_APB4LPENCLRR_STGENROLPEN = 0x100000;  // STGENROLPEN
    static constexpr uint32_t RCC_MP_APB4LPENCLRR_STGENROSTPEN = 0x200000; // STGENROSTPEN

    static constexpr uint32_t RCC_MP_APB5LPENSETR_RESET_VALUE = 0x11391d;
    static constexpr uint32_t RCC_MP_APB5LPENSETR_SPI6LPEN = 0x1;        // SPI6LPEN
    static constexpr uint32_t RCC_MP_APB5LPENSETR_I2C4LPEN = 0x4;        // I2C4LPEN
    static constexpr uint32_t RCC_MP_APB5LPENSETR_I2C6LPEN = 0x8;        // I2C6LPEN
    static constexpr uint32_t RCC_MP_APB5LPENSETR_USART1LPEN = 0x10;     // USART1LPEN
    static constexpr uint32_t RCC_MP_APB5LPENSETR_RTCAPBLPEN = 0x100;    // RTCAPBLPEN
    static constexpr uint32_t RCC_MP_APB5LPENSETR_TZC1LPEN = 0x800;      // TZC1LPEN
    static constexpr uint32_t RCC_MP_APB5LPENSETR_TZC2LPEN = 0x1000;     // TZC2LPEN
    static constexpr uint32_t RCC_MP_APB5LPENSETR_TZPCLPEN = 0x2000;     // TZPCLPEN
    static constexpr uint32_t RCC_MP_APB5LPENSETR_IWDG1APBLPEN = 0x8000; // IWDG1APBLPEN
    static constexpr uint32_t RCC_MP_APB5LPENSETR_BSECLPEN = 0x10000;    // BSECLPEN
    static constexpr uint32_t RCC_MP_APB5LPENSETR_STGENLPEN = 0x100000;  // STGENLPEN
    static constexpr uint32_t RCC_MP_APB5LPENSETR_STGENSTPEN = 0x200000; // STGENSTPEN

    static constexpr uint32_t RCC_MP_APB5LPENCLRR_RESET_VALUE = 0x11391d;
    static constexpr uint32_t RCC_MP_APB5LPENCLRR_SPI6LPEN = 0x1;        // SPI6LPEN
    static constexpr uint32_t RCC_MP_APB5LPENCLRR_I2C4LPEN = 0x4;        // I2C4LPEN
    static constexpr uint32_t RCC_MP_APB5LPENCLRR_I2C6LPEN = 0x8;        // I2C6LPEN
    static constexpr uint32_t RCC_MP_APB5LPENCLRR_USART1LPEN = 0x10;     // USART1LPEN
    static constexpr uint32_t RCC_MP_APB5LPENCLRR_RTCAPBLPEN = 0x100;    // RTCAPBLPEN
    static constexpr uint32_t RCC_MP_APB5LPENCLRR_TZC1LPEN = 0x800;      // TZC1LPEN
    static constexpr uint32_t RCC_MP_APB5LPENCLRR_TZC2LPEN = 0x1000;     // TZC2LPEN
    static constexpr uint32_t RCC_MP_APB5LPENCLRR_TZPCLPEN = 0x2000;     // TZPCLPEN
    static constexpr uint32_t RCC_MP_APB5LPENCLRR_IWDG1APBLPEN = 0x8000; // IWDG1APBLPEN
    static constexpr uint32_t RCC_MP_APB5LPENCLRR_BSECLPEN = 0x10000;    // BSECLPEN
    static constexpr uint32_t RCC_MP_APB5LPENCLRR_STGENLPEN = 0x100000;  // STGENLPEN
    static constexpr uint32_t RCC_MP_APB5LPENCLRR_STGENSTPEN = 0x200000; // STGENSTPEN

    static constexpr uint32_t RCC_MP_AHB5LPENSETR_RESET_VALUE = 0x171;
    static constexpr uint32_t RCC_MP_AHB5LPENSETR_GPIOZLPEN = 0x1;     // GPIOZLPEN
    static constexpr uint32_t RCC_MP_AHB5LPENSETR_CRYP1LPEN = 0x10;    // CRYP1LPEN
    static constexpr uint32_t RCC_MP_AHB5LPENSETR_HASH1LPEN = 0x20;    // HASH1LPEN
    static constexpr uint32_t RCC_MP_AHB5LPENSETR_RNG1LPEN = 0x40;     // RNG1LPEN
    static constexpr uint32_t RCC_MP_AHB5LPENSETR_BKPSRAMLPEN = 0x100; // BKPSRAMLPEN

    static constexpr uint32_t RCC_MP_AHB5LPENCLRR_RESET_VALUE = 0x171;
    static constexpr uint32_t RCC_MP_AHB5LPENCLRR_GPIOZLPEN = 0x1;     // GPIOZLPEN
    static constexpr uint32_t RCC_MP_AHB5LPENCLRR_CRYP1LPEN = 0x10;    // CRYP1LPEN
    static constexpr uint32_t RCC_MP_AHB5LPENCLRR_HASH1LPEN = 0x20;    // HASH1LPEN
    static constexpr uint32_t RCC_MP_AHB5LPENCLRR_RNG1LPEN = 0x40;     // RNG1LPEN
    static constexpr uint32_t RCC_MP_AHB5LPENCLRR_BKPSRAMLPEN = 0x100; // BKPSRAMLPEN

    static constexpr uint32_t RCC_MP_AHB6LPENSETR_RESET_VALUE = 0x11357a1;
    static constexpr uint32_t RCC_MP_AHB6LPENSETR_MDMALPEN = 0x1;       // MDMALPEN
    static constexpr uint32_t RCC_MP_AHB6LPENSETR_GPULPEN = 0x20;       // GPULPEN
    static constexpr uint32_t RCC_MP_AHB6LPENSETR_ETHCKLPEN = 0x80;     // ETHCKLPEN
    static constexpr uint32_t RCC_MP_AHB6LPENSETR_ETHTXLPEN = 0x100;    // ETHTXLPEN
    static constexpr uint32_t RCC_MP_AHB6LPENSETR_ETHRXLPEN = 0x200;    // ETHRXLPEN
    static constexpr uint32_t RCC_MP_AHB6LPENSETR_ETHMACLPEN = 0x400;   // ETHMACLPEN
    static constexpr uint32_t RCC_MP_AHB6LPENSETR_ETHSTPEN = 0x800;     // ETHSTPEN
    static constexpr uint32_t RCC_MP_AHB6LPENSETR_FMCLPEN = 0x1000;     // FMCLPEN
    static constexpr uint32_t RCC_MP_AHB6LPENSETR_QSPILPEN = 0x4000;    // QSPILPEN
    static constexpr uint32_t RCC_MP_AHB6LPENSETR_SDMMC1LPEN = 0x10000; // SDMMC1LPEN
    static constexpr uint32_t RCC_MP_AHB6LPENSETR_SDMMC2LPEN = 0x20000; // SDMMC2LPEN
    static constexpr uint32_t RCC_MP_AHB6LPENSETR_CRC1LPEN = 0x100000;  // CRC1LPEN
    static constexpr uint32_t RCC_MP_AHB6LPENSETR_USBHLPEN = 0x1000000; // USBHLPEN

    static constexpr uint32_t RCC_MP_AHB6LPENCLRR_RESET_VALUE = 0x11357a1;
    static constexpr uint32_t RCC_MP_AHB6LPENCLRR_MDMALPEN = 0x1;       // MDMALPEN
    static constexpr uint32_t RCC_MP_AHB6LPENCLRR_GPULPEN = 0x20;       // GPULPEN
    static constexpr uint32_t RCC_MP_AHB6LPENCLRR_ETHCKLPEN = 0x80;     // ETHCKLPEN
    static constexpr uint32_t RCC_MP_AHB6LPENCLRR_ETHTXLPEN = 0x100;    // ETHTXLPEN
    static constexpr uint32_t RCC_MP_AHB6LPENCLRR_ETHRXLPEN = 0x200;    // ETHRXLPEN
    static constexpr uint32_t RCC_MP_AHB6LPENCLRR_ETHMACLPEN = 0x400;   // ETHMACLPEN
    static constexpr uint32_t RCC_MP_AHB6LPENCLRR_ETHSTPEN = 0x800;     // ETHSTPEN
    static constexpr uint32_t RCC_MP_AHB6LPENCLRR_FMCLPEN = 0x1000;     // FMCLPEN
    static constexpr uint32_t RCC_MP_AHB6LPENCLRR_QSPILPEN = 0x4000;    // QSPILPEN
    static constexpr uint32_t RCC_MP_AHB6LPENCLRR_SDMMC1LPEN = 0x10000; // SDMMC1LPEN
    static constexpr uint32_t RCC_MP_AHB6LPENCLRR_SDMMC2LPEN = 0x20000; // SDMMC2LPEN
    static constexpr uint32_t RCC_MP_AHB6LPENCLRR_CRC1LPEN = 0x100000;  // CRC1LPEN
    static constexpr uint32_t RCC_MP_AHB6LPENCLRR_USBHLPEN = 0x1000000; // USBHLPEN

    static constexpr uint32_t RCC_MP_TZAHB6LPENSETR_RESET_VALUE = 0x1;
    static constexpr uint32_t RCC_MP_TZAHB6LPENSETR_MDMALPEN = 0x1; // MDMALPEN

    static constexpr uint32_t RCC_MP_TZAHB6LPENCLRR_RESET_VALUE = 0x1;
    static constexpr uint32_t RCC_MP_TZAHB6LPENCLRR_MDMALPEN = 0x1; // MDMALPEN

    static constexpr uint32_t RCC_MC_APB4LPENSETR_RESET_VALUE = 0x110111;
    static constexpr uint32_t RCC_MC_APB4LPENSETR_LTDCLPEN = 0x1;          // LTDCLPEN
    static constexpr uint32_t RCC_MC_APB4LPENSETR_DSILPEN = 0x10;          // DSILPEN
    static constexpr uint32_t RCC_MC_APB4LPENSETR_DDRPERFMLPEN = 0x100;    // DDRPERFMLPEN
    static constexpr uint32_t RCC_MC_APB4LPENSETR_USBPHYLPEN = 0x10000;    // USBPHYLPEN
    static constexpr uint32_t RCC_MC_APB4LPENSETR_STGENROLPEN = 0x100000;  // STGENROLPEN
    static constexpr uint32_t RCC_MC_APB4LPENSETR_STGENROSTPEN = 0x200000; // STGENROSTPEN

    static constexpr uint32_t RCC_MC_APB4LPENCLRR_RESET_VALUE = 0x110111;
    static constexpr uint32_t RCC_MC_APB4LPENCLRR_LTDCLPEN = 0x1;          // LTDCLPEN
    static constexpr uint32_t RCC_MC_APB4LPENCLRR_DSILPEN = 0x10;          // DSILPEN
    static constexpr uint32_t RCC_MC_APB4LPENCLRR_DDRPERFMLPEN = 0x100;    // DDRPERFMLPEN
    static constexpr uint32_t RCC_MC_APB4LPENCLRR_USBPHYLPEN = 0x10000;    // USBPHYLPEN
    static constexpr uint32_t RCC_MC_APB4LPENCLRR_STGENROLPEN = 0x100000;  // STGENROLPEN
    static constexpr uint32_t RCC_MC_APB4LPENCLRR_STGENROSTPEN = 0x200000; // STGENROSTPEN

    static constexpr uint32_t RCC_MC_APB5LPENSETR_RESET_VALUE = 0x11391d;
    static constexpr uint32_t RCC_MC_APB5LPENSETR_SPI6LPEN = 0x1;        // SPI6LPEN
    static constexpr uint32_t RCC_MC_APB5LPENSETR_I2C4LPEN = 0x4;        // I2C4LPEN
    static constexpr uint32_t RCC_MC_APB5LPENSETR_I2C6LPEN = 0x8;        // I2C6LPEN
    static constexpr uint32_t RCC_MC_APB5LPENSETR_USART1LPEN = 0x10;     // USART1LPEN
    static constexpr uint32_t RCC_MC_APB5LPENSETR_RTCAPBLPEN = 0x100;    // RTCAPBLPEN
    static constexpr uint32_t RCC_MC_APB5LPENSETR_TZC1LPEN = 0x800;      // TZC1LPEN
    static constexpr uint32_t RCC_MC_APB5LPENSETR_TZC2LPEN = 0x1000;     // TZC2LPEN
    static constexpr uint32_t RCC_MC_APB5LPENSETR_TZPCLPEN = 0x2000;     // TZPCLPEN
    static constexpr uint32_t RCC_MC_APB5LPENSETR_BSECLPEN = 0x10000;    // BSECLPEN
    static constexpr uint32_t RCC_MC_APB5LPENSETR_STGENLPEN = 0x100000;  // STGENLPEN
    static constexpr uint32_t RCC_MC_APB5LPENSETR_STGENSTPEN = 0x200000; // STGENSTPEN

    static constexpr uint32_t RCC_MC_APB5LPENCLRR_RESET_VALUE = 0x11391d;
    static constexpr uint32_t RCC_MC_APB5LPENCLRR_SPI6LPEN = 0x1;        // SPI6LPEN
    static constexpr uint32_t RCC_MC_APB5LPENCLRR_I2C4LPEN = 0x4;        // I2C4LPEN
    static constexpr uint32_t RCC_MC_APB5LPENCLRR_I2C6LPEN = 0x8;        // I2C6LPEN
    static constexpr uint32_t RCC_MC_APB5LPENCLRR_USART1LPEN = 0x10;     // USART1LPEN
    static constexpr uint32_t RCC_MC_APB5LPENCLRR_RTCAPBLPEN = 0x100;    // RTCAPBLPEN
    static constexpr uint32_t RCC_MC_APB5LPENCLRR_TZC1LPEN = 0x800;      // TZC1LPEN
    static constexpr uint32_t RCC_MC_APB5LPENCLRR_TZC2LPEN = 0x1000;     // TZC2LPEN
    static constexpr uint32_t RCC_MC_APB5LPENCLRR_TZPCLPEN = 0x2000;     // TZPCLPEN
    static constexpr uint32_t RCC_MC_APB5LPENCLRR_BSECLPEN = 0x10000;    // BSECLPEN
    static constexpr uint32_t RCC_MC_APB5LPENCLRR_STGENLPEN = 0x100000;  // STGENLPEN
    static constexpr uint32_t RCC_MC_APB5LPENCLRR_STGENSTPEN = 0x200000; // STGENSTPEN

    static constexpr uint32_t RCC_MC_AHB5LPENSETR_RESET_VALUE = 0x171;
    static constexpr uint32_t RCC_MC_AHB5LPENSETR_GPIOZLPEN = 0x1;     // GPIOZLPEN
    static constexpr uint32_t RCC_MC_AHB5LPENSETR_CRYP1LPEN = 0x10;    // CRYP1LPEN
    static constexpr uint32_t RCC_MC_AHB5LPENSETR_HASH1LPEN = 0x20;    // HASH1LPEN
    static constexpr uint32_t RCC_MC_AHB5LPENSETR_RNG1LPEN = 0x40;     // RNG1LPEN
    static constexpr uint32_t RCC_MC_AHB5LPENSETR_BKPSRAMLPEN = 0x100; // BKPSRAMLPEN

    static constexpr uint32_t RCC_MC_AHB5LPENCLRR_RESET_VALUE = 0x171;
    static constexpr uint32_t RCC_MC_AHB5LPENCLRR_GPIOZLPEN = 0x1;     // GPIOZLPEN
    static constexpr uint32_t RCC_MC_AHB5LPENCLRR_CRYP1LPEN = 0x10;    // CRYP1LPEN
    static constexpr uint32_t RCC_MC_AHB5LPENCLRR_HASH1LPEN = 0x20;    // HASH1LPEN
    static constexpr uint32_t RCC_MC_AHB5LPENCLRR_RNG1LPEN = 0x40;     // RNG1LPEN
    static constexpr uint32_t RCC_MC_AHB5LPENCLRR_BKPSRAMLPEN = 0x100; // BKPSRAMLPEN

    static constexpr uint32_t RCC_MC_AHB6LPENSETR_RESET_VALUE = 0x11357a1;
    static constexpr uint32_t RCC_MC_AHB6LPENSETR_MDMALPEN = 0x1;       // MDMALPEN
    static constexpr uint32_t RCC_MC_AHB6LPENSETR_GPULPEN = 0x20;       // GPULPEN
    static constexpr uint32_t RCC_MC_AHB6LPENSETR_ETHCKLPEN = 0x80;     // ETHCKLPEN
    static constexpr uint32_t RCC_MC_AHB6LPENSETR_ETHTXLPEN = 0x100;    // ETHTXLPEN
    static constexpr uint32_t RCC_MC_AHB6LPENSETR_ETHRXLPEN = 0x200;    // ETHRXLPEN
    static constexpr uint32_t RCC_MC_AHB6LPENSETR_ETHMACLPEN = 0x400;   // ETHMACLPEN
    static constexpr uint32_t RCC_MC_AHB6LPENSETR_ETHSTPEN = 0x800;     // ETHSTPEN
    static constexpr uint32_t RCC_MC_AHB6LPENSETR_FMCLPEN = 0x1000;     // FMCLPEN
    static constexpr uint32_t RCC_MC_AHB6LPENSETR_QSPILPEN = 0x4000;    // QSPILPEN
    static constexpr uint32_t RCC_MC_AHB6LPENSETR_SDMMC1LPEN = 0x10000; // SDMMC1LPEN
    static constexpr uint32_t RCC_MC_AHB6LPENSETR_SDMMC2LPEN = 0x20000; // SDMMC2LPEN
    static constexpr uint32_t RCC_MC_AHB6LPENSETR_CRC1LPEN = 0x100000;  // CRC1LPEN
    static constexpr uint32_t RCC_MC_AHB6LPENSETR_USBHLPEN = 0x1000000; // USBHLPEN

    static constexpr uint32_t RCC_MC_AHB6LPENCLRR_RESET_VALUE = 0x11357a1;
    static constexpr uint32_t RCC_MC_AHB6LPENCLRR_MDMALPEN = 0x1;       // MDMALPEN
    static constexpr uint32_t RCC_MC_AHB6LPENCLRR_GPULPEN = 0x20;       // GPULPEN
    static constexpr uint32_t RCC_MC_AHB6LPENCLRR_ETHCKLPEN = 0x80;     // ETHCKLPEN
    static constexpr uint32_t RCC_MC_AHB6LPENCLRR_ETHTXLPEN = 0x100;    // ETHTXLPEN
    static constexpr uint32_t RCC_MC_AHB6LPENCLRR_ETHRXLPEN = 0x200;    // ETHRXLPEN
    static constexpr uint32_t RCC_MC_AHB6LPENCLRR_ETHMACLPEN = 0x400;   // ETHMACLPEN
    static constexpr uint32_t RCC_MC_AHB6LPENCLRR_ETHSTPEN = 0x800;     // ETHSTPEN
    static constexpr uint32_t RCC_MC_AHB6LPENCLRR_FMCLPEN = 0x1000;     // FMCLPEN
    static constexpr uint32_t RCC_MC_AHB6LPENCLRR_QSPILPEN = 0x4000;    // QSPILPEN
    static constexpr uint32_t RCC_MC_AHB6LPENCLRR_SDMMC1LPEN = 0x10000; // SDMMC1LPEN
    static constexpr uint32_t RCC_MC_AHB6LPENCLRR_SDMMC2LPEN = 0x20000; // SDMMC2LPEN
    static constexpr uint32_t RCC_MC_AHB6LPENCLRR_CRC1LPEN = 0x100000;  // CRC1LPEN
    static constexpr uint32_t RCC_MC_AHB6LPENCLRR_USBHLPEN = 0x1000000; // USBHLPEN

    static constexpr uint32_t RCC_BR_RSTSCLRR_RESET_VALUE = 0x15;
    static constexpr uint32_t RCC_BR_RSTSCLRR_PORRSTF = 0x1;      // PORRSTF
    static constexpr uint32_t RCC_BR_RSTSCLRR_BORRSTF = 0x2;      // BORRSTF
    static constexpr uint32_t RCC_BR_RSTSCLRR_PADRSTF = 0x4;      // PADRSTF
    static constexpr uint32_t RCC_BR_RSTSCLRR_HCSSRSTF = 0x8;     // HCSSRSTF
    static constexpr uint32_t RCC_BR_RSTSCLRR_VCORERSTF = 0x10;   // VCORERSTF
    static constexpr uint32_t RCC_BR_RSTSCLRR_MPSYSRSTF = 0x40;   // MPSYSRSTF
    static constexpr uint32_t RCC_BR_RSTSCLRR_MCSYSRSTF = 0x80;   // MCSYSRSTF
    static constexpr uint32_t RCC_BR_RSTSCLRR_IWDG1RSTF = 0x100;  // IWDG1RSTF
    static constexpr uint32_t RCC_BR_RSTSCLRR_IWDG2RSTF = 0x200;  // IWDG2RSTF
    static constexpr uint32_t RCC_BR_RSTSCLRR_MPUP0RSTF = 0x2000; // MPUP0RSTF
    static constexpr uint32_t RCC_BR_RSTSCLRR_MPUP1RSTF = 0x4000; // MPUP1RSTF

    static constexpr uint32_t RCC_MP_GRSTCSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MP_GRSTCSETR_MPSYSRST = 0x1;  // MPSYSRST
    static constexpr uint32_t RCC_MP_GRSTCSETR_MCURST = 0x2;    // MCURST
    static constexpr uint32_t RCC_MP_GRSTCSETR_MPUP0RST = 0x10; // MPUP0RST
    static constexpr uint32_t RCC_MP_GRSTCSETR_MPUP1RST = 0x20; // MPUP1RST

    static constexpr uint32_t RCC_MP_RSTSCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MP_RSTSCLRR_PORRSTF = 0x1;       // PORRSTF
    static constexpr uint32_t RCC_MP_RSTSCLRR_BORRSTF = 0x2;       // BORRSTF
    static constexpr uint32_t RCC_MP_RSTSCLRR_PADRSTF = 0x4;       // PADRSTF
    static constexpr uint32_t RCC_MP_RSTSCLRR_HCSSRSTF = 0x8;      // HCSSRSTF
    static constexpr uint32_t RCC_MP_RSTSCLRR_VCORERSTF = 0x10;    // VCORERSTF
    static constexpr uint32_t RCC_MP_RSTSCLRR_MPSYSRSTF = 0x40;    // MPSYSRSTF
    static constexpr uint32_t RCC_MP_RSTSCLRR_MCSYSRSTF = 0x80;    // MCSYSRSTF
    static constexpr uint32_t RCC_MP_RSTSCLRR_IWDG1RSTF = 0x100;   // IWDG1RSTF
    static constexpr uint32_t RCC_MP_RSTSCLRR_IWDG2RSTF = 0x200;   // IWDG2RSTF
    static constexpr uint32_t RCC_MP_RSTSCLRR_STDBYRSTF = 0x800;   // STDBYRSTF
    static constexpr uint32_t RCC_MP_RSTSCLRR_CSTDBYRSTF = 0x1000; // CSTDBYRSTF
    static constexpr uint32_t RCC_MP_RSTSCLRR_MPUP0RSTF = 0x2000;  // MPUP0RSTF
    static constexpr uint32_t RCC_MP_RSTSCLRR_MPUP1RSTF = 0x4000;  // MPUP1RSTF
    static constexpr uint32_t RCC_MP_RSTSCLRR_SPARE = 0x8000;      // SPARE

    static constexpr uint32_t RCC_MP_IWDGFZSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MP_IWDGFZSETR_FZ_IWDG1 = 0x1; // FZ_IWDG1
    static constexpr uint32_t RCC_MP_IWDGFZSETR_FZ_IWDG2 = 0x2; // FZ_IWDG2

    static constexpr uint32_t RCC_MP_IWDGFZCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MP_IWDGFZCLRR_FZ_IWDG1 = 0x1; // FZ_IWDG1
    static constexpr uint32_t RCC_MP_IWDGFZCLRR_FZ_IWDG2 = 0x2; // FZ_IWDG2

    static constexpr uint32_t RCC_MP_CIER_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MP_CIER_LSIRDYIE = 0x1;     // LSIRDYIE
    static constexpr uint32_t RCC_MP_CIER_LSERDYIE = 0x2;     // LSERDYIE
    static constexpr uint32_t RCC_MP_CIER_HSIRDYIE = 0x4;     // HSIRDYIE
    static constexpr uint32_t RCC_MP_CIER_HSERDYIE = 0x8;     // HSERDYIE
    static constexpr uint32_t RCC_MP_CIER_CSIRDYIE = 0x10;    // CSIRDYIE
    static constexpr uint32_t RCC_MP_CIER_PLL1DYIE = 0x100;   // PLL1DYIE
    static constexpr uint32_t RCC_MP_CIER_PLL2DYIE = 0x200;   // PLL2DYIE
    static constexpr uint32_t RCC_MP_CIER_PLL3DYIE = 0x400;   // PLL3DYIE
    static constexpr uint32_t RCC_MP_CIER_PLL4DYIE = 0x800;   // PLL4DYIE
    static constexpr uint32_t RCC_MP_CIER_LSECSSIE = 0x10000; // LSECSSIE
    static constexpr uint32_t RCC_MP_CIER_WKUPIE = 0x100000;  // WKUPIE

    static constexpr uint32_t RCC_MP_CIFR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MP_CIFR_LSIRDYF = 0x1;     // LSIRDYF
    static constexpr uint32_t RCC_MP_CIFR_LSERDYF = 0x2;     // LSERDYF
    static constexpr uint32_t RCC_MP_CIFR_HSIRDYF = 0x4;     // HSIRDYF
    static constexpr uint32_t RCC_MP_CIFR_HSERDYF = 0x8;     // HSERDYF
    static constexpr uint32_t RCC_MP_CIFR_CSIRDYF = 0x10;    // CSIRDYF
    static constexpr uint32_t RCC_MP_CIFR_PLL1DYF = 0x100;   // PLL1DYF
    static constexpr uint32_t RCC_MP_CIFR_PLL2DYF = 0x200;   // PLL2DYF
    static constexpr uint32_t RCC_MP_CIFR_PLL3DYF = 0x400;   // PLL3DYF
    static constexpr uint32_t RCC_MP_CIFR_PLL4DYF = 0x800;   // PLL4DYF
    static constexpr uint32_t RCC_MP_CIFR_LSECSSF = 0x10000; // LSECSSF
    static constexpr uint32_t RCC_MP_CIFR_WKUPF = 0x100000;  // WKUPF

    static constexpr uint32_t RCC_PWRLPDLYCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_PWRLPDLYCR_PWRLP_DLY =           // PWRLP_DLY
        bit_field_t<0, 0x3fffff>::value<X>();
    static constexpr uint32_t RCC_PWRLPDLYCR_MCTMPSKP = 0x1000000; // MCTMPSKP

    static constexpr uint32_t RCC_MP_RSTSSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MP_RSTSSETR_PORRSTF = 0x1;       // PORRSTF
    static constexpr uint32_t RCC_MP_RSTSSETR_BORRSTF = 0x2;       // BORRSTF
    static constexpr uint32_t RCC_MP_RSTSSETR_PADRSTF = 0x4;       // PADRSTF
    static constexpr uint32_t RCC_MP_RSTSSETR_HCSSRSTF = 0x8;      // HCSSRSTF
    static constexpr uint32_t RCC_MP_RSTSSETR_VCORERSTF = 0x10;    // VCORERSTF
    static constexpr uint32_t RCC_MP_RSTSSETR_MPSYSRSTF = 0x40;    // MPSYSRSTF
    static constexpr uint32_t RCC_MP_RSTSSETR_MCSYSRSTF = 0x80;    // MCSYSRSTF
    static constexpr uint32_t RCC_MP_RSTSSETR_IWDG1RSTF = 0x100;   // IWDG1RSTF
    static constexpr uint32_t RCC_MP_RSTSSETR_IWDG2RSTF = 0x200;   // IWDG2RSTF
    static constexpr uint32_t RCC_MP_RSTSSETR_STDBYRSTF = 0x800;   // STDBYRSTF
    static constexpr uint32_t RCC_MP_RSTSSETR_CSTDBYRSTF = 0x1000; // CSTDBYRSTF
    static constexpr uint32_t RCC_MP_RSTSSETR_MPUP0RSTF = 0x2000;  // MPUP0RSTF
    static constexpr uint32_t RCC_MP_RSTSSETR_MPUP1RSTF = 0x4000;  // MPUP1RSTF
    static constexpr uint32_t RCC_MP_RSTSSETR_SPARE = 0x8000;      // SPARE

    static constexpr uint32_t RCC_MCO1CFGR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_MCO1CFGR_MCO1SEL =        // MCO1SEL
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RCC_MCO1CFGR_MCO1DIV =        // MCO1DIV
        bit_field_t<4, 0xf>::value<X>();
    static constexpr uint32_t RCC_MCO1CFGR_MCO1ON = 0x1000; // MCO1ON

    static constexpr uint32_t RCC_MCO2CFGR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_MCO2CFGR_MCO2SEL =        // MCO2SEL
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RCC_MCO2CFGR_MCO2DIV =        // MCO2DIV
        bit_field_t<4, 0xf>::value<X>();
    static constexpr uint32_t RCC_MCO2CFGR_MCO2ON = 0x1000; // MCO2ON

    static constexpr uint32_t RCC_OCRDYR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_OCRDYR_HSIRDY = 0x1;         // HSIRDY
    static constexpr uint32_t RCC_OCRDYR_HSIDIVRDY = 0x4;      // HSIDIVRDY
    static constexpr uint32_t RCC_OCRDYR_CSIRDY = 0x10;        // CSIRDY
    static constexpr uint32_t RCC_OCRDYR_HSERDY = 0x100;       // HSERDY
    static constexpr uint32_t RCC_OCRDYR_MPUCKRDY = 0x800000;  // MPUCKRDY
    static constexpr uint32_t RCC_OCRDYR_AXICKRDY = 0x1000000; // AXICKRDY
    static constexpr uint32_t RCC_OCRDYR_CKREST = 0x2000000;   // CKREST

    static constexpr uint32_t RCC_DBGCFGR_RESET_VALUE = 0x1;
    template<uint32_t X>
    static constexpr uint32_t RCC_DBGCFGR_TRACEDIV =         // TRACEDIV
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t RCC_DBGCFGR_DBGCKEN = 0x100;   // DBGCKEN
    static constexpr uint32_t RCC_DBGCFGR_TRACECKEN = 0x200; // TRACECKEN
    static constexpr uint32_t RCC_DBGCFGR_DBGRST = 0x1000;   // DBGRST

    static constexpr uint32_t RCC_RCK3SELR_RESET_VALUE = 0x80000000;
    template<uint32_t X>
    static constexpr uint32_t RCC_RCK3SELR_PLL3SRC =                // PLL3SRC
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t RCC_RCK3SELR_PLL3SRCRDY = 0x80000000; // PLL3SRCRDY

    static constexpr uint32_t RCC_RCK4SELR_RESET_VALUE = 0x80000000;
    template<uint32_t X>
    static constexpr uint32_t RCC_RCK4SELR_PLL4SRC =                // PLL4SRC
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t RCC_RCK4SELR_PLL4SRCRDY = 0x80000000; // PLL4SRCRDY

    static constexpr uint32_t RCC_TIMG1PRER_RESET_VALUE = 0x80000000;
    static constexpr uint32_t RCC_TIMG1PRER_TIMG1PRE = 0x1;           // TIMG1PRE
    static constexpr uint32_t RCC_TIMG1PRER_TIMG1PRERDY = 0x80000000; // TIMG1PRERDY

    static constexpr uint32_t RCC_TIMG2PRER_RESET_VALUE = 0x80000000;
    static constexpr uint32_t RCC_TIMG2PRER_TIMG2PRE = 0x1;           // TIMG2PRE
    static constexpr uint32_t RCC_TIMG2PRER_TIMG2PRERDY = 0x80000000; // TIMG2PRERDY

    static constexpr uint32_t RCC_MCUDIVR_RESET_VALUE = 0x80000000;
    template<uint32_t X>
    static constexpr uint32_t RCC_MCUDIVR_MCUDIV =                // MCUDIV
        bit_field_t<0, 0xf>::value<X>();
    static constexpr uint32_t RCC_MCUDIVR_MCUDIVRDY = 0x80000000; // MCUDIVRDY

    static constexpr uint32_t RCC_APB1DIVR_RESET_VALUE = 0x80000000;
    template<uint32_t X>
    static constexpr uint32_t RCC_APB1DIVR_APB1DIV =                // APB1DIV
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t RCC_APB1DIVR_APB1DIVRDY = 0x80000000; // APB1DIVRDY

    static constexpr uint32_t RCC_APB2DIVR_RESET_VALUE = 0x80000000;
    template<uint32_t X>
    static constexpr uint32_t RCC_APB2DIVR_APB2DIV =                // APB2DIV
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t RCC_APB2DIVR_APB2DIVRDY = 0x80000000; // APB2DIVRDY

    static constexpr uint32_t RCC_APB3DIVR_RESET_VALUE = 0x80000000;
    template<uint32_t X>
    static constexpr uint32_t RCC_APB3DIVR_APB3DIV =                // APB3DIV
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t RCC_APB3DIVR_APB3DIVRDY = 0x80000000; // APB3DIVRDY

    static constexpr uint32_t RCC_PLL3CR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_PLL3CR_PLLON = 0x1;     // PLLON
    static constexpr uint32_t RCC_PLL3CR_PLL3RDY = 0x2;   // PLL3RDY
    static constexpr uint32_t RCC_PLL3CR_SSCG_CTRL = 0x4; // SSCG_CTRL
    static constexpr uint32_t RCC_PLL3CR_DIVPEN = 0x10;   // DIVPEN
    static constexpr uint32_t RCC_PLL3CR_DIVQEN = 0x20;   // DIVQEN
    static constexpr uint32_t RCC_PLL3CR_DIVREN = 0x40;   // DIVREN

    static constexpr uint32_t RCC_PLL3CFGR1_RESET_VALUE = 0x10031;
    template<uint32_t X>
    static constexpr uint32_t RCC_PLL3CFGR1_DIVN =    // DIVN
        bit_field_t<0, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RCC_PLL3CFGR1_DIVM3 =   // DIVM3
        bit_field_t<16, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RCC_PLL3CFGR1_IFRGE =   // IFRGE
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t RCC_PLL3CFGR2_RESET_VALUE = 0x10101;
    template<uint32_t X>
    static constexpr uint32_t RCC_PLL3CFGR2_DIVP =   // DIVP
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RCC_PLL3CFGR2_DIVQ =   // DIVQ
        bit_field_t<8, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RCC_PLL3CFGR2_DIVR =   // DIVR
        bit_field_t<16, 0x7f>::value<X>();

    static constexpr uint32_t RCC_PLL3FRACR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_PLL3FRACR_FRACV =           // FRACV
        bit_field_t<3, 0x1fff>::value<X>();
    static constexpr uint32_t RCC_PLL3FRACR_FRACLE = 0x10000; // FRACLE

    static constexpr uint32_t RCC_PLL3CSGR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_PLL3CSGR_MOD_PER =           // MOD_PER
        bit_field_t<0, 0x1fff>::value<X>();
    static constexpr uint32_t RCC_PLL3CSGR_TPDFN_DIS = 0x2000; // TPDFN_DIS
    static constexpr uint32_t RCC_PLL3CSGR_RPDFN_DIS = 0x4000; // RPDFN_DIS
    static constexpr uint32_t RCC_PLL3CSGR_SSCG_MODE = 0x8000; // SSCG_MODE
    template<uint32_t X>
    static constexpr uint32_t RCC_PLL3CSGR_INC_STEP =          // INC_STEP
        bit_field_t<16, 0x7fff>::value<X>();

    static constexpr uint32_t RCC_PLL4CR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_PLL4CR_PLLON = 0x1;     // PLLON
    static constexpr uint32_t RCC_PLL4CR_PLL4RDY = 0x2;   // PLL4RDY
    static constexpr uint32_t RCC_PLL4CR_SSCG_CTRL = 0x4; // SSCG_CTRL
    static constexpr uint32_t RCC_PLL4CR_DIVPEN = 0x10;   // DIVPEN
    static constexpr uint32_t RCC_PLL4CR_DIVQEN = 0x20;   // DIVQEN
    static constexpr uint32_t RCC_PLL4CR_DIVREN = 0x40;   // DIVREN

    static constexpr uint32_t RCC_PLL4CFGR1_RESET_VALUE = 0x10031;
    template<uint32_t X>
    static constexpr uint32_t RCC_PLL4CFGR1_DIVN =    // DIVN
        bit_field_t<0, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RCC_PLL4CFGR1_DIVM4 =   // DIVM4
        bit_field_t<16, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RCC_PLL4CFGR1_IFRGE =   // IFRGE
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t RCC_PLL4CFGR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_PLL4CFGR2_DIVP =   // DIVP
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RCC_PLL4CFGR2_DIVQ =   // DIVQ
        bit_field_t<8, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RCC_PLL4CFGR2_DIVR =   // DIVR
        bit_field_t<16, 0x7f>::value<X>();

    static constexpr uint32_t RCC_PLL4FRACR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_PLL4FRACR_FRACV =           // FRACV
        bit_field_t<3, 0x1fff>::value<X>();
    static constexpr uint32_t RCC_PLL4FRACR_FRACLE = 0x10000; // FRACLE

    static constexpr uint32_t RCC_PLL4CSGR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_PLL4CSGR_MOD_PER =           // MOD_PER
        bit_field_t<0, 0x1fff>::value<X>();
    static constexpr uint32_t RCC_PLL4CSGR_TPDFN_DIS = 0x2000; // TPDFN_DIS
    static constexpr uint32_t RCC_PLL4CSGR_RPDFN_DIS = 0x4000; // RPDFN_DIS
    static constexpr uint32_t RCC_PLL4CSGR_SSCG_MODE = 0x8000; // SSCG_MODE
    template<uint32_t X>
    static constexpr uint32_t RCC_PLL4CSGR_INC_STEP =          // INC_STEP
        bit_field_t<16, 0x7fff>::value<X>();

    static constexpr uint32_t RCC_I2C12CKSELR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_I2C12CKSELR_I2C12SRC =   // I2C12SRC
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t RCC_I2C35CKSELR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_I2C35CKSELR_I2C35SRC =   // I2C35SRC
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t RCC_SAI1CKSELR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_SAI1CKSELR_SAI1SRC =   // SAI1SRC
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t RCC_SAI2CKSELR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_SAI2CKSELR_SAI2SRC =   // SAI2SRC
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t RCC_SAI3CKSELR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_SAI3CKSELR_SAI3SRC =   // SAI3SRC
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t RCC_SAI4CKSELR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_SAI4CKSELR_SAI4SRC =   // SAI4SRC
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t RCC_SPI2S1CKSELR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_SPI2S1CKSELR_SPI1SRC =   // SPI1SRC
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t RCC_SPI2S23CKSELR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_SPI2S23CKSELR_SPI23SRC =   // SPI23SRC
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t RCC_SPI45CKSELR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_SPI45CKSELR_SPI45SRC =   // SPI45SRC
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t RCC_UART6CKSELR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_UART6CKSELR_UART6SRC =   // UART6SRC
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t RCC_UART24CKSELR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_UART24CKSELR_UART24SRC =   // UART24SRC
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t RCC_UART35CKSELR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_UART35CKSELR_UART35SRC =   // UART35SRC
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t RCC_UART78CKSELR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_UART78CKSELR_UART78SRC =   // UART78SRC
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t RCC_SDMMC12CKSELR_RESET_VALUE = 0x3;
    template<uint32_t X>
    static constexpr uint32_t RCC_SDMMC12CKSELR_SDMMC12SRC =   // SDMMC12SRC
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t RCC_SDMMC3CKSELR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_SDMMC3CKSELR_SDMMC3SRC =   // SDMMC3SRC
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t RCC_ETHCKSELR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_ETHCKSELR_ETHSRC =      // ETHSRC
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RCC_ETHCKSELR_ETHPTPDIV =   // ETHPTPDIV
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t RCC_QSPICKSELR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_QSPICKSELR_QSPISRC =   // QSPISRC
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t RCC_FMCCKSELR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_FMCCKSELR_FMCSRC =   // FMCSRC
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t RCC_FDCANCKSELR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_FDCANCKSELR_FDCANSRC =   // FDCANSRC
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t RCC_SPDIFCKSELR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_SPDIFCKSELR_SPDIFSRC =   // SPDIFSRC
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t RCC_CECCKSELR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_CECCKSELR_CECSRC =   // CECSRC
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t RCC_USBCKSELR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_USBCKSELR_USBPHYSRC =     // USBPHYSRC
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t RCC_USBCKSELR_USBOSRC = 0x10; // USBOSRC

    static constexpr uint32_t RCC_RNG2CKSELR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_RNG2CKSELR_RNG2SRC =   // RNG2SRC
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t RCC_DSICKSELR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_DSICKSELR_DSISRC = 0x1; // DSISRC

    static constexpr uint32_t RCC_ADCCKSELR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_ADCCKSELR_ADCSRC =   // ADCSRC
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t RCC_LPTIM45CKSELR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_LPTIM45CKSELR_LPTIM45SRC =   // LPTIM45SRC
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t RCC_LPTIM23CKSELR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_LPTIM23CKSELR_LPTIM23SRC =   // LPTIM23SRC
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t RCC_LPTIM1CKSELR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCC_LPTIM1CKSELR_LPTIM1SRC =   // LPTIM1SRC
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t RCC_APB1RSTSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_APB1RSTSETR_TIM2RST = 0x1;         // TIM2RST
    static constexpr uint32_t RCC_APB1RSTSETR_TIM3RST = 0x2;         // TIM3RST
    static constexpr uint32_t RCC_APB1RSTSETR_TIM4RST = 0x4;         // TIM4RST
    static constexpr uint32_t RCC_APB1RSTSETR_TIM5RST = 0x8;         // TIM5RST
    static constexpr uint32_t RCC_APB1RSTSETR_TIM6RST = 0x10;        // TIM6RST
    static constexpr uint32_t RCC_APB1RSTSETR_TIM7RST = 0x20;        // TIM7RST
    static constexpr uint32_t RCC_APB1RSTSETR_TIM12RST = 0x40;       // TIM12RST
    static constexpr uint32_t RCC_APB1RSTSETR_TIM13RST = 0x80;       // TIM13RST
    static constexpr uint32_t RCC_APB1RSTSETR_TIM14RST = 0x100;      // TIM14RST
    static constexpr uint32_t RCC_APB1RSTSETR_LPTIM1RST = 0x200;     // LPTIM1RST
    static constexpr uint32_t RCC_APB1RSTSETR_SPI2RST = 0x800;       // SPI2RST
    static constexpr uint32_t RCC_APB1RSTSETR_SPI3RST = 0x1000;      // SPI3RST
    static constexpr uint32_t RCC_APB1RSTSETR_USART2RST = 0x4000;    // USART2RST
    static constexpr uint32_t RCC_APB1RSTSETR_USART3RST = 0x8000;    // USART3RST
    static constexpr uint32_t RCC_APB1RSTSETR_UART4RST = 0x10000;    // UART4RST
    static constexpr uint32_t RCC_APB1RSTSETR_UART5RST = 0x20000;    // UART5RST
    static constexpr uint32_t RCC_APB1RSTSETR_UART7RST = 0x40000;    // UART7RST
    static constexpr uint32_t RCC_APB1RSTSETR_UART8RST = 0x80000;    // UART8RST
    static constexpr uint32_t RCC_APB1RSTSETR_I2C1RST = 0x200000;    // I2C1RST
    static constexpr uint32_t RCC_APB1RSTSETR_I2C2RST = 0x400000;    // I2C2RST
    static constexpr uint32_t RCC_APB1RSTSETR_I2C3RST = 0x800000;    // I2C3RST
    static constexpr uint32_t RCC_APB1RSTSETR_I2C5RST = 0x1000000;   // I2C5RST
    static constexpr uint32_t RCC_APB1RSTSETR_SPDIFRST = 0x4000000;  // SPDIFRST
    static constexpr uint32_t RCC_APB1RSTSETR_CECRST = 0x8000000;    // CECRST
    static constexpr uint32_t RCC_APB1RSTSETR_DAC12RST = 0x20000000; // DAC12RST
    static constexpr uint32_t RCC_APB1RSTSETR_MDIOSRST = 0x80000000; // MDIOSRST

    static constexpr uint32_t RCC_APB1RSTCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_APB1RSTCLRR_TIM2RST = 0x1;         // TIM2RST
    static constexpr uint32_t RCC_APB1RSTCLRR_TIM3RST = 0x2;         // TIM3RST
    static constexpr uint32_t RCC_APB1RSTCLRR_TIM4RST = 0x4;         // TIM4RST
    static constexpr uint32_t RCC_APB1RSTCLRR_TIM5RST = 0x8;         // TIM5RST
    static constexpr uint32_t RCC_APB1RSTCLRR_TIM6RST = 0x10;        // TIM6RST
    static constexpr uint32_t RCC_APB1RSTCLRR_TIM7RST = 0x20;        // TIM7RST
    static constexpr uint32_t RCC_APB1RSTCLRR_TIM12RST = 0x40;       // TIM12RST
    static constexpr uint32_t RCC_APB1RSTCLRR_TIM13RST = 0x80;       // TIM13RST
    static constexpr uint32_t RCC_APB1RSTCLRR_TIM14RST = 0x100;      // TIM14RST
    static constexpr uint32_t RCC_APB1RSTCLRR_LPTIM1RST = 0x200;     // LPTIM1RST
    static constexpr uint32_t RCC_APB1RSTCLRR_SPI2RST = 0x800;       // SPI2RST
    static constexpr uint32_t RCC_APB1RSTCLRR_SPI3RST = 0x1000;      // SPI3RST
    static constexpr uint32_t RCC_APB1RSTCLRR_USART2RST = 0x4000;    // USART2RST
    static constexpr uint32_t RCC_APB1RSTCLRR_USART3RST = 0x8000;    // USART3RST
    static constexpr uint32_t RCC_APB1RSTCLRR_UART4RST = 0x10000;    // UART4RST
    static constexpr uint32_t RCC_APB1RSTCLRR_UART5RST = 0x20000;    // UART5RST
    static constexpr uint32_t RCC_APB1RSTCLRR_UART7RST = 0x40000;    // UART7RST
    static constexpr uint32_t RCC_APB1RSTCLRR_UART8RST = 0x80000;    // UART8RST
    static constexpr uint32_t RCC_APB1RSTCLRR_I2C1RST = 0x200000;    // I2C1RST
    static constexpr uint32_t RCC_APB1RSTCLRR_I2C2RST = 0x400000;    // I2C2RST
    static constexpr uint32_t RCC_APB1RSTCLRR_I2C3RST = 0x800000;    // I2C3RST
    static constexpr uint32_t RCC_APB1RSTCLRR_I2C5RST = 0x1000000;   // I2C5RST
    static constexpr uint32_t RCC_APB1RSTCLRR_SPDIFRST = 0x4000000;  // SPDIFRST
    static constexpr uint32_t RCC_APB1RSTCLRR_CECRST = 0x8000000;    // CECRST
    static constexpr uint32_t RCC_APB1RSTCLRR_DAC12RST = 0x20000000; // DAC12RST
    static constexpr uint32_t RCC_APB1RSTCLRR_MDIOSRST = 0x80000000; // MDIOSRST

    static constexpr uint32_t RCC_APB2RSTSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_APB2RSTSETR_TIM1RST = 0x1;        // TIM1RST
    static constexpr uint32_t RCC_APB2RSTSETR_TIM8RST = 0x2;        // TIM8RST
    static constexpr uint32_t RCC_APB2RSTSETR_TIM15RST = 0x4;       // TIM15RST
    static constexpr uint32_t RCC_APB2RSTSETR_TIM16RST = 0x8;       // TIM16RST
    static constexpr uint32_t RCC_APB2RSTSETR_TIM17RST = 0x10;      // TIM17RST
    static constexpr uint32_t RCC_APB2RSTSETR_SPI1RST = 0x100;      // SPI1RST
    static constexpr uint32_t RCC_APB2RSTSETR_SPI4RST = 0x200;      // SPI4RST
    static constexpr uint32_t RCC_APB2RSTSETR_SPI5RST = 0x400;      // SPI5RST
    static constexpr uint32_t RCC_APB2RSTSETR_USART6RST = 0x2000;   // USART6RST
    static constexpr uint32_t RCC_APB2RSTSETR_SAI1RST = 0x10000;    // SAI1RST
    static constexpr uint32_t RCC_APB2RSTSETR_SAI2RST = 0x20000;    // SAI2RST
    static constexpr uint32_t RCC_APB2RSTSETR_SAI3RST = 0x40000;    // SAI3RST
    static constexpr uint32_t RCC_APB2RSTSETR_DFSDMRST = 0x100000;  // DFSDMRST
    static constexpr uint32_t RCC_APB2RSTSETR_FDCANRST = 0x1000000; // FDCANRST

    static constexpr uint32_t RCC_APB2RSTCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_APB2RSTCLRR_TIM1RST = 0x1;        // TIM1RST
    static constexpr uint32_t RCC_APB2RSTCLRR_TIM8RST = 0x2;        // TIM8RST
    static constexpr uint32_t RCC_APB2RSTCLRR_TIM15RST = 0x4;       // TIM15RST
    static constexpr uint32_t RCC_APB2RSTCLRR_TIM16RST = 0x8;       // TIM16RST
    static constexpr uint32_t RCC_APB2RSTCLRR_TIM17RST = 0x10;      // TIM17RST
    static constexpr uint32_t RCC_APB2RSTCLRR_SPI1RST = 0x100;      // SPI1RST
    static constexpr uint32_t RCC_APB2RSTCLRR_SPI4RST = 0x200;      // SPI4RST
    static constexpr uint32_t RCC_APB2RSTCLRR_SPI5RST = 0x400;      // SPI5RST
    static constexpr uint32_t RCC_APB2RSTCLRR_USART6RST = 0x2000;   // USART6RST
    static constexpr uint32_t RCC_APB2RSTCLRR_SAI1RST = 0x10000;    // SAI1RST
    static constexpr uint32_t RCC_APB2RSTCLRR_SAI2RST = 0x20000;    // SAI2RST
    static constexpr uint32_t RCC_APB2RSTCLRR_SAI3RST = 0x40000;    // SAI3RST
    static constexpr uint32_t RCC_APB2RSTCLRR_DFSDMRST = 0x100000;  // DFSDMRST
    static constexpr uint32_t RCC_APB2RSTCLRR_FDCANRST = 0x1000000; // FDCANRST

    static constexpr uint32_t RCC_APB3RSTSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_APB3RSTSETR_LPTIM2RST = 0x1;   // LPTIM2RST
    static constexpr uint32_t RCC_APB3RSTSETR_LPTIM3RST = 0x2;   // LPTIM3RST
    static constexpr uint32_t RCC_APB3RSTSETR_LPTIM4RST = 0x4;   // LPTIM4RST
    static constexpr uint32_t RCC_APB3RSTSETR_LPTIM5RST = 0x8;   // LPTIM5RST
    static constexpr uint32_t RCC_APB3RSTSETR_SAI4RST = 0x100;   // SAI4RST
    static constexpr uint32_t RCC_APB3RSTSETR_SYSCFGRST = 0x800; // SYSCFGRST
    static constexpr uint32_t RCC_APB3RSTSETR_VREFRST = 0x2000;  // VREFRST
    static constexpr uint32_t RCC_APB3RSTSETR_DTSRST = 0x10000;  // DTSRST

    static constexpr uint32_t RCC_APB3RSTCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_APB3RSTCLRR_LPTIM2RST = 0x1;   // LPTIM2RST
    static constexpr uint32_t RCC_APB3RSTCLRR_LPTIM3RST = 0x2;   // LPTIM3RST
    static constexpr uint32_t RCC_APB3RSTCLRR_LPTIM4RST = 0x4;   // LPTIM4RST
    static constexpr uint32_t RCC_APB3RSTCLRR_LPTIM5RST = 0x8;   // LPTIM5RST
    static constexpr uint32_t RCC_APB3RSTCLRR_SAI4RST = 0x100;   // SAI4RST
    static constexpr uint32_t RCC_APB3RSTCLRR_SYSCFGRST = 0x800; // SYSCFGRST
    static constexpr uint32_t RCC_APB3RSTCLRR_VREFRST = 0x2000;  // VREFRST
    static constexpr uint32_t RCC_APB3RSTCLRR_DTSRST = 0x10000;  // DTSRST

    static constexpr uint32_t RCC_AHB2RSTSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_AHB2RSTSETR_DMA1RST = 0x1;       // DMA1RST
    static constexpr uint32_t RCC_AHB2RSTSETR_DMA2RST = 0x2;       // DMA2RST
    static constexpr uint32_t RCC_AHB2RSTSETR_DMAMUXRST = 0x4;     // DMAMUXRST
    static constexpr uint32_t RCC_AHB2RSTSETR_ADC12RST = 0x20;     // ADC12RST
    static constexpr uint32_t RCC_AHB2RSTSETR_USBORST = 0x100;     // USBORST
    static constexpr uint32_t RCC_AHB2RSTSETR_SDMMC3RST = 0x10000; // SDMMC3RST

    static constexpr uint32_t RCC_AHB2RSTCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_AHB2RSTCLRR_DMA1RST = 0x1;       // DMA1RST
    static constexpr uint32_t RCC_AHB2RSTCLRR_DMA2RST = 0x2;       // DMA2RST
    static constexpr uint32_t RCC_AHB2RSTCLRR_DMAMUXRST = 0x4;     // DMAMUXRST
    static constexpr uint32_t RCC_AHB2RSTCLRR_ADC12RST = 0x20;     // ADC12RST
    static constexpr uint32_t RCC_AHB2RSTCLRR_USBORST = 0x100;     // USBORST
    static constexpr uint32_t RCC_AHB2RSTCLRR_SDMMC3RST = 0x10000; // SDMMC3RST

    static constexpr uint32_t RCC_AHB3RSTSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_AHB3RSTSETR_DCMIRST = 0x1;    // DCMIRST
    static constexpr uint32_t RCC_AHB3RSTSETR_CRYP2RST = 0x10;  // CRYP2RST
    static constexpr uint32_t RCC_AHB3RSTSETR_HASH2RST = 0x20;  // HASH2RST
    static constexpr uint32_t RCC_AHB3RSTSETR_RNG2RST = 0x40;   // RNG2RST
    static constexpr uint32_t RCC_AHB3RSTSETR_CRC2RST = 0x80;   // CRC2RST
    static constexpr uint32_t RCC_AHB3RSTSETR_HSEMRST = 0x800;  // HSEMRST
    static constexpr uint32_t RCC_AHB3RSTSETR_IPCCRST = 0x1000; // IPCCRST

    static constexpr uint32_t RCC_AHB3RSTCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_AHB3RSTCLRR_DCMIRST = 0x1;    // DCMIRST
    static constexpr uint32_t RCC_AHB3RSTCLRR_CRYP2RST = 0x10;  // CRYP2RST
    static constexpr uint32_t RCC_AHB3RSTCLRR_HASH2RST = 0x20;  // HASH2RST
    static constexpr uint32_t RCC_AHB3RSTCLRR_RNG2RST = 0x40;   // RNG2RST
    static constexpr uint32_t RCC_AHB3RSTCLRR_CRC2RST = 0x80;   // CRC2RST
    static constexpr uint32_t RCC_AHB3RSTCLRR_HSEMRST = 0x800;  // HSEMRST
    static constexpr uint32_t RCC_AHB3RSTCLRR_IPCCRST = 0x1000; // IPCCRST

    static constexpr uint32_t RCC_AHB4RSTSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_AHB4RSTSETR_GPIOARST = 0x1;   // GPIOARST
    static constexpr uint32_t RCC_AHB4RSTSETR_GPIOBRST = 0x2;   // GPIOBRST
    static constexpr uint32_t RCC_AHB4RSTSETR_GPIOCRST = 0x4;   // GPIOCRST
    static constexpr uint32_t RCC_AHB4RSTSETR_GPIODRST = 0x8;   // GPIODRST
    static constexpr uint32_t RCC_AHB4RSTSETR_GPIOERST = 0x10;  // GPIOERST
    static constexpr uint32_t RCC_AHB4RSTSETR_GPIOFRST = 0x20;  // GPIOFRST
    static constexpr uint32_t RCC_AHB4RSTSETR_GPIOGRST = 0x40;  // GPIOGRST
    static constexpr uint32_t RCC_AHB4RSTSETR_GPIOHRST = 0x80;  // GPIOHRST
    static constexpr uint32_t RCC_AHB4RSTSETR_GPIOIRST = 0x100; // GPIOIRST
    static constexpr uint32_t RCC_AHB4RSTSETR_GPIOJRST = 0x200; // GPIOJRST
    static constexpr uint32_t RCC_AHB4RSTSETR_GPIOKRST = 0x400; // GPIOKRST

    static constexpr uint32_t RCC_AHB4RSTCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_AHB4RSTCLRR_GPIOARST = 0x1;   // GPIOARST
    static constexpr uint32_t RCC_AHB4RSTCLRR_GPIOBRST = 0x2;   // GPIOBRST
    static constexpr uint32_t RCC_AHB4RSTCLRR_GPIOCRST = 0x4;   // GPIOCRST
    static constexpr uint32_t RCC_AHB4RSTCLRR_GPIODRST = 0x8;   // GPIODRST
    static constexpr uint32_t RCC_AHB4RSTCLRR_GPIOERST = 0x10;  // GPIOERST
    static constexpr uint32_t RCC_AHB4RSTCLRR_GPIOFRST = 0x20;  // GPIOFRST
    static constexpr uint32_t RCC_AHB4RSTCLRR_GPIOGRST = 0x40;  // GPIOGRST
    static constexpr uint32_t RCC_AHB4RSTCLRR_GPIOHRST = 0x80;  // GPIOHRST
    static constexpr uint32_t RCC_AHB4RSTCLRR_GPIOIRST = 0x100; // GPIOIRST
    static constexpr uint32_t RCC_AHB4RSTCLRR_GPIOJRST = 0x200; // GPIOJRST
    static constexpr uint32_t RCC_AHB4RSTCLRR_GPIOKRST = 0x400; // GPIOKRST

    static constexpr uint32_t RCC_MP_APB1ENSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MP_APB1ENSETR_TIM2EN = 0x1;         // TIM2EN
    static constexpr uint32_t RCC_MP_APB1ENSETR_TIM3EN = 0x2;         // TIM3EN
    static constexpr uint32_t RCC_MP_APB1ENSETR_TIM4EN = 0x4;         // TIM4EN
    static constexpr uint32_t RCC_MP_APB1ENSETR_TIM5EN = 0x8;         // TIM5EN
    static constexpr uint32_t RCC_MP_APB1ENSETR_TIM6EN = 0x10;        // TIM6EN
    static constexpr uint32_t RCC_MP_APB1ENSETR_TIM7EN = 0x20;        // TIM7EN
    static constexpr uint32_t RCC_MP_APB1ENSETR_TIM12EN = 0x40;       // TIM12EN
    static constexpr uint32_t RCC_MP_APB1ENSETR_TIM13EN = 0x80;       // TIM13EN
    static constexpr uint32_t RCC_MP_APB1ENSETR_TIM14EN = 0x100;      // TIM14EN
    static constexpr uint32_t RCC_MP_APB1ENSETR_LPTIM1EN = 0x200;     // LPTIM1EN
    static constexpr uint32_t RCC_MP_APB1ENSETR_SPI2EN = 0x800;       // SPI2EN
    static constexpr uint32_t RCC_MP_APB1ENSETR_SPI3EN = 0x1000;      // SPI3EN
    static constexpr uint32_t RCC_MP_APB1ENSETR_USART2EN = 0x4000;    // USART2EN
    static constexpr uint32_t RCC_MP_APB1ENSETR_USART3EN = 0x8000;    // USART3EN
    static constexpr uint32_t RCC_MP_APB1ENSETR_UART4EN = 0x10000;    // UART4EN
    static constexpr uint32_t RCC_MP_APB1ENSETR_UART5EN = 0x20000;    // UART5EN
    static constexpr uint32_t RCC_MP_APB1ENSETR_UART7EN = 0x40000;    // UART7EN
    static constexpr uint32_t RCC_MP_APB1ENSETR_UART8EN = 0x80000;    // UART8EN
    static constexpr uint32_t RCC_MP_APB1ENSETR_I2C1EN = 0x200000;    // I2C1EN
    static constexpr uint32_t RCC_MP_APB1ENSETR_I2C2EN = 0x400000;    // I2C2EN
    static constexpr uint32_t RCC_MP_APB1ENSETR_I2C3EN = 0x800000;    // I2C3EN
    static constexpr uint32_t RCC_MP_APB1ENSETR_I2C5EN = 0x1000000;   // I2C5EN
    static constexpr uint32_t RCC_MP_APB1ENSETR_SPDIFEN = 0x4000000;  // SPDIFEN
    static constexpr uint32_t RCC_MP_APB1ENSETR_CECEN = 0x8000000;    // CECEN
    static constexpr uint32_t RCC_MP_APB1ENSETR_DAC12EN = 0x20000000; // DAC12EN
    static constexpr uint32_t RCC_MP_APB1ENSETR_MDIOSEN = 0x80000000; // MDIOSEN

    static constexpr uint32_t RCC_MP_APB1ENCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MP_APB1ENCLRR_TIM2EN = 0x1;         // TIM2EN
    static constexpr uint32_t RCC_MP_APB1ENCLRR_TIM3EN = 0x2;         // TIM3EN
    static constexpr uint32_t RCC_MP_APB1ENCLRR_TIM4EN = 0x4;         // TIM4EN
    static constexpr uint32_t RCC_MP_APB1ENCLRR_TIM5EN = 0x8;         // TIM5EN
    static constexpr uint32_t RCC_MP_APB1ENCLRR_TIM6EN = 0x10;        // TIM6EN
    static constexpr uint32_t RCC_MP_APB1ENCLRR_TIM7EN = 0x20;        // TIM7EN
    static constexpr uint32_t RCC_MP_APB1ENCLRR_TIM12EN = 0x40;       // TIM12EN
    static constexpr uint32_t RCC_MP_APB1ENCLRR_TIM13EN = 0x80;       // TIM13EN
    static constexpr uint32_t RCC_MP_APB1ENCLRR_TIM14EN = 0x100;      // TIM14EN
    static constexpr uint32_t RCC_MP_APB1ENCLRR_LPTIM1EN = 0x200;     // LPTIM1EN
    static constexpr uint32_t RCC_MP_APB1ENCLRR_SPI2EN = 0x800;       // SPI2EN
    static constexpr uint32_t RCC_MP_APB1ENCLRR_SPI3EN = 0x1000;      // SPI3EN
    static constexpr uint32_t RCC_MP_APB1ENCLRR_USART2EN = 0x4000;    // USART2EN
    static constexpr uint32_t RCC_MP_APB1ENCLRR_USART3EN = 0x8000;    // USART3EN
    static constexpr uint32_t RCC_MP_APB1ENCLRR_UART4EN = 0x10000;    // UART4EN
    static constexpr uint32_t RCC_MP_APB1ENCLRR_UART5EN = 0x20000;    // UART5EN
    static constexpr uint32_t RCC_MP_APB1ENCLRR_UART7EN = 0x40000;    // UART7EN
    static constexpr uint32_t RCC_MP_APB1ENCLRR_UART8EN = 0x80000;    // UART8EN
    static constexpr uint32_t RCC_MP_APB1ENCLRR_I2C1EN = 0x200000;    // I2C1EN
    static constexpr uint32_t RCC_MP_APB1ENCLRR_I2C2EN = 0x400000;    // I2C2EN
    static constexpr uint32_t RCC_MP_APB1ENCLRR_I2C3EN = 0x800000;    // I2C3EN
    static constexpr uint32_t RCC_MP_APB1ENCLRR_I2C5EN = 0x1000000;   // I2C5EN
    static constexpr uint32_t RCC_MP_APB1ENCLRR_SPDIFEN = 0x4000000;  // SPDIFEN
    static constexpr uint32_t RCC_MP_APB1ENCLRR_CECEN = 0x8000000;    // CECEN
    static constexpr uint32_t RCC_MP_APB1ENCLRR_DAC12EN = 0x20000000; // DAC12EN
    static constexpr uint32_t RCC_MP_APB1ENCLRR_MDIOSEN = 0x80000000; // MDIOSEN

    static constexpr uint32_t RCC_MP_APB2ENSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MP_APB2ENSETR_TIM1EN = 0x1;        // TIM1EN
    static constexpr uint32_t RCC_MP_APB2ENSETR_TIM8EN = 0x2;        // TIM8EN
    static constexpr uint32_t RCC_MP_APB2ENSETR_TIM15EN = 0x4;       // TIM15EN
    static constexpr uint32_t RCC_MP_APB2ENSETR_TIM16EN = 0x8;       // TIM16EN
    static constexpr uint32_t RCC_MP_APB2ENSETR_TIM17EN = 0x10;      // TIM17EN
    static constexpr uint32_t RCC_MP_APB2ENSETR_SPI1EN = 0x100;      // SPI1EN
    static constexpr uint32_t RCC_MP_APB2ENSETR_SPI4EN = 0x200;      // SPI4EN
    static constexpr uint32_t RCC_MP_APB2ENSETR_SPI5EN = 0x400;      // SPI5EN
    static constexpr uint32_t RCC_MP_APB2ENSETR_USART6EN = 0x2000;   // USART6EN
    static constexpr uint32_t RCC_MP_APB2ENSETR_SAI1EN = 0x10000;    // SAI1EN
    static constexpr uint32_t RCC_MP_APB2ENSETR_SAI2EN = 0x20000;    // SAI2EN
    static constexpr uint32_t RCC_MP_APB2ENSETR_SAI3EN = 0x40000;    // SAI3EN
    static constexpr uint32_t RCC_MP_APB2ENSETR_DFSDMEN = 0x100000;  // DFSDMEN
    static constexpr uint32_t RCC_MP_APB2ENSETR_ADFSDMEN = 0x200000; // ADFSDMEN
    static constexpr uint32_t RCC_MP_APB2ENSETR_FDCANEN = 0x1000000; // FDCANEN

    static constexpr uint32_t RCC_MP_APB2ENCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MP_APB2ENCLRR_TIM1EN = 0x1;        // TIM1EN
    static constexpr uint32_t RCC_MP_APB2ENCLRR_TIM8EN = 0x2;        // TIM8EN
    static constexpr uint32_t RCC_MP_APB2ENCLRR_TIM15EN = 0x4;       // TIM15EN
    static constexpr uint32_t RCC_MP_APB2ENCLRR_TIM16EN = 0x8;       // TIM16EN
    static constexpr uint32_t RCC_MP_APB2ENCLRR_TIM17EN = 0x10;      // TIM17EN
    static constexpr uint32_t RCC_MP_APB2ENCLRR_SPI1EN = 0x100;      // SPI1EN
    static constexpr uint32_t RCC_MP_APB2ENCLRR_SPI4EN = 0x200;      // SPI4EN
    static constexpr uint32_t RCC_MP_APB2ENCLRR_SPI5EN = 0x400;      // SPI5EN
    static constexpr uint32_t RCC_MP_APB2ENCLRR_USART6EN = 0x2000;   // USART6EN
    static constexpr uint32_t RCC_MP_APB2ENCLRR_SAI1EN = 0x10000;    // SAI1EN
    static constexpr uint32_t RCC_MP_APB2ENCLRR_SAI2EN = 0x20000;    // SAI2EN
    static constexpr uint32_t RCC_MP_APB2ENCLRR_SAI3EN = 0x40000;    // SAI3EN
    static constexpr uint32_t RCC_MP_APB2ENCLRR_DFSDMEN = 0x100000;  // DFSDMEN
    static constexpr uint32_t RCC_MP_APB2ENCLRR_ADFSDMEN = 0x200000; // ADFSDMEN
    static constexpr uint32_t RCC_MP_APB2ENCLRR_FDCANEN = 0x1000000; // FDCANEN

    static constexpr uint32_t RCC_MP_APB3ENSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MP_APB3ENSETR_LPTIM2EN = 0x1;   // LPTIM2EN
    static constexpr uint32_t RCC_MP_APB3ENSETR_LPTIM3EN = 0x2;   // LPTIM3EN
    static constexpr uint32_t RCC_MP_APB3ENSETR_LPTIM4EN = 0x4;   // LPTIM4EN
    static constexpr uint32_t RCC_MP_APB3ENSETR_LPTIM5EN = 0x8;   // LPTIM5EN
    static constexpr uint32_t RCC_MP_APB3ENSETR_SAI4EN = 0x100;   // SAI4EN
    static constexpr uint32_t RCC_MP_APB3ENSETR_SYSCFGEN = 0x800; // SYSCFGEN
    static constexpr uint32_t RCC_MP_APB3ENSETR_VREFEN = 0x2000;  // VREFEN
    static constexpr uint32_t RCC_MP_APB3ENSETR_DTSEN = 0x10000;  // DTSEN
    static constexpr uint32_t RCC_MP_APB3ENSETR_HDPEN = 0x100000; // HDPEN

    static constexpr uint32_t RCC_MP_APB3ENCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MP_APB3ENCLRR_LPTIM2EN = 0x1;   // LPTIM2EN
    static constexpr uint32_t RCC_MP_APB3ENCLRR_LPTIM3EN = 0x2;   // LPTIM3EN
    static constexpr uint32_t RCC_MP_APB3ENCLRR_LPTIM4EN = 0x4;   // LPTIM4EN
    static constexpr uint32_t RCC_MP_APB3ENCLRR_LPTIM5EN = 0x8;   // LPTIM5EN
    static constexpr uint32_t RCC_MP_APB3ENCLRR_SAI4EN = 0x100;   // SAI4EN
    static constexpr uint32_t RCC_MP_APB3ENCLRR_SYSCFGEN = 0x800; // SYSCFGEN
    static constexpr uint32_t RCC_MP_APB3ENCLRR_VREFEN = 0x2000;  // VREFEN
    static constexpr uint32_t RCC_MP_APB3ENCLRR_DTSEN = 0x10000;  // DTSEN
    static constexpr uint32_t RCC_MP_APB3ENCLRR_HDPEN = 0x100000; // HDPEN

    static constexpr uint32_t RCC_MP_AHB2ENSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MP_AHB2ENSETR_DMA1EN = 0x1;       // DMA1EN
    static constexpr uint32_t RCC_MP_AHB2ENSETR_DMA2EN = 0x2;       // DMA2EN
    static constexpr uint32_t RCC_MP_AHB2ENSETR_DMAMUXEN = 0x4;     // DMAMUXEN
    static constexpr uint32_t RCC_MP_AHB2ENSETR_ADC12EN = 0x20;     // ADC12EN
    static constexpr uint32_t RCC_MP_AHB2ENSETR_USBOEN = 0x100;     // USBOEN
    static constexpr uint32_t RCC_MP_AHB2ENSETR_SDMMC3EN = 0x10000; // SDMMC3EN

    static constexpr uint32_t RCC_MP_AHB2ENCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MP_AHB2ENCLRR_DMA1EN = 0x1;       // DMA1EN
    static constexpr uint32_t RCC_MP_AHB2ENCLRR_DMA2EN = 0x2;       // DMA2EN
    static constexpr uint32_t RCC_MP_AHB2ENCLRR_DMAMUXEN = 0x4;     // DMAMUXEN
    static constexpr uint32_t RCC_MP_AHB2ENCLRR_ADC12EN = 0x20;     // ADC12EN
    static constexpr uint32_t RCC_MP_AHB2ENCLRR_USBOEN = 0x100;     // USBOEN
    static constexpr uint32_t RCC_MP_AHB2ENCLRR_SDMMC3EN = 0x10000; // SDMMC3EN

    static constexpr uint32_t RCC_MP_AHB3ENSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MP_AHB3ENSETR_DCMIEN = 0x1;    // DCMIEN
    static constexpr uint32_t RCC_MP_AHB3ENSETR_CRYP2EN = 0x10;  // CRYP2EN
    static constexpr uint32_t RCC_MP_AHB3ENSETR_HASH2EN = 0x20;  // HASH2EN
    static constexpr uint32_t RCC_MP_AHB3ENSETR_RNG2EN = 0x40;   // RNG2EN
    static constexpr uint32_t RCC_MP_AHB3ENSETR_CRC2EN = 0x80;   // CRC2EN
    static constexpr uint32_t RCC_MP_AHB3ENSETR_HSEMEN = 0x800;  // HSEMEN
    static constexpr uint32_t RCC_MP_AHB3ENSETR_IPCCEN = 0x1000; // IPCCEN

    static constexpr uint32_t RCC_MP_AHB3ENCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MP_AHB3ENCLRR_DCMIEN = 0x1;    // DCMIEN
    static constexpr uint32_t RCC_MP_AHB3ENCLRR_CRYP2EN = 0x10;  // CRYP2EN
    static constexpr uint32_t RCC_MP_AHB3ENCLRR_HASH2EN = 0x20;  // HASH2EN
    static constexpr uint32_t RCC_MP_AHB3ENCLRR_RNG2EN = 0x40;   // RNG2EN
    static constexpr uint32_t RCC_MP_AHB3ENCLRR_CRC2EN = 0x80;   // CRC2EN
    static constexpr uint32_t RCC_MP_AHB3ENCLRR_HSEMEN = 0x800;  // HSEMEN
    static constexpr uint32_t RCC_MP_AHB3ENCLRR_IPCCEN = 0x1000; // IPCCEN

    static constexpr uint32_t RCC_MP_AHB4ENSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MP_AHB4ENSETR_GPIOAEN = 0x1;   // GPIOAEN
    static constexpr uint32_t RCC_MP_AHB4ENSETR_GPIOBEN = 0x2;   // GPIOBEN
    static constexpr uint32_t RCC_MP_AHB4ENSETR_GPIOCEN = 0x4;   // GPIOCEN
    static constexpr uint32_t RCC_MP_AHB4ENSETR_GPIODEN = 0x8;   // GPIODEN
    static constexpr uint32_t RCC_MP_AHB4ENSETR_GPIOEEN = 0x10;  // GPIOEEN
    static constexpr uint32_t RCC_MP_AHB4ENSETR_GPIOFEN = 0x20;  // GPIOFEN
    static constexpr uint32_t RCC_MP_AHB4ENSETR_GPIOGEN = 0x40;  // GPIOGEN
    static constexpr uint32_t RCC_MP_AHB4ENSETR_GPIOHEN = 0x80;  // GPIOHEN
    static constexpr uint32_t RCC_MP_AHB4ENSETR_GPIOIEN = 0x100; // GPIOIEN
    static constexpr uint32_t RCC_MP_AHB4ENSETR_GPIOJEN = 0x200; // GPIOJEN
    static constexpr uint32_t RCC_MP_AHB4ENSETR_GPIOKEN = 0x400; // GPIOKEN

    static constexpr uint32_t RCC_MP_AHB4ENCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MP_AHB4ENCLRR_GPIOAEN = 0x1;   // GPIOAEN
    static constexpr uint32_t RCC_MP_AHB4ENCLRR_GPIOBEN = 0x2;   // GPIOBEN
    static constexpr uint32_t RCC_MP_AHB4ENCLRR_GPIOCEN = 0x4;   // GPIOCEN
    static constexpr uint32_t RCC_MP_AHB4ENCLRR_GPIODEN = 0x8;   // GPIODEN
    static constexpr uint32_t RCC_MP_AHB4ENCLRR_GPIOEEN = 0x10;  // GPIOEEN
    static constexpr uint32_t RCC_MP_AHB4ENCLRR_GPIOFEN = 0x20;  // GPIOFEN
    static constexpr uint32_t RCC_MP_AHB4ENCLRR_GPIOGEN = 0x40;  // GPIOGEN
    static constexpr uint32_t RCC_MP_AHB4ENCLRR_GPIOHEN = 0x80;  // GPIOHEN
    static constexpr uint32_t RCC_MP_AHB4ENCLRR_GPIOIEN = 0x100; // GPIOIEN
    static constexpr uint32_t RCC_MP_AHB4ENCLRR_GPIOJEN = 0x200; // GPIOJEN
    static constexpr uint32_t RCC_MP_AHB4ENCLRR_GPIOKEN = 0x400; // GPIOKEN

    static constexpr uint32_t RCC_MP_MLAHBENSETR_RESET_VALUE = 0x10;
    static constexpr uint32_t RCC_MP_MLAHBENSETR_RETRAMEN = 0x10; // RETRAMEN

    static constexpr uint32_t RCC_MP_MLAHBENCLRR_RESET_VALUE = 0x10;
    static constexpr uint32_t RCC_MP_MLAHBENCLRR_RETRAMEN = 0x10; // RETRAMEN

    static constexpr uint32_t RCC_MC_APB1ENSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MC_APB1ENSETR_TIM2EN = 0x1;         // TIM2EN
    static constexpr uint32_t RCC_MC_APB1ENSETR_TIM3EN = 0x2;         // TIM3EN
    static constexpr uint32_t RCC_MC_APB1ENSETR_TIM4EN = 0x4;         // TIM4EN
    static constexpr uint32_t RCC_MC_APB1ENSETR_TIM5EN = 0x8;         // TIM5EN
    static constexpr uint32_t RCC_MC_APB1ENSETR_TIM6EN = 0x10;        // TIM6EN
    static constexpr uint32_t RCC_MC_APB1ENSETR_TIM7EN = 0x20;        // TIM7EN
    static constexpr uint32_t RCC_MC_APB1ENSETR_TIM12EN = 0x40;       // TIM12EN
    static constexpr uint32_t RCC_MC_APB1ENSETR_TIM13EN = 0x80;       // TIM13EN
    static constexpr uint32_t RCC_MC_APB1ENSETR_TIM14EN = 0x100;      // TIM14EN
    static constexpr uint32_t RCC_MC_APB1ENSETR_LPTIM1EN = 0x200;     // LPTIM1EN
    static constexpr uint32_t RCC_MC_APB1ENSETR_SPI2EN = 0x800;       // SPI2EN
    static constexpr uint32_t RCC_MC_APB1ENSETR_SPI3EN = 0x1000;      // SPI3EN
    static constexpr uint32_t RCC_MC_APB1ENSETR_USART2EN = 0x4000;    // USART2EN
    static constexpr uint32_t RCC_MC_APB1ENSETR_USART3EN = 0x8000;    // USART3EN
    static constexpr uint32_t RCC_MC_APB1ENSETR_UART4EN = 0x10000;    // UART4EN
    static constexpr uint32_t RCC_MC_APB1ENSETR_UART5EN = 0x20000;    // UART5EN
    static constexpr uint32_t RCC_MC_APB1ENSETR_UART7EN = 0x40000;    // UART7EN
    static constexpr uint32_t RCC_MC_APB1ENSETR_UART8EN = 0x80000;    // UART8EN
    static constexpr uint32_t RCC_MC_APB1ENSETR_I2C1EN = 0x200000;    // I2C1EN
    static constexpr uint32_t RCC_MC_APB1ENSETR_I2C2EN = 0x400000;    // I2C2EN
    static constexpr uint32_t RCC_MC_APB1ENSETR_I2C3EN = 0x800000;    // I2C3EN
    static constexpr uint32_t RCC_MC_APB1ENSETR_I2C5EN = 0x1000000;   // I2C5EN
    static constexpr uint32_t RCC_MC_APB1ENSETR_SPDIFEN = 0x4000000;  // SPDIFEN
    static constexpr uint32_t RCC_MC_APB1ENSETR_CECEN = 0x8000000;    // CECEN
    static constexpr uint32_t RCC_MC_APB1ENSETR_WWDG1EN = 0x10000000; // WWDG1EN
    static constexpr uint32_t RCC_MC_APB1ENSETR_DAC12EN = 0x20000000; // DAC12EN
    static constexpr uint32_t RCC_MC_APB1ENSETR_MDIOSEN = 0x80000000; // MDIOSEN

    static constexpr uint32_t RCC_MC_APB1ENCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MC_APB1ENCLRR_TIM2EN = 0x1;         // TIM2EN
    static constexpr uint32_t RCC_MC_APB1ENCLRR_TIM3EN = 0x2;         // TIM3EN
    static constexpr uint32_t RCC_MC_APB1ENCLRR_TIM4EN = 0x4;         // TIM4EN
    static constexpr uint32_t RCC_MC_APB1ENCLRR_TIM5EN = 0x8;         // TIM5EN
    static constexpr uint32_t RCC_MC_APB1ENCLRR_TIM6EN = 0x10;        // TIM6EN
    static constexpr uint32_t RCC_MC_APB1ENCLRR_TIM7EN = 0x20;        // TIM7EN
    static constexpr uint32_t RCC_MC_APB1ENCLRR_TIM12EN = 0x40;       // TIM12EN
    static constexpr uint32_t RCC_MC_APB1ENCLRR_TIM13EN = 0x80;       // TIM13EN
    static constexpr uint32_t RCC_MC_APB1ENCLRR_TIM14EN = 0x100;      // TIM14EN
    static constexpr uint32_t RCC_MC_APB1ENCLRR_LPTIM1EN = 0x200;     // LPTIM1EN
    static constexpr uint32_t RCC_MC_APB1ENCLRR_SPI2EN = 0x800;       // SPI2EN
    static constexpr uint32_t RCC_MC_APB1ENCLRR_SPI3EN = 0x1000;      // SPI3EN
    static constexpr uint32_t RCC_MC_APB1ENCLRR_USART2EN = 0x4000;    // USART2EN
    static constexpr uint32_t RCC_MC_APB1ENCLRR_USART3EN = 0x8000;    // USART3EN
    static constexpr uint32_t RCC_MC_APB1ENCLRR_UART4EN = 0x10000;    // UART4EN
    static constexpr uint32_t RCC_MC_APB1ENCLRR_UART5EN = 0x20000;    // UART5EN
    static constexpr uint32_t RCC_MC_APB1ENCLRR_UART7EN = 0x40000;    // UART7EN
    static constexpr uint32_t RCC_MC_APB1ENCLRR_UART8EN = 0x80000;    // UART8EN
    static constexpr uint32_t RCC_MC_APB1ENCLRR_I2C1EN = 0x200000;    // I2C1EN
    static constexpr uint32_t RCC_MC_APB1ENCLRR_I2C2EN = 0x400000;    // I2C2EN
    static constexpr uint32_t RCC_MC_APB1ENCLRR_I2C3EN = 0x800000;    // I2C3EN
    static constexpr uint32_t RCC_MC_APB1ENCLRR_I2C5EN = 0x1000000;   // I2C5EN
    static constexpr uint32_t RCC_MC_APB1ENCLRR_SPDIFEN = 0x4000000;  // SPDIFEN
    static constexpr uint32_t RCC_MC_APB1ENCLRR_CECEN = 0x8000000;    // CECEN
    static constexpr uint32_t RCC_MC_APB1ENCLRR_DAC12EN = 0x20000000; // DAC12EN
    static constexpr uint32_t RCC_MC_APB1ENCLRR_MDIOSEN = 0x80000000; // MDIOSEN

    static constexpr uint32_t RCC_MC_APB2ENSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MC_APB2ENSETR_TIM1EN = 0x1;        // TIM1EN
    static constexpr uint32_t RCC_MC_APB2ENSETR_TIM8EN = 0x2;        // TIM8EN
    static constexpr uint32_t RCC_MC_APB2ENSETR_TIM15EN = 0x4;       // TIM15EN
    static constexpr uint32_t RCC_MC_APB2ENSETR_TIM16EN = 0x8;       // TIM16EN
    static constexpr uint32_t RCC_MC_APB2ENSETR_TIM17EN = 0x10;      // TIM17EN
    static constexpr uint32_t RCC_MC_APB2ENSETR_SPI1EN = 0x100;      // SPI1EN
    static constexpr uint32_t RCC_MC_APB2ENSETR_SPI4EN = 0x200;      // SPI4EN
    static constexpr uint32_t RCC_MC_APB2ENSETR_SPI5EN = 0x400;      // SPI5EN
    static constexpr uint32_t RCC_MC_APB2ENSETR_USART6EN = 0x2000;   // USART6EN
    static constexpr uint32_t RCC_MC_APB2ENSETR_SAI1EN = 0x10000;    // SAI1EN
    static constexpr uint32_t RCC_MC_APB2ENSETR_SAI2EN = 0x20000;    // SAI2EN
    static constexpr uint32_t RCC_MC_APB2ENSETR_SAI3EN = 0x40000;    // SAI3EN
    static constexpr uint32_t RCC_MC_APB2ENSETR_DFSDMEN = 0x100000;  // DFSDMEN
    static constexpr uint32_t RCC_MC_APB2ENSETR_ADFSDMEN = 0x200000; // ADFSDMEN
    static constexpr uint32_t RCC_MC_APB2ENSETR_FDCANEN = 0x1000000; // FDCANEN

    static constexpr uint32_t RCC_MC_APB2ENCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MC_APB2ENCLRR_TIM1EN = 0x1;        // TIM1EN
    static constexpr uint32_t RCC_MC_APB2ENCLRR_TIM8EN = 0x2;        // TIM8EN
    static constexpr uint32_t RCC_MC_APB2ENCLRR_TIM15EN = 0x4;       // TIM15EN
    static constexpr uint32_t RCC_MC_APB2ENCLRR_TIM16EN = 0x8;       // TIM16EN
    static constexpr uint32_t RCC_MC_APB2ENCLRR_TIM17EN = 0x10;      // TIM17EN
    static constexpr uint32_t RCC_MC_APB2ENCLRR_SPI1EN = 0x100;      // SPI1EN
    static constexpr uint32_t RCC_MC_APB2ENCLRR_SPI4EN = 0x200;      // SPI4EN
    static constexpr uint32_t RCC_MC_APB2ENCLRR_SPI5EN = 0x400;      // SPI5EN
    static constexpr uint32_t RCC_MC_APB2ENCLRR_USART6EN = 0x2000;   // USART6EN
    static constexpr uint32_t RCC_MC_APB2ENCLRR_SAI1EN = 0x10000;    // SAI1EN
    static constexpr uint32_t RCC_MC_APB2ENCLRR_SAI2EN = 0x20000;    // SAI2EN
    static constexpr uint32_t RCC_MC_APB2ENCLRR_SAI3EN = 0x40000;    // SAI3EN
    static constexpr uint32_t RCC_MC_APB2ENCLRR_DFSDMEN = 0x100000;  // DFSDMEN
    static constexpr uint32_t RCC_MC_APB2ENCLRR_ADFSDMEN = 0x200000; // ADFSDMEN
    static constexpr uint32_t RCC_MC_APB2ENCLRR_FDCANEN = 0x1000000; // FDCANEN

    static constexpr uint32_t RCC_MC_APB3ENSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MC_APB3ENSETR_LPTIM2EN = 0x1;   // LPTIM2EN
    static constexpr uint32_t RCC_MC_APB3ENSETR_LPTIM3EN = 0x2;   // LPTIM3EN
    static constexpr uint32_t RCC_MC_APB3ENSETR_LPTIM4EN = 0x4;   // LPTIM4EN
    static constexpr uint32_t RCC_MC_APB3ENSETR_LPTIM5EN = 0x8;   // LPTIM5EN
    static constexpr uint32_t RCC_MC_APB3ENSETR_SAI4EN = 0x100;   // SAI4EN
    static constexpr uint32_t RCC_MC_APB3ENSETR_SYSCFGEN = 0x800; // SYSCFGEN
    static constexpr uint32_t RCC_MC_APB3ENSETR_VREFEN = 0x2000;  // VREFEN
    static constexpr uint32_t RCC_MC_APB3ENSETR_DTSEN = 0x10000;  // DTSEN
    static constexpr uint32_t RCC_MC_APB3ENSETR_HDPEN = 0x100000; // HDPEN

    static constexpr uint32_t RCC_MC_APB3ENCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MC_APB3ENCLRR_LPTIM2EN = 0x1;   // LPTIM2EN
    static constexpr uint32_t RCC_MC_APB3ENCLRR_LPTIM3EN = 0x2;   // LPTIM3EN
    static constexpr uint32_t RCC_MC_APB3ENCLRR_LPTIM4EN = 0x4;   // LPTIM4EN
    static constexpr uint32_t RCC_MC_APB3ENCLRR_LPTIM5EN = 0x8;   // LPTIM5EN
    static constexpr uint32_t RCC_MC_APB3ENCLRR_SAI4EN = 0x100;   // SAI4EN
    static constexpr uint32_t RCC_MC_APB3ENCLRR_SYSCFGEN = 0x800; // SYSCFGEN
    static constexpr uint32_t RCC_MC_APB3ENCLRR_VREFEN = 0x2000;  // VREFEN
    static constexpr uint32_t RCC_MC_APB3ENCLRR_DTSEN = 0x10000;  // DTSEN
    static constexpr uint32_t RCC_MC_APB3ENCLRR_HDPEN = 0x100000; // HDPEN

    static constexpr uint32_t RCC_MC_AHB2ENSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MC_AHB2ENSETR_DMA1EN = 0x1;       // DMA1EN
    static constexpr uint32_t RCC_MC_AHB2ENSETR_DMA2EN = 0x2;       // DMA2EN
    static constexpr uint32_t RCC_MC_AHB2ENSETR_DMAMUXEN = 0x4;     // DMAMUXEN
    static constexpr uint32_t RCC_MC_AHB2ENSETR_ADC12EN = 0x20;     // ADC12EN
    static constexpr uint32_t RCC_MC_AHB2ENSETR_USBOEN = 0x100;     // USBOEN
    static constexpr uint32_t RCC_MC_AHB2ENSETR_SDMMC3EN = 0x10000; // SDMMC3EN

    static constexpr uint32_t RCC_MC_AHB2ENCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MC_AHB2ENCLRR_DMA1EN = 0x1;       // DMA1EN
    static constexpr uint32_t RCC_MC_AHB2ENCLRR_DMA2EN = 0x2;       // DMA2EN
    static constexpr uint32_t RCC_MC_AHB2ENCLRR_DMAMUXEN = 0x4;     // DMAMUXEN
    static constexpr uint32_t RCC_MC_AHB2ENCLRR_ADC12EN = 0x20;     // ADC12EN
    static constexpr uint32_t RCC_MC_AHB2ENCLRR_USBOEN = 0x100;     // USBOEN
    static constexpr uint32_t RCC_MC_AHB2ENCLRR_SDMMC3EN = 0x10000; // SDMMC3EN

    static constexpr uint32_t RCC_MC_AHB3ENSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MC_AHB3ENSETR_DCMIEN = 0x1;    // DCMIEN
    static constexpr uint32_t RCC_MC_AHB3ENSETR_CRYP2EN = 0x10;  // CRYP2EN
    static constexpr uint32_t RCC_MC_AHB3ENSETR_HASH2EN = 0x20;  // HASH2EN
    static constexpr uint32_t RCC_MC_AHB3ENSETR_RNG2EN = 0x40;   // RNG2EN
    static constexpr uint32_t RCC_MC_AHB3ENSETR_CRC2EN = 0x80;   // CRC2EN
    static constexpr uint32_t RCC_MC_AHB3ENSETR_HSEMEN = 0x800;  // HSEMEN
    static constexpr uint32_t RCC_MC_AHB3ENSETR_IPCCEN = 0x1000; // IPCCEN

    static constexpr uint32_t RCC_MC_AHB3ENCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MC_AHB3ENCLRR_DCMIEN = 0x1;    // DCMIEN
    static constexpr uint32_t RCC_MC_AHB3ENCLRR_CRYP2EN = 0x10;  // CRYP2EN
    static constexpr uint32_t RCC_MC_AHB3ENCLRR_HASH2EN = 0x20;  // HASH2EN
    static constexpr uint32_t RCC_MC_AHB3ENCLRR_RNG2EN = 0x40;   // RNG2EN
    static constexpr uint32_t RCC_MC_AHB3ENCLRR_CRC2EN = 0x80;   // CRC2EN
    static constexpr uint32_t RCC_MC_AHB3ENCLRR_HSEMEN = 0x800;  // HSEMEN
    static constexpr uint32_t RCC_MC_AHB3ENCLRR_IPCCEN = 0x1000; // IPCCEN

    static constexpr uint32_t RCC_MC_AHB4ENSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MC_AHB4ENSETR_GPIOAEN = 0x1;   // GPIOAEN
    static constexpr uint32_t RCC_MC_AHB4ENSETR_GPIOBEN = 0x2;   // GPIOBEN
    static constexpr uint32_t RCC_MC_AHB4ENSETR_GPIOCEN = 0x4;   // GPIOCEN
    static constexpr uint32_t RCC_MC_AHB4ENSETR_GPIODEN = 0x8;   // GPIODEN
    static constexpr uint32_t RCC_MC_AHB4ENSETR_GPIOEEN = 0x10;  // GPIOEEN
    static constexpr uint32_t RCC_MC_AHB4ENSETR_GPIOFEN = 0x20;  // GPIOFEN
    static constexpr uint32_t RCC_MC_AHB4ENSETR_GPIOGEN = 0x40;  // GPIOGEN
    static constexpr uint32_t RCC_MC_AHB4ENSETR_GPIOHEN = 0x80;  // GPIOHEN
    static constexpr uint32_t RCC_MC_AHB4ENSETR_GPIOIEN = 0x100; // GPIOIEN
    static constexpr uint32_t RCC_MC_AHB4ENSETR_GPIOJEN = 0x200; // GPIOJEN
    static constexpr uint32_t RCC_MC_AHB4ENSETR_GPIOKEN = 0x400; // GPIOKEN

    static constexpr uint32_t RCC_MC_AHB4ENCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MC_AHB4ENCLRR_GPIOAEN = 0x1;   // GPIOAEN
    static constexpr uint32_t RCC_MC_AHB4ENCLRR_GPIOBEN = 0x2;   // GPIOBEN
    static constexpr uint32_t RCC_MC_AHB4ENCLRR_GPIOCEN = 0x4;   // GPIOCEN
    static constexpr uint32_t RCC_MC_AHB4ENCLRR_GPIODEN = 0x8;   // GPIODEN
    static constexpr uint32_t RCC_MC_AHB4ENCLRR_GPIOEEN = 0x10;  // GPIOEEN
    static constexpr uint32_t RCC_MC_AHB4ENCLRR_GPIOFEN = 0x20;  // GPIOFEN
    static constexpr uint32_t RCC_MC_AHB4ENCLRR_GPIOGEN = 0x40;  // GPIOGEN
    static constexpr uint32_t RCC_MC_AHB4ENCLRR_GPIOHEN = 0x80;  // GPIOHEN
    static constexpr uint32_t RCC_MC_AHB4ENCLRR_GPIOIEN = 0x100; // GPIOIEN
    static constexpr uint32_t RCC_MC_AHB4ENCLRR_GPIOJEN = 0x200; // GPIOJEN
    static constexpr uint32_t RCC_MC_AHB4ENCLRR_GPIOKEN = 0x400; // GPIOKEN

    static constexpr uint32_t RCC_MC_AXIMENSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MC_AXIMENSETR_SYSRAMEN = 0x1; // SYSRAMEN

    static constexpr uint32_t RCC_MC_AXIMENCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MC_AXIMENCLRR_SYSRAMEN = 0x1; // SYSRAMEN

    static constexpr uint32_t RCC_MC_MLAHBENSETR_RESET_VALUE = 0x10;
    static constexpr uint32_t RCC_MC_MLAHBENSETR_RETRAMEN = 0x10; // RETRAMEN

    static constexpr uint32_t RCC_MC_MLAHBENCLRR_RESET_VALUE = 0x10;
    static constexpr uint32_t RCC_MC_MLAHBENCLRR_RETRAMEN = 0x10; // RETRAMEN

    static constexpr uint32_t RCC_MP_APB1LPENSETR_RESET_VALUE = 0xadefdbff;
    static constexpr uint32_t RCC_MP_APB1LPENSETR_TIM2LPEN = 0x1;         // TIM2LPEN
    static constexpr uint32_t RCC_MP_APB1LPENSETR_TIM3LPEN = 0x2;         // TIM3LPEN
    static constexpr uint32_t RCC_MP_APB1LPENSETR_TIM4LPEN = 0x4;         // TIM4LPEN
    static constexpr uint32_t RCC_MP_APB1LPENSETR_TIM5LPEN = 0x8;         // TIM5LPEN
    static constexpr uint32_t RCC_MP_APB1LPENSETR_TIM6LPEN = 0x10;        // TIM6LPEN
    static constexpr uint32_t RCC_MP_APB1LPENSETR_TIM7LPEN = 0x20;        // TIM7LPEN
    static constexpr uint32_t RCC_MP_APB1LPENSETR_TIM12LPEN = 0x40;       // TIM12LPEN
    static constexpr uint32_t RCC_MP_APB1LPENSETR_TIM13LPEN = 0x80;       // TIM13LPEN
    static constexpr uint32_t RCC_MP_APB1LPENSETR_TIM14LPEN = 0x100;      // TIM14LPEN
    static constexpr uint32_t RCC_MP_APB1LPENSETR_LPTIM1LPEN = 0x200;     // LPTIM1LPEN
    static constexpr uint32_t RCC_MP_APB1LPENSETR_SPI2LPEN = 0x800;       // SPI2LPEN
    static constexpr uint32_t RCC_MP_APB1LPENSETR_SPI3LPEN = 0x1000;      // SPI3LPEN
    static constexpr uint32_t RCC_MP_APB1LPENSETR_USART2LPEN = 0x4000;    // USART2LPEN
    static constexpr uint32_t RCC_MP_APB1LPENSETR_USART3LPEN = 0x8000;    // USART3LPEN
    static constexpr uint32_t RCC_MP_APB1LPENSETR_UART4LPEN = 0x10000;    // UART4LPEN
    static constexpr uint32_t RCC_MP_APB1LPENSETR_UART5LPEN = 0x20000;    // UART5LPEN
    static constexpr uint32_t RCC_MP_APB1LPENSETR_UART7LPEN = 0x40000;    // UART7LPEN
    static constexpr uint32_t RCC_MP_APB1LPENSETR_UART8LPEN = 0x80000;    // UART8LPEN
    static constexpr uint32_t RCC_MP_APB1LPENSETR_I2C1LPEN = 0x200000;    // I2C1LPEN
    static constexpr uint32_t RCC_MP_APB1LPENSETR_I2C2LPEN = 0x400000;    // I2C2LPEN
    static constexpr uint32_t RCC_MP_APB1LPENSETR_I2C3LPEN = 0x800000;    // I2C3LPEN
    static constexpr uint32_t RCC_MP_APB1LPENSETR_I2C5LPEN = 0x1000000;   // I2C5LPEN
    static constexpr uint32_t RCC_MP_APB1LPENSETR_SPDIFLPEN = 0x4000000;  // SPDIFLPEN
    static constexpr uint32_t RCC_MP_APB1LPENSETR_CECLPEN = 0x8000000;    // CECLPEN
    static constexpr uint32_t RCC_MP_APB1LPENSETR_DAC12LPEN = 0x20000000; // DAC12LPEN
    static constexpr uint32_t RCC_MP_APB1LPENSETR_MDIOSLPEN = 0x80000000; // MDIOSLPEN

    static constexpr uint32_t RCC_MP_APB1LPENCLRR_RESET_VALUE = 0xadefdbff;
    static constexpr uint32_t RCC_MP_APB1LPENCLRR_TIM2LPEN = 0x1;         // TIM2LPEN
    static constexpr uint32_t RCC_MP_APB1LPENCLRR_TIM3LPEN = 0x2;         // TIM3LPEN
    static constexpr uint32_t RCC_MP_APB1LPENCLRR_TIM4LPEN = 0x4;         // TIM4LPEN
    static constexpr uint32_t RCC_MP_APB1LPENCLRR_TIM5LPEN = 0x8;         // TIM5LPEN
    static constexpr uint32_t RCC_MP_APB1LPENCLRR_TIM6LPEN = 0x10;        // TIM6LPEN
    static constexpr uint32_t RCC_MP_APB1LPENCLRR_TIM7LPEN = 0x20;        // TIM7LPEN
    static constexpr uint32_t RCC_MP_APB1LPENCLRR_TIM12LPEN = 0x40;       // TIM12LPEN
    static constexpr uint32_t RCC_MP_APB1LPENCLRR_TIM13LPEN = 0x80;       // TIM13LPEN
    static constexpr uint32_t RCC_MP_APB1LPENCLRR_TIM14LPEN = 0x100;      // TIM14LPEN
    static constexpr uint32_t RCC_MP_APB1LPENCLRR_LPTIM1LPEN = 0x200;     // LPTIM1LPEN
    static constexpr uint32_t RCC_MP_APB1LPENCLRR_SPI2LPEN = 0x800;       // SPI2LPEN
    static constexpr uint32_t RCC_MP_APB1LPENCLRR_SPI3LPEN = 0x1000;      // SPI3LPEN
    static constexpr uint32_t RCC_MP_APB1LPENCLRR_USART2LPEN = 0x4000;    // USART2LPEN
    static constexpr uint32_t RCC_MP_APB1LPENCLRR_USART3LPEN = 0x8000;    // USART3LPEN
    static constexpr uint32_t RCC_MP_APB1LPENCLRR_UART4LPEN = 0x10000;    // UART4LPEN
    static constexpr uint32_t RCC_MP_APB1LPENCLRR_UART5LPEN = 0x20000;    // UART5LPEN
    static constexpr uint32_t RCC_MP_APB1LPENCLRR_UART7LPEN = 0x40000;    // UART7LPEN
    static constexpr uint32_t RCC_MP_APB1LPENCLRR_UART8LPEN = 0x80000;    // UART8LPEN
    static constexpr uint32_t RCC_MP_APB1LPENCLRR_I2C1LPEN = 0x200000;    // I2C1LPEN
    static constexpr uint32_t RCC_MP_APB1LPENCLRR_I2C2LPEN = 0x400000;    // I2C2LPEN
    static constexpr uint32_t RCC_MP_APB1LPENCLRR_I2C3LPEN = 0x800000;    // I2C3LPEN
    static constexpr uint32_t RCC_MP_APB1LPENCLRR_I2C5LPEN = 0x1000000;   // I2C5LPEN
    static constexpr uint32_t RCC_MP_APB1LPENCLRR_SPDIFLPEN = 0x4000000;  // SPDIFLPEN
    static constexpr uint32_t RCC_MP_APB1LPENCLRR_CECLPEN = 0x8000000;    // CECLPEN
    static constexpr uint32_t RCC_MP_APB1LPENCLRR_DAC12LPEN = 0x20000000; // DAC12LPEN
    static constexpr uint32_t RCC_MP_APB1LPENCLRR_MDIOSLPEN = 0x80000000; // MDIOSLPEN

    static constexpr uint32_t RCC_MP_APB2LPENSETR_RESET_VALUE = 0x137271f;
    static constexpr uint32_t RCC_MP_APB2LPENSETR_TIM1LPEN = 0x1;        // TIM1LPEN
    static constexpr uint32_t RCC_MP_APB2LPENSETR_TIM8LPEN = 0x2;        // TIM8LPEN
    static constexpr uint32_t RCC_MP_APB2LPENSETR_TIM15LPEN = 0x4;       // TIM15LPEN
    static constexpr uint32_t RCC_MP_APB2LPENSETR_TIM16LPEN = 0x8;       // TIM16LPEN
    static constexpr uint32_t RCC_MP_APB2LPENSETR_TIM17LPEN = 0x10;      // TIM17LPEN
    static constexpr uint32_t RCC_MP_APB2LPENSETR_SPI1LPEN = 0x100;      // SPI1LPEN
    static constexpr uint32_t RCC_MP_APB2LPENSETR_SPI4LPEN = 0x200;      // SPI4LPEN
    static constexpr uint32_t RCC_MP_APB2LPENSETR_SPI5LPEN = 0x400;      // SPI5LPEN
    static constexpr uint32_t RCC_MP_APB2LPENSETR_USART6LPEN = 0x2000;   // USART6LPEN
    static constexpr uint32_t RCC_MP_APB2LPENSETR_SAI1LPEN = 0x10000;    // SAI1LPEN
    static constexpr uint32_t RCC_MP_APB2LPENSETR_SAI2LPEN = 0x20000;    // SAI2LPEN
    static constexpr uint32_t RCC_MP_APB2LPENSETR_SAI3LPEN = 0x40000;    // SAI3LPEN
    static constexpr uint32_t RCC_MP_APB2LPENSETR_DFSDMLPEN = 0x100000;  // DFSDMLPEN
    static constexpr uint32_t RCC_MP_APB2LPENSETR_ADFSDMLPEN = 0x200000; // ADFSDMLPEN
    static constexpr uint32_t RCC_MP_APB2LPENSETR_FDCANLPEN = 0x1000000; // FDCANLPEN

    static constexpr uint32_t RCC_MP_APB2LPENCLRR_RESET_VALUE = 0x137271f;
    static constexpr uint32_t RCC_MP_APB2LPENCLRR_TIM1LPEN = 0x1;        // TIM1LPEN
    static constexpr uint32_t RCC_MP_APB2LPENCLRR_TIM8LPEN = 0x2;        // TIM8LPEN
    static constexpr uint32_t RCC_MP_APB2LPENCLRR_TIM15LPEN = 0x4;       // TIM15LPEN
    static constexpr uint32_t RCC_MP_APB2LPENCLRR_TIM16LPEN = 0x8;       // TIM16LPEN
    static constexpr uint32_t RCC_MP_APB2LPENCLRR_TIM17LPEN = 0x10;      // TIM17LPEN
    static constexpr uint32_t RCC_MP_APB2LPENCLRR_SPI1LPEN = 0x100;      // SPI1LPEN
    static constexpr uint32_t RCC_MP_APB2LPENCLRR_SPI4LPEN = 0x200;      // SPI4LPEN
    static constexpr uint32_t RCC_MP_APB2LPENCLRR_SPI5LPEN = 0x400;      // SPI5LPEN
    static constexpr uint32_t RCC_MP_APB2LPENCLRR_USART6LPEN = 0x2000;   // USART6LPEN
    static constexpr uint32_t RCC_MP_APB2LPENCLRR_SAI1LPEN = 0x10000;    // SAI1LPEN
    static constexpr uint32_t RCC_MP_APB2LPENCLRR_SAI2LPEN = 0x20000;    // SAI2LPEN
    static constexpr uint32_t RCC_MP_APB2LPENCLRR_SAI3LPEN = 0x40000;    // SAI3LPEN
    static constexpr uint32_t RCC_MP_APB2LPENCLRR_DFSDMLPEN = 0x100000;  // DFSDMLPEN
    static constexpr uint32_t RCC_MP_APB2LPENCLRR_ADFSDMLPEN = 0x200000; // ADFSDMLPEN
    static constexpr uint32_t RCC_MP_APB2LPENCLRR_FDCANLPEN = 0x1000000; // FDCANLPEN

    static constexpr uint32_t RCC_MP_APB3LPENSETR_RESET_VALUE = 0x3290f;
    static constexpr uint32_t RCC_MP_APB3LPENSETR_LPTIM2LPEN = 0x1;   // LPTIM2LPEN
    static constexpr uint32_t RCC_MP_APB3LPENSETR_LPTIM3LPEN = 0x2;   // LPTIM3LPEN
    static constexpr uint32_t RCC_MP_APB3LPENSETR_LPTIM4LPEN = 0x4;   // LPTIM4LPEN
    static constexpr uint32_t RCC_MP_APB3LPENSETR_LPTIM5LPEN = 0x8;   // LPTIM5LPEN
    static constexpr uint32_t RCC_MP_APB3LPENSETR_SAI4LPEN = 0x100;   // SAI4LPEN
    static constexpr uint32_t RCC_MP_APB3LPENSETR_SYSCFGLPEN = 0x800; // SYSCFGLPEN
    static constexpr uint32_t RCC_MP_APB3LPENSETR_VREFLPEN = 0x2000;  // VREFLPEN
    static constexpr uint32_t RCC_MP_APB3LPENSETR_DTSLPEN = 0x10000;  // DTSLPEN

    static constexpr uint32_t RCC_MP_APB3LPENCLRR_RESET_VALUE = 0x3290f;
    static constexpr uint32_t RCC_MP_APB3LPENCLRR_LPTIM2LPEN = 0x1;   // LPTIM2LPEN
    static constexpr uint32_t RCC_MP_APB3LPENCLRR_LPTIM3LPEN = 0x2;   // LPTIM3LPEN
    static constexpr uint32_t RCC_MP_APB3LPENCLRR_LPTIM4LPEN = 0x4;   // LPTIM4LPEN
    static constexpr uint32_t RCC_MP_APB3LPENCLRR_LPTIM5LPEN = 0x8;   // LPTIM5LPEN
    static constexpr uint32_t RCC_MP_APB3LPENCLRR_SAI4LPEN = 0x100;   // SAI4LPEN
    static constexpr uint32_t RCC_MP_APB3LPENCLRR_SYSCFGLPEN = 0x800; // SYSCFGLPEN
    static constexpr uint32_t RCC_MP_APB3LPENCLRR_VREFLPEN = 0x2000;  // VREFLPEN
    static constexpr uint32_t RCC_MP_APB3LPENCLRR_DTSLPEN = 0x10000;  // DTSLPEN

    static constexpr uint32_t RCC_MP_AHB2LPENSETR_RESET_VALUE = 0x10127;
    static constexpr uint32_t RCC_MP_AHB2LPENSETR_DMA1LPEN = 0x1;       // DMA1LPEN
    static constexpr uint32_t RCC_MP_AHB2LPENSETR_DMA2LPEN = 0x2;       // DMA2LPEN
    static constexpr uint32_t RCC_MP_AHB2LPENSETR_DMAMUXLPEN = 0x4;     // DMAMUXLPEN
    static constexpr uint32_t RCC_MP_AHB2LPENSETR_ADC12LPEN = 0x20;     // ADC12LPEN
    static constexpr uint32_t RCC_MP_AHB2LPENSETR_USBOLPEN = 0x100;     // USBOLPEN
    static constexpr uint32_t RCC_MP_AHB2LPENSETR_SDMMC3LPEN = 0x10000; // SDMMC3LPEN

    static constexpr uint32_t RCC_MP_AHB2LPENCLRR_RESET_VALUE = 0x10127;
    static constexpr uint32_t RCC_MP_AHB2LPENCLRR_DMA1LPEN = 0x1;       // DMA1LPEN
    static constexpr uint32_t RCC_MP_AHB2LPENCLRR_DMA2LPEN = 0x2;       // DMA2LPEN
    static constexpr uint32_t RCC_MP_AHB2LPENCLRR_DMAMUXLPEN = 0x4;     // DMAMUXLPEN
    static constexpr uint32_t RCC_MP_AHB2LPENCLRR_ADC12LPEN = 0x20;     // ADC12LPEN
    static constexpr uint32_t RCC_MP_AHB2LPENCLRR_USBOLPEN = 0x100;     // USBOLPEN
    static constexpr uint32_t RCC_MP_AHB2LPENCLRR_SDMMC3LPEN = 0x10000; // SDMMC3LPEN

    static constexpr uint32_t RCC_MP_AHB3LPENSETR_RESET_VALUE = 0x18f1;
    static constexpr uint32_t RCC_MP_AHB3LPENSETR_DCMILPEN = 0x1;    // DCMILPEN
    static constexpr uint32_t RCC_MP_AHB3LPENSETR_CRYP2LPEN = 0x10;  // CRYP2LPEN
    static constexpr uint32_t RCC_MP_AHB3LPENSETR_HASH2LPEN = 0x20;  // HASH2LPEN
    static constexpr uint32_t RCC_MP_AHB3LPENSETR_RNG2LPEN = 0x40;   // RNG2LPEN
    static constexpr uint32_t RCC_MP_AHB3LPENSETR_CRC2LPEN = 0x80;   // CRC2LPEN
    static constexpr uint32_t RCC_MP_AHB3LPENSETR_HSEMLPEN = 0x800;  // HSEMLPEN
    static constexpr uint32_t RCC_MP_AHB3LPENSETR_IPCCLPEN = 0x1000; // IPCCLPEN

    static constexpr uint32_t RCC_MP_AHB3LPENCLRR_RESET_VALUE = 0x18f1;
    static constexpr uint32_t RCC_MP_AHB3LPENCLRR_DCMILPEN = 0x1;    // DCMILPEN
    static constexpr uint32_t RCC_MP_AHB3LPENCLRR_CRYP2LPEN = 0x10;  // CRYP2LPEN
    static constexpr uint32_t RCC_MP_AHB3LPENCLRR_HASH2LPEN = 0x20;  // HASH2LPEN
    static constexpr uint32_t RCC_MP_AHB3LPENCLRR_RNG2LPEN = 0x40;   // RNG2LPEN
    static constexpr uint32_t RCC_MP_AHB3LPENCLRR_CRC2LPEN = 0x80;   // CRC2LPEN
    static constexpr uint32_t RCC_MP_AHB3LPENCLRR_HSEMLPEN = 0x800;  // HSEMLPEN
    static constexpr uint32_t RCC_MP_AHB3LPENCLRR_IPCCLPEN = 0x1000; // IPCCLPEN

    static constexpr uint32_t RCC_MP_AHB4LPENSETR_RESET_VALUE = 0x7ff;
    static constexpr uint32_t RCC_MP_AHB4LPENSETR_GPIOALPEN = 0x1;   // GPIOALPEN
    static constexpr uint32_t RCC_MP_AHB4LPENSETR_GPIOBLPEN = 0x2;   // GPIOBLPEN
    static constexpr uint32_t RCC_MP_AHB4LPENSETR_GPIOCLPEN = 0x4;   // GPIOCLPEN
    static constexpr uint32_t RCC_MP_AHB4LPENSETR_GPIODLPEN = 0x8;   // GPIODLPEN
    static constexpr uint32_t RCC_MP_AHB4LPENSETR_GPIOELPEN = 0x10;  // GPIOELPEN
    static constexpr uint32_t RCC_MP_AHB4LPENSETR_GPIOFLPEN = 0x20;  // GPIOFLPEN
    static constexpr uint32_t RCC_MP_AHB4LPENSETR_GPIOGLPEN = 0x40;  // GPIOGLPEN
    static constexpr uint32_t RCC_MP_AHB4LPENSETR_GPIOHLPEN = 0x80;  // GPIOHLPEN
    static constexpr uint32_t RCC_MP_AHB4LPENSETR_GPIOILPEN = 0x100; // GPIOILPEN
    static constexpr uint32_t RCC_MP_AHB4LPENSETR_GPIOJLPEN = 0x200; // GPIOJLPEN
    static constexpr uint32_t RCC_MP_AHB4LPENSETR_GPIOKLPEN = 0x400; // GPIOKLPEN

    static constexpr uint32_t RCC_MP_AHB4LPENCLRR_RESET_VALUE = 0x7ff;
    static constexpr uint32_t RCC_MP_AHB4LPENCLRR_GPIOALPEN = 0x1;   // GPIOALPEN
    static constexpr uint32_t RCC_MP_AHB4LPENCLRR_GPIOBLPEN = 0x2;   // GPIOBLPEN
    static constexpr uint32_t RCC_MP_AHB4LPENCLRR_GPIOCLPEN = 0x4;   // GPIOCLPEN
    static constexpr uint32_t RCC_MP_AHB4LPENCLRR_GPIODLPEN = 0x8;   // GPIODLPEN
    static constexpr uint32_t RCC_MP_AHB4LPENCLRR_GPIOELPEN = 0x10;  // GPIOELPEN
    static constexpr uint32_t RCC_MP_AHB4LPENCLRR_GPIOFLPEN = 0x20;  // GPIOFLPEN
    static constexpr uint32_t RCC_MP_AHB4LPENCLRR_GPIOGLPEN = 0x40;  // GPIOGLPEN
    static constexpr uint32_t RCC_MP_AHB4LPENCLRR_GPIOHLPEN = 0x80;  // GPIOHLPEN
    static constexpr uint32_t RCC_MP_AHB4LPENCLRR_GPIOILPEN = 0x100; // GPIOILPEN
    static constexpr uint32_t RCC_MP_AHB4LPENCLRR_GPIOJLPEN = 0x200; // GPIOJLPEN
    static constexpr uint32_t RCC_MP_AHB4LPENCLRR_GPIOKLPEN = 0x400; // GPIOKLPEN

    static constexpr uint32_t RCC_MP_AXIMLPENSETR_RESET_VALUE = 0x1;
    static constexpr uint32_t RCC_MP_AXIMLPENSETR_SYSRAMLPEN = 0x1; // SYSRAMLPEN

    static constexpr uint32_t RCC_MP_AXIMLPENCLRR_RESET_VALUE = 0x1;
    static constexpr uint32_t RCC_MP_AXIMLPENCLRR_SYSRAMLPEN = 0x1; // SYSRAMLPEN

    static constexpr uint32_t RCC_MP_MLAHBLPENSETR_RESET_VALUE = 0x17;
    static constexpr uint32_t RCC_MP_MLAHBLPENSETR_SRAM1LPEN = 0x1;   // SRAM1LPEN
    static constexpr uint32_t RCC_MP_MLAHBLPENSETR_SRAM2LPEN = 0x2;   // SRAM2LPEN
    static constexpr uint32_t RCC_MP_MLAHBLPENSETR_SRAM34LPEN = 0x4;  // SRAM34LPEN
    static constexpr uint32_t RCC_MP_MLAHBLPENSETR_RETRAMLPEN = 0x10; // RETRAMLPEN

    static constexpr uint32_t RCC_MP_MLAHBLPENCLRR_RESET_VALUE = 0x17;
    static constexpr uint32_t RCC_MP_MLAHBLPENCLRR_SRAM1LPEN = 0x1;   // SRAM1LPEN
    static constexpr uint32_t RCC_MP_MLAHBLPENCLRR_SRAM2LPEN = 0x2;   // SRAM2LPEN
    static constexpr uint32_t RCC_MP_MLAHBLPENCLRR_SRAM34LPEN = 0x4;  // SRAM34LPEN
    static constexpr uint32_t RCC_MP_MLAHBLPENCLRR_RETRAMLPEN = 0x10; // RETRAMLPEN

    static constexpr uint32_t RCC_MC_APB1LPENSETR_RESET_VALUE = 0xbdefdbff;
    static constexpr uint32_t RCC_MC_APB1LPENSETR_TIM2LPEN = 0x1;         // TIM2LPEN
    static constexpr uint32_t RCC_MC_APB1LPENSETR_TIM3LPEN = 0x2;         // TIM3LPEN
    static constexpr uint32_t RCC_MC_APB1LPENSETR_TIM4LPEN = 0x4;         // TIM4LPEN
    static constexpr uint32_t RCC_MC_APB1LPENSETR_TIM5LPEN = 0x8;         // TIM5LPEN
    static constexpr uint32_t RCC_MC_APB1LPENSETR_TIM6LPEN = 0x10;        // TIM6LPEN
    static constexpr uint32_t RCC_MC_APB1LPENSETR_TIM7LPEN = 0x20;        // TIM7LPEN
    static constexpr uint32_t RCC_MC_APB1LPENSETR_TIM12LPEN = 0x40;       // TIM12LPEN
    static constexpr uint32_t RCC_MC_APB1LPENSETR_TIM13LPEN = 0x80;       // TIM13LPEN
    static constexpr uint32_t RCC_MC_APB1LPENSETR_TIM14LPEN = 0x100;      // TIM14LPEN
    static constexpr uint32_t RCC_MC_APB1LPENSETR_LPTIM1LPEN = 0x200;     // LPTIM1LPEN
    static constexpr uint32_t RCC_MC_APB1LPENSETR_SPI2LPEN = 0x800;       // SPI2LPEN
    static constexpr uint32_t RCC_MC_APB1LPENSETR_SPI3LPEN = 0x1000;      // SPI3LPEN
    static constexpr uint32_t RCC_MC_APB1LPENSETR_USART2LPEN = 0x4000;    // USART2LPEN
    static constexpr uint32_t RCC_MC_APB1LPENSETR_USART3LPEN = 0x8000;    // USART3LPEN
    static constexpr uint32_t RCC_MC_APB1LPENSETR_UART4LPEN = 0x10000;    // UART4LPEN
    static constexpr uint32_t RCC_MC_APB1LPENSETR_UART5LPEN = 0x20000;    // UART5LPEN
    static constexpr uint32_t RCC_MC_APB1LPENSETR_UART7LPEN = 0x40000;    // UART7LPEN
    static constexpr uint32_t RCC_MC_APB1LPENSETR_UART8LPEN = 0x80000;    // UART8LPEN
    static constexpr uint32_t RCC_MC_APB1LPENSETR_I2C1LPEN = 0x200000;    // I2C1LPEN
    static constexpr uint32_t RCC_MC_APB1LPENSETR_I2C2LPEN = 0x400000;    // I2C2LPEN
    static constexpr uint32_t RCC_MC_APB1LPENSETR_I2C3LPEN = 0x800000;    // I2C3LPEN
    static constexpr uint32_t RCC_MC_APB1LPENSETR_I2C5LPEN = 0x1000000;   // I2C5LPEN
    static constexpr uint32_t RCC_MC_APB1LPENSETR_SPDIFLPEN = 0x4000000;  // SPDIFLPEN
    static constexpr uint32_t RCC_MC_APB1LPENSETR_CECLPEN = 0x8000000;    // CECLPEN
    static constexpr uint32_t RCC_MC_APB1LPENSETR_WWDG1LPEN = 0x10000000; // WWDG1LPEN
    static constexpr uint32_t RCC_MC_APB1LPENSETR_DAC12LPEN = 0x20000000; // DAC12LPEN
    static constexpr uint32_t RCC_MC_APB1LPENSETR_MDIOSLPEN = 0x80000000; // MDIOSLPEN

    static constexpr uint32_t RCC_MC_APB1LPENCLRR_RESET_VALUE = 0xbdefdbff;
    static constexpr uint32_t RCC_MC_APB1LPENCLRR_TIM2LPEN = 0x1;         // TIM2LPEN
    static constexpr uint32_t RCC_MC_APB1LPENCLRR_TIM3LPEN = 0x2;         // TIM3LPEN
    static constexpr uint32_t RCC_MC_APB1LPENCLRR_TIM4LPEN = 0x4;         // TIM4LPEN
    static constexpr uint32_t RCC_MC_APB1LPENCLRR_TIM5LPEN = 0x8;         // TIM5LPEN
    static constexpr uint32_t RCC_MC_APB1LPENCLRR_TIM6LPEN = 0x10;        // TIM6LPEN
    static constexpr uint32_t RCC_MC_APB1LPENCLRR_TIM7LPEN = 0x20;        // TIM7LPEN
    static constexpr uint32_t RCC_MC_APB1LPENCLRR_TIM12LPEN = 0x40;       // TIM12LPEN
    static constexpr uint32_t RCC_MC_APB1LPENCLRR_TIM13LPEN = 0x80;       // TIM13LPEN
    static constexpr uint32_t RCC_MC_APB1LPENCLRR_TIM14LPEN = 0x100;      // TIM14LPEN
    static constexpr uint32_t RCC_MC_APB1LPENCLRR_LPTIM1LPEN = 0x200;     // LPTIM1LPEN
    static constexpr uint32_t RCC_MC_APB1LPENCLRR_SPI2LPEN = 0x800;       // SPI2LPEN
    static constexpr uint32_t RCC_MC_APB1LPENCLRR_SPI3LPEN = 0x1000;      // SPI3LPEN
    static constexpr uint32_t RCC_MC_APB1LPENCLRR_USART2LPEN = 0x4000;    // USART2LPEN
    static constexpr uint32_t RCC_MC_APB1LPENCLRR_USART3LPEN = 0x8000;    // USART3LPEN
    static constexpr uint32_t RCC_MC_APB1LPENCLRR_UART4LPEN = 0x10000;    // UART4LPEN
    static constexpr uint32_t RCC_MC_APB1LPENCLRR_UART5LPEN = 0x20000;    // UART5LPEN
    static constexpr uint32_t RCC_MC_APB1LPENCLRR_UART7LPEN = 0x40000;    // UART7LPEN
    static constexpr uint32_t RCC_MC_APB1LPENCLRR_UART8LPEN = 0x80000;    // UART8LPEN
    static constexpr uint32_t RCC_MC_APB1LPENCLRR_I2C1LPEN = 0x200000;    // I2C1LPEN
    static constexpr uint32_t RCC_MC_APB1LPENCLRR_I2C2LPEN = 0x400000;    // I2C2LPEN
    static constexpr uint32_t RCC_MC_APB1LPENCLRR_I2C3LPEN = 0x800000;    // I2C3LPEN
    static constexpr uint32_t RCC_MC_APB1LPENCLRR_I2C5LPEN = 0x1000000;   // I2C5LPEN
    static constexpr uint32_t RCC_MC_APB1LPENCLRR_SPDIFLPEN = 0x4000000;  // SPDIFLPEN
    static constexpr uint32_t RCC_MC_APB1LPENCLRR_CECLPEN = 0x8000000;    // CECLPEN
    static constexpr uint32_t RCC_MC_APB1LPENCLRR_WWDG1LPEN = 0x10000000; // WWDG1LPEN
    static constexpr uint32_t RCC_MC_APB1LPENCLRR_DAC12LPEN = 0x20000000; // DAC12LPEN
    static constexpr uint32_t RCC_MC_APB1LPENCLRR_MDIOSLPEN = 0x80000000; // MDIOSLPEN

    static constexpr uint32_t RCC_MC_APB2LPENSETR_RESET_VALUE = 0x137271f;
    static constexpr uint32_t RCC_MC_APB2LPENSETR_TIM1LPEN = 0x1;        // TIM1LPEN
    static constexpr uint32_t RCC_MC_APB2LPENSETR_TIM8LPEN = 0x2;        // TIM8LPEN
    static constexpr uint32_t RCC_MC_APB2LPENSETR_TIM15LPEN = 0x4;       // TIM15LPEN
    static constexpr uint32_t RCC_MC_APB2LPENSETR_TIM16LPEN = 0x8;       // TIM16LPEN
    static constexpr uint32_t RCC_MC_APB2LPENSETR_TIM17LPEN = 0x10;      // TIM17LPEN
    static constexpr uint32_t RCC_MC_APB2LPENSETR_SPI1LPEN = 0x100;      // SPI1LPEN
    static constexpr uint32_t RCC_MC_APB2LPENSETR_SPI4LPEN = 0x200;      // SPI4LPEN
    static constexpr uint32_t RCC_MC_APB2LPENSETR_SPI5LPEN = 0x400;      // SPI5LPEN
    static constexpr uint32_t RCC_MC_APB2LPENSETR_USART6LPEN = 0x2000;   // USART6LPEN
    static constexpr uint32_t RCC_MC_APB2LPENSETR_SAI1LPEN = 0x10000;    // SAI1LPEN
    static constexpr uint32_t RCC_MC_APB2LPENSETR_SAI2LPEN = 0x20000;    // SAI2LPEN
    static constexpr uint32_t RCC_MC_APB2LPENSETR_SAI3LPEN = 0x40000;    // SAI3LPEN
    static constexpr uint32_t RCC_MC_APB2LPENSETR_DFSDMLPEN = 0x100000;  // DFSDMLPEN
    static constexpr uint32_t RCC_MC_APB2LPENSETR_ADFSDMLPEN = 0x200000; // ADFSDMLPEN
    static constexpr uint32_t RCC_MC_APB2LPENSETR_FDCANLPEN = 0x1000000; // FDCANLPEN

    static constexpr uint32_t RCC_MC_APB2LPENCLRR_RESET_VALUE = 0x137271f;
    static constexpr uint32_t RCC_MC_APB2LPENCLRR_TIM1LPEN = 0x1;        // TIM1LPEN
    static constexpr uint32_t RCC_MC_APB2LPENCLRR_TIM8LPEN = 0x2;        // TIM8LPEN
    static constexpr uint32_t RCC_MC_APB2LPENCLRR_TIM15LPEN = 0x4;       // TIM15LPEN
    static constexpr uint32_t RCC_MC_APB2LPENCLRR_TIM16LPEN = 0x8;       // TIM16LPEN
    static constexpr uint32_t RCC_MC_APB2LPENCLRR_TIM17LPEN = 0x10;      // TIM17LPEN
    static constexpr uint32_t RCC_MC_APB2LPENCLRR_SPI1LPEN = 0x100;      // SPI1LPEN
    static constexpr uint32_t RCC_MC_APB2LPENCLRR_SPI4LPEN = 0x200;      // SPI4LPEN
    static constexpr uint32_t RCC_MC_APB2LPENCLRR_SPI5LPEN = 0x400;      // SPI5LPEN
    static constexpr uint32_t RCC_MC_APB2LPENCLRR_USART6LPEN = 0x2000;   // USART6LPEN
    static constexpr uint32_t RCC_MC_APB2LPENCLRR_SAI1LPEN = 0x10000;    // SAI1LPEN
    static constexpr uint32_t RCC_MC_APB2LPENCLRR_SAI2LPEN = 0x20000;    // SAI2LPEN
    static constexpr uint32_t RCC_MC_APB2LPENCLRR_SAI3LPEN = 0x40000;    // SAI3LPEN
    static constexpr uint32_t RCC_MC_APB2LPENCLRR_DFSDMLPEN = 0x100000;  // DFSDMLPEN
    static constexpr uint32_t RCC_MC_APB2LPENCLRR_ADFSDMLPEN = 0x200000; // ADFSDMLPEN
    static constexpr uint32_t RCC_MC_APB2LPENCLRR_FDCANLPEN = 0x1000000; // FDCANLPEN

    static constexpr uint32_t RCC_MC_APB3LPENSETR_RESET_VALUE = 0x3290f;
    static constexpr uint32_t RCC_MC_APB3LPENSETR_LPTIM2LPEN = 0x1;   // LPTIM2LPEN
    static constexpr uint32_t RCC_MC_APB3LPENSETR_LPTIM3LPEN = 0x2;   // LPTIM3LPEN
    static constexpr uint32_t RCC_MC_APB3LPENSETR_LPTIM4LPEN = 0x4;   // LPTIM4LPEN
    static constexpr uint32_t RCC_MC_APB3LPENSETR_LPTIM5LPEN = 0x8;   // LPTIM5LPEN
    static constexpr uint32_t RCC_MC_APB3LPENSETR_SAI4LPEN = 0x100;   // SAI4LPEN
    static constexpr uint32_t RCC_MC_APB3LPENSETR_SYSCFGLPEN = 0x800; // SYSCFGLPEN
    static constexpr uint32_t RCC_MC_APB3LPENSETR_VREFLPEN = 0x2000;  // VREFLPEN
    static constexpr uint32_t RCC_MC_APB3LPENSETR_DTSLPEN = 0x10000;  // DTSLPEN

    static constexpr uint32_t RCC_MC_APB3LPENCLRR_RESET_VALUE = 0x3290f;
    static constexpr uint32_t RCC_MC_APB3LPENCLRR_LPTIM2LPEN = 0x1;   // LPTIM2LPEN
    static constexpr uint32_t RCC_MC_APB3LPENCLRR_LPTIM3LPEN = 0x2;   // LPTIM3LPEN
    static constexpr uint32_t RCC_MC_APB3LPENCLRR_LPTIM4LPEN = 0x4;   // LPTIM4LPEN
    static constexpr uint32_t RCC_MC_APB3LPENCLRR_LPTIM5LPEN = 0x8;   // LPTIM5LPEN
    static constexpr uint32_t RCC_MC_APB3LPENCLRR_SAI4LPEN = 0x100;   // SAI4LPEN
    static constexpr uint32_t RCC_MC_APB3LPENCLRR_SYSCFGLPEN = 0x800; // SYSCFGLPEN
    static constexpr uint32_t RCC_MC_APB3LPENCLRR_VREFLPEN = 0x2000;  // VREFLPEN
    static constexpr uint32_t RCC_MC_APB3LPENCLRR_DTSLPEN = 0x10000;  // DTSLPEN

    static constexpr uint32_t RCC_MC_AHB2LPENSETR_RESET_VALUE = 0x10127;
    static constexpr uint32_t RCC_MC_AHB2LPENSETR_DMA1LPEN = 0x1;       // DMA1LPEN
    static constexpr uint32_t RCC_MC_AHB2LPENSETR_DMA2LPEN = 0x2;       // DMA2LPEN
    static constexpr uint32_t RCC_MC_AHB2LPENSETR_DMAMUXLPEN = 0x4;     // DMAMUXLPEN
    static constexpr uint32_t RCC_MC_AHB2LPENSETR_ADC12LPEN = 0x20;     // ADC12LPEN
    static constexpr uint32_t RCC_MC_AHB2LPENSETR_USBOLPEN = 0x100;     // USBOLPEN
    static constexpr uint32_t RCC_MC_AHB2LPENSETR_SDMMC3LPEN = 0x10000; // SDMMC3LPEN

    static constexpr uint32_t RCC_MC_AHB2LPENCLRR_RESET_VALUE = 0x10127;
    static constexpr uint32_t RCC_MC_AHB2LPENCLRR_DMA1LPEN = 0x1;       // DMA1LPEN
    static constexpr uint32_t RCC_MC_AHB2LPENCLRR_DMA2LPEN = 0x2;       // DMA2LPEN
    static constexpr uint32_t RCC_MC_AHB2LPENCLRR_DMAMUXLPEN = 0x4;     // DMAMUXLPEN
    static constexpr uint32_t RCC_MC_AHB2LPENCLRR_ADC12LPEN = 0x20;     // ADC12LPEN
    static constexpr uint32_t RCC_MC_AHB2LPENCLRR_USBOLPEN = 0x100;     // USBOLPEN
    static constexpr uint32_t RCC_MC_AHB2LPENCLRR_SDMMC3LPEN = 0x10000; // SDMMC3LPEN

    static constexpr uint32_t RCC_MC_AHB3LPENSETR_RESET_VALUE = 0x18f1;
    static constexpr uint32_t RCC_MC_AHB3LPENSETR_DCMILPEN = 0x1;    // DCMILPEN
    static constexpr uint32_t RCC_MC_AHB3LPENSETR_CRYP2LPEN = 0x10;  // CRYP2LPEN
    static constexpr uint32_t RCC_MC_AHB3LPENSETR_HASH2LPEN = 0x20;  // HASH2LPEN
    static constexpr uint32_t RCC_MC_AHB3LPENSETR_RNG2LPEN = 0x40;   // RNG2LPEN
    static constexpr uint32_t RCC_MC_AHB3LPENSETR_CRC2LPEN = 0x80;   // CRC2LPEN
    static constexpr uint32_t RCC_MC_AHB3LPENSETR_HSEMLPEN = 0x800;  // HSEMLPEN
    static constexpr uint32_t RCC_MC_AHB3LPENSETR_IPCCLPEN = 0x1000; // IPCCLPEN

    static constexpr uint32_t RCC_MC_AHB3LPENCLRR_RESET_VALUE = 0x18f1;
    static constexpr uint32_t RCC_MC_AHB3LPENCLRR_DCMILPEN = 0x1;    // DCMILPEN
    static constexpr uint32_t RCC_MC_AHB3LPENCLRR_CRYP2LPEN = 0x10;  // CRYP2LPEN
    static constexpr uint32_t RCC_MC_AHB3LPENCLRR_HASH2LPEN = 0x20;  // HASH2LPEN
    static constexpr uint32_t RCC_MC_AHB3LPENCLRR_RNG2LPEN = 0x40;   // RNG2LPEN
    static constexpr uint32_t RCC_MC_AHB3LPENCLRR_CRC2LPEN = 0x80;   // CRC2LPEN
    static constexpr uint32_t RCC_MC_AHB3LPENCLRR_HSEMLPEN = 0x800;  // HSEMLPEN
    static constexpr uint32_t RCC_MC_AHB3LPENCLRR_IPCCLPEN = 0x1000; // IPCCLPEN

    static constexpr uint32_t RCC_MC_AHB4LPENSETR_RESET_VALUE = 0x7ff;
    static constexpr uint32_t RCC_MC_AHB4LPENSETR_GPIOALPEN = 0x1;   // GPIOALPEN
    static constexpr uint32_t RCC_MC_AHB4LPENSETR_GPIOBLPEN = 0x2;   // GPIOBLPEN
    static constexpr uint32_t RCC_MC_AHB4LPENSETR_GPIOCLPEN = 0x4;   // GPIOCLPEN
    static constexpr uint32_t RCC_MC_AHB4LPENSETR_GPIODLPEN = 0x8;   // GPIODLPEN
    static constexpr uint32_t RCC_MC_AHB4LPENSETR_GPIOELPEN = 0x10;  // GPIOELPEN
    static constexpr uint32_t RCC_MC_AHB4LPENSETR_GPIOFLPEN = 0x20;  // GPIOFLPEN
    static constexpr uint32_t RCC_MC_AHB4LPENSETR_GPIOGLPEN = 0x40;  // GPIOGLPEN
    static constexpr uint32_t RCC_MC_AHB4LPENSETR_GPIOHLPEN = 0x80;  // GPIOHLPEN
    static constexpr uint32_t RCC_MC_AHB4LPENSETR_GPIOILPEN = 0x100; // GPIOILPEN
    static constexpr uint32_t RCC_MC_AHB4LPENSETR_GPIOJLPEN = 0x200; // GPIOJLPEN
    static constexpr uint32_t RCC_MC_AHB4LPENSETR_GPIOKLPEN = 0x400; // GPIOKLPEN

    static constexpr uint32_t RCC_MC_AHB4LPENCLRR_RESET_VALUE = 0x7ff;
    static constexpr uint32_t RCC_MC_AHB4LPENCLRR_GPIOALPEN = 0x1;   // GPIOALPEN
    static constexpr uint32_t RCC_MC_AHB4LPENCLRR_GPIOBLPEN = 0x2;   // GPIOBLPEN
    static constexpr uint32_t RCC_MC_AHB4LPENCLRR_GPIOCLPEN = 0x4;   // GPIOCLPEN
    static constexpr uint32_t RCC_MC_AHB4LPENCLRR_GPIODLPEN = 0x8;   // GPIODLPEN
    static constexpr uint32_t RCC_MC_AHB4LPENCLRR_GPIOELPEN = 0x10;  // GPIOELPEN
    static constexpr uint32_t RCC_MC_AHB4LPENCLRR_GPIOFLPEN = 0x20;  // GPIOFLPEN
    static constexpr uint32_t RCC_MC_AHB4LPENCLRR_GPIOGLPEN = 0x40;  // GPIOGLPEN
    static constexpr uint32_t RCC_MC_AHB4LPENCLRR_GPIOHLPEN = 0x80;  // GPIOHLPEN
    static constexpr uint32_t RCC_MC_AHB4LPENCLRR_GPIOILPEN = 0x100; // GPIOILPEN
    static constexpr uint32_t RCC_MC_AHB4LPENCLRR_GPIOJLPEN = 0x200; // GPIOJLPEN
    static constexpr uint32_t RCC_MC_AHB4LPENCLRR_GPIOKLPEN = 0x400; // GPIOKLPEN

    static constexpr uint32_t RCC_MC_AXIMLPENSETR_RESET_VALUE = 0x1;
    static constexpr uint32_t RCC_MC_AXIMLPENSETR_SYSRAMLPEN = 0x1; // SYSRAMLPEN

    static constexpr uint32_t RCC_MC_AXIMLPENCLRR_RESET_VALUE = 0x1;
    static constexpr uint32_t RCC_MC_AXIMLPENCLRR_SYSRAMLPEN = 0x1; // SYSRAMLPEN

    static constexpr uint32_t RCC_MC_MLAHBLPENSETR_RESET_VALUE = 0x17;
    static constexpr uint32_t RCC_MC_MLAHBLPENSETR_SRAM1LPEN = 0x1;   // SRAM1LPEN
    static constexpr uint32_t RCC_MC_MLAHBLPENSETR_SRAM2LPEN = 0x2;   // SRAM2LPEN
    static constexpr uint32_t RCC_MC_MLAHBLPENSETR_SRAM34LPEN = 0x4;  // SRAM34LPEN
    static constexpr uint32_t RCC_MC_MLAHBLPENSETR_RETRAMLPEN = 0x10; // RETRAMLPEN

    static constexpr uint32_t RCC_MC_MLAHBLPENCLRR_RESET_VALUE = 0x17;
    static constexpr uint32_t RCC_MC_MLAHBLPENCLRR_SRAM1LPEN = 0x1;   // SRAM1LPEN
    static constexpr uint32_t RCC_MC_MLAHBLPENCLRR_SRAM2LPEN = 0x2;   // SRAM2LPEN
    static constexpr uint32_t RCC_MC_MLAHBLPENCLRR_SRAM34LPEN = 0x4;  // SRAM34LPEN
    static constexpr uint32_t RCC_MC_MLAHBLPENCLRR_RETRAMLPEN = 0x10; // RETRAMLPEN

    static constexpr uint32_t RCC_MC_RSTSCLRR_RESET_VALUE = 0x15;
    static constexpr uint32_t RCC_MC_RSTSCLRR_PORRSTF = 0x1;     // PORRSTF
    static constexpr uint32_t RCC_MC_RSTSCLRR_BORRSTF = 0x2;     // BORRSTF
    static constexpr uint32_t RCC_MC_RSTSCLRR_PADRSTF = 0x4;     // PADRSTF
    static constexpr uint32_t RCC_MC_RSTSCLRR_HCSSRSTF = 0x8;    // HCSSRSTF
    static constexpr uint32_t RCC_MC_RSTSCLRR_VCORERSTF = 0x10;  // VCORERSTF
    static constexpr uint32_t RCC_MC_RSTSCLRR_MCURSTF = 0x20;    // MCURSTF
    static constexpr uint32_t RCC_MC_RSTSCLRR_MPSYSRSTF = 0x40;  // MPSYSRSTF
    static constexpr uint32_t RCC_MC_RSTSCLRR_MCSYSRSTF = 0x80;  // MCSYSRSTF
    static constexpr uint32_t RCC_MC_RSTSCLRR_IWDG1RSTF = 0x100; // IWDG1RSTF
    static constexpr uint32_t RCC_MC_RSTSCLRR_IWDG2RSTF = 0x200; // IWDG2RSTF
    static constexpr uint32_t RCC_MC_RSTSCLRR_WWDG1RSTF = 0x400; // WWDG1RSTF

    static constexpr uint32_t RCC_MC_CIER_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MC_CIER_LSIRDYIE = 0x1;     // LSIRDYIE
    static constexpr uint32_t RCC_MC_CIER_LSERDYIE = 0x2;     // LSERDYIE
    static constexpr uint32_t RCC_MC_CIER_HSIRDYIE = 0x4;     // HSIRDYIE
    static constexpr uint32_t RCC_MC_CIER_HSERDYIE = 0x8;     // HSERDYIE
    static constexpr uint32_t RCC_MC_CIER_CSIRDYIE = 0x10;    // CSIRDYIE
    static constexpr uint32_t RCC_MC_CIER_PLL1DYIE = 0x100;   // PLL1DYIE
    static constexpr uint32_t RCC_MC_CIER_PLL2DYIE = 0x200;   // PLL2DYIE
    static constexpr uint32_t RCC_MC_CIER_PLL3DYIE = 0x400;   // PLL3DYIE
    static constexpr uint32_t RCC_MC_CIER_PLL4DYIE = 0x800;   // PLL4DYIE
    static constexpr uint32_t RCC_MC_CIER_LSECSSIE = 0x10000; // LSECSSIE
    static constexpr uint32_t RCC_MC_CIER_WKUPIE = 0x100000;  // WKUPIE

    static constexpr uint32_t RCC_MC_CIFR_RESET_VALUE = 0x0;
    static constexpr uint32_t RCC_MC_CIFR_LSIRDYF = 0x1;     // LSIRDYF
    static constexpr uint32_t RCC_MC_CIFR_LSERDYF = 0x2;     // LSERDYF
    static constexpr uint32_t RCC_MC_CIFR_HSIRDYF = 0x4;     // HSIRDYF
    static constexpr uint32_t RCC_MC_CIFR_HSERDYF = 0x8;     // HSERDYF
    static constexpr uint32_t RCC_MC_CIFR_CSIRDYF = 0x10;    // CSIRDYF
    static constexpr uint32_t RCC_MC_CIFR_PLL1DYF = 0x100;   // PLL1DYF
    static constexpr uint32_t RCC_MC_CIFR_PLL2DYF = 0x200;   // PLL2DYF
    static constexpr uint32_t RCC_MC_CIFR_PLL3DYF = 0x400;   // PLL3DYF
    static constexpr uint32_t RCC_MC_CIFR_PLL4DYF = 0x800;   // PLL4DYF
    static constexpr uint32_t RCC_MC_CIFR_LSECSSF = 0x10000; // LSECSSF
    static constexpr uint32_t RCC_MC_CIFR_WKUPF = 0x100000;  // WKUPF

    static constexpr uint32_t RCC_VERR_RESET_VALUE = 0x11;
    template<uint32_t X>
    static constexpr uint32_t RCC_VERR_MINREV =   // MINREV
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RCC_VERR_MAJREV =   // MAJREV
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t RCC_IDR_RESET_VALUE = 0x1;

    static constexpr uint32_t RCC_SIDR_RESET_VALUE = 0xa3c5dd04;
};


template<>
struct peripheral_t<STM32MP15xxx, RCC>
{
    typedef stm32mp15xxx_rcc_t T;
    static T& V;
};

using rcc_t = peripheral_t<mcu_svd, RCC>;

