#include QMK_KEYBOARD_H

#define XXXXXXX KC_NO

enum layers { BASE, NAV, NUM, FUN, MOUSE };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [BASE] = LAYOUT_split_3x6_3_ex2(
//      |--------------------------------------------------------------|    |--------------------------------------------------------------|
           KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T, QK_BOOT,      QK_BOOT,    KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_LBRC,
//      |--------+--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------+--------|
      LCTL_T(KC_ESC), KC_A,    KC_S,    KC_D,    KC_F,    KC_G, KC_RALT,      KC_RALT,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
//      |--------+--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------+--------|
          KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                           KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,
//      |--------+--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------+--------|
                               KC_LGUI, LALT_T(KC_SPC), LT(NAV, KC_TAB),     LT(FUN, KC_ENT), LT(NUM, KC_BSPC), KC_DELETE
//                                          |--------------------------|    |--------------------------|
        ),

        [NAV] = LAYOUT_split_3x6_3_ex2(
//      |--------------------------------------------------------------|    |--------------------------------------------------------------|
          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//      |--------+--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------+--------|
          KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX,MO(MOUSE),XXXXXXX, XXXXXXX,      XXXXXXX, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, XXXXXXX, XXXXXXX,
//      |--------+--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------+--------|
          KC_LSFT, XXXXXXX, XXXXXXX, KC_LGUI, KC_LALT, XXXXXXX,                        KC_HOME, KC_PGDN, KC_PGUP,  KC_END, XXXXXXX, KC_RSFT,
//      |--------+--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------+--------|
                                              XXXXXXX, XXXXXXX, XXXXXXX,       KC_ENT, KC_BSPC, KC_DELETE
//                                          |--------------------------|    |--------------------------|
        ),

        [MOUSE] = LAYOUT_split_3x6_3_ex2(
//      |--------------------------------------------------------------|    |--------------------------------------------------------------|
          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//      |--------+--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------+--------|
          KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, MS_LEFT, MS_DOWN,   MS_UP, MS_RGHT, XXXXXXX, XXXXXXX,
//      |--------+--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------+--------|
          KC_LSFT, XXXXXXX, XXXXXXX, KC_LGUI, KC_LALT, XXXXXXX,                        XXXXXXX, MS_WHLD, MS_WHLU, XXXXXXX, XXXXXXX, KC_RSFT,
//      |--------+--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------+--------|
                                              XXXXXXX, XXXXXXX, XXXXXXX,      MS_BTN2, MS_BTN1, MS_BTN3
//                                          |--------------------------|    |--------------------------|
        ),

        [NUM] = LAYOUT_split_3x6_3_ex2(
//      |--------------------------------------------------------------|    |--------------------------------------------------------------|
         KC_TILDE, XXXXXXX, KC_PIPE, KC_EQL, KC_MINS, KC_PLUS,  XXXXXXX,      XXXXXXX, KC_BSLS, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR,  KC_GRV,
//      |--------+--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------+--------|
      LCTL_T(KC_ESC), KC_1,    KC_2,    KC_3,    KC_4,    KC_5, XXXXXXX,      XXXXXXX,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_UNDS,
//      |--------+--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------+--------|
          KC_LSFT, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                        KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_RSFT,
//      |--------+--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------+--------|
                                       KC_LGUI, LALT_T(KC_SPC),  KC_TAB,      XXXXXXX, XXXXXXX, XXXXXXX
//                                          |--------------------------|    |--------------------------|
        ),

        [FUN] = LAYOUT_split_3x6_3_ex2(
//      |--------------------------------------------------------------|    |--------------------------------------------------------------|
          RM_TOGG, KC_CAPS, KC_PSCR, KC_MUTE, KC_MPLY, KC_PSCR, XXXXXXX,      XXXXXXX, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, XXXXXXX,  KC_F12,
//      |--------+--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------+--------|
     LCTL_T(KC_ESC), KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5, XXXXXXX,      XXXXXXX,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
//      |--------+--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------+--------|
          KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_RSFT,
//      |--------+--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------+--------|
                                       KC_LGUI, LALT_T(KC_SPC),  KC_TAB,      XXXXXXX, XXXXXXX, XXXXXXX
//                                          |--------------------------|    |--------------------------|
        )
};
