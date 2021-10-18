#pragma once

#include <gpio.h>

static const pin_t          LED = PC6;
static const pin_t          PROBE = PA8;
static const pin_t          A0 = PA0;
static const pin_t          A1 = PA1;
static const pin_t          A2 = PA4;
static const pin_t          A3 = PA5;
static const pin_t          A4 = PA12;
static const pin_t          A5 = PA11;

static const int            SERIAL_USART = 2;
static const pin_t          SERIAL_TX = PA2;
static const pin_t          SERIAL_RX = PA3;
static const interrupt_t    SERIAL_ISR = interrupt::USART2;

static const int            TIMER_NO = 3;
static const interrupt_t    TIMER_ISR = interrupt::TIM3;
static const pin_t          TIMER_CH1 = PA6;
static const pin_t          TIMER_CH2 = PA7;

