#include QMK_KEYBOARD_H

#define BASE 0 // default layer
#define MDIA_NUMP 1 // media and numpad layer

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * .-----------------------------------------.                    .-----------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | layer|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |  '   |   ,  |   .  |   P  |   Y  |                    |   F  |   G  |   C  |   R  |   L  |  \   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | CapL |   A  |   O  |   E  |   U  |   I  |                    |   D  |   H  |   T  |   N  |   S  |  /   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|   ;  |   Q  |   J  |   K  |   X  |                    |   B  |   M  |   W  |   V  |   Z  |RShift|
 * '------+------+------+------+------+------'                    '------+------+------+------+------+------'
 *        |   =  |   -  | Left | Right|                                  |  Up  | Down |   [  |   ]  |
 *        '---------------------------'                                  '---------------------------'
 *                                      ,-------------.  ,-------------.
 *                                      | LCtr | LAlt |  | RAlt | RCtr |
 *                               ,------|------|------|  |------+------+------.
 *                               |      |      | LGui |  | PgUp |      |      |
 *                               | Back | Del  |------|  |------| Enter|Space |
 *                               | space|      | Esc  |  | PgDn |      |      |
 *                               '--------------------'  '--------------------'
 *
 */
[BASE] = LAYOUT(  // layer 0 : default
        // left hand
          KC_GRV,           KC_1,           KC_2,     KC_3,     KC_4,    KC_5,
          KC_TAB,        KC_QUOT,        KC_COMM,   KC_DOT,     KC_P,    KC_Y,
          KC_CAPS,          KC_A,           KC_O,     KC_E,     KC_U,    KC_I,
          KC_LSFT,       KC_SCLN,           KC_Q,     KC_J,     KC_K,    KC_X,
                          KC_EQL,	 KC_MINS,  KC_LEFT,  KC_RGHT,
                                                                      KC_LCTL,  KC_LALT,
                                                                                KC_LGUI,
                                                             KC_BSPC,  KC_DEL,   KC_ESC,
        // right hand
                             KC_6,   KC_7,     KC_8,     KC_9,        KC_0,      TG(1),
                             KC_F,   KC_G,     KC_C,     KC_R,        KC_L,      KC_BSLS,
                             KC_D,   KC_H,     KC_T,     KC_N,        KC_S,      KC_SLSH,
                             KC_B,   KC_M,     KC_W,     KC_V,        KC_Z,      KC_RSFT,
                                    KC_UP,  KC_DOWN,  KC_LBRC,     KC_RBRC,
          KC_RALT,  KC_RCTL,
          KC_PGUP,
          KC_PGDN, KC_ENT, KC_SPC
    ),
/* Keymap 1: Media and Numpad
 *
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | BOOT |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  |  F10 | layer|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  F11 |BritUp|      |      |      | VolUp|                    |      |   7  |   8  |   9  |      |  F12 |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |BritDn|PrevTk| Play |NextTk| VolDn|                    |      |   4  |   5  |   6  |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      | Stop |      | Mute |                    |      |   1  |   2  |   3  |      |      |
 * `------+------+------+------+------+------'                    `------+------+------+------+------+------'
 *        |      |      | Left | Right|                                  |  Up  | Down |   .  |      |      
 *        `---------------------------'                                  `---------------------------'
 *                                      ,-------------.  ,-------------.
 *                                      |      |      |  |      |      |
 *                               ,------|------|------|  |------+------+------.
 *                               |      |      |      |  |      |      |      |
 *                               |      |      |------|  |------| Enter|   0  |
 *                               |      |      |      |  |      |      |      |
 *                               `--------------------'  `--------------------'
 */
// SYMBOLS
[MDIA_NUMP] = LAYOUT(
       // left hand
       QK_BOOT,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,
       KC_F11,   KC_BRIU,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_VOLU,
       KC_TRNS,  KC_BRID,  KC_MRWD,  KC_MPLY,  KC_MFFD,  KC_VOLD,
       KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_MSTP,  KC_TRNS,  KC_MUTE,
                 KC_TRNS,  KC_TRNS,  KC_LEFT,  KC_RGHT,
                                                         KC_TRNS,  KC_TRNS,
                                                                   KC_TRNS,
                                               KC_TRNS,  KC_TRNS,  KC_TRNS,
       // right hand
                   KC_F6,    KC_F7,    KC_F8,    KC_F9,  KC_F10,   KC_TRNS,
                   KC_TRNS,  KC_P7,    KC_P8,    KC_P9,  KC_TRNS,  KC_F12,
                   KC_TRNS,  KC_P4,    KC_P5,    KC_P6,  KC_TRNS,  KC_TRNS,
                   KC_TRNS,  KC_P1,    KC_P2,    KC_P3,  KC_TRNS,  KC_TRNS,
                             KC_UP,  KC_DOWN,   KC_TRNS, KC_TRNS,  
      KC_TRNS,  KC_TRNS,
      KC_TRNS,
      KC_TRNS,  KC_PENT,  KC_P0
),
};

const key_override_t left_parenthesis_override = ko_make_basic(MOD_MASK_ALT, KC_LBRC, LSFT(KC_9));
const key_override_t right_parenthesis_override = ko_make_basic(MOD_MASK_ALT, KC_RBRC, LSFT(KC_0));

const key_override_t *key_overrides[] = {
	&left_parenthesis_override,
	&right_parenthesis_override
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) { return true; } 
	
