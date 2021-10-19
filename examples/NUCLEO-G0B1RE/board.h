#pragma once

#include <gpio.h>

static const pin_t          LED = PA5;
static const pin_t          BTN = PC13;
static const input_type_t   BTN_TYPE = pull_up;
static const interrupt_t    BTN_ISR = interrupt::EXTI4_15;
static const pin_t          PROBE = PA8;
static const pin_t          A0 = PA0;
static const pin_t          A1 = PA1;
static const pin_t          A2 = PA4;
static const pin_t          A3 = PB1;
static const pin_t          A4 = PB11;
static const pin_t          A5 = PB12;

static const int            SERIAL_USART = 2;
static const pin_t          SERIAL_TX = PA2;
static const pin_t          SERIAL_RX = PA3;
static const interrupt_t    SERIAL_ISR = interrupt::USART2_LPUART2;

static const int            TIMER_NO = 3;
static const interrupt_t    TIMER_ISR = interrupt::TIM3_TIM4;
static const pin_t          TIMER_CH1 = PA6;
static const pin_t          TIMER_CH2 = PA7;

