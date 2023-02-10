#include QMK_KEYBOARD_H
#include "g/keymap_combo.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬
     * │ 1 │ 2 │ 3 │ 4 │ 5 │
     * ├───┼───┼───┼───┼───┼
     * │ 6 │ 7 │ 8 │ 9 │10 │
     * ├───┼───┼───┼───┼───┼
     * │11 │12 │13 │14 │15 │
     * ├───┼───┼───┼───┼───┼
     * │16 │17 │18 │19 │20 │
     * ├───┼───┼───┼───┼───┼
     * │21 │22 │23 │24 │25 │
     * └───┴───┴───┴───┴───┴
     */
    [0] = LAYOUT_ortho_5x5(
        KC_1,          KC_2,          KC_3,          KC_4,    KC_5,
        KC_TAB,        KC_Q,          KC_W,          KC_E,    KC_R,
        KC_ESC,        KC_A,          KC_S,          KC_D,    KC_F,
        OSM(MOD_LSFT), KC_Z,          KC_X,          KC_C,    KC_V,
        OSM(MOD_LCTL), OSM(MOD_LGUI), OSM(MOD_LALT), KC_ENT,  OSL(1)
    ),
    [1] = LAYOUT_ortho_5x5(
        KC_EXLM,       KC_AT,         KC_HASH,       KC_DLR,  KC_PERC,
        KC_TAB,        KC_T,          KC_Y,          KC_U,    KC_I,
        KC_ESC,        KC_G,          KC_H,          KC_J,    KC_K,
        OSM(MOD_LSFT), KC_B,          KC_N,          KC_M,    KC_COMM,
        OSM(MOD_LCTL), OSM(MOD_LGUI), OSM(MOD_LALT), KC_ENT,  KC_SLSH
    )
};
