#include QMK_KEYBOARD_H

enum planck_layers {
    QWERTZ,
    LOWER,
    RAISE,
    ADJUST,
    RESET,
    NAVIGATE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // .-----------------------------------------------------------------------.
    // | Esc |  Q  |  W  |  E  |  R  |  T  |  Z  |  U  |  I  |  O  |  P  | Bsp |
    // |-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----|
    // | Tab |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  | / ? | Rtn |
    // |-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----|
    // | Sft |  Y  |  X  |  C  |  V  |  B  |  N  |  M  | , ; | . : | - _ | $ € |
    // |-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----|
    // | Ctl | Win | Alt | QMK | Low |   Space   | Rse | Alf | Adn | Aup | Art |
    // '-----------------------------------------------------------------------'
    [QWERTZ] = LAYOUT_planck_grid(
        KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,
        KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,
        KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,
        KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_NO, KC_A,  KC_A,  KC_A,  KC_A,  KC_A
    ),

    // .-----------------------------------------------------------------------.
    // |     |     |     |     |     |     |     |     |     |     |     |     |
    // |-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----|
    // |     |     |     |     |     |     |     |     |     |     |     |     |
    // |-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----|
    // |     |     |     |     |     |     |     |     |     |     |     |     |
    // |-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----|
    // |     |     |     |     |     |           |     |     |     |     |     |
    // '-----------------------------------------------------------------------'
    [LOWER] = LAYOUT_planck_grid(
        KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,
        KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,
        KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,
        KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_NO, KC_A,  KC_A,  KC_A,  KC_A,  KC_A
    ),

    // .-----------------------------------------------------------------------.
    // |     |     |     |     |     |     |     |     |     |     |     |     |
    // |-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----|
    // |     |     |     |     |     |     |     |     |     |     |     |     |
    // |-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----|
    // |     |     |     |     |     |     |     |     |     |     |     |     |
    // |-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----|
    // |     |     |     |     |     |           |     |     |     |     |     |
    // '-----------------------------------------------------------------------'
    [RAISE] = LAYOUT_planck_grid(
        KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,
        KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,
        KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,
        KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_NO, KC_A,  KC_A,  KC_A,  KC_A,  KC_A
    ),

    // .-----------------------------------------------------------------------.
    // |     |     |     |     |     |     |     |     |     |     |     |     |
    // |-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----|
    // |     |     |     |     |     |     |     |     |     |     |     |     |
    // |-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----|
    // |     |     |     |     |     |     |     |     |     |     |     |     |
    // |-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----|
    // |     |     |     |     |     |           |     |     |     |     |     |
    // '-----------------------------------------------------------------------'
    [ADJUST] = LAYOUT_planck_grid(
        KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,
        KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,
        KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,
        KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_NO, KC_A,  KC_A,  KC_A,  KC_A,  KC_A
    ),

    // .-----------------------------------------------------------------------.
    // |     |     |     |     |     |     |     |     |     |     |     |     |
    // |-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----|
    // |     |     |     |     |     |     |     |     |     |     |     |     |
    // |-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----|
    // |     |     |     |     |     |     |     |     |     |     |     |     |
    // |-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----|
    // |     |     |     |     |     |           |     |     |     |     |     |
    // '-----------------------------------------------------------------------'
    [RESET] = LAYOUT_planck_grid(
        KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,
        KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,
        KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,
        KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_NO, KC_A,  KC_A,  KC_A,  KC_A,  KC_A
    ),

    // .-----------------------------------------------------------------------.
    // |     |     |     |     |     |     |     |     |     |     |     |     |
    // |-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----|
    // |     |     |     |     |     |     |     |     |     |     |     |     |
    // |-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----|
    // |     |     |     |     |     |     |     |     |     |     |     |     |
    // |-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----|
    // |     |     |     |     |     |           |     |     |     |     |     |
    // '-----------------------------------------------------------------------'
    [NAVIGATE] = LAYOUT_planck_grid(
        KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,
        KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,
        KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,
        KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_A,  KC_NO, KC_A,  KC_A,  KC_A,  KC_A,  KC_A
    ),
};
