/*
 * icons.h
 *
 *  Created on: Feb 15, 2016
 *      Author: Keith Mitchell
 */

#ifndef ICONS_H
#define ICONS_H

#include "mraa.hpp"
#include "sparkfun/oled/Edison_OLED.h"
#include "sparkfun/gpio/gpio.h"

#define UNUSED(icon_types);

enum Icon { locked = 0, unlocked, key, wifi, wifimed, wifilow, beacon, house, chainlink};
//Icon code is number of digits for width and height (eg. 1 for a height and width with 1 digit such as 7), width, height, and icon data 1=pixel on, 0=pixel off
//In the data string "1156011101000111111110111101111111" the first 1 is the number of digits for width, the next one is the digits for height, then comes width and height, and then the string of pixel data
static const char *icon_types[] = { "115700000011101000111111110111101111111", "115701110100011000011111110111101111111","21127000000000000001110000000010001000000010001111110010001001010001110000010000000000000", "11770000000000111000100000100110010100001010100000000", "11770000000000000000000000000110000100000010100000000", "11770000000000000000000000000000000000000000100000000", "11770100010100100110111011001001010101000010000001000", "11770001000001110001111101111111011111001101100110110", "21127000000000000011110011110100001100001100001100001100001100001011110011110000000000000"};

//Suppresses UNUSED errors for icon_types since it's being used from other sources


void DrawIcon(edOLED, Icon, int, int);

#endif /* ICONS_H_ */
