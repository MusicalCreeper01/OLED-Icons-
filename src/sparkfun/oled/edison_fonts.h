/******************************************************************************
 * fonts.h
 * 
 * Definition for all four default fonts.
 * 
 * This file was imported from the MicroView library, written by GeekAmmo
 * (https://github.com/geekammo/MicroView-Arduino-Library), and released under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option) any later
 * version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
******************************************************************************/

#ifndef OLED_FONTS_H
#define OLED_FONTS_H

// Standard ASCII 5x7 font
static const unsigned char font5x7[] = {
	// first row defines - FONTWIDTH, FONTHEIGHT, ASCII START CHAR, TOTAL CHARACTERS, FONT MAP WIDTH HIGH, FONT MAP WIDTH LOW (2,56 meaning 256)
	5,8,0,255,12,75,
	0x00, 0x00, 0x00, 0x00, 0x00,
	0x3E, 0x5B, 0x4F, 0x5B, 0x3E,
	0x3E, 0x6B, 0x4F, 0x6B, 0x3E,
	0x1C, 0x3E, 0x7C, 0x3E, 0x1C,
	0x18, 0x3C, 0x7E, 0x3C, 0x18,
	0x1C, 0x57, 0x7D, 0x57, 0x1C,
	0x1C, 0x5E, 0x7F, 0x5E, 0x1C,
	0x00, 0x18, 0x3C, 0x18, 0x00,
	0xFF, 0xE7, 0xC3, 0xE7, 0xFF,
	0x00, 0x18, 0x24, 0x18, 0x00,
	0xFF, 0xE7, 0xDB, 0xE7, 0xFF,
	0x30, 0x48, 0x3A, 0x06, 0x0E,
	0x26, 0x29, 0x79, 0x29, 0x26,
	0x40, 0x7F, 0x05, 0x05, 0x07,
	0x40, 0x7F, 0x05, 0x25, 0x3F,
	0x5A, 0x3C, 0xE7, 0x3C, 0x5A,
	0x7F, 0x3E, 0x1C, 0x1C, 0x08,
	0x08, 0x1C, 0x1C, 0x3E, 0x7F,
	0x14, 0x22, 0x7F, 0x22, 0x14,
	0x5F, 0x5F, 0x00, 0x5F, 0x5F,
	0x06, 0x09, 0x7F, 0x01, 0x7F,
	0x00, 0x66, 0x89, 0x95, 0x6A,
	0x60, 0x60, 0x60, 0x60, 0x60,
	0x94, 0xA2, 0xFF, 0xA2, 0x94,
	0x08, 0x04, 0x7E, 0x04, 0x08,
	0x10, 0x20, 0x7E, 0x20, 0x10,
	0x08, 0x08, 0x2A, 0x1C, 0x08,
	0x08, 0x1C, 0x2A, 0x08, 0x08,
	0x1E, 0x10, 0x10, 0x10, 0x10,
	0x0C, 0x1E, 0x0C, 0x1E, 0x0C,
	0x30, 0x38, 0x3E, 0x38, 0x30,
	0x06, 0x0E, 0x3E, 0x0E, 0x06,
	0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x5F, 0x00, 0x00,
	0x00, 0x07, 0x00, 0x07, 0x00,
	0x14, 0x7F, 0x14, 0x7F, 0x14,
	0x24, 0x2A, 0x7F, 0x2A, 0x12,
	0x23, 0x13, 0x08, 0x64, 0x62,
	0x36, 0x49, 0x56, 0x20, 0x50,
	0x00, 0x08, 0x07, 0x03, 0x00,
	0x00, 0x1C, 0x22, 0x41, 0x00,
	0x00, 0x41, 0x22, 0x1C, 0x00,
	0x2A, 0x1C, 0x7F, 0x1C, 0x2A,
	0x08, 0x08, 0x3E, 0x08, 0x08,
	0x00, 0x80, 0x70, 0x30, 0x00,
	0x08, 0x08, 0x08, 0x08, 0x08,
	0x00, 0x00, 0x60, 0x60, 0x00,
	0x20, 0x10, 0x08, 0x04, 0x02,
	0x3E, 0x51, 0x49, 0x45, 0x3E,
	0x00, 0x42, 0x7F, 0x40, 0x00,
	0x72, 0x49, 0x49, 0x49, 0x46,
	0x21, 0x41, 0x49, 0x4D, 0x33,
	0x18, 0x14, 0x12, 0x7F, 0x10,
	0x27, 0x45, 0x45, 0x45, 0x39,
	0x3C, 0x4A, 0x49, 0x49, 0x31,
	0x41, 0x21, 0x11, 0x09, 0x07,
	0x36, 0x49, 0x49, 0x49, 0x36,
	0x46, 0x49, 0x49, 0x29, 0x1E,
	0x00, 0x00, 0x14, 0x00, 0x00,
	0x00, 0x40, 0x34, 0x00, 0x00,
	0x00, 0x08, 0x14, 0x22, 0x41,
	0x14, 0x14, 0x14, 0x14, 0x14,
	0x00, 0x41, 0x22, 0x14, 0x08,
	0x02, 0x01, 0x59, 0x09, 0x06,
	0x3E, 0x41, 0x5D, 0x59, 0x4E,
	0x7C, 0x12, 0x11, 0x12, 0x7C,
	0x7F, 0x49, 0x49, 0x49, 0x36,
	0x3E, 0x41, 0x41, 0x41, 0x22,
	0x7F, 0x41, 0x41, 0x41, 0x3E,
	0x7F, 0x49, 0x49, 0x49, 0x41,
	0x7F, 0x09, 0x09, 0x09, 0x01,
	0x3E, 0x41, 0x41, 0x51, 0x73,
	0x7F, 0x08, 0x08, 0x08, 0x7F,
	0x00, 0x41, 0x7F, 0x41, 0x00,
	0x20, 0x40, 0x41, 0x3F, 0x01,
	0x7F, 0x08, 0x14, 0x22, 0x41,
	0x7F, 0x40, 0x40, 0x40, 0x40,
	0x7F, 0x02, 0x1C, 0x02, 0x7F,
	0x7F, 0x04, 0x08, 0x10, 0x7F,
	0x3E, 0x41, 0x41, 0x41, 0x3E,
	0x7F, 0x09, 0x09, 0x09, 0x06,
	0x3E, 0x41, 0x51, 0x21, 0x5E,
	0x7F, 0x09, 0x19, 0x29, 0x46,
	0x26, 0x49, 0x49, 0x49, 0x32,
	0x03, 0x01, 0x7F, 0x01, 0x03,
	0x3F, 0x40, 0x40, 0x40, 0x3F,
	0x1F, 0x20, 0x40, 0x20, 0x1F,
	0x3F, 0x40, 0x38, 0x40, 0x3F,
	0x63, 0x14, 0x08, 0x14, 0x63,
	0x03, 0x04, 0x78, 0x04, 0x03,
	0x61, 0x59, 0x49, 0x4D, 0x43,
	0x00, 0x7F, 0x41, 0x41, 0x41,
	0x02, 0x04, 0x08, 0x10, 0x20,
	0x00, 0x41, 0x41, 0x41, 0x7F,
	0x04, 0x02, 0x01, 0x02, 0x04,
	0x40, 0x40, 0x40, 0x40, 0x40,
	0x00, 0x03, 0x07, 0x08, 0x00,
	0x20, 0x54, 0x54, 0x78, 0x40,
	0x7F, 0x28, 0x44, 0x44, 0x38,
	0x38, 0x44, 0x44, 0x44, 0x28,
	0x38, 0x44, 0x44, 0x28, 0x7F,
	0x38, 0x54, 0x54, 0x54, 0x18,
	0x00, 0x08, 0x7E, 0x09, 0x02,
	0x18, 0xA4, 0xA4, 0x9C, 0x78,
	0x7F, 0x08, 0x04, 0x04, 0x78,
	0x00, 0x44, 0x7D, 0x40, 0x00,
	0x20, 0x40, 0x40, 0x3D, 0x00,
	0x7F, 0x10, 0x28, 0x44, 0x00,
	0x00, 0x41, 0x7F, 0x40, 0x00,
	0x7C, 0x04, 0x78, 0x04, 0x78,
	0x7C, 0x08, 0x04, 0x04, 0x78,
	0x38, 0x44, 0x44, 0x44, 0x38,
	0xFC, 0x18, 0x24, 0x24, 0x18,
	0x18, 0x24, 0x24, 0x18, 0xFC,
	0x7C, 0x08, 0x04, 0x04, 0x08,
	0x48, 0x54, 0x54, 0x54, 0x24,
	0x04, 0x04, 0x3F, 0x44, 0x24,
	0x3C, 0x40, 0x40, 0x20, 0x7C,
	0x1C, 0x20, 0x40, 0x20, 0x1C,
	0x3C, 0x40, 0x30, 0x40, 0x3C,
	0x44, 0x28, 0x10, 0x28, 0x44,
	0x4C, 0x90, 0x90, 0x90, 0x7C,
	0x44, 0x64, 0x54, 0x4C, 0x44,
	0x00, 0x08, 0x36, 0x41, 0x00,
	0x00, 0x00, 0x77, 0x00, 0x00,
	0x00, 0x41, 0x36, 0x08, 0x00,
	0x02, 0x01, 0x02, 0x04, 0x02,
	0x3C, 0x26, 0x23, 0x26, 0x3C,
	0x1E, 0xA1, 0xA1, 0x61, 0x12,
	0x3A, 0x40, 0x40, 0x20, 0x7A,
	0x38, 0x54, 0x54, 0x55, 0x59,
	0x21, 0x55, 0x55, 0x79, 0x41,
	0x21, 0x54, 0x54, 0x78, 0x41,
	0x21, 0x55, 0x54, 0x78, 0x40,
	0x20, 0x54, 0x55, 0x79, 0x40,
	0x0C, 0x1E, 0x52, 0x72, 0x12,
	0x39, 0x55, 0x55, 0x55, 0x59,
	0x39, 0x54, 0x54, 0x54, 0x59,
	0x39, 0x55, 0x54, 0x54, 0x58,
	0x00, 0x00, 0x45, 0x7C, 0x41,
	0x00, 0x02, 0x45, 0x7D, 0x42,
	0x00, 0x01, 0x45, 0x7C, 0x40,
	0xF0, 0x29, 0x24, 0x29, 0xF0,
	0xF0, 0x28, 0x25, 0x28, 0xF0,
	0x7C, 0x54, 0x55, 0x45, 0x00,
	0x20, 0x54, 0x54, 0x7C, 0x54,
	0x7C, 0x0A, 0x09, 0x7F, 0x49,
	0x32, 0x49, 0x49, 0x49, 0x32,
	0x32, 0x48, 0x48, 0x48, 0x32,
	0x32, 0x4A, 0x48, 0x48, 0x30,
	0x3A, 0x41, 0x41, 0x21, 0x7A,
	0x3A, 0x42, 0x40, 0x20, 0x78,
	0x00, 0x9D, 0xA0, 0xA0, 0x7D,
	0x39, 0x44, 0x44, 0x44, 0x39,
	0x3D, 0x40, 0x40, 0x40, 0x3D,
	0x3C, 0x24, 0xFF, 0x24, 0x24,
	0x48, 0x7E, 0x49, 0x43, 0x66,
	0x2B, 0x2F, 0xFC, 0x2F, 0x2B,
	0xFF, 0x09, 0x29, 0xF6, 0x20,
	0xC0, 0x88, 0x7E, 0x09, 0x03,
	0x20, 0x54, 0x54, 0x79, 0x41,
	0x00, 0x00, 0x44, 0x7D, 0x41,
	0x30, 0x48, 0x48, 0x4A, 0x32,
	0x38, 0x40, 0x40, 0x22, 0x7A,
	0x00, 0x7A, 0x0A, 0x0A, 0x72,
	0x7D, 0x0D, 0x19, 0x31, 0x7D,
	0x26, 0x29, 0x29, 0x2F, 0x28,
	0x26, 0x29, 0x29, 0x29, 0x26,
	0x30, 0x48, 0x4D, 0x40, 0x20,
	0x38, 0x08, 0x08, 0x08, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x38,
	0x2F, 0x10, 0xC8, 0xAC, 0xBA,
	0x2F, 0x10, 0x28, 0x34, 0xFA,
	0x00, 0x00, 0x7B, 0x00, 0x00,
	0x08, 0x14, 0x2A, 0x14, 0x22,
	0x22, 0x14, 0x2A, 0x14, 0x08,
	0xAA, 0x00, 0x55, 0x00, 0xAA,
	0xAA, 0x55, 0xAA, 0x55, 0xAA,
	0x00, 0x00, 0x00, 0xFF, 0x00,
	0x10, 0x10, 0x10, 0xFF, 0x00,
	0x14, 0x14, 0x14, 0xFF, 0x00,
	0x10, 0x10, 0xFF, 0x00, 0xFF,
	0x10, 0x10, 0xF0, 0x10, 0xF0,
	0x14, 0x14, 0x14, 0xFC, 0x00,
	0x14, 0x14, 0xF7, 0x00, 0xFF,
	0x00, 0x00, 0xFF, 0x00, 0xFF,
	0x14, 0x14, 0xF4, 0x04, 0xFC,
	0x14, 0x14, 0x17, 0x10, 0x1F,
	0x10, 0x10, 0x1F, 0x10, 0x1F,
	0x14, 0x14, 0x14, 0x1F, 0x00,
	0x10, 0x10, 0x10, 0xF0, 0x00,
	0x00, 0x00, 0x00, 0x1F, 0x10,
	0x10, 0x10, 0x10, 0x1F, 0x10,
	0x10, 0x10, 0x10, 0xF0, 0x10,
	0x00, 0x00, 0x00, 0xFF, 0x10,
	0x10, 0x10, 0x10, 0x10, 0x10,
	0x10, 0x10, 0x10, 0xFF, 0x10,
	0x00, 0x00, 0x00, 0xFF, 0x14,
	0x00, 0x00, 0xFF, 0x00, 0xFF,
	0x00, 0x00, 0x1F, 0x10, 0x17,
	0x00, 0x00, 0xFC, 0x04, 0xF4,
	0x14, 0x14, 0x17, 0x10, 0x17,
	0x14, 0x14, 0xF4, 0x04, 0xF4,
	0x00, 0x00, 0xFF, 0x00, 0xF7,
	0x14, 0x14, 0x14, 0x14, 0x14,
	0x14, 0x14, 0xF7, 0x00, 0xF7,
	0x14, 0x14, 0x14, 0x17, 0x14,
	0x10, 0x10, 0x1F, 0x10, 0x1F,
	0x14, 0x14, 0x14, 0xF4, 0x14,
	0x10, 0x10, 0xF0, 0x10, 0xF0,
	0x00, 0x00, 0x1F, 0x10, 0x1F,
	0x00, 0x00, 0x00, 0x1F, 0x14,
	0x00, 0x00, 0x00, 0xFC, 0x14,
	0x00, 0x00, 0xF0, 0x10, 0xF0,
	0x10, 0x10, 0xFF, 0x10, 0xFF,
	0x14, 0x14, 0x14, 0xFF, 0x14,
	0x10, 0x10, 0x10, 0x1F, 0x00,
	0x00, 0x00, 0x00, 0xF0, 0x10,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
	0xFF, 0xFF, 0xFF, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFF, 0xFF,
	0x0F, 0x0F, 0x0F, 0x0F, 0x0F,
	0x38, 0x44, 0x44, 0x38, 0x44,
	0x7C, 0x2A, 0x2A, 0x3E, 0x14,
	0x7E, 0x02, 0x02, 0x06, 0x06,
	0x02, 0x7E, 0x02, 0x7E, 0x02,
	0x63, 0x55, 0x49, 0x41, 0x63,
	0x38, 0x44, 0x44, 0x3C, 0x04,
	0x40, 0x7E, 0x20, 0x1E, 0x20,
	0x06, 0x02, 0x7E, 0x02, 0x02,
	0x99, 0xA5, 0xE7, 0xA5, 0x99,
	0x1C, 0x2A, 0x49, 0x2A, 0x1C,
	0x4C, 0x72, 0x01, 0x72, 0x4C,
	0x30, 0x4A, 0x4D, 0x4D, 0x30,
	0x30, 0x48, 0x78, 0x48, 0x30,
	0xBC, 0x62, 0x5A, 0x46, 0x3D,
	0x3E, 0x49, 0x49, 0x49, 0x00,
	0x7E, 0x01, 0x01, 0x01, 0x7E,
	0x2A, 0x2A, 0x2A, 0x2A, 0x2A,
	0x44, 0x44, 0x5F, 0x44, 0x44,
	0x40, 0x51, 0x4A, 0x44, 0x40,
	0x40, 0x44, 0x4A, 0x51, 0x40,
	0x00, 0x00, 0xFF, 0x01, 0x03,
	0xE0, 0x80, 0xFF, 0x00, 0x00,
	0x08, 0x08, 0x6B, 0x6B, 0x08,
	0x36, 0x12, 0x36, 0x24, 0x36,
	0x06, 0x0F, 0x09, 0x0F, 0x06,
	0x00, 0x00, 0x18, 0x18, 0x00,
	0x00, 0x00, 0x10, 0x10, 0x00,
	0x30, 0x40, 0xFF, 0x01, 0x01,
	0x00, 0x1F, 0x01, 0x01, 0x1E,
	0x00, 0x19, 0x1D, 0x17, 0x12,
	0x00, 0x3C, 0x3C, 0x3C, 0x3C,
	0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char font8x16[] = {
	// first row defines - FONTWIDTH, FONTHEIGHT, ASCII START CHAR, TOTAL CHARACTERS, FONT MAP WIDTH HIGH, FONT MAP WIDTH LOW (2,56 meaning 256)
	8,16,32,96,2,56,		
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x0E, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0xD0, 0xBE, 0x90, 0xD0, 0xBE, 0x90, 0x00,
	0x00, 0x1C, 0x62, 0xFF, 0xC2, 0x80, 0x00, 0x00, 0x0C, 0x12, 0x92, 0x4C, 0xB0, 0x88, 0x06, 0x00,
	0x80, 0x7C, 0x62, 0xB2, 0x1C, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x0E, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xE0, 0x18, 0x04, 0x02, 0x02, 0x00, 0x00, 0x00, 0x02, 0x02, 0x04, 0x18, 0xE0, 0x00, 0x00,
	0x00, 0x24, 0x18, 0x7E, 0x18, 0x24, 0x00, 0x00, 0x80, 0x80, 0x80, 0xF0, 0x80, 0x80, 0x80, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x60, 0x18, 0x06, 0x00, 0x00,
	0xF8, 0x04, 0xC2, 0x32, 0x0C, 0xF8, 0x00, 0x00, 0x00, 0x04, 0x04, 0xFE, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x02, 0x82, 0x42, 0x22, 0x1C, 0x00, 0x00, 0x00, 0x02, 0x22, 0x22, 0x22, 0xDC, 0x00, 0x00,
	0xC0, 0xA0, 0x98, 0x84, 0xFE, 0x80, 0x80, 0x00, 0x00, 0x1E, 0x12, 0x12, 0x22, 0xC2, 0x00, 0x00,
	0xF8, 0x44, 0x22, 0x22, 0x22, 0xC0, 0x00, 0x00, 0x00, 0x02, 0x02, 0xC2, 0x32, 0x0A, 0x06, 0x00,
	0x00, 0x8C, 0x52, 0x22, 0x52, 0x8C, 0x00, 0x00, 0x3C, 0x42, 0x42, 0x42, 0x26, 0xF8, 0x00, 0x00,
	0x00, 0x00, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00,
	0x80, 0x80, 0x40, 0x40, 0x20, 0x20, 0x10, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00,
	0x10, 0x20, 0x20, 0x40, 0x40, 0x80, 0x80, 0x00, 0x00, 0x02, 0x82, 0x42, 0x22, 0x1C, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
	0x00, 0x04, 0x04, 0x0F, 0x04, 0x03, 0x00, 0x00, 0x04, 0x02, 0x01, 0x03, 0x04, 0x04, 0x03, 0x00,
	0x03, 0x04, 0x04, 0x04, 0x05, 0x03, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x03, 0x06, 0x08, 0x10, 0x10, 0x00, 0x00, 0x00, 0x10, 0x10, 0x08, 0x06, 0x03, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x16, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x04, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x01, 0x03, 0x04, 0x04, 0x02, 0x01, 0x00, 0x00, 0x00, 0x04, 0x04, 0x07, 0x04, 0x04, 0x00, 0x00,
	0x00, 0x07, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x03, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x03, 0x00, 0x00,
	0x01, 0x02, 0x04, 0x04, 0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x03, 0x04, 0x04, 0x04, 0x03, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x02, 0x01, 0x00, 0x00,
	0x00, 0x00, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x0E, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x01, 0x01, 0x02, 0x02, 0x04, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00,
	0x04, 0x02, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xF8, 0x04, 0x72, 0x8A, 0xFA, 0x84, 0x78, 0x00, 0x00, 0xC0, 0x38, 0x06, 0x38, 0xC0, 0x00, 0x00,
	0x00, 0xFE, 0x22, 0x22, 0x22, 0xDC, 0x00, 0x00, 0xF8, 0x04, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00,
	0xFE, 0x02, 0x02, 0x02, 0x04, 0xF8, 0x00, 0x00, 0x00, 0xFE, 0x22, 0x22, 0x22, 0x22, 0x00, 0x00,
	0x00, 0xFE, 0x22, 0x22, 0x22, 0x22, 0x00, 0x00, 0xF8, 0x04, 0x02, 0x02, 0x22, 0xE2, 0x00, 0x00,
	0xFE, 0x20, 0x20, 0x20, 0x20, 0xFE, 0x00, 0x00, 0x00, 0x02, 0x02, 0xFE, 0x02, 0x02, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x02, 0x02, 0xFE, 0x00, 0x00, 0xFE, 0x40, 0xB0, 0x08, 0x04, 0x02, 0x00, 0x00,
	0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x0C, 0x70, 0x80, 0x70, 0x0C, 0xFE, 0x00,
	0xFE, 0x0C, 0x30, 0xC0, 0x00, 0xFE, 0x00, 0x00, 0xF8, 0x04, 0x02, 0x02, 0x04, 0xF8, 0x00, 0x00,
	0xFE, 0x42, 0x42, 0x42, 0x22, 0x1C, 0x00, 0x00, 0xF8, 0x04, 0x02, 0x02, 0x04, 0xF8, 0x00, 0x00,
	0x00, 0xFE, 0x42, 0x42, 0xA2, 0x1C, 0x00, 0x00, 0x00, 0x1C, 0x22, 0x42, 0x42, 0x80, 0x00, 0x00,
	0x02, 0x02, 0x02, 0xFE, 0x02, 0x02, 0x02, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00,
	0x06, 0x38, 0xC0, 0x00, 0xC0, 0x38, 0x06, 0x00, 0x3E, 0xC0, 0xF0, 0x0E, 0xF0, 0xC0, 0x3E, 0x00,
	0x00, 0x06, 0x98, 0x60, 0x98, 0x06, 0x00, 0x00, 0x00, 0x06, 0x18, 0xE0, 0x18, 0x06, 0x00, 0x00,
	0x02, 0x02, 0xC2, 0x32, 0x0A, 0x06, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x02, 0x02, 0x02, 0x02, 0x00,
	0x00, 0x06, 0x18, 0x60, 0x80, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0xFE, 0x00, 0x00, 0x00,
	0x40, 0x30, 0x0C, 0x0C, 0x30, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x01, 0x02, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x06, 0x01, 0x01, 0x01, 0x01, 0x01, 0x06, 0x00,
	0x00, 0x07, 0x04, 0x04, 0x04, 0x03, 0x00, 0x00, 0x01, 0x02, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00,
	0x07, 0x04, 0x04, 0x04, 0x02, 0x01, 0x00, 0x00, 0x00, 0x07, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00,
	0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0x04, 0x04, 0x07, 0x00, 0x00,
	0x07, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x04, 0x04, 0x07, 0x04, 0x04, 0x00, 0x00,
	0x00, 0x04, 0x04, 0x04, 0x04, 0x03, 0x00, 0x00, 0x07, 0x00, 0x00, 0x01, 0x02, 0x04, 0x00, 0x00,
	0x00, 0x07, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x07, 0x00, 0x00, 0x01, 0x00, 0x00, 0x07, 0x00,
	0x07, 0x00, 0x00, 0x00, 0x03, 0x07, 0x00, 0x00, 0x01, 0x02, 0x04, 0x04, 0x02, 0x01, 0x00, 0x00,
	0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0x0C, 0x12, 0x11, 0x10, 0x00,
	0x00, 0x07, 0x00, 0x00, 0x01, 0x06, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x03, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x04, 0x04, 0x04, 0x03, 0x00, 0x00,
	0x00, 0x00, 0x01, 0x06, 0x01, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00,
	0x00, 0x06, 0x01, 0x00, 0x01, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00,
	0x06, 0x05, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0x00, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00,
	0x00, 0x00, 0x02, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x10, 0x10, 0x10, 0xF0, 0x00, 0x00,
	0x00, 0xFE, 0x20, 0x10, 0x10, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00,
	0x00, 0xE0, 0x10, 0x10, 0x10, 0xFE, 0x00, 0x00, 0x00, 0xE0, 0x90, 0x90, 0x90, 0xE0, 0x00, 0x00,
	0x00, 0x20, 0xFC, 0x22, 0x22, 0x22, 0x02, 0x00, 0x00, 0xE0, 0x10, 0x10, 0x10, 0xF0, 0x00, 0x00,
	0x00, 0xFE, 0x20, 0x10, 0x10, 0xE0, 0x00, 0x00, 0x10, 0x10, 0xF2, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x10, 0x10, 0x10, 0xF2, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x80, 0x40, 0x20, 0x10, 0x00, 0x00,
	0x00, 0x02, 0x02, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x20, 0x10, 0xF0, 0x20, 0x10, 0xF0, 0x00,
	0x00, 0xF0, 0x20, 0x10, 0x10, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x10, 0x10, 0x10, 0xE0, 0x00, 0x00,
	0x00, 0xF0, 0x20, 0x10, 0x10, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x10, 0x10, 0x10, 0xF0, 0x00, 0x00,
	0x00, 0xF0, 0x20, 0x10, 0x10, 0x70, 0x00, 0x00, 0x00, 0x60, 0x90, 0x90, 0x90, 0x20, 0x00, 0x00,
	0x00, 0x20, 0x20, 0xFC, 0x20, 0x20, 0x20, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00,
	0x00, 0x70, 0x80, 0x00, 0x80, 0x70, 0x00, 0x00, 0xF0, 0x00, 0xC0, 0x30, 0xC0, 0x00, 0xF0, 0x00,
	0x00, 0x30, 0xC0, 0xC0, 0x30, 0x00, 0x00, 0x00, 0x00, 0x30, 0xC0, 0x00, 0x80, 0x70, 0x00, 0x00,
	0x00, 0x10, 0x10, 0x90, 0x50, 0x30, 0x00, 0x00, 0x00, 0x80, 0x80, 0x7E, 0x02, 0x02, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x7E, 0x80, 0x80, 0x00, 0x00,
	0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x04, 0x02, 0x07, 0x00, 0x00,
	0x00, 0x07, 0x04, 0x04, 0x04, 0x03, 0x00, 0x00, 0x00, 0x03, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00,
	0x00, 0x03, 0x04, 0x04, 0x02, 0x07, 0x00, 0x00, 0x00, 0x03, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00,
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0x24, 0x24, 0x22, 0x1F, 0x00, 0x00,
	0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x07, 0x04, 0x04, 0x00, 0x00, 0x00,
	0x20, 0x20, 0x20, 0x20, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x01, 0x02, 0x04, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x07, 0x04, 0x04, 0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0x00,
	0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x04, 0x04, 0x04, 0x03, 0x00, 0x00,
	0x00, 0x3F, 0x04, 0x04, 0x04, 0x03, 0x00, 0x00, 0x00, 0x03, 0x04, 0x04, 0x02, 0x3F, 0x00, 0x00,
	0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x04, 0x04, 0x04, 0x03, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x03, 0x04, 0x04, 0x04, 0x00, 0x00, 0x03, 0x04, 0x04, 0x02, 0x07, 0x00, 0x00,
	0x00, 0x00, 0x03, 0x04, 0x03, 0x00, 0x00, 0x00, 0x01, 0x06, 0x01, 0x00, 0x01, 0x06, 0x01, 0x00,
	0x00, 0x06, 0x01, 0x01, 0x06, 0x00, 0x00, 0x00, 0x20, 0x20, 0x31, 0x0E, 0x03, 0x00, 0x00, 0x00,
	0x00, 0x06, 0x05, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x10, 0x10, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x1F, 0x00, 0x00, 0x00, 0x00,
	0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char sevensegment [] = {
	// first row defines - FONTWIDTH, FONTHEIGHT, ASCII START CHAR, TOTAL CHARACTERS, FONT MAP WIDTH HIGH, FONT MAP WIDTH LOW (2,56 meaning 256)
	10,16,46,12,1,20,		
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x78, 0xFC, 0x02, 0x03, 0x03, 0x03, 0x03, 0x02, 0xFC, 0x78, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x7E, 0x00, 0x00, 0x02, 0x83, 0x83, 0x83, 0x83, 0x02,
	0xFC, 0x78, 0x00, 0x00, 0x02, 0x83, 0x83, 0x83, 0x83, 0x02, 0xFC, 0x78, 0x7E, 0xFF, 0x00, 0x80,
	0x80, 0x80, 0x80, 0x00, 0xFF, 0x7E, 0x78, 0xFC, 0x02, 0x83, 0x83, 0x83, 0x83, 0x02, 0x00, 0x00,
	0x78, 0xFC, 0x02, 0x83, 0x83, 0x83, 0x83, 0x02, 0x00, 0x00, 0x00, 0x02, 0x03, 0x03, 0x03, 0x03,
	0x03, 0x02, 0xFC, 0x78, 0x78, 0xFC, 0x02, 0x83, 0x83, 0x83, 0x83, 0x02, 0xFC, 0x78, 0x78, 0xFC,
	0x02, 0x83, 0x83, 0x83, 0x83, 0x02, 0xFC, 0x78, 0x00, 0x00, 0x00, 0x60, 0xF0, 0xF0, 0x60, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x3F, 0x40, 0xC0,
	0xC0, 0xC0, 0xC0, 0x40, 0x3F, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x7E,
	0x1C, 0x3E, 0x41, 0xC1, 0xC1, 0xC1, 0xC1, 0x41, 0x00, 0x00, 0x00, 0x00, 0x41, 0xC1, 0xC1, 0xC1,
	0xC1, 0x41, 0x3E, 0x1C, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xFF, 0x7E, 0x00, 0x00,
	0x41, 0xC1, 0xC1, 0xC1, 0xC1, 0x41, 0x3E, 0x1C, 0x1C, 0x3E, 0x41, 0xC1, 0xC1, 0xC1, 0xC1, 0x41,
	0x3E, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x7E, 0x1C, 0x3E, 0x41, 0xC1,
	0xC1, 0xC1, 0xC1, 0x41, 0x3E, 0x1C, 0x00, 0x00, 0x41, 0xC1, 0xC1, 0xC1, 0xC1, 0x41, 0x3E, 0x1C
};

static const unsigned char fontlargenumber[] = {
	// first row defines - FONTWIDTH, FONTHEIGHT, ASCII START CHAR, TOTAL CHARACTERS, FONT MAP WIDTH HIGH, FONT MAP WIDTH LOW (2,56 meaning 256)
	12,48,48,11,1,32,
	0x00, 0xC0, 0xF8, 0x7C, 0x3E, 0x3E, 0xFC, 0xF8, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0,
	0x78, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x7C, 0x3C, 0x3E, 0x3E, 0xFE, 0xFC,
	0xE0, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x3E, 0x3E, 0x3E, 0xFE, 0xF8, 0xC0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0x3E,
	0x3E, 0x3E, 0x3E, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xF0, 0xFC, 0x3E, 0x3E, 0x3E,
	0xFC, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0xFE, 0xFE, 0x00, 0x00,
	0x00, 0x00, 0xC0, 0xF8, 0xFE, 0x3E, 0x7E, 0xFC, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFC,
	0x7E, 0x3E, 0xFE, 0xF8, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xE0, 0xC0, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0xF9, 0xFF, 0xFF, 0xF0, 0x00, 0x00,
	0x00, 0x00, 0x07, 0x03, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0x1F, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0x3F,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFC,
	0x7F, 0x03, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00,
	0x00, 0xFE, 0xFF, 0x03, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x3F, 0x7F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xE0, 0xFF, 0x1F, 0x00,
	0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFE, 0x1F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8,
	0xFC, 0xFF, 0xC7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFE, 0x3F, 0x03, 0x00, 0xFF, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3E, 0x7E, 0xFC, 0xF8, 0xE0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFF, 0xFF, 0x80, 0xF0, 0x7C, 0x7C, 0xF8, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x80, 0xF8, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x9F, 0xFF, 0xF8, 0xFE, 0x1F,
	0x01, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xC0, 0xFC,
	0x7F, 0x03, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFE, 0x0F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0xE7, 0xE0,
	0xE0, 0xE0, 0xFF, 0xFF, 0xE0, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF,
	0xFE, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xF0, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFC, 0x3F,
	0x03, 0x03, 0x1F, 0xFF, 0xFC, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x3E, 0x3E, 0x0F, 0x01,
	0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x07, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFE, 0x0F, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0x7F, 0x00, 0x00, 0x00,
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xFF, 0xFF, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xC0, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x80,
	0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x80, 0xFC, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1F, 0x3F, 0x7C, 0x7C, 0x3F, 0x1F, 0x03, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x7C, 0x7C, 0x7C, 0x7F, 0x7F, 0x7C, 0x7C, 0x7C, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x7C,
	0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x7E, 0x7C, 0x7C, 0x7E, 0x1F, 0x07,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x1F, 0x3E, 0x7C, 0x7C, 0x3E, 0x1F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1F,
	0x7F, 0x7C, 0x7C, 0x3F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x1F, 0x3F, 0x7E, 0x7C, 0x7E, 0x3F, 0x1F, 0x01, 0x00, 0x00,
	0x00, 0x00, 0x3E, 0x7C, 0x7C, 0x7E, 0x3F, 0x0F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

#endif