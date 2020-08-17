#pragma once

////
//
//      STM32G4 COMP peripherals
//
///

// COMP: Comparator control and status register

struct stm32g431xx_comp_t
{
    volatile uint32_t COMP_C1CSR; // Comparator control/status register
    volatile uint32_t COMP_C2CSR; // Comparator control/status register
    volatile uint32_t COMP_C3CSR; // Comparator control/status register
    volatile uint32_t COMP_C4CSR; // Comparator control/status register

    static constexpr uint32_t COMP_C1CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP_C1CSR_EN = 0x1; // EN
    static constexpr uint32_t COMP_C1CSR_COMP_DEGLITCH_EN = 0x2; // COMP_DEGLITCH_EN
    typedef bit_field_t<4, 0x7> COMP_C1CSR_INMSEL; // INMSEL
    static constexpr uint32_t COMP_C1CSR_INPSEL = 0x100; // INPSEL
    static constexpr uint32_t COMP_C1CSR_POL = 0x8000; // POL
    typedef bit_field_t<16, 0x7> COMP_C1CSR_HYST; // HYST
    typedef bit_field_t<19, 0x7> COMP_C1CSR_BLANKSEL; // BLANKSEL
    static constexpr uint32_t COMP_C1CSR_BRGEN = 0x400000; // BRGEN
    static constexpr uint32_t COMP_C1CSR_SCALEN = 0x800000; // SCALEN
    static constexpr uint32_t COMP_C1CSR_VALUE = 0x40000000; // VALUE
    static constexpr uint32_t COMP_C1CSR_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t COMP_C2CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP_C2CSR_EN = 0x1; // EN
    static constexpr uint32_t COMP_C2CSR_COMP_DEGLITCH_EN = 0x2; // COMP_DEGLITCH_EN
    typedef bit_field_t<4, 0x7> COMP_C2CSR_INMSEL; // INMSEL
    static constexpr uint32_t COMP_C2CSR_INPSEL = 0x100; // INPSEL
    static constexpr uint32_t COMP_C2CSR_POL = 0x8000; // POL
    typedef bit_field_t<16, 0x7> COMP_C2CSR_HYST; // HYST
    typedef bit_field_t<19, 0x7> COMP_C2CSR_BLANKSEL; // BLANKSEL
    static constexpr uint32_t COMP_C2CSR_BRGEN = 0x400000; // BRGEN
    static constexpr uint32_t COMP_C2CSR_SCALEN = 0x800000; // SCALEN
    static constexpr uint32_t COMP_C2CSR_VALUE = 0x40000000; // VALUE
    static constexpr uint32_t COMP_C2CSR_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t COMP_C3CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP_C3CSR_EN = 0x1; // EN
    static constexpr uint32_t COMP_C3CSR_COMP_DEGLITCH_EN = 0x2; // COMP_DEGLITCH_EN
    typedef bit_field_t<4, 0x7> COMP_C3CSR_INMSEL; // INMSEL
    static constexpr uint32_t COMP_C3CSR_INPSEL = 0x100; // INPSEL
    static constexpr uint32_t COMP_C3CSR_POL = 0x8000; // POL
    typedef bit_field_t<16, 0x7> COMP_C3CSR_HYST; // HYST
    typedef bit_field_t<19, 0x7> COMP_C3CSR_BLANKSEL; // BLANKSEL
    static constexpr uint32_t COMP_C3CSR_BRGEN = 0x400000; // BRGEN
    static constexpr uint32_t COMP_C3CSR_SCALEN = 0x800000; // SCALEN
    static constexpr uint32_t COMP_C3CSR_VALUE = 0x40000000; // VALUE
    static constexpr uint32_t COMP_C3CSR_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t COMP_C4CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP_C4CSR_EN = 0x1; // EN
    static constexpr uint32_t COMP_C4CSR_COMP_DEGLITCH_EN = 0x2; // COMP_DEGLITCH_EN
    typedef bit_field_t<4, 0x7> COMP_C4CSR_INMSEL; // INMSEL
    static constexpr uint32_t COMP_C4CSR_INPSEL = 0x100; // INPSEL
    static constexpr uint32_t COMP_C4CSR_POL = 0x8000; // POL
    typedef bit_field_t<16, 0x7> COMP_C4CSR_HYST; // HYST
    typedef bit_field_t<19, 0x7> COMP_C4CSR_BLANKSEL; // BLANKSEL
    static constexpr uint32_t COMP_C4CSR_BRGEN = 0x400000; // BRGEN
    static constexpr uint32_t COMP_C4CSR_SCALEN = 0x800000; // SCALEN
    static constexpr uint32_t COMP_C4CSR_VALUE = 0x40000000; // VALUE
    static constexpr uint32_t COMP_C4CSR_LOCK = 0x80000000; // LOCK
};

// COMP: Comparator control and status register

struct stm32g473xx_comp_t
{
    volatile uint32_t COMP_C1CSR; // Comparator control/status register
    volatile uint32_t COMP_C2CSR; // Comparator control/status register
    volatile uint32_t COMP_C3CSR; // Comparator control/status register
    volatile uint32_t COMP_C4CSR; // Comparator control/status register
    volatile uint32_t COMP_C5CSR; // Comparator control/status register
    volatile uint32_t COMP_C6CSR; // Comparator control/status register
    volatile uint32_t COMP_C7CSR; // Comparator control/status register

    static constexpr uint32_t COMP_C1CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP_C1CSR_EN = 0x1; // EN
    static constexpr uint32_t COMP_C1CSR_COMP_DEGLITCH_EN = 0x2; // COMP_DEGLITCH_EN
    typedef bit_field_t<4, 0x7> COMP_C1CSR_INMSEL; // INMSEL
    static constexpr uint32_t COMP_C1CSR_INPSEL = 0x100; // INPSEL
    static constexpr uint32_t COMP_C1CSR_POL = 0x8000; // POL
    typedef bit_field_t<16, 0x7> COMP_C1CSR_HYST; // HYST
    typedef bit_field_t<19, 0x7> COMP_C1CSR_BLANKSEL; // BLANKSEL
    static constexpr uint32_t COMP_C1CSR_BRGEN = 0x400000; // BRGEN
    static constexpr uint32_t COMP_C1CSR_SCALEN = 0x800000; // SCALEN
    static constexpr uint32_t COMP_C1CSR_VALUE = 0x40000000; // VALUE
    static constexpr uint32_t COMP_C1CSR_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t COMP_C2CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP_C2CSR_EN = 0x1; // EN
    static constexpr uint32_t COMP_C2CSR_COMP_DEGLITCH_EN = 0x2; // COMP_DEGLITCH_EN
    typedef bit_field_t<4, 0x7> COMP_C2CSR_INMSEL; // INMSEL
    static constexpr uint32_t COMP_C2CSR_INPSEL = 0x100; // INPSEL
    static constexpr uint32_t COMP_C2CSR_POL = 0x8000; // POL
    typedef bit_field_t<16, 0x7> COMP_C2CSR_HYST; // HYST
    typedef bit_field_t<19, 0x7> COMP_C2CSR_BLANKSEL; // BLANKSEL
    static constexpr uint32_t COMP_C2CSR_BRGEN = 0x400000; // BRGEN
    static constexpr uint32_t COMP_C2CSR_SCALEN = 0x800000; // SCALEN
    static constexpr uint32_t COMP_C2CSR_VALUE = 0x40000000; // VALUE
    static constexpr uint32_t COMP_C2CSR_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t COMP_C3CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP_C3CSR_EN = 0x1; // EN
    static constexpr uint32_t COMP_C3CSR_COMP_DEGLITCH_EN = 0x2; // COMP_DEGLITCH_EN
    typedef bit_field_t<4, 0x7> COMP_C3CSR_INMSEL; // INMSEL
    static constexpr uint32_t COMP_C3CSR_INPSEL = 0x100; // INPSEL
    static constexpr uint32_t COMP_C3CSR_POL = 0x8000; // POL
    typedef bit_field_t<16, 0x7> COMP_C3CSR_HYST; // HYST
    typedef bit_field_t<19, 0x7> COMP_C3CSR_BLANKSEL; // BLANKSEL
    static constexpr uint32_t COMP_C3CSR_BRGEN = 0x400000; // BRGEN
    static constexpr uint32_t COMP_C3CSR_SCALEN = 0x800000; // SCALEN
    static constexpr uint32_t COMP_C3CSR_VALUE = 0x40000000; // VALUE
    static constexpr uint32_t COMP_C3CSR_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t COMP_C4CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP_C4CSR_EN = 0x1; // EN
    static constexpr uint32_t COMP_C4CSR_COMP_DEGLITCH_EN = 0x2; // COMP_DEGLITCH_EN
    typedef bit_field_t<4, 0x7> COMP_C4CSR_INMSEL; // INMSEL
    static constexpr uint32_t COMP_C4CSR_INPSEL = 0x100; // INPSEL
    static constexpr uint32_t COMP_C4CSR_POL = 0x8000; // POL
    typedef bit_field_t<16, 0x7> COMP_C4CSR_HYST; // HYST
    typedef bit_field_t<19, 0x7> COMP_C4CSR_BLANKSEL; // BLANKSEL
    static constexpr uint32_t COMP_C4CSR_BRGEN = 0x400000; // BRGEN
    static constexpr uint32_t COMP_C4CSR_SCALEN = 0x800000; // SCALEN
    static constexpr uint32_t COMP_C4CSR_VALUE = 0x40000000; // VALUE
    static constexpr uint32_t COMP_C4CSR_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t COMP_C5CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP_C5CSR_EN = 0x1; // EN
    static constexpr uint32_t COMP_C5CSR_COMP_DEGLITCH_EN = 0x2; // COMP_DEGLITCH_EN
    typedef bit_field_t<4, 0x7> COMP_C5CSR_INMSEL; // INMSEL
    static constexpr uint32_t COMP_C5CSR_INPSEL = 0x100; // INPSEL
    static constexpr uint32_t COMP_C5CSR_POL = 0x8000; // POL
    typedef bit_field_t<16, 0x7> COMP_C5CSR_HYST; // HYST
    typedef bit_field_t<19, 0x7> COMP_C5CSR_BLANKSEL; // BLANKSEL
    static constexpr uint32_t COMP_C5CSR_BRGEN = 0x400000; // BRGEN
    static constexpr uint32_t COMP_C5CSR_SCALEN = 0x800000; // SCALEN
    static constexpr uint32_t COMP_C5CSR_VALUE = 0x40000000; // VALUE
    static constexpr uint32_t COMP_C5CSR_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t COMP_C6CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP_C6CSR_EN = 0x1; // EN
    static constexpr uint32_t COMP_C6CSR_COMP_DEGLITCH_EN = 0x2; // COMP_DEGLITCH_EN
    typedef bit_field_t<4, 0x7> COMP_C6CSR_INMSEL; // INMSEL
    static constexpr uint32_t COMP_C6CSR_INPSEL = 0x100; // INPSEL
    static constexpr uint32_t COMP_C6CSR_POL = 0x8000; // POL
    typedef bit_field_t<16, 0x7> COMP_C6CSR_HYST; // HYST
    typedef bit_field_t<19, 0x7> COMP_C6CSR_BLANKSEL; // BLANKSEL
    static constexpr uint32_t COMP_C6CSR_BRGEN = 0x400000; // BRGEN
    static constexpr uint32_t COMP_C6CSR_SCALEN = 0x800000; // SCALEN
    static constexpr uint32_t COMP_C6CSR_VALUE = 0x40000000; // VALUE
    static constexpr uint32_t COMP_C6CSR_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t COMP_C7CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP_C7CSR_EN = 0x1; // EN
    static constexpr uint32_t COMP_C7CSR_COMP_DEGLITCH_EN = 0x2; // COMP_DEGLITCH_EN
    typedef bit_field_t<4, 0x7> COMP_C7CSR_INMSEL; // INMSEL
    static constexpr uint32_t COMP_C7CSR_INPSEL = 0x100; // INPSEL
    static constexpr uint32_t COMP_C7CSR_POL = 0x8000; // POL
    typedef bit_field_t<16, 0x7> COMP_C7CSR_HYST; // HYST
    typedef bit_field_t<19, 0x7> COMP_C7CSR_BLANKSEL; // BLANKSEL
    static constexpr uint32_t COMP_C7CSR_BRGEN = 0x400000; // BRGEN
    static constexpr uint32_t COMP_C7CSR_SCALEN = 0x800000; // SCALEN
    static constexpr uint32_t COMP_C7CSR_VALUE = 0x40000000; // VALUE
    static constexpr uint32_t COMP_C7CSR_LOCK = 0x80000000; // LOCK
};

template<>
struct peripheral_t<STM32G431xx, COMP>
{
    using T = stm32g431xx_comp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, COMP>
{
    using T = stm32g431xx_comp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, COMP>
{
    using T = stm32g431xx_comp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32GBK1CBT6, COMP>
{
    using T = stm32g431xx_comp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, COMP>
{
    using T = stm32g473xx_comp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, COMP>
{
    using T = stm32g473xx_comp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, COMP>
{
    using T = stm32g473xx_comp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, COMP>
{
    using T = stm32g473xx_comp_t;
    static T& V;
};

using comp_t = peripheral_t<svd, COMP>;
