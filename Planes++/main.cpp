//Include
#include <ctime>
#include <iostream>
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
	s.createFromCharData(pl.pList[1].spriteData, COLOR_RED, COLOR_GREEN, COLOR_BLUE);
	rm.cls();
	rm.render(s);
	rm.swapBuffer();

	//End
	system("pause >nul");
	return 0;

}