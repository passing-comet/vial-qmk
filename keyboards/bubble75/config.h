// #ifndef CONFIG_H
// #define CONFIG_H

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4242
#define PRODUCT_ID      0x5A4C
#define DEVICE_VER      0x0001
#define MANUFACTURER    PHL
#define PRODUCT         BUBBLE 75

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 15

/* key matrix pins */
#define MATRIX_ROW_PINS { F4, F5, F6, F7, C7, F1 }
#define MATRIX_COL_PINS { B0, B1, B2, B3, E6, F0, D0, D1, D4, D6, D7, B4, B5, B6, C6 }
#define UNUSED_PINS
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 3

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)
*/

/* prevent stuck modifiers */
// #define PREVENT_STUCK_MODIFIERS

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

// #define FORCE_NKRO

/* WS2812 RGB */
#ifdef RGB_MATRIX_ENABLE
#define RGB_DI_PIN B7
#define DRIVER_LED_TOTAL 81

// #define RGBLED_NUM 81
// // #define RGBLIGHT_ANIMATIONS
// #define RGBLIGHT_HUE_STEP 25
// #define RGBLIGHT_SAT_STEP 25
// #define RGBLIGHT_VAL_STEP 25
// #define RGBLIGHT_LIMIT_VAL 224
// // #define RGBLIGHT_LAYERS
// //#define RGBLIGHT_LAYER_BLINK
// // #define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF
// #define RGBLIGHT_SLEEP
// #define RGBLIGHT_DEFAULT_HUE 11
// #define RGBLIGHT_DEFAULT_SAT 255
// #define RGBLIGHT_DEFAULT_VAL 160
// #define RGBLIGHT_DEFAULT_SPD 127

#define RGB_DISABLE_AFTER_TIMEOUT 300000
#define RGB_DISABLE_WHEN_USB_SUSPENDED
#define RGB_MATRIX_LED_PROCESS_LIMIT (DRIVER_LED_TOTAL + 4) / 5
#define RGB_MATRIX_LED_FLUSH_LIMIT 16

#define ENABLE_RGB_MATRIX_ALPHAS_MODS
#define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
#define ENABLE_RGB_MATRIX_PIXEL_FLOW
#define ENABLE_RGB_MATRIX_PIXEL_RAIN

// #define RGB_MATRIX_FRAMEBUFFER_EFFECTS
// #define ENABLE_RGB_MATRIX_TYPING_HEATMAP
// #define ENABLE_RGB_MATRIX_DIGITAL_RAIN

#define RGB_MATRIX_KEYPRESSES
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS


#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 191
#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SOLID_REACTIVE_WIDE
#define RGB_MATRIX_STARTUP_HUE 24
#define RGB_MATRIX_STARTUP_SAT 255
#define RGB_MATRIX_STARTUP_VAL 159
#define RGB_MATRIX_STARTUP_SPD 95
#endif // RGB_MATRIX_ENABLE

/* VIA */
//#ifdef VIA_ENABLE
//#define DYNAMIC_KEYMAP_LAYER_COUNT 2
//#endif
// #endif
