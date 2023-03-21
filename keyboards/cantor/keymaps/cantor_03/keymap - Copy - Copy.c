// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H


#define _BASE 0
#define _NUM 1 //brojevi
#define _ARROW 2 //strelice
#define _CRO 3 //hr slova

#define NUM_SPC  LT(_NUM, KC_SPC)
#define ARROW_ESC  LT(_ARROW, KC_ESC)
#define CRO_BSP  LT(_CRO, KC_BSPC)

/*
// define combo names
enum combos {
    J_I,
    J_K,
    COMMA_COMBO,
    MINUS_COMBO,
    BACKSLASH_COMBO,
    QUESTION_COMBO,
    EXCL_COMBO,
//    COMBO_END
};


const uint16_t PROGMEM slash_combo[] = {KC_J, KC_I, COMBO_END};
const uint16_t PROGMEM dot_combo[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM comma_combo[] = {KC_M, KC_COMM, COMBO_END};
const uint16_t PROGMEM minus_combo[] = {KC_H, KC_J, COMBO_END};
const uint16_t PROGMEM backslash_combo[] = {KC_J, KC_COMM, COMBO_END};
const uint16_t PROGMEM question_combo[] = {KC_H, KC_U, COMBO_END};
const uint16_t PROGMEM excl_combo[] = {KC_H, KC_Y, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    [J_I] = COMBO(slash_combo, KC_SLSH),
    [J_K] = COMBO(dot_combo, KC_DOT),
    [COMMA_COMBO] = COMBO(comma_combo, KC_COMM),
    [MINUS_COMBO] = COMBO(minus_combo, KC_MINUS),
    [BACKSLASH_COMBO] = COMBO(backslash_combo, KC_BSLASH),
    [QUESTION_COMBO] = COMBO(question_combo, KC_QUES),
    [EXCL_COMBO] = COMBO(excl_combo, KC_EXLM),

};

*/



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ W │ E │ R │ T │       │ Z │ U │ I │ O │ P │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │Alt│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ Y │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Sft│
      *               └───┤   ├───┐   ┌───┤   ├───┘
      *                   └───┤Bsp│   │Ent├───┘
      *                       └───┘   └───┘
      */
    [_BASE] = LAYOUT_split_3x6_3(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    LSFT(KC_COMM), KC_RALT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_KP_SLASH, KC_RSFT,
                                            ARROW_ESC, NUM_SPC, CRO_BSP,          KC_ENT, KC_SPC, KC_RSFT
    ),

    [_NUM] = LAYOUT_split_3x6_3(
        KC_TAB,  KC_Q,    KC_F7,    KC_F8,    KC_F9,    KC_T,                               KC_KP_SLASH,    KC_7,    KC_8,    KC_9,    KC_P,    KC_BSPC,
        KC_LCTL, KC_A,    KC_F4,    KC_F5,    KC_F6,    KC_G,                               KC_DOT,    KC_4,    KC_5,    KC_6,    LSFT(KC_DOT), KC_LALT,
        KC_LSFT, KC_Y,    KC_F1,    KC_F2,    KC_F3,    KC_B,                               KC_0,    KC_1,    KC_2, KC_3,  KC_KP_SLASH, KC_RSFT,
                                            KC_TRNS, KC_TRNS, KC_TRNS,          KC_ENT, KC_SPC, KC_0
    ),

    [_ARROW] = LAYOUT_split_3x6_3(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               C(KC_X),    KC_U,    KC_UP,    KC_O,    KC_P,    KC_BSPC,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               LCTL(KC_V),    KC_LEFT,    KC_DOWN,    KC_RIGHT,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Y,    KC_X,    KC_C,    KC_V,    KC_B,                               LCTL(KC_C),    KC_M,    KC_COMM, KC_DOT,  KC_KP_SLASH, KC_RSFT,
                                            KC_TRNS, KC_TRNS, KC_TRNS,          KC_ENT, KC_SPC, KC_RSFT
    ),

    [_CRO] = LAYOUT_split_3x6_3(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_HASH,    KC_U,    KC_UP,    KC_O,    KC_P,    KC_BSPC,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_SCLN, KC_QUOT,    KC_RIGHT_BRACKET,    KC_LEFT_BRACKET,    KC_NONUS_HASH, KC_QUOT,
        KC_LSFT, KC_Y,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_KP_SLASH, KC_RSFT,
                                            KC_TRNS, KC_TRNS, KC_TRNS,          KC_ENT, KC_SPC, KC_RSFT
    )
};

