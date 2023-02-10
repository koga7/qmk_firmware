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
#include "g/keymap_combo.h"

enum layers {
    _DEFAULT,
    _LAYER1,
    _LAYER2,
    _LAYER3,
    _LAYER4
};

#define OSM_CTL OSM(MOD_LCTL)
#define OSM_GUI OSM(MOD_LGUI)
#define ESC_ALT ALT_T(KC_ESC)
#define SPC_SFT SFT_T(KC_SPC)
#define L1_TAB LT(_LAYER1, KC_TAB)
#define L2_HENK LT(_LAYER2, KC_F14)
#define LT3_ENT LT(_LAYER3, KC_ENT)
#define L4_MHEN LT(_LAYER4, KC_F13)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_DEFAULT] = LAYOUT_split_3x6_3(
        OSM_GUI,  KC_Q,    KC_L,    KC_U,    KC_MINS, KC_DOT,     KC_F,    KC_W,    KC_R,    KC_J,    KC_P,    KC_DEL,
        ESC_ALT,  KC_E,    KC_I,    KC_A,    KC_O,    KC_COMM,    KC_K,    KC_T,    KC_N,    KC_S,    KC_H,    KC_LBRC,
        OSM_CTL,  KC_SLSH, KC_Z,    KC_X,    KC_C,    KC_V,       KC_G,    KC_D,    KC_M,    KC_J,    KC_B,    OSL(_LAYER4),
                                    L4_MHEN, L1_TAB,  SPC_SFT,    LT3_ENT, KC_BSPC, L2_HENK
    ),
    [_LAYER1] = LAYOUT_split_3x6_3(
        _______,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,    KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
        _______,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
        _______,  KC_BSLS, XXXXXXX, KC_QUES, KC_EXLM, XXXXXXX,    XXXXXXX, KC_LPRN, KC_RPRN, XXXXXXX, XXXXXXX, _______,
                                    _______, _______, _______,    _______, _______, _______
    ),
    [_LAYER2] = LAYOUT_split_3x6_3(
        _______,  QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, KC_F9,   KC_F10,  KC_F11,  KC_F12,
        _______,  RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX,    XXXXXXX, XXXXXXX, KC_F5,   KC_F6,   KC_F7,   KC_F8,
        _______,  RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX,    XXXXXXX, XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,
                                    _______, _______, _______,    _______, _______, _______
    ),
    [_LAYER3] = LAYOUT_split_3x6_3(
        _______,  XXXXXXX, XXXXXXX, KC_PGUP, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, KC_UP,   XXXXXXX, XXXXXXX, _______,
        _______,  XXXXXXX, KC_HOME, KC_PGDN, KC_END,  XXXXXXX,    XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, _______,
        _______,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
                                    _______, _______, _______,    _______, _______, _______
    ),
    [_LAYER4] = LAYOUT_split_3x6_3(
        _______,  KC_P7,   KC_P8,   KC_P9,   XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, C(G(KC_D)),    C(G(KC_F4)),   C(S(KC_DEL)), _______,
        _______,  KC_P4,   KC_P5,   KC_P6,   XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, C(G(KC_LEFT)), C(G(KC_RGHT)), C(S(KC_ESC)), _______,
        KC_P0,    KC_P1,   KC_P2,   KC_P3,   XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX,       XXXXXXX,      _______,
                                    _______, _______, _______,    _______, _______, _______
    )
};
