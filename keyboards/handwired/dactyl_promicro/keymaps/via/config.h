#undef VENDOR_ID
#define VENDOR_ID       0x4450
#define DESCRIPTION     A split keyboard

/* ws2812 RGB LED */
#undef RGB_DI_PIN
#define RGB_DI_PIN D3

#undef RGBLED_NUM
#define RGB_NUM_PER_SIDE 35
#define RGBLED_SPLIT {RGB_NUM_PER_SIDE, RGB_NUM_PER_SIDE}
#define RGBLED_NUM (2 * RGB_NUM_PER_SIDE)

#define RGBLIGHT_LIMIT_VAL 120 // recommended default 120, max for IOS devices 40, absolute max 255
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS RGBLIGHT_LIMIT_VAL
#define RGBLIGHT_EFFECT_BREATHE_MAX RGBLIGHT_LIMIT_VAL

#define RGBLIGHT_SLEEP
#define RGBLIGHT_LAYERS
#define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF

#undef RGBLIGHT_ANIMATIONS
// #define RGBLIGHT_ANIMATIONS
//save space by only specifying the animations you want
#define RGBLIGHT_EFFECT_STATIC_GRADIENT

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
#define NO_DEBUG

/* disable print */
#define NO_PRINT

/* disable action features */
#define NO_ACTION_LAYER
#define NO_ACTION_TAPPING
#define NO_ACTION_ONESHOT
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
