/*
 * display_188_5pin.h
 *
 *  Created on: 15 aug 2024 г.
 *      Author: Mikhail Tsaryov | EEP Lab
 */

#ifndef INC_DISPLAY_188_5PIN_H_
#define INC_DISPLAY_188_5PIN_H_

#include "main.h"

#define ECONOMY_CODE    // Choosing an alternative update function
// #define NO_LETTERS      // Do not use letters

#define DISP188_TIMER TIM1 // Setup period 2 kHz

#define DISP188_1_PORT        DISP_1_GPIO_Port
#define DISP188_2_PORT        DISP_2_GPIO_Port
#define DISP188_3_PORT        DISP_3_GPIO_Port
#define DISP188_4_PORT        DISP_4_GPIO_Port
#define DISP188_5_PORT        DISP_5_GPIO_Port

#define DISP188_1_PIN              DISP_1_Pin
#define DISP188_2_PIN              DISP_2_Pin
#define DISP188_3_PIN              DISP_3_Pin
#define DISP188_4_PIN              DISP_4_Pin
#define DISP188_5_PIN              DISP_5_Pin

#define DIGIT_1 0 // 1
#define DIGIT_2 1 // 8
#define DIGIT_3 2 // 8

#define DIGIT_EMPTY     0b00000000
// a b c d e f g (dot)
#define SYMBOL_SPACE    0b00000000
#define SYMBOL_DASH     0b00000010
#define SYMBOL_0        0b11111100
#define SYMBOL_1        0b01100000
#define SYMBOL_2        0b11011010
#define SYMBOL_3        0b11110010
#define SYMBOL_4        0b01100110
#define SYMBOL_5        0b10110110
#define SYMBOL_6        0b10111110
#define SYMBOL_7        0b11100000
#define SYMBOL_8        0b11111110
#define SYMBOL_9        0b11110110
#define SYMBOL_A        0b11101110
#define SYMBOL_B        0b00111110
#define SYMBOL_C        0b10011100
#define SYMBOL_D        0b01111010
#define SYMBOL_E        0b10011110
#define SYMBOL_F        0b10001110
#define SYMBOL_H        0b01101110
#define SYMBOL_J        0b01111000
#define SYMBOL_L        0b00011100
#define SYMBOL_N        0b00101010
#define SYMBOL_O        0b00111010
#define SYMBOL_P        0b11001110
#define SYMBOL_R        0b00001010
#define SYMBOL_T        0b00011110
#define SYMBOL_U        0b01111100

#define SYMBOL_SEG_A    0b10000000
#define SYMBOL_SEG_B    0b01000000
#define SYMBOL_SEG_C    0b00100000
#define SYMBOL_SEG_D    0b00010000
#define SYMBOL_SEG_E    0b00001000
#define SYMBOL_SEG_F    0b00000100
#define SYMBOL_SEG_G    0b00000010

#define B1 10
#define C1 11
#define A2 20
#define B2 21
#define C2 22
#define D2 23
#define E2 24
#define F2 25
#define G2 26
#define A3 30
#define B3 31
#define C3 32
#define D3 33
#define E3 34
#define F3 35
#define G3 36

void DISP188_Off();
void DISP188_Init();
void DISP188_DeInit();
void DISP188_Update();
void DISP188_OutputNumber(const uint8_t num);
void DISP188_OutputText(const char * str);

#endif /* INC_DISPLAY_188_5PIN_H_ */
