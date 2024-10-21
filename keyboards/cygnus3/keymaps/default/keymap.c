#include QMK_KEYBOARD_H

// Helpful defines
#define GRAVE_MODS  (MOD_BIT(KC_LSFT)|MOD_BIT(KC_RSFT)|MOD_BIT(KC_LGUI)|MOD_BIT(KC_RGUI)|MOD_BIT(KC_LALT)|MOD_BIT(KC_RALT))

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *  You can use _______ in place for KC_TRNS (transparent)   *
 *  Or you can use XXXXXXX for KC_NO (NOOP)                  *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

// Each layer gets a name for readability.
// The underscores don't mean anything - you can
// have a layer called STUFF or any other name.
// Layer names don't all need to be of the same
// length, and you can also skip them entirely
// and just use numbers.
enum layer_names {
    LAYER_0,
    LAYER_1,
    LAYER_2,
    LAYER_3
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[LAYER_0] = LAYOUT(
		KC_1,     KC_2,       KC_3,     KC_4,    KC_5,        KC_6,    /*|*/ KC_7,         KC_8,         KC_9,     KC_O,      KC_P,         KC_BSLS,
		KC_ESC,   KC_Q,       KC_W,     KC_E,    KC_R,        KC_T,    /*|*/ KC_Y,         KC_U,         KC_I,     KC_O,      KC_P,         KC_BSLS,
		KC_TAB,   KC_A,       KC_S,     KC_D,    KC_F,        KC_G,    /*|*/ KC_H,         KC_J,         KC_K,     KC_L,      KC_SEMICOLON, KC_QUOTE,
		KC_PAUSE, KC_Z,       KC_X,     KC_C,    KC_V,        KC_B,    /*|*/ KC_N,         KC_M,         KC_COMMA, KC_DOT,    KC_SLASH,     KC_GRV,
		                                KC_LCTL, KC_LSFT,     KC_LALT, /*|*/ MO(LAYER_2),  KC_SPC,       KC_BSPC
	),
	[LAYER_1] = LAYOUT(
		_______, XXXXXXX, XXXXXXX, XXXXXXX       , XXXXXXX,  XXXXXXX, /*|*/ KC_EQL,  KC_7,        KC_8,   KC_9,   KC_0,    XXXXXXX,
		_______, XXXXXXX, XXXXXXX, XXXXXXX       , XXXXXXX,  XXXXXXX, /*|*/ KC_EQL,  KC_7,        KC_8,   KC_9,   KC_0,    XXXXXXX,
		_______, KC_LEFT, KC_DOWN, KC_UP         ,KC_RIGHT,  XXXXXXX, /*|*/ KC_MINS, KC_4,        KC_5,   KC_6,   KC_LBRC, XXXXXXX,
		_______, XXXXXXX, XXXXXXX, RALT(KC_COMMA), XXXXXXX,  XXXXXXX, /*|*/ XXXXXXX, KC_1,        KC_2,   KC_3,   KC_RBRC, XXXXXXX,
		                                   XXXXXXX,_______,  _______, /*|*/ MO(LAYER_3), KC_ENT, KC_DEL 
	),
	[LAYER_2] = LAYOUT(
		_______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, /*|*/ XXXXXXX, KC_F7,   KC_F8,   KC_F9,   KC_F10, XXXXXXX,
		_______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, /*|*/ XXXXXXX, KC_F7,   KC_F8,   KC_F9,   KC_F10, XXXXXXX,
		_______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,      XXXXXXX, /*|*/ XXXXXXX, KC_F4,   KC_F5,   KC_F6,   KC_F11, XXXXXXX,
		_______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, /*|*/ XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F12, XXXXXXX,
		                           KC_MUTE, _______, MO(LAYER_3), /*|*/ _______, _______, KC_MPLY
	),
	[LAYER_3] = LAYOUT(
		_______, XXXXXXX, XXXXXXX, KC_MPLY, XXXXXXX, QK_BOOT, /*|*/ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		_______, XXXXXXX, XXXXXXX, KC_MPLY, XXXXXXX, QK_BOOT, /*|*/ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		_______, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, XXXXXXX, /*|*/ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		_______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, /*|*/ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
	                             XXXXXXX, _______, XXXXXXX, /*|*/ XXXXXXX, _______, XXXXXXX
	)
};
