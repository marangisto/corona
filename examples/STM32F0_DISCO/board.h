#pragma once

#include <gpio.h>

static const pin_t          LED = PC9;
static const pin_t          LED2 = PC8;
static const pin_t          BTN = PA0;
static const input_type_t   BTN_TYPE = pull_down;
static const interrupt_t    BTN_ISR = interrupt::EXTI0_1;
static const pin_t          PROBE = PA8;

static const int            SERIAL_USART = 1;
static const pin_t          SERIAL_TX = PB6;
static const pin_t          SERIAL_RX = PB7;
static const interrupt_t    SERIAL_ISR = interrupt::USART1;

static const int            TIMER_NO = 3;
static const interrupt_t    TIMER_ISR = interrupt::TIM3;
static const pin_t          TIMER_CH1 = PA6;
static const pin_t          TIMER_CH2 = PA7;

