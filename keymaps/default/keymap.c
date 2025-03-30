#include QMK_KEYBOARD_H

#define BASE 0 // default layer
#define MDIA_NUMP 1 // media and numpad layer

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * .-----------------------------------------.                    .-----------------------------------------.
 * |   =  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |  '   |   ,  |   .  |   P  |   Y  |                    |   F  |   G  |   C  |   R  |   L  |  /   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | CapL |   A  |   O  |   E  |   U  |   I  |                    |   D  |   H  |   T  |   N  |   S  |  \   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|   ;  |   Q  |   J  |   K  |   X  |                    |   B  |   M  |   W  |   V  |   Z  |RShift|
 * '------+------+------+------+------+------'                    '------+------+------+------+------+------'
 *        |   `  |  NA  | Left | Right|                                  |  Up  | Down |   [  |   ]  |
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
          KC_EQL,           KC_1,           KC_2,     KC_3,     KC_4,    KC_5,
          KC_TAB,        KC_QUOT,        KC_COMM,   KC_DOT,     KC_P,    KC_Y,
          KC_CAPS,          KC_A,           KC_O,     KC_E,     KC_U,    KC_I,
          KC_LSFT,       KC_SCLN,           KC_Q,     KC_J,     KC_K,    KC_X,
                          KC_GRV,        KC_TRNS,  KC_LEFT,  KC_RGHT,
                                                                      KC_LCTL,  KC_LALT,
                                                                                KC_LGUI,
                                                             KC_BSPC,  KC_DEL,   KC_ESC,
        // right hand
                             KC_6,   KC_7,     KC_8,     KC_9,        KC_0,      KC_MINS,
                             KC_F,   KC_G,     KC_C,     KC_R,        KC_L,      KC_BSLS,
                             KC_D,   KC_H,     KC_T,     KC_N,        KC_S,      KC_SLSH,
                             KC_B,   KC_M,     KC_W,     KC_V,        KC_Z,      KC_RSFT,
                                    KC_UP,  KC_DOWN,  KC_LBRC,     KC_RBRC,
          KC_RCTL,  KC_RALT,
          KC_PGUP,
          KC_PGDN, KC_ENT, KC_SPC
    ),
/* Keymap 1: Media and Numpad
 *
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | BOOT |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  | NumL |   =  |   /  |   *  | Boot |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |BritUp|      |      |      | VolUp|                    |  F7  |   7  |   8  |   9  |   -  |  F10 |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |BritDn|PrevTk| Play |NextTk| VolDn|                    |  F8  |   4  |   5  |   6  |   +  |  F11 |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      | Stop |      | Mute |                    |  F9  |   1  |   2  |   3  | Enter|  F12 |
 * `------+------+------+------+------+------'                    `------+------+------+------+------+------'
 *        |      |      | Left | Right|                                  |  Up  | Down |   .  | Enter|      
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
       KC_TRNS,  KC_BRIU,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_VOLU,
       KC_TRNS,  KC_BRID,  KC_MRWD,  KC_MPLY,  KC_MFFD,  KC_VOLD,
       KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_MSTP,  KC_TRNS,  KC_MUTE,
       KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_LEFT,  KC_RGHT,
                                                         KC_TRNS,  KC_TRNS,
                                                                   KC_TRNS,
                                               KC_TRNS,  KC_TRNS,  KC_TRNS,
       // right hand
                   KC_F6,   KC_NUM,  KC_PEQL,  KC_PSLS,  KC_PAST,  QK_BOOT,
                   KC_F7,    KC_P7,    KC_P8,    KC_P9,  KC_PMNS,   KC_F12,
                   KC_F8,    KC_P4,    KC_P5,    KC_P6,  KC_PLUS,  KC_TRNS,
                   KC_F9,    KC_P1,    KC_P2,    KC_P3,  KC_PENT,  KC_TRNS,
                             KC_UP,  KC_DOWN,   KC_DOT,  KC_PENT,  KC_TRNS,
      KC_TRNS,  KC_TRNS,
      KC_TRNS,
      KC_TRNS,  KC_PENT,  KC_P0
)

uint8_t mod_state;
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  mod_state = get_mods();
  
  switch (keycode)
  {
    case KC_LBRC:
    {
      if (record->event.pressed)
      {
	if (mod_state & MOD_MASK_ALT)
       	{
	  unregister_code(KC_LBRC);
	  del_mods(MOD_MASK_ALT);
	  set_mods(MOD_MASK_SHIFT);
	  register_code(KC_9);
	  del_mods(MOD_MASK_SHIFT);
	  set_mods(mod_state);
	  unregister_code(KC_9);
	  return false;
	}
      }
    }
    case KC_RBRC:
    {
      if (record->event.pressed)
      {
        if (mod_state & MOD_MASK_ALT)
	{
	  unregister_code(KC_RBRC);
	  del_mods(MOD_MASK_ALT);
	  set_mods(MOD_MASK_SHIFT);
	  register_code(KC_0);
	  del_mods(MOD_MASK_SHIFT);
	  set_mods(mod_state);
	  unregister_code(KC_0);
	  return false;
	}
      }
    }  
  }

  return true;
}
