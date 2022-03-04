//Include
#include <ctime>
#include <iostream>
#include <conio.h>
#include "plane.h"

//Main
int main() {

	//Setup
	system("title Planes++");
	system("mode 250,75");
	srand(time(NULL));

	//Create list
	Renderer rm;
	PlaneList pl;
	Sprite s;
	int idx = 0;

	//Loop
	while (true) {

		//Create and draw sprite
		s.createFromCharData(pl.pList[idx].spriteData, COLOR_RED, COLOR_GREEN, COLOR_BLUE);
		rm.cls();
		rm.render(s);
		rm.swapBuffer();

		//Get input to swap
		int asciiVal = _getch();
		if (asciiVal == 97 || asciiVal == 65) { --idx; }       //A
		else if (asciiVal == 100 || asciiVal == 68) { ++idx; } //D
		idx = (idx + pl.pList.size()) % pl.pList.size();

	}

	//End
	return 0;

}