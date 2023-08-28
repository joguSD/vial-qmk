/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0xD0, 0x3B, 0x7B, 0x16, 0x2A, 0xC4, 0xBC, 0xC7}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 2 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 12 }

#define DRIVER_ADDR_1 0x74
#define DRIVER_ADDR_2 0x76
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS


// Disable the wilbatech RGB
#undef RGB_BACKLIGHT_M60_A
#undef RGB_BACKLIGHT_ENABLED
#define RGB_BACKLIGHT_ENABLED 0
