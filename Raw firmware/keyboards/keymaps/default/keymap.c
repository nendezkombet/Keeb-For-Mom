/* Copyright 2015-2017 Jack Humbert
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


enum layers {
    _FIRST = 0,
    _SECOND,
    _THIRD,
    _FOURTH
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* 
 * ,---------------------------------------------------------------------.
 * |   Q  |  W (ESC) E  |   R  |   T  |   Y  |   U  |  I (DEL) O  |  P   |
 * |------+------+------+------+------+------+------+------+------+------|
 * |   A  |  S (TAB) D  |   F  |   G  |   H  |  J   |  K (ENT) L  |  ;:  |
 * |------+------+------+------+------+------+------+------+------+------|
 * |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |  ,<  |  .>  |  /?  |
 * |------+------+------+------+------+------+------+------+------+------|
 * | SHIFT| CTRL |  ALT | MO(3)|SPACE |MO(1) |MO(2) | CAPS | ENTR |BSPACE|
 * `---------------------------------------------------------------------'
 */
[_FIRST] = LAYOUT_ortho_4x10(
  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
  KC_LSFT, KC_LCTL, KC_LALT, MO(3),   KC_SPC,  MO(1),   MO(2),   KC_CAPS, KC_ENT,  KC_BSPC
),

/* 
 * ,---------------------------------------------------------------------.
 * |   !  |   @  |   {  |   }  |   '  |   "  |   +  |   1  |   2  |   3  |
 * |------+------+------+------+------+-------------+------+------+------|
 * |   #  |   $  |   (  |   )  |   ^  |   =  |   0  |   4  |   5  |   6  |
 * |------+------+------+------+------+------+------+------+------+------|
 * |   %  |   &  |   [  |   ]  |   *  |   _  |   -  |   7  |   8  |   9  |
 * |------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |   \  |   |  |
 * `---------------------------------------------------------------------'
 */

[_SECOND] = LAYOUT_ortho_4x10(
  KC_EXLM,    KC_AT,     KC_LCBR,    KC_RCBR,   KC_QUOT,   KC_DQT,     KC_PLUS,     KC_1,       KC_2,       KC_3,
  KC_HASH,    KC_DLR,    KC_LPRN,    KC_RPRN,   KC_CIRC,   KC_EQL,     KC_0,       KC_4,       KC_5,       KC_6,
  KC_PERC,    KC_AMPR,   KC_LBRC,    KC_RBRC,   KC_ASTR,   KC_UNDS,    KC_MINS,    KC_7,       KC_8,       KC_9,
  _______,    _______,   _______,   _______,   _______,    _______,    _______,    _______,    KC_BSLS,    KC_PIPE
),              

/* 
 * ,---------------------------------------------------------------------.
 * |  INS | HOME | PGUP |      |      |      |      |      |  UP  |      |
 * |------+------+------+------+------+-------------+------+------+------|
 * |  DEL | END  | PGDN |      |      |      |      | LEFT | DOWN | RGHT |
 * |------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |
 * `---------------------------------------------------------------------'
 */

[_THIRD] = LAYOUT_ortho_4x10(
  KC_INS,  KC_HOME, KC_PGUP, KC_NO,    KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_UP,  KC_NO,
  KC_INS,  KC_END,  KC_PGDN, KC_NO,    KC_NO,   KC_NO,   KC_NO,    KC_LEFT, KC_DOWN,KC_RGHT,
  KC_NO  , KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,
  _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______
),

/* Adjust
 * ,---------------------------------------------------------------------.
 * | VOLUP|RGB M+|  HUD |  HUI |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |
 * |------+------+------+------+------+-------------+------+------+------|
 * | VOLDN|RGB M-|  SAD |  SAI |  F7  |  F8  |  F9  |  F10 | F11  | F12  |
 * |------+------+------+------+------+------+------+------+------+------|
 * | PLAY |RGB TG|  VAD |  VAI |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |
 * `---------------------------------------------------------------------'
 */
[_FOURTH] = LAYOUT_ortho_4x10(
  KC_VOLU, RGB_MOD, RGB_HUD, RGB_HUI,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,
  KC_VOLD, RGB_RMOD,RGB_SAD, RGB_SAI,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
  KC_MPLY, RGB_TOG, RGB_VAD, RGB_VAI,   KC_NO  , KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
)
};

#ifdef AUDIO_ENABLE
  float my_song1[][2]     = SONG(AUDIO_OFF_SOUND);
  float my_song2[][2]     = SONG(AUDIO_ON_SOUND);
  float my_song3[][2]     = SONG(CHROMATIC_SOUND);
#endif

layer_state_t layer_state_set_user(layer_state_t state) {
	switch (get_highest_layer(state)) {
        case 1:
            #ifdef AUDIO_ENABLE
          PLAY_SONG(my_song1);

        #endif
	break;
        case 2:
            #ifdef AUDIO_ENABLE
          PLAY_SONG(my_song2);

        #endif
	break;
        case 3:
            #ifdef AUDIO_ENABLE
          PLAY_SONG(my_song3);

        #endif
	break;
    }
    return state;
}

// Combo key
const uint16_t PROGMEM test_combo1[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM test_combo2[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM test_combo3[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM test_combo4[] = {KC_S, KC_D, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
    COMBO(test_combo1, KC_ESC),
    COMBO(test_combo2, KC_DEL),
    COMBO(test_combo3, KC_ENT),
    COMBO(test_combo4, KC_TAB),
};
