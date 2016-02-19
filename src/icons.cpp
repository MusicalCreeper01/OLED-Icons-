/*
 * icons.cpp
 *
 *  Created on: Feb 15, 2016
 *      Author: Keith Mitchell
 */

#include "icons.h"

#include <iostream>
#include <sstream>



using namespace std;

template <typename T>
  T icons_StringToNumber ( const string &Text )
  {
     std::istringstream ss(Text);
     T result;
     return ss >> result ? result : 0;
  }


void DrawIcon(edOLED oled, Icon icon, int xpos, int ypos){
	//cout << "Drawing icon..." << '\n';
	std::string iconValue = icon_types[icon];
	int sizeDigetsx = icons_StringToNumber<int>(iconValue.substr(0,1));
	int sizeDigetsy = icons_StringToNumber<int>(iconValue.substr(1,1));
	int width = icons_StringToNumber<int>(iconValue.substr(2,sizeDigetsx));
	int height = icons_StringToNumber<int>(iconValue.substr(sizeDigetsx+2,sizeDigetsy));

	//cout << "Height " << height << " Width " << width << " Data " << iconValue.substr(sizeDigetsx+sizeDigetsy+2, width*height) << '\n';

	for(int y = 0; y < height; ++y){
		std::string line = iconValue.substr(((sizeDigetsx+sizeDigetsy+2)+(y*width)), width);
		//cout << "Line: " << line <<'\n';
		for(int x = 0; x < width; ++x){
			int populated = icons_StringToNumber<int>(line.substr(x, 1));
			//cout << icons_StringToNumber<int>(line.substr(x, 1));
			if (populated == 1)
				oled.pixel(xpos+x, ypos+y);

		}
	}
	//cout << '\n';
}
