/**
 * implus_rgb.c
 *
  Copyright 2021 astro <yuleiz@gmail.com>
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 2 of the License, or
    (at your option) any later version.
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "implus_rgb.h"
#include "is31fl3236.h"
#include "is31fl3731_imp.h"

#ifdef RGB_MATRIX_ENABLE
const is31_led __flash g_is31_leds[DRIVER_LED_TOTAL] = {
// is31fl3733
    {0, B_1,   A_1,   C_1},
    {0, B_2,   A_2,   C_2},
    {0, B_3,   A_3,   C_3},
    {0, B_4,   A_4,   C_4},
    {0, B_5,   A_5,   C_5},
    {0, B_6,   A_6,   C_6},
    {0, B_7,   A_7,   C_7},
    {0, B_8,   A_8,   C_8},
    {0, B_9,   A_9,   C_9},
    {0, B_10,  A_10,  C_10},
    {0, B_11,  A_11,  C_11},
    {0, B_12,  A_12,  C_12},
    {0, B_13,  A_13,  C_13},
    {0, B_14,  A_14,  C_14},
    {0, B_15,  A_15,  C_15},
    {0, B_16,  A_16,  C_16},

    {0, E_1,   D_1,   F_1},
    {0, E_2,   D_2,   F_2},
    {0, E_3,   D_3,   F_3},
    {0, E_4,   D_4,   F_4},
    {0, E_5,   D_5,   F_5},
    {0, E_6,   D_6,   F_6},
    {0, E_7,   D_7,   F_7},
    {0, E_8,   D_8,   F_8},
    {0, E_9,   D_9,   F_9},
    {0, E_10,  D_10,  F_10},
    {0, E_11,  D_11,  F_11},
    {0, E_12,  D_12,  F_12},
    {0, E_13,  D_13,  F_13},
    {0, E_14,  D_14,  F_14},
    {0, E_15,  D_15,  F_15},
    {0, E_16,  D_16,  F_16},

    {0, H_1,   G_1,   I_1},
    {0, H_2,   G_2,   I_2},
    {0, H_3,   G_3,   I_3},
    {0, H_4,   G_4,   I_4},
    {0, H_5,   G_5,   I_5},
    {0, H_6,   G_6,   I_6},
    {0, H_7,   G_7,   I_7},
    {0, H_8,   G_8,   I_8},
    {0, H_9,   G_9,   I_9},
    {0, H_10,  G_10,  I_10},
    {0, H_11,  G_11,  I_11},
    {0, H_12,  G_12,  I_12},
    {0, H_13,  G_13,  I_13},
    {0, H_14,  G_14,  I_14},
    {0, H_15,  G_15,  I_15},
    {0, H_16,  G_16,  I_16},

    {0, K_1,   J_1,   L_1},
    {0, K_2,   J_2,   L_2},
    {0, K_3,   J_3,   L_3},
    {0, K_4,   J_4,   L_4},
    {0, K_5,   J_5,   L_5},
    {0, K_6,   J_6,   L_6},
    {0, K_7,   J_7,   L_7},
    {0, K_8,   J_8,   L_8},
    {0, K_9,   J_9,   L_9},
    {0, K_10,  J_10,  L_10},
    {0, K_11,  J_11,  L_11},
    {0, K_12,  J_12,  L_12},
    {0, K_13,  J_13,  L_13},
    {0, K_14,  J_14,  L_14},
    {0, K_15,  J_15,  L_15},
    {0, K_16,  J_16,  L_16},

// is31fl3236 in main board
    {1,  OUT_3,   OUT_2,   OUT_1},
    {1,  OUT_6,   OUT_5,   OUT_4},
    {1,  OUT_9,   OUT_8,   OUT_7},
    {1, OUT_12,  OUT_11,  OUT_10},
    {1, OUT_15,  OUT_14,  OUT_13},
    {1, OUT_18,  OUT_17,  OUT_16},
    {1, OUT_21,  OUT_20,  OUT_19},
    {1, OUT_24,  OUT_23,  OUT_22},
    {1, OUT_27,  OUT_26,  OUT_25},
    {1, OUT_30,  OUT_29,  OUT_28},
    {1, OUT_33,  OUT_32,  OUT_31},
    {1, OUT_36,  OUT_35,  OUT_34},

// is31fl3236 in control board
    {2,  OUT_3,   OUT_2,   OUT_1},
    {2,  OUT_6,   OUT_5,   OUT_4},
    {2,  OUT_9,   OUT_8,   OUT_7},
    {2, OUT_12,  OUT_11,  OUT_10},
    {2, OUT_15,  OUT_14,  OUT_13},
    {2, OUT_18,  OUT_17,  OUT_16},
    {2, OUT_21,  OUT_20,  OUT_19},
    {2, OUT_24,  OUT_23,  OUT_22},
    {2, OUT_27,  OUT_26,  OUT_25},
    {2, OUT_30,  OUT_29,  OUT_28},
    {2, OUT_33,  OUT_32,  OUT_31},
    {2, OUT_36,  OUT_35,  OUT_34},

// ws2811 for scroll lock
    {3, 0,  0,  0},

// m12 led board
#if 0
/*    {4, C1_1,   C3_2,   C4_2},
    {4, C1_2,   C2_2,   C4_3},
    {4, C1_3,   C2_3,   C3_3},
    {4, C1_4,   C2_4,   C3_4},
    {4, C1_5,   C2_5,   C3_5},
    {4, C1_6,   C2_6,   C3_6},
    {4, C1_7,   C2_7,   C3_7},
    {4, C1_8,   C2_8,   C3_8},

    {4, C9_1,   C8_1,   C7_1},
    {4, C9_2,   C8_2,   C7_2},
    {4, C9_3,   C8_3,   C7_3},
    {4, C9_4,   C8_4,   C7_4},
    {4, C9_5,   C8_5,   C7_5},
    */
//    {4, C9_6,   C8_6,   C7_6},
//    {4, C9_7,   C8_7,   C6_6},
//    {4, C9_8,   C7_7,   C6_7},

    {4, C1_9,   C3_10,  C4_10},
    {4, C1_10,  C2_10,  C4_11},
    {4, C1_11,  C2_11,  C3_11},
    {4, C1_12,  C2_12,  C3_12},
    {4, C1_13,  C2_13,  C3_13},
    {4, C1_14,  C2_14,  C3_14},
    {4, C1_15,  C2_15,  C3_15},
    {4, C1_16,  C2_16,  C3_16},

    {4, C9_9,   C8_9,   C7_9},
    {4, C9_10,  C8_10,  C7_10},
    {4, C9_11,  C8_11,  C7_11},
    {4, C9_12,  C8_12,  C7_12},
    {4, C9_13,  C8_13,  C7_13},
    {4, C9_14,  C8_14,  C7_14},
    {4, C9_15,  C8_15,  C6_14},
    {4, C9_16,  C7_15,  C6_15},
#endif
};

led_config_t g_led_config = {
    {
        {  0,       1, 64,     65, 66, 67, 68, 69, 70, 71, 72, 73,     74, 76, 88}, 
        {  2,       3,  4,      5,  6,  7,  8,  9, 10, 11, 12, 13,     14, 77, 81},
        {  16,     17, 18,     19, 20, 21, 22, 23, 24, 25, 26, 27,     28, 78, 80},
        {  32,     33, 34,     35, 36, 37, 38, 39, 40, 41, 42, 30, NO_LED, 79, 82},
        {  49, NO_LED, 51,     53, 55, 56, 57, 59, 43, 44, 45, 46,     47, 84, 83},
        {  48,     50, 52, NO_LED, 58, 61, 62, 63, 30, 29, 15, 75,     87, 85, 86},
    },
    {
         {0,0}, {18,0}, {0,15},{15,15},{29,15},{44,15}, {59,15}, {73,15}, {89,15},{104,15},{118,15},{133,15},{148,15},{162,15},{178,15},{200,15},
        {4,27},{22,27},{37,27},{52,27},{67,27},{81,27}, {96,27},{111,27},{126,27},{141,27},{155,27},{170,27},{185,27},{203,27},{198,39},{174,39},
        {2,39},{26,39},{41,39},{56,39},{70,39},{85,39},{100,39},{115,39},{129,39},{144,39},{159,39},{122,52},{137,52},{152,52},{166,52},{194,52},
        {4,64}, {9,52},{22,64},{33,52},{40,64},{59,61}, {48,52}, {63,52}, {78,52}, {92,52},{103,64},{105,52},{148,61},{166,64},{185,64},{203,64},

         {33,0}, {48,0},  {63,0},  {81,0},  {96,0}, {111,0}, {126,0}, {144,0}, {159,0}, {174,0}, {188,0}, {207,0},
        {226,0},{255,0},{226,15},{226,27},{241,15},{255,15},{241,27},{255,27},{241,52},{241,64},{255,64},{226,64},

        {241,0}
    },
    {
        1,1,4,4,4,4,4,4,4,4,4,4,4,4,4,1,
        1,4,4,4,4,4,4,4,4,4,4,4,4,4,1,4,
        1,4,4,4,4,4,4,4,4,4,4,4,4,4,4,1,
        1,4,1,4,1,4,4,4,4,4,4,4,4,1,1,1,

        1,1,1,1,1,1,1,1,1,1,1,1,
        1,1,1,1,1,1,1,1,1,1,1,1,

        1
    }
};

#endif

#ifdef RGBLIGHT_ENABLE

void rgblight_call_driver(LED_TYPE *start_led, uint8_t num_leds)
{
    #if 1
    if (IS31FL3731_available())
    {
        for (int i = 0; i < RGBLED_NUM; i++) {
            IS31FL3731_set_color(i, start_led[i].r, start_led[i].g, start_led[i].b);
            //IS31FL3731_set_color(i, 0xFF, 0, 0);
        }
        //IS31FL3731_update_pwm_buffers(IS31FL3731_ADDR, 0);
    }
    else
    #endif
     {
        ws2812_setleds(start_led, num_leds);
    }
}

void housekeeping_task_kb(void)
{
    #if 1
    if (IS31FL3731_available())
    {
        IS31FL3731_update_pwm_buffers(IS31FL3731_ADDR, 0);
    }
    housekeeping_task_user();
    #endif
}
#endif

//#if defined(RGB_MATRIX_ENABLE) && defined(RGBLIGHT_ENABLE)
static bool top_led = true;
bool process_record_kb(uint16_t keycode, keyrecord_t *record)
{
    if(!record->event.pressed) {
        return process_record_user(keycode, record);
    }

    if (keycode == KC_F13) {
        top_led = !top_led;
        return false;
    }

    if (top_led) {
        switch(keycode) {
            case RGB_TOG:
                //rgblight_toggle();
                rgb_matrix_toggle();
                return false;
            case RGB_MODE_FORWARD:
                //rgblight_step();
                rgb_matrix_step();
                return false;
            case RGB_MODE_REVERSE:
                //rgblight_step_reverse();
                rgb_matrix_step_reverse();
                return false;
            case RGB_HUI:
                //rgblight_increase_hue();
                rgb_matrix_increase_hue();
                return false;
            case RGB_HUD:
                //rgblight_decrease_hue();
                rgb_matrix_decrease_hue();
                return false;
            case RGB_SAI:
                //rgblight_increase_sat();
                rgb_matrix_increase_sat();
                return false;
            case RGB_SAD:
                //rgblight_decrease_sat();
                rgb_matrix_decrease_sat();
                return false;
            case RGB_VAI:
                //rgblight_increase_val();
                rgb_matrix_increase_val();
                return false;
            case RGB_VAD:
                //rgblight_decrease_val();
                rgb_matrix_decrease_val();
                return false;
            case RGB_SPI:
                //rgblight_increase_speed();
                rgb_matrix_increase_speed();
                return false;
            case RGB_SPD:
                //rgblight_decrease_speed();
                rgb_matrix_decrease_speed();
                return false;
            default:
                break;
        }
    }
    return process_record_user(keycode, record);
}
//#endif