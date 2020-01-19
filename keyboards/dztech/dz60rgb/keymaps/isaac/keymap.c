#include QMK_KEYBOARD_H

enum dz60rgb_keycodes {
	USR_CRM = SAFE_RANGE,
	USR_PRP,
	USR_RED,
	USR_GRN,
	USR_BLU,
	USR_CYN,
	USR_MGT,
	USR_YEL,
	USR_KEY,
	USR_WHT,
};;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT(
		KC_GESC,			KC_1,		KC_2,		KC_3,		KC_4,		KC_5,		KC_6,		KC_7,		KC_8,		KC_9,		KC_0,				KC_MINS,	KC_EQL,			KC_BSPC,
		KC_TAB,				KC_Q,		KC_W,		KC_E,		KC_R,		KC_T,		KC_Y,		KC_U,		KC_I,		KC_O,		KC_P,				KC_LBRC,	KC_RBRC,		KC_BSLS,
		LCTL_T(KC_CAPS),	KC_A,		KC_S,		KC_D,		KC_F,		KC_G,		KC_H,		KC_J,		KC_K,		KC_L,		KC_SCLN,			KC_QUOT,	KC_ENT,
		LSFT_T(KC_LPRN), 	KC_Z, 		KC_X,		KC_C,		KC_V,		KC_B,		KC_N,		KC_M,		KC_COMM,	KC_DOT,		RSFT_T(KC_SLSH),	KC_UP,		LT(2,KC_DEL),
		MO(1),				KC_LALT,	KC_LGUI,	KC_SPC,		MO(1),		TG(1),		KC_LEFT,	KC_DOWN,	KC_RGHT
	),

	[1] = LAYOUT(
		KC_GRV, 			KC_F1, 		KC_F2, 		KC_F3, 		KC_F4, 		KC_F5, 		KC_F6, 		KC_F7, 		KC_F8, 		KC_F9, 		KC_F10, 			KC_F11, 	KC_F12, 		KC_TRNS,
		KC_TRNS, 			KC_BTN1,	KC_MS_U,	KC_BTN2,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_INS,		KC_TRNS,	KC_PSCR,			KC_SLCK,	KC_PAUS,		RESET,
		KC_TRNS,			KC_MS_L,	KC_MS_D,	KC_MS_R,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_HOME,			KC_PGUP,	EEP_RST,
		KC_TRNS,			KC_WH_U,	KC_WH_D,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_END,		KC_PGDN,			KC_VOLU,	KC_MUTE,
		KC_TRNS,			KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_MPRV,	KC_VOLD,	KC_MNXT),

	[2] = LAYOUT(
		KC_TRNS,			KC_F1,		KC_F2,		KC_F3,		KC_F4,		KC_F5,		KC_F6,		KC_F7,		KC_F8,		KC_F9,		KC_F10,				KC_F11,		KC_F12,			KC_DEL,
		KC_TRNS,			RGB_TOG,	KC_TRNS,	RGB_HUI,	RGB_HUD,	RGB_SAI,	RGB_SAD,	RGB_VAI,	RGB_VAD,	RGB_MOD,	KC_TRNS,			KC_TRNS,	KC_TRNS,		RESET,
		KC_TRNS,			KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	RGB_SPI,	RGB_SPD,	KC_TRNS,			KC_TRNS,	EEP_RST,
		KC_TRNS,			USR_CRM,	USR_PRP,	USR_RED,	USR_GRN,	USR_BLU,	USR_CYN,	USR_MGT,	USR_YEL,	USR_KEY,	USR_WHT,			KC_TRNS,	KC_TRNS,
		KC_TRNS,			KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS)
};

bool process_record_user(uint16_t keycode, keyrecord_t* record)
{
	switch (keycode) {

		case USR_CRM:
			if (record->event.pressed) {
				rgb_matrix_sethsv(32, 160, 180);
			}
			return false;

		case USR_PRP:
			if (record->event.pressed) {
				rgb_matrix_sethsv(192, 112, 180);
			}
			return false;

		case USR_RED:
			if (record->event.pressed) {
				rgb_matrix_sethsv(0, 255, 180);
			}
			return false;

		case USR_GRN:
			if (record->event.pressed) {
				rgb_matrix_sethsv(88, 255, 180);
			}
			return false;

		case USR_BLU:
			if (record->event.pressed) {
				rgb_matrix_sethsv(168, 255, 180);
			}
			return false;

		case USR_CYN:
			if (record->event.pressed) {
				rgb_matrix_sethsv(128, 255, 180);
			}
			return false;

		case USR_MGT:
			if (record->event.pressed) {
				rgb_matrix_sethsv(216, 255, 180);
			}
			return false;

		case USR_YEL:
			if (record->event.pressed) {
				rgb_matrix_sethsv(40, 255, 180);
			}
			return false;

		case USR_KEY:
			if (record->event.pressed) {
				rgb_matrix_sethsv(0, 0, 0);
			}
			return false;

		case USR_WHT:
			if (record->event.pressed) {
				rgb_matrix_sethsv(80, 128, 180);
			}
			return false;

		default:
			return true;
	}
}