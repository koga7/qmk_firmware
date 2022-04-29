// Copyright 2022 koga7 (@koga7)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_number {
    _QWERTY = 0,
    _LOWER,
    _RAISE,
    _ADJUST
};

#define LOWER LT(_LOWER, KC_ENT)
#define RAISE LT(_RAISE, KC_TAB)
#define SHIFT SFT_T(KC_SPC)
#define CTRL CTL_T(KC_DEL)
#define WIN WIN_T(KC_Z)
#define ALT ALT_T(KC_SLSH)
#define ZKHK C(KC_SPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* QWERTY
     * ,-----------------------------------------.      ,-----------------------------------------.
     * | Tab  |   Q  |   P  |   E  |   R  |   T  |      |   Y  |   U  |   I  |   O  |   P  |   [  |
     * |------+------+------+------+------+------|      |------+------+------+------+------+------|
     * | Esc  |   A  |   S  |   D  |   F  |   G  |      |   H  |   J  |   K  |   L  |   ;  |   "  |
     * |------+------+------+------+------+------|      |------+------+------+------+------+------|
     * | Shift|   Z  |   X  |   C  |   V  |   B  |      |   N  |   M  |   ,  |   .  |   /  |   \  |
     * |------+------+------+------+------+------|      |------+------+------+------+------+------|
     * | Ctrl | GUI  | Alt  | EISU |  Del | Space|      | Enter| Bksp | EISU |  ESC |Adjust| Left |
     * `-----------------------------------------'      `-----------------------------------------'
     */
  [_QWERTY] = LAYOUT(
              KC_Q, KC_Y, KC_U, KC_I,    KC_COMM,  KC_DOT, KC_D,   KC_H, KC_G, KC_W,
        ZKHK, KC_P, KC_O, KC_E, KC_A,    KC_K,     KC_M,   KC_N,   KC_T, KC_S, KC_R, KC_MINS,
        CTRL, WIN,  KC_X, KC_C, KC_SCLN, KC_V,     KC_J,   KC_L,   KC_F, KC_B, ALT,  KC_QUOT,
                                SHIFT,   LOWER,    RAISE,  KC_BSPC
      ),
  [_LOWER] =  LAYOUT(
              KC_1,    KC_2,  KC_3,    KC_4,   KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
      KC_ESC, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_CAPS,
      KC_F1,  KC_F2,   KC_F3, KC_F4,   KC_F5,  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
      _______, _______, _______, _______
      ),
    /* Adjust
     * ,-----------------------------------------.      ,-----------------------------------------.
     * |      |RGBRST| RESET|      |      |      |      |      |      |      |      |      |      |
     * |------+------+------+------+------+------|      |------+------+------+------+------+------|
     * |      |  TOG |  HUI |  SAI |  VAI |      |      |      |      |      |      |      |      |
     * |------+------+------+------+------+------|      |------+------+------+------+------+------|
     * |      |  MOD |  HUD |  SAD |  VAD |      |      |      |      |      |      |      |      |
     * |------+------+------+------+------+------|      |------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      |      |      |      |      |      |
     * `-----------------------------------------'      `-----------------------------------------'
     */
  [_RAISE] =  LAYOUT(
                 _______, _______, KC_PLUS, KC_PIPE, KC_LABK, KC_RABK, KC_GRV,  KC_LCBR, KC_RCBR, _______,
        _______, _______, _______, KC_EQL,  KC_BSLS, _______, KC_TILD, KC_UP,   KC_LBRC, KC_RBRC, _______, KC_UNDS,
        _______, _______, _______, _______, KC_COLN, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, KC_QUES, KC_DQT,
        _______, _______, _______, _______
      ),
  [_ADJUST] =  LAYOUT(
                 _______, _______, _______, _______, RESET,         S(C(KC_DEL)),  _______, _______, _______, _______,
        _______, _______, _______, _______, _______, G(C(KC_D)),    G(C(KC_F4)),   _______, _______, _______, _______, _______,
        _______, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, G(C(KC_LEFT)), G(C(KC_RGHT)), _______, _______, _______, _______, _______,
        _______, _______, _______, _______
      )
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}
