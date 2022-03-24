// Copyright 2022 koga7 (@koga7)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
        KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_P7,   KC_P8,   KC_P9,   KC_PSLS,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_P4,   KC_P5,   KC_P6,   KC_PAST,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_P1,   KC_P2,   KC_P3,   KC_PMNS,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_P0,   KC_UP,   KC_PDOT, KC_PPLS,
        KC_LCTL, KC_LGUI, KC_LALT, KC_GRV,  KC_SPC,  KC_ENT,  KC_LEFT, KC_DOWN, KC_RGHT, KC_PENT
    ),
    [_FN] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    )
};
