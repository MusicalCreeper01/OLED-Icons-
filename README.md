# OLED-Icons
A library of icons for Sparkfun's OLED displays. Specifically created for use with https://www.sparkfun.com/products/13035

#Usage

Include the icons header file at the top of your source file 
`#include "icons.h"`
Then draw a icon by passing the DrawIcon() funtion your instace of the OLED screen, the icon (Icon::<icon name>), and the x and y position.
e.g `DrawIcon(oled, Icon::beacon, 0,0);`

All icons are at most 7 pixels high, so they work well inline with the default font in the SparkFun OLED libraries  

#Icons
All the icons can be found in the Icons.h header file, I will be adding more soon (and hopfully some contributers will as-well)
```
Icon::locked    - A locked padlock
Icon::unlocked  - An unlocked padlock
Icon::key       - A key
Icon::wifi      - A Wifi/Wireless symbol
Icon:wifimed    - A WiFi/Wireless symbol at medium strength
Icon:wifilow    - A WiFi/Wireless symbol at low strength
Icon:beacon     - A sort of wireless/cell tower beacon
Icon::house     - A basic house
Icon::chainlink - A chain link.. a useful link symbol as you can imagine 
```
#Adding your own Icons
To add you own icon, you need to add the icon data to the icon_types array, and the name in the same array index as the icon_types data in the Icon enum.

The icons data is as follows:
```
1st digit: Number of digets used for defining the width. eg. a width of 5 would have a digit of 1, a width of 300 would be a digit of 3
2nd digit: Number of digets used for defining the height. eg. a height of 5 would have a digit of 1, a height of 300 would be a digit of 3
3ed digit(s): The width of the icon
4th digit(s): The height of the icon
Rest of digits: All the icon data row by row from the top left
```
#Custom Icon Example:

The icon for a 7x7 diagonal line would look something like this:
```1000000
0100000
0010000
0001000
0000100
0000010
0000001
```

7 is the height and width, and since 7 only has one digit, the first two digits would be 1, followed by the width and height:

`1177`

Now to add the icon, we just remove the linebreaks:

`1000000010000000100000001000000010000000100000001`

And then add them after the width and height digits:

`11771000000010000000100000001000000010000000100000001`

That is what you need to add into the icon_types array as a std::string. 

#Credits 

The contents of the sparkfun folder is created by Sparkfun, with a few modifications by me to fix some errors.

Original libraries from Sparkfun can be found here: https://github.com/sparkfun/Edison_OLED_Block/tree/master/Firmware/pong
