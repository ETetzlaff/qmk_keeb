#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Layer 0
* ,-----------------------------------------------------------------------------------------.
* | Esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |  \  |  ~  |
* |-----------------------------------------------------------------------------------------+
* | Tab   |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  | Bkspc   |
* |-----------------------------------------------------------------------------------------+
* | Ctrl    |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
* |-----------------------------------------------------------------------------------------+
* | Shift     |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |   /   |  M(2)   | Fn  |
* |-----------------------------------------------------------------------------------------+
* | Caps  |  GUI |  Alt |                    Space               |   M(1)   |  GUI  |  Ctrl |
* `-----------------------------------------------------------------------------------------'
*/

	[0] = LAYOUT(
		// esc    1         2          3       4        5        6        7       8        9        0        -       =        KC_NO    bkspc
		KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_NO, KC_BSPC,
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
		KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
		KC_LSFT, KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, MO(2), KC_NO,
		KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_SPC, KC_SPC, MO(1), KC_RALT, KC_NO, MO(2), KC_RCTL
	),

/* Layer 1
* ,-----------------------------------------------------------------------------------------.
* | Esc |  F1  |  F2  |  F3  |  F4 |  F5 |  F6 | F7 | F8 | F9 | F10 | F11 | F12 |  \  |  ~  |
* |-----------------------------------------------------------------------------------------+
* | Tab   |  Q  |  UP |  E  |  R  |  T  |  Y  |  U  |  UP |  O  |  P  |  [  |  ]  | Bkspc   |
* |-----------------------------------------------------------------------------------------+
* | Ctrl    | LEFT| DOWN|RIGHT|  F  |  G  |  H  |LEFT | DOWN|RIGHT|  ;  |  '  |    Enter    |
* |-----------------------------------------------------------------------------------------+
* | Shift     |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |   /   |  M(2)   | Fn  |
* |-----------------------------------------------------------------------------------------+
* | Caps  |  GUI |  Alt |                    Space               |   M(1)   |  GUI  |  Ctrl |
* `-----------------------------------------------------------------------------------------'
*/

	[1] = LAYOUT(
		// esc    1         2          3       4        5        6        7       8        9        0        -       =        KC_NO    bkspc
		KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, _______,
		_______, _______, KC_UP, _______, _______, _______, _______, _______, KC_UP, _______, _______, _______, _______, _______,
		_______, KC_LEFT, KC_DOWN, KC_RIGHT, KC_VOLU, KC_VOLU, _______, KC_LEFT, KC_DOWN, KC_RIGHT, _______, _______, _______,
		_______, _______, _______, KC_VOLD, KC_VOLD, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
	),

	[2] = LAYOUT(
		// esc    1         2          3       4        5        6        7       8        9        0        -       =        KC_NO    bkspc
		KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, _______,
		_______, _______, KC_MPLY, _______, _______, _______, _______, _______, KC_UP, _______, _______, _______, _______, _______,
		_______, KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLU, _______, _______, KC_LEFT, KC_DOWN, KC_RIGHT, _______, _______, _______,
		_______, _______, _______, KC_VOLD, KC_VOLD, _______, _______, RGB_TOG, RGB_MODE_FORWARD, RGB_MODE_REVERSE, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
	),

	[9] = LAYOUT(
		KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_DEL,
		KC_TRNS, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, BL_DEC, BL_TOGG, BL_INC, BL_STEP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
	),
};
