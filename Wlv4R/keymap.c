#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  MAC_LOCK,
};



#define DUAL_FUNC_0 LT(15, KC_Z)
#define DUAL_FUNC_1 LT(11, KC_0)
#define DUAL_FUNC_2 LT(9, KC_L)
#define DUAL_FUNC_3 LT(10, KC_F14)
#define DUAL_FUNC_4 LT(10, KC_F23)
#define DUAL_FUNC_5 LT(14, KC_F15)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    RGB_MODE_FORWARD,RGB_HUD,        RGB_HUI,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 TO(5),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MAC_LOCK,       KC_PSCR,        
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCLN,        KC_TRANSPARENT, 
    KC_ESCAPE,      MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_R),MT(MOD_LSFT, KC_S),MT(MOD_LCTL, KC_T),KC_G,                                           KC_M,           MT(MOD_LCTL, KC_N),MT(MOD_LSFT, KC_E),MT(MOD_LALT, KC_I),MT(MOD_LGUI, KC_O),KC_QUOTE,       
    CW_TOGG,        KC_Z,           MT(MOD_RALT, KC_X),KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           KC_COMMA,       MT(MOD_RALT, KC_DOT),KC_UNDS,        KC_SLASH,       
                                                    LT(3, KC_SPACE),LT(4, KC_BSPC),                                 LT(2, KC_TAB),  LT(1, KC_ENTER)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_QUOTE,       KC_LABK,        KC_RABK,        KC_DQUO,        KC_NO,                                          KC_PIPE,        KC_TILD,        KC_LCBR,        KC_RCBR,        KC_PERC,        KC_TRANSPARENT, 
    KC_TRANSPARENT, DUAL_FUNC_0,    MT(MOD_LALT, KC_MINUS),DUAL_FUNC_1,    MT(MOD_LCTL, KC_EQUAL),KC_NO,                                          KC_AMPR,        DUAL_FUNC_2,    DUAL_FUNC_3,    DUAL_FUNC_4,    DUAL_FUNC_5,    KC_NO,          
    KC_TRANSPARENT, KC_GRAVE,       MT(MOD_RALT, KC_BSLS),KC_ASTR,        KC_HASH,        KC_NO,                                          KC_CIRC,        KC_DLR,         KC_LBRC,        MT(MOD_RALT, KC_RBRC),KC_AT,          KC_TRANSPARENT, 
                                                    KC_SPACE,       KC_BSPC,                                        KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, MT(MOD_LGUI, KC_1),MT(MOD_LALT, KC_2),MT(MOD_LSFT, KC_3),MT(MOD_LCTL, KC_4),KC_5,                                           KC_6,           MT(MOD_LCTL, KC_7),MT(MOD_LSFT, KC_8),MT(MOD_LALT, KC_9),MT(MOD_LGUI, KC_0),KC_F12,         
    KC_TRANSPARENT, KC_NO,          KC_RIGHT_ALT,   KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_SPACE,       KC_BSPC,                                        KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_HOME,        KC_UP,          KC_END,         KC_PAGE_UP,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_SHIFT,  KC_LEFT_CTRL,   KC_NO,                                          KC_NO,          KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_PGDN,        KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TAB,         KC_ENTER
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MS_JIGGLER_TOGGLE,KC_MS_BTN4,     KC_MS_BTN3,     KC_MS_BTN5,     KC_NO,                                          KC_NO,          KC_BRIGHTNESS_DOWN,KC_MEDIA_STOP,  KC_BRIGHTNESS_UP,KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_MS_BTN2,     DRAG_SCROLL,    KC_MS_BTN1,     LCTL(KC_W),                                     KC_NO,          KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_SHIFT,  KC_NO,          KC_NO,                                          KC_NO,          KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_AUDIO_VOL_UP,KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TAB,         KC_ENTER
  ),
  [5] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           TO(0),          
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_EQUAL,       
    KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_LEFT_CTRL,   KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_MINUS,       
                                                    KC_SPACE,       KC_LEFT_ALT,                                    TG(6),          KC_ENTER
  ),
  [6] = LAYOUT_voyager(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         TO(0),          
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_NO,          KC_HOME,        KC_UP,          KC_END,         KC_PAGE_UP,     KC_F11,         
    KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_NO,          KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_PGDN,        KC_F12,         
    KC_LEFT_CTRL,   KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_BSLS,        KC_GRAVE,       
                                                    KC_SPACE,       KC_LEFT_ALT,                                    KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  '*', '*', '*', '*'
);

const uint16_t PROGMEM combo0[] = { LT(4, KC_BSPC), LT(3, KC_SPACE), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_DELETE),
};







bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX:
    // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
    // this makes sure that modifiers are always applied to the key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode)) || IS_CONSUMER_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
      if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;
    case MAC_LOCK:
      HCS(0x19E);

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_EXLM);
        } else {
          unregister_code16(KC_EXLM);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_GUI);
        } else {
          unregister_code16(KC_LEFT_GUI);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_PLUS);
        } else {
          unregister_code16(KC_PLUS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_SHIFT);
        } else {
          unregister_code16(KC_LEFT_SHIFT);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_COLN);
        } else {
          unregister_code16(KC_COLN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_CTRL);
        } else {
          unregister_code16(KC_LEFT_CTRL);
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_LPRN);
        } else {
          unregister_code16(KC_LPRN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_SHIFT);
        } else {
          unregister_code16(KC_LEFT_SHIFT);
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_RPRN);
        } else {
          unregister_code16(KC_RPRN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_ALT);
        } else {
          unregister_code16(KC_LEFT_ALT);
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_QUES);
        } else {
          unregister_code16(KC_QUES);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_GUI);
        } else {
          unregister_code16(KC_LEFT_GUI);
        }  
      }  
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}
