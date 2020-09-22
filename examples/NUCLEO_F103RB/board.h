#pragma once

#include <gpio.h>

static const pin_t          LED = PA5;
static const pin_t          BTN = PC13;
static const input_type_t   BTN_TYPE = pull_up;
static const pin_t          PROBE = PA8;

static const int            SERIAL_USART = 2;
static const pin_t          SERIAL_TX = PA2;
static const pin_t          SERIAL_RX = PA3;
static const interrupt_t    SERIAL_ISR = interrupt::USART2;

