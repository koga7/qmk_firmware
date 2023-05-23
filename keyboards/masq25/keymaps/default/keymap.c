#include QMK_KEYBOARD_H

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
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,
        KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,
        KC_LCTL, KC_LGUI, KC_LALT, KC_ENT,  KC_SPC
    )
};
