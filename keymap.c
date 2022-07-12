#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        MI_E,       MI_A,       MI_Ds_1,  	MI_Gs_1,    MI_Cs_2,
        MI_Ds,      MI_Gs,      MI_D_1,  	MI_G_1,    	MI_C_2,
        MI_D,       MI_G,       MI_Cs_1,	MI_Fs_1,    MI_B_1,
        MI_Cs,      MI_Fs,      MI_C_1,   	MI_F_1,    	MI_As_1,
        MI_C,       MI_F,       MI_B,     	MI_E_1,		MI_A_1
    )

};
