#include QMK_KEYBOARD_H

#define _MAIN 0

void encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) { /* First encoder */
    if (clockwise) {
      tap_code(KC_EQUAL);
    } else {
      tap_code(KC_MINUS);
    }
  /*} else if (index == 1)*/ { /* Second encoder */  
   /* if (clockwise) {*/
   /*   tap_code(KC_3);*/
   /* } else {*/
   /*   tap_code(KC_4);*/
   /* }*/
  } else if (index == 5) { /* 5th encoder */  
    if (clockwise) {
      tap_code(LGUI(KC_RIGHT));
    } else {
      tap_code(LGUI(KC_LEFT));
    }
  }
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = { //buttion closest to usb is first
  [0] = LAYOUT(
     TG(1), LGUI(KC_U), KC_I, KC_O, KC_X 
  )
  [1] = LAYOUT(
     TG(0), KC_C, KC_D, KC_BSPACE, KC_X 
  )
};
