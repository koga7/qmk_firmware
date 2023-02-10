/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>
Copyright 2023 @koga7

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
#include <stdio.h>

#define OSM_CTL OSM(MOD_LCTL)
#define OSM_ALT OSM(MOD_LALT)
#define OSM_GUI OSM(MOD_LGUI)
#define LT3_ENT LT(3, KC_ENT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
        OSM_GUI,  KC_Q,    KC_L,    KC_U,    KC_MINS, KC_DOT,     KC_F,    KC_W,    KC_R,    KC_J,    KC_P,    KC_DEL,
        KC_TAB,   KC_E,    KC_I,    KC_A,    KC_O,    KC_COMM,    KC_K,    KC_T,    KC_N,    KC_S,    KC_H,    OSL(4),
        OSM_CTL,  KC_SLSH, KC_Z,    KC_X,    KC_C,    KC_V,       KC_G,    KC_D,    KC_M,    KC_J,    KC_B,    KC_ESC,
                                    OSM_ALT, OSL(1),  KC_SPC,     LT3_ENT, KC_BSPC, OSL(2)
    ),
    [1] = LAYOUT_split_3x6_3(
        _______,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,    KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
        _______,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
        _______,  KC_BSLS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
                                    _______, KC_LNG1, _______,    _______, _______, _______
    ),
    [2] = LAYOUT_split_3x6_3(
        _______,  QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,
        _______,  RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX,    XXXXXXX, KC_F5,   KC_F6,   KC_F7,   KC_F8,   _______,
        _______,  RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX,    XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,   _______,
                                    _______, _______, _______,    _______, _______, KC_LNG2
    ),
    [3] = LAYOUT_split_3x6_3(
        _______,  XXXXXXX, XXXXXXX, KC_PGUP, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, KC_UP,   XXXXXXX, XXXXXXX, _______,
        _______,  XXXXXXX, KC_HOME, KC_PGDN, KC_END,  XXXXXXX,    XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, _______,
        _______,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
                                    _______, _______, _______,    _______, _______, _______
    ),
    [4] = LAYOUT_split_3x6_3(
        _______,  XXXXXXX, XXXXXXX, XXXXXXX, KC_LPRN, KC_RPRN,    XXXXXXX, C(G(KC_D)),    C(G(KC_F4)),   C(S(KC_DEL)), XXXXXXX, _______,
        _______,  XXXXXXX, XXXXXXX, XXXXXXX, KC_LBRC, KC_RBRC,    XXXXXXX, C(G(KC_LEFT)), C(G(KC_RGHT)), C(S(KC_ESC)), XXXXXXX, _______,
        _______,  XXXXXXX, XXXXXXX, XXXXXXX, KC_LCBR, KC_RCBR,    XXXXXXX, XXXXXXX,       XXXXXXX,       XXXXXXX,      XXXXXXX, _______,
                                    _______, _______, _______,    _______, _______,       _______
    )
};
