// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

//#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 6

#define COMBO_TERM 200
#define COMBO_COUNT 7

// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 200

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define QUICK_TAP_TERM 0


//#define COMBO_TERM 25        // how quickly all combo keys must be pressed in succession to trigger
//#define COMBO_MUST_HOLD_MODS // if a combo triggers a modifier, only trigger when the combo is held
//#define COMBO_HOLD_TERM 175  // how long at least one of the combo keys must be held to trigger

#define DIRECT_PINS {{B1, B10, A8, B15, B14, B13}, \
                     {B9, B8, B5, B4, B3, A15}, \
                     {A3, A4, A5, A6, A7, B0}, \
                     {A2, A1, A0, NO_PIN, NO_PIN, NO_PIN}}
#define DIRECT_PINS_RIGHT {{B13, B14, B15, A8, B10, B1}, \
                           {A15, B3, B4, B5, B8, B9}, \
                           {B0, A7, A6, A5, A4, A3}, \
                           {A0, A1, A2, NO_PIN, NO_PIN, NO_PIN}}

#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN B6     // USART TX pin
#define SERIAL_USART_RX_PIN B7     // USART RX pin

/* Top left key on left half */
#define BOOTMAGIC_LITE_ROW    0
#define BOOTMAGIC_LITE_COLUMN 0
/* Top right key on right half */
#define BOOTMAGIC_LITE_ROW_RIGHT    4
#define BOOTMAGIC_LITE_COLUMN_RIGHT 5

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define TAPPING_TERM 200
//#define IGNORE_MOD_TAP_INTERRUPT
//#define PERMISSIVE_HOLD