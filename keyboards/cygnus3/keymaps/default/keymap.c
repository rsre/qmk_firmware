/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

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

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
		KC_7, KC_8, KC_9, KC_0, KC_BSLS, KC_BSPC,
     	KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS,
     	KC_H, KC_J, KC_K, KC_L, KC_SEMICOLON, KC_QUOTE,
     	KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_GRV,
		KC_CAPS, KC_LSFT, KC_ENT, _______, _______, _______
    ), // test with KC_CAPS, KC_A, QK_BOOT
};