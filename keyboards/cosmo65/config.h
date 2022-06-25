// Copyright 2022 Ethan Robson (@Ethan8Robson)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "config_common.h"
#pragma once

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

/* RGB Lighting */
#define RGB_DI_PIN F7
#define RGBLED_NUM 16
#define RGBLIGHT_ANIMATIONS

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

/* keyboard matrix assignments */
#define MATRIX_ROW_PINS { D5, D0, F0, F5, F4 }
#define MATRIX_COL_PINS { E6, D4, D6, D7, B4, B5, B6, C6, C7, D1, D2, D3, F1, F6 }
#define UNUSED_PINS {B0, B7}
#define DIODE_DIRECTION COL2ROW

/* Identification */
#define VENDOR_ID 0x4242
#define PRODUCT_ID 0x0001
#define MANUFACTURER Bento Box Studio
#define PRODUCT Bento Box Studio Cosmo65
#define DESCRIPTION Bento Box Studio Cosmo65