#include QMK_KEYBOARD_H

enum layers {
    _DEFAULT,
    _LAYER1,
    _LAYER2,
    _LAYER3,
    _CONTROL
};

#define ST_SPC LSFT_T(KC_SPC)
#define L1_ESC LT(_LAYER1, KC_ESC)
#define L2_HENK LT(_LAYER2, KC_LNG2)
#define LC_MHEN LT(_CONTROL, KC_LNG1)
#define L3_MINS LT(_LAYER3, KC_MINS)
#define L3_O LT(_LAYER3, KC_O)
#define L3_C LT(_LAYER3, KC_C)
#define L3_W LT(_LAYER3, KC_W)
#define L3_T LT(_LAYER3, KC_T)
#define L3_D LT(_LAYER3, KC_D)
#define NEW_DESK C(G(KC_D))
#define LEFT_DESK C(G(KC_LEFT))
#define RIGHT_DESK C(G(KC_RGHT))
#define DEL_DESK C(G(KC_F4))
#define DEL_MEM C(S(KC_DEL))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │
     * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [_DEFAULT] = LAYOUT_ortho_5x10(
        KC_Q,    KC_L,    KC_U,    L3_MINS, KC_DOT,  KC_F,    L3_W,    KC_R,    KC_Y,    KC_P,
        KC_E,    KC_I,    KC_A,    L3_O,    KC_COMM, KC_K,    L3_T,    KC_N,    KC_S,    KC_H,
        KC_TAB,  KC_Z,    KC_X,    L3_C,    KC_V,    KC_G,    L3_D,    KC_M,    KC_J,    KC_B,
        LC_MHEN, XXXXXXX, XXXXXXX, XXXXXXX, KC_SLSH, KC_EQL,  KC_DEL,  XXXXXXX, KC_UP,   L2_HENK,
        KC_LCTL, KC_LGUI, KC_LALT, KC_ENT,  ST_SPC,  L1_ESC,  KC_BSPC, KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [_LAYER1] = LAYOUT_ortho_5x10(
        KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, KC_QUES, KC_PLUS, XXXXXXX, XXXXXXX, KC_PGUP, _______,
        _______, _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_END
    ),
    [_LAYER2] = LAYOUT_ortho_5x10(
        XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F1,   KC_F2,   KC_F3,     KC_F4,    XXXXXXX,
        XXXXXXX, KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F5,   KC_F6,   KC_F7,     KC_F8,    XXXXXXX,
        XXXXXXX, KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_F9,   KC_F10,  KC_F11,    KC_F12,   DEL_MEM,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   NEW_DESK, _______,
        _______, _______, _______, _______, _______, _______, _______, LEFT_DESK, DEL_DESK, RIGHT_DESK
    ),
    [_LAYER3] = LAYOUT_ortho_5x10(
        XXXXXXX, XXXXXXX, KC_DQUO, _______, KC_QUOT, KC_LCBR, _______, KC_RCBR, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, KC_SCLN, _______, KC_COLN, KC_LBRC, _______, KC_RBRC, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, KC_GRV,  _______, KC_TILD, KC_LPRN, _______, KC_RPRN, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    ),
    [_CONTROL] = LAYOUT_ortho_5x10(
        C(KC_Q), C(KC_W), C(KC_E), C(KC_R), C(KC_T), C(KC_Y), C(KC_U), C(KC_I),    C(KC_O),   C(KC_P),
        C(KC_A), C(KC_S), C(KC_D), C(KC_F), C(KC_G), C(KC_H), C(KC_J), C(KC_K),    C(KC_L),   C(KC_SCLN),
        C(KC_Z), C(KC_X), C(KC_C), C(KC_V), C(KC_B), C(KC_N), C(KC_M), C(KC_COMM), C(KC_DOT), C(KC_SLSH),
        _______, C(KC_1), C(KC_2), C(KC_3), C(KC_4), C(KC_5), C(KC_6), C(KC_7),    C(KC_8),   C(KC_9),
        _______, _______, _______, _______, _______, _______, _______, _______,    _______,   _______
    )
};
