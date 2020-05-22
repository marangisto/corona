#pragma once

////
//
//      STM32G4 CRS peripherals
//
////

////
//
//      CRS
//
////

struct stm32g431xx_crs_t
{
    volatile uint32_t CR;   // CRS control register
    volatile uint32_t CFGR; // [read-write] This register can be written only when the frequency error counter is disabled (CEN bit is cleared in CRS_CR). When the counter is enabled, this register is write-protected.
    volatile uint32_t ISR;  // [read-only] CRS interrupt and status register
    volatile uint32_t ICR;  // [read-write] CRS interrupt flag clear register

    static constexpr uint32_t CR_RESET_VALUE = 0x4000;
    static constexpr uint32_t CR_SYNCOKIE = 0x1;    // SYNC event OK interrupt enable
    static constexpr uint32_t CR_SYNCWARNIE = 0x2;  // SYNC warning interrupt enable
    static constexpr uint32_t CR_ERRIE = 0x4;       // Synchronization or trimming error interrupt enable
    static constexpr uint32_t CR_ESYNCIE = 0x8;     // Expected SYNC interrupt enable
    static constexpr uint32_t CR_CEN = 0x20;        // Frequency error counter enable This bit enables the oscillator clock for the frequency error counter. When this bit is set, the CRS_CFGR register is write-protected and cannot be modified.
    static constexpr uint32_t CR_AUTOTRIMEN = 0x40; // Automatic trimming enable This bit enables the automatic hardware adjustment of TRIM bits according to the measured frequency error between two SYNC events. If this bit is set, the TRIM bits are read-only. The TRIM value can be adjusted by hardware by one or two steps at a time, depending on the measured frequency error value. Refer to Section7.3.4: Frequency error evaluation and automatic trimming for more details.
    static constexpr uint32_t CR_SWSYNC = 0x80;     // Generate software SYNC event This bit is set by software in order to generate a software SYNC event. It is automatically cleared by hardware.
    template<uint32_t X>
    static constexpr uint32_t CR_TRIM =             // HSI48 oscillator smooth trimming These bits provide a user-programmable trimming value to the HSI48 oscillator. They can be programmed to adjust to variations in voltage and temperature that influence the frequency of the HSI48. The default value is 32, which corresponds to the middle of the trimming interval. The trimming step is around 67 kHz between two consecutive TRIM steps. A higher TRIM value corresponds to a higher output frequency. When the AUTOTRIMEN bit is set, this field is controlled by hardware and is read-only.
        bit_field_t<8, 0x7f>::value<X>();

    static constexpr uint32_t CFGR_RESET_VALUE = 0x2022bb7f;
    template<uint32_t X>
    static constexpr uint32_t CFGR_RELOAD =              // Counter reload value RELOAD is the value to be loaded in the frequency error counter with each SYNC event. Refer to Section7.3.3: Frequency error measurement for more details about counter behavior.
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_FELIM =               // Frequency error limit FELIM contains the value to be used to evaluate the captured frequency error value latched in the FECAP[15:0] bits of the CRS_ISR register. Refer to Section7.3.4: Frequency error evaluation and automatic trimming for more details about FECAP evaluation.
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_SYNCDIV =             // SYNC divider These bits are set and cleared by software to control the division factor of the SYNC signal.
        bit_field_t<24, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_SYNCSRC =             // SYNC signal source selection These bits are set and cleared by software to select the SYNC signal source. Note: When using USB LPM (Link Power Management) and the device is in Sleep mode, the periodic USB SOF will not be generated by the host. No SYNC signal will therefore be provided to the CRS to calibrate the HSI48 on the run. To guarantee the required clock precision after waking up from Sleep mode, the LSE or reference clock on the GPIOs should be used as SYNC signal.
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t CFGR_SYNCPOL = 0x80000000; // SYNC polarity selection This bit is set and cleared by software to select the input polarity for the SYNC signal source.

    static constexpr uint32_t ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t ISR_SYNCOKF = 0x1;    // SYNC event OK flag This flag is set by hardware when the measured frequency error is smaller than FELIM * 3. This means that either no adjustment of the TRIM value is needed or that an adjustment by one trimming step is enough to compensate the frequency error. An interrupt is generated if the SYNCOKIE bit is set in the CRS_CR register. It is cleared by software by setting the SYNCOKC bit in the CRS_ICR register.
    static constexpr uint32_t ISR_SYNCWARNF = 0x2;  // SYNC warning flag This flag is set by hardware when the measured frequency error is greater than or equal to FELIM * 3, but smaller than FELIM * 128. This means that to compensate the frequency error, the TRIM value must be adjusted by two steps or more. An interrupt is generated if the SYNCWARNIE bit is set in the CRS_CR register. It is cleared by software by setting the SYNCWARNC bit in the CRS_ICR register.
    static constexpr uint32_t ISR_ERRF = 0x4;       // Error flag This flag is set by hardware in case of any synchronization or trimming error. It is the logical OR of the TRIMOVF, SYNCMISS and SYNCERR bits. An interrupt is generated if the ERRIE bit is set in the CRS_CR register. It is cleared by software in reaction to setting the ERRC bit in the CRS_ICR register, which clears the TRIMOVF, SYNCMISS and SYNCERR bits.
    static constexpr uint32_t ISR_ESYNCF = 0x8;     // Expected SYNC flag This flag is set by hardware when the frequency error counter reached a zero value. An interrupt is generated if the ESYNCIE bit is set in the CRS_CR register. It is cleared by software by setting the ESYNCC bit in the CRS_ICR register.
    static constexpr uint32_t ISR_SYNCERR = 0x100;  // SYNC error This flag is set by hardware when the SYNC pulse arrives before the ESYNC event and the measured frequency error is greater than or equal to FELIM * 128. This means that the frequency error is too big (internal frequency too low) to be compensated by adjusting the TRIM value, and that some other action should be taken. An interrupt is generated if the ERRIE bit is set in the CRS_CR register. It is cleared by software by setting the ERRC bit in the CRS_ICR register.
    static constexpr uint32_t ISR_SYNCMISS = 0x200; // SYNC missed This flag is set by hardware when the frequency error counter reached value FELIM * 128 and no SYNC was detected, meaning either that a SYNC pulse was missed or that the frequency error is too big (internal frequency too high) to be compensated by adjusting the TRIM value, and that some other action should be taken. At this point, the frequency error counter is stopped (waiting for a next SYNC) and an interrupt is generated if the ERRIE bit is set in the CRS_CR register. It is cleared by software by setting the ERRC bit in the CRS_ICR register.
    static constexpr uint32_t ISR_TRIMOVF = 0x400;  // Trimming overflow or underflow This flag is set by hardware when the automatic trimming tries to over- or under-flow the TRIM value. An interrupt is generated if the ERRIE bit is set in the CRS_CR register. It is cleared by software by setting the ERRC bit in the CRS_ICR register.
    static constexpr uint32_t ISR_FEDIR = 0x8000;   // Frequency error direction FEDIR is the counting direction of the frequency error counter latched in the time of the last SYNC event. It shows whether the actual frequency is below or above the target.
    template<uint32_t X>
    static constexpr uint32_t ISR_FECAP =           // Frequency error capture FECAP is the frequency error counter value latched in the time ofthe last SYNC event. Refer to Section7.3.4: Frequency error evaluation and automatic trimming for more details about FECAP usage.
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t ICR_RESET_VALUE = 0x0;
    static constexpr uint32_t ICR_SYNCOKC = 0x1;   // SYNC event OK clear flag Writing 1 to this bit clears the SYNCOKF flag in the CRS_ISR register.
    static constexpr uint32_t ICR_SYNCWARNC = 0x2; // SYNC warning clear flag Writing 1 to this bit clears the SYNCWARNF flag in the CRS_ISR register.
    static constexpr uint32_t ICR_ERRC = 0x4;      // Error clear flag Writing 1 to this bit clears TRIMOVF, SYNCMISS and SYNCERR bits and consequently also the ERRF flag in the CRS_ISR register.
    static constexpr uint32_t ICR_ESYNCC = 0x8;    // Expected SYNC clear flag Writing 1 to this bit clears the ESYNCF flag in the CRS_ISR register.
};


template<>
struct peripheral_t<STM32G431xx, CRS>
{
    typedef stm32g431xx_crs_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, CRS>
{
    typedef stm32g431xx_crs_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, CRS>
{
    typedef stm32g431xx_crs_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, CRS>
{
    typedef stm32g431xx_crs_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, CRS>
{
    typedef stm32g431xx_crs_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, CRS>
{
    typedef stm32g431xx_crs_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, CRS>
{
    typedef stm32g431xx_crs_t T;
    static T& V;
};

using crs_t = peripheral_t<mcu_svd, CRS>;
