/* Copyright 2023 rsre <me@ricardosa.nz>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// #define BACKLIGHT_PWM_DRIVER    PWMD3
// #define BACKLIGHT_PWM_CHANNEL   2
// #define BACKLIGHT_PAL_MODE      2

// #define LED_CAPS_LOCK_PIN B1
// #define LED_INDICATOR_1   C4
// #define LED_INDICATOR_2   C5
// #define LED_INDICATOR_3   B0
// #define LED_INDICATOR_4   A5
// #define LED_INDICATOR_5  C15

// // I2C driver
// #define I2C_DRIVER I2CD1
// #define I2C1_SDA_PIN GP2
// #define I2C1_SCL_PIN GP3
// // SPI driver
// #define SPI_DRIVER SPID0
// #define SPI_SCK_PIN GP18
// #define SPI_MISO_PIN GP20
// #define SPI_MOSI_PIN GP19
// // Serial driver
// #define SERIAL_USART_DRIVER (SIO Driver only) SIOD0
// #define SOFT_SERIAL_PIN undefined, use SERIAL_USART_TX_PIN
// #define SERIAL_USART_TX_PIN GP0
// #define SERIAL_USART_RX_PIN GP1
// // UART driver
// #define UART_DRIVER SIOD0
// #define UART_TX_PIN GP0
// #define UART_RX_PIN GP1


/* matrix size */
// #define MATRIX_ROWS 5
// #define MATRIX_COLS 12

// #define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
// #define SERIAL_USART_TX_PIN B6     // USART TX pin
// #define SERIAL_USART_RX_PIN B7     // USART RX pin

// #define SERIAL_PIO_USE_PIO1 // Force the usage of PIO1 peripheral, by default the Serial implementation uses the PIO0 peripheral

#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_TRANSACTIONAL_LAYER
