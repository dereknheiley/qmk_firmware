#include QMK_KEYBOARD_H

#define _QWERTY_LAYER 0
#define _FN_LAYER 1
#define _RGB_LAYER 2
#define _DUMMY_VIA_LAYER 3

#define CTL_LBRC LCTL_T(KC_LBRC)
#define ALT_RBRC LALT_T(KC_RBRC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


    [_QWERTY_LAYER] = LAYOUT_6x6(
         KC_GRV, KC_1   , KC_2   , KC_3  , KC_4  , KC_5  ,                                  KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_MINS,
         KC_TAB, KC_Q   , KC_W   , KC_E  , KC_R  , KC_T  ,                                  KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_BSLS,
LSFT_T(KC_CAPS), KC_A   , KC_S   , KC_D  , KC_F  , KC_G  ,                                  KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,RSFT_T(KC_QUOT),
        KC_LSFT, KC_Z   , KC_X   , KC_C  , KC_V  , KC_B  ,                                  KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_RSFT,
        KC_LCPO, KC_QUOT,CTL_LBRC,ALT_RBRC,KC_LGUI,KC_LGUI ,                               KC_DEL , KC_UP ,KC_MINS,KC_MINS,KC_RBRC,KC_RCPC,
                                              LT(1,KC_SPC),KC_ENT ,KC_ESC , KC_HOME, KC_ENT,LT(1,KC_BSPC),
                                                                   KC_BSPC, KC_END,
                                                                   MO(2)  , MO(2)
  ),

  [_FN_LAYER] = LAYOUT_6x6(
     KC_TILD,KC_EXLM, KC_AT ,KC_HASH,KC_DLR ,KC_PERC,                                   KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_UNDS,
     _______,KC_BRIU,KC_PGUP,KC_UP  ,KC_PGDN,KC_VOLU,                                   KC_VOLU,KC_PGUP,KC_UP  ,KC_PGDN,KC_NO  ,KC_PIPE,
     KC_LSFT,KC_BRID,KC_LEFT,KC_DOWN,KC_RGHT,KC_VOLD,                                   KC_VOLD,KC_LEFT,KC_DOWN,KC_RGHT,KC_MINS,RSFT_T(KC_DQUO),
     _______,KC_F5  ,KC_F6  ,KC_F7  ,KC_F8  ,KC_F10 ,                                   KC_MUTE,KC_END  , KC_P2 , KC_P3 ,KC_QUES,_______,
     _______,_______,_______,_______,_______,          _______,                 _______,       _______,_______,_______,_______,_______,
                                               _______,_______,_______, _______,_______,_______ ,
                                                               _______, _______,
                                                               _______, _______
  ),

  [_RGB_LAYER] = LAYOUT_6x6(
       KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
       _______,RGB_SAD,RGB_HUD,RGB_HUI,RGB_SAI,RGB_M_P,                        RGB_M_P,RGB_SAD,RGB_HUD,RGB_HUI,RGB_SAI,_______,
       _______,_______,RGB_VAD,RGB_VAI,_______,RGB_M_G,                        RGB_M_G,_______,RGB_VAD,RGB_VAI,_______,_______,
       _______,RGB_SPD,RGB_RMOD,RGB_MOD,RGB_SPI,RGB_TOG,                        RGB_TOG,RGB_SPD,RGB_RMOD,RGB_MOD,RGB_SPI,_______,
     _______,_______,_______,_______,_______,          _______,                 _______,       _______,_______,_______,_______,_______,
                                               _______,_______,_______, _______,_______,_______ ,
                                                               _______, _______,
                                                               _______, _______
  ),

    [_DUMMY_VIA_LAYER] = LAYOUT_6x6(
       KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,                         KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO ,
       KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,                         KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
       KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,                         KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
       KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,                         KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
       KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,      KC_NO,             KC_NO,       KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
                                     KC_NO,KC_NO,KC_NO, KC_NO,KC_NO,KC_NO ,
                                                 KC_NO, KC_NO,
                                                 KC_NO, KC_NO
  ),
};

const rgblight_segment_t PROGMEM _DEFAULT_LED_LAYER[] = RGBLIGHT_LAYER_SEGMENTS(
    // make all the thumb keys white
    {22, 1, HSV_WHITE},
    {27, 4, HSV_WHITE}
);

const rgblight_segment_t PROGMEM _CAPS_LOCK_LED_LAYER[] = RGBLIGHT_LAYER_SEGMENTS(
    // change all the alpha keys so that i notice caps lock is on
    {2 , 1, HSV_WHITE},
    {5 , 3, HSV_WHITE},
    {9 , 3, HSV_WHITE},
    {14, 3, HSV_WHITE},
    {19, 3, HSV_WHITE},
    {24, 3, HSV_WHITE}, 

    {36, 1, HSV_WHITE},
    {40, 2, HSV_WHITE},
    {45, 2, HSV_WHITE},
    {50, 3, HSV_WHITE},
    {55, 3, HSV_WHITE}
);

const rgblight_segment_t PROGMEM _FN_LED_LAYER[] = RGBLIGHT_LAYER_SEGMENTS(
    // Light ESDF arrow keys when layer 1 is active
    // {4 , 1, HSV_WHITE},

    //left arrow
    {10, 1, HSV_WHITE},
    {14, 2, HSV_WHITE},
    {20, 1, HSV_WHITE},

    //right arrows
    {41, 1, HSV_WHITE},
    {45, 2, HSV_WHITE},
    {51, 1, HSV_WHITE}
);


const rgblight_segment_t PROGMEM _RGB_LED_LAYER[] = RGBLIGHT_LAYER_SEGMENTS(
    // Light first row LEDs when keyboard layer 2 is active
    // {0 , 1, HSV_WHITE},
    // {4 , 1, HSV_WHITE},
    // {8 , 1, HSV_WHITE},
    // {13, 1, HSV_WHITE},
    // {18, 1, HSV_WHITE},
    // {23, 1, HSV_WHITE},

    // Light XC and B to when layer 2 is active to remind me about RGB shortcut keys
    {11, 1, HSV_WHITE},
    {16, 1, HSV_WHITE},
    {26, 1, HSV_WHITE},

    {42, 1, HSV_WHITE},
    {47, 1, HSV_WHITE},
    {57, 1, HSV_WHITE}
);

// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM RGB_LAYERS[] = RGBLIGHT_LAYERS_LIST(
    _DEFAULT_LED_LAYER,
    _CAPS_LOCK_LED_LAYER,
    _FN_LED_LAYER,    // Overrides caps lock layer
    _RGB_LED_LAYER     // Overrides other layers
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = RGB_LAYERS;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    // Both layers will light up if both kb layers are active
    // rgblight_set_layer_state(0, layer_state_cmp(state, _QWERTY_LAYER));
    rgblight_set_layer_state(2, layer_state_cmp(state, _FN_LAYER));
    rgblight_set_layer_state(3, layer_state_cmp(state, _RGB_LAYER));
    return state;
}

bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(1, led_state.caps_lock);
    return true;
}