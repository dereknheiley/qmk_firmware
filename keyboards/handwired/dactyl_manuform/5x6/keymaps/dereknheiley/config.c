#undef PRODUCT_ID
#define PRODUCT_ID      0x3536
#undef VENDOR_ID
#define VENDOR_ID       0x444d
#undef MANUFACTURER
#define MANUFACTURER    DKN

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* number of backlight levels */
// #define BACKLIGHT_LEVELS 3

#define USE_SERIAL

#define MASTER_LEFT
#define EE_HANDS

// use an actual pin connecting D1 to GND on right hand side to indicate that it is right, no pin on the left controller makes it the master
//#define SPLIT_HAND_PIN D1

/* this combination of PERMISSIVE_HOLD being off and IGNORE_MOD_TAP_INTERRUPT being on 
 * helps with keys like A are also SHIFT when held */
// #undef PERMISSIVE_HOLD
// #define IGNORE_MOD_TAP_INTERRUPT
//
// #define TAPPING_TERM 200

#define COMBO_COUNT 4
#define COMBO_TERM 20

// ws2812 RGB LED strip input and number of LEDs
#undef RGB_DI_PIN
#define RGB_DI_PIN D3

#undef RGBLED_NUM
#define RGB_NUM_PER_SIDE 31
#define RGBLED_SPLIT {RGB_NUM_PER_SIDE, RGB_NUM_PER_SIDE}
#define RGBLED_NUM (2 * RGB_NUM_PER_SIDE)

#define RGBLIGHT_LIMIT_VAL 120 // recommended default 120, max for IOS devices 40, absolute max 255
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS RGBLIGHT_LIMIT_VAL
#define RGBLIGHT_EFFECT_BREATHE_MAX RGBLIGHT_LIMIT_VAL

#define RGBLIGHT_SLEEP
#define RGBLIGHT_LAYERS
#define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF

// #define RGBLIGHT_ANIMATIONS
//save space by only specifying the animations you want
// #define RGBLIGHT_EFFECT_STATIC_LIGHT
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
// #define RGBLIGHT_EFFECT_TWINKLE