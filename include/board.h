#pragma once

#include <corona.h>
#include <button.h>
#include <usart.h>

enum board_t
    { BLUE_PILL
    , STM32F072B_DISCO
    , STM32F3348_DISCO
    , STM32F411E_DISCO
    , STM32F412G_DISCO
    , STM32F413H_DISCO
    , STM32F429I_DISCO
    , STM32F469I_DISCO
    , STM32F723E_DISCO
    , STM32F746G_DISCO
    , STM32F769I_DISCO
    , STM32L0538_DISCO
    , STM32L152C_DISCO
    , STM32L476G_DISCO
    , STM32L496G_DISCO
    , STM32L4R9I_DISCO
    , STM32F0_DISCO
    , STM32F3_DISCO
    , STM32F4_DISCO
    , STM32F7508_DISCO
    , STM32G0316_DISCO
    , STM32G071B_DISCO
    , STM32H745I_DISCO
    , STM32H747I_DISCO
    , STM32H750B_DISCO
    , STM32H7B3I_DISCO
    , STM32L4P5G_DISCO
    , STM32L562E_DISCO
    , STM32MP157A_DISCO
    , STM32MP157C_DISCO
    , STM32VL_DISCO
    , STM32F0308_DISCO
    , STM32L100C_DISCO
    , NUCLEO_F030R8
    , NUCLEO_F031K6
    , NUCLEO_F042K6
    , NUCLEO_F070RB
    , NUCLEO_F072RB
    , NUCLEO_F091RC
    , NUCLEO_F103RB
    , NUCLEO_F207ZG
    , NUCLEO_F302R8
    , NUCLEO_F303K8
    , NUCLEO_F303RE
    , NUCLEO_F303ZE
    , NUCLEO_F334R8
    , NUCLEO_F401RE
    , NUCLEO_F410RB
    , NUCLEO_F411RE
    , NUCLEO_F412ZG
    , NUCLEO_F413ZH
    , NUCLEO_F429ZI
    , NUCLEO_F439ZI
    , NUCLEO_F446RE
    , NUCLEO_F446ZE
    , NUCLEO_F722ZE
    , NUCLEO_F746ZG
    , NUCLEO_F756ZG
    , NUCLEO_F767ZI
    , NUCLEO_G031K8
    , NUCLEO_G070RB
    , NUCLEO_G071RB
    , NUCLEO_G431KB
    , NUCLEO_G431RB
    , NUCLEO_G474RE
    , NUCLEO_H743ZI
    , NUCLEO_H745ZIQ
    , NUCLEO_H753ZI
    , NUCLEO_H755ZIQ
    , NUCLEO_H7A3ZIQ
    , NUCLEO_L010RB
    , NUCLEO_L011K4
    , NUCLEO_L031K6
    , NUCLEO_L053R8
    , NUCLEO_L073RZ
    , NUCLEO_L152RE
    , NUCLEO_L412KB
    , NUCLEO_L412RBP
    , NUCLEO_L432KC
    , NUCLEO_L433RCP
    , NUCLEO_L452RE
    , NUCLEO_L452REP
    , NUCLEO_L476RG
    , NUCLEO_L496ZG
    , NUCLEO_L496ZGP
    , NUCLEO_L4A6ZG
    , NUCLEO_L4P5ZG
    , NUCLEO_L4R5ZI
    , NUCLEO_L4R5ZIP
    , NUCLEO_L552ZEQ
    };

template<board_t> struct board_traits_t {};

template<>
struct board_traits_t<STM32F0_DISCO>
{
    using led1 = output_t<PC9>;
    using led2 = output_t<PC8>;
    using btn1 = button_t<PA0>;
    static constexpr input_type_t btn_type = pull_up;
    using probe = output_t<PA8>;
};

template<>
struct board_traits_t<NUCLEO_G070RB>
{
    using led1 = output_t<PA5>;
    using btn1 = button_t<PC13>;
    static constexpr input_type_t btn_type = pull_up;
    using probe = output_t<PA8>;
    using serial = usart_t<2, PA2, PA3>;
    static constexpr interrupt::interrupt_t serial_interrupt = interrupt::USART2;
};

template<>
struct board_traits_t<NUCLEO_G431RB>
{
    using led1 = output_t<PA5>;
    using btn1 = button_t<PC13>;
    static constexpr input_type_t btn_type = pull_down;
    using probe = output_t<PA8>;
    using serial = usart_t<2, PA2, PA3>;
    static constexpr interrupt::interrupt_t serial_interrupt = interrupt::USART2;
};

static constexpr board_t target_board = BOARD;

using board = board_traits_t<target_board>;

