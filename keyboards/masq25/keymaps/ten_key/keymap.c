#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┐
     * │F1 │F2 │F4 │F5 │F6 │
     * ├───┼───┼───┼───┼───┤
     * │ 7 │ 8 │ 9 │ / │F11│
     * ├───┼───┼───┼───┤───┤
     * │ 4 │ 5 │ 6 │ * │F12│
     * ├───┼───┼───┼───┤───┤
     * │ 1 │ 2 │ 3 │ - │Del│
     * ├───┼───┼───┼───┤───┤
     * │ 0 │ . │Ent│ + │Bs │
     * └───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_5x5(
        KC_F1,   KC_F2,   KC_F4,   KC_F5,   KC_F6,
        KC_P7,   KC_P8,   KC_P9,   KC_PSLS, KC_F11,
        KC_P4,   KC_P5,   KC_P6,   KC_PAST, KC_F12,
        KC_P1,   KC_P2,   KC_P3,   KC_PMNS, KC_DEL,
        KC_P0,   KC_PDOT, KC_PENT, KC_PPLS, KC_BSPC
    )
};
