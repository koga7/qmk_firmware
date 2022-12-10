/* Copyright 2015-2021 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "keymap_japanese.h"


enum planck_layers {
  _QWERTY,
  _LOWER,
  _RAISE,
  _ADJUST
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY] = LAYOUT_planck_grid(
    KC_Q,    KC_W,    KC_E,     KC_R,    KC_T,           KC_TAB,             KC_EQL,  KC_Y,               KC_U,    KC_I,    KC_O,    KC_P,
    KC_A,    KC_S,    KC_D,     KC_F,    KC_G,           LCTL_T(KC_ESC),     KC_MINS, KC_H,               KC_J,    KC_K,    KC_L,    KC_SCLN,
    KC_Z,    KC_X,    KC_C,     KC_V,    KC_B,           KC_QUOT,            KC_LBRC, KC_N,               KC_M,    KC_UP,   KC_COMM, KC_DOT,
    KC_LCTL, KC_LGUI, KC_LALT,  KC_F13,  LSFT_T(KC_SPC), LT(_LOWER, KC_ENT), KC_BSPC, LT(_RAISE, KC_F14), KC_LEFT, KC_DOWN, KC_RGHT, KC_SLSH
),
[_LOWER] = LAYOUT_planck_grid(
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    _______, _______, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
    KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, _______, _______, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, KC_DEL,  _______, _______, _______, _______, _______
),
[_RAISE] = LAYOUT_planck_grid(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),
/* Adjust (Lower + Raise)
 *                      v------------------------RGB CONTROL--------------------v
 * ,-----------------------------------------------------------------------------------.
 * |      | Reset|Debug | RGB  |RGBMOD| HUE+ | HUE- | SAT+ | SAT- |BRGTH+|BRGTH-|NMLCK |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] = LAYOUT_planck_grid(
    _______, QK_BOOT, DEBUG,   RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD,  RGB_VAI, RGB_VAD, KC_NUM,
    _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______
)

};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

enum combos{
  DQUOS,
  RBRCS,
  COLNS,
  BSLSS,
  TILDS
};

const uint16_t PROGMEM dquo_combo[] = {KC_B, KC_QUOT, COMBO_END};
const uint16_t PROGMEM rbrc_combo[] = {KC_LBRC, KC_N, COMBO_END};
const uint16_t PROGMEM coln_combo[] = {KC_L, KC_SCLN, COMBO_END};
const uint16_t PROGMEM bsls_combo[] = {KC_RGHT, KC_SLSH, COMBO_END};
const uint16_t PROGMEM grv_combo[] = {KC_COMM, KC_DOT, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [DQUOS] = COMBO(dquo_combo, KC_DQUO),
  [RBRCS] = COMBO(rbrc_combo, KC_RBRC),
  [COLNS] = COMBO(coln_combo, KC_COLN),
  [BSLSS] = COMBO(bsls_combo, KC_BSLS),
  [TILDS] = COMBO(grv_combo, KC_GRV),
  };
