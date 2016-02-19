# OLED-Icons-
A library of icons for Sparkfun's OLED displays. Specifically created for use with https://www.sparkfun.com/products/13035

#Usage

Include the icons header file at the top of your source file 
`#include "icons.h"`
Then draw a icon by passing the DrawIcon() funtion your instace of the OLED screen, the icon (Icon::<icon name>), and the x and y position.
e.g `DrawIcon(oled, Icon::beacon, 0,0);`

All icons are at most 7 pixels high, so they work well inline with the default font in the SparkFun OLED libraries  

#Credits 

The contents of the sparkfun folder is created by Sparkfun, with a few modifications by me to fix some errors.

Original libraries from Sparkfun can be found here: https://github.com/sparkfun/Edison_OLED_Block/tree/master/Firmware/pong
