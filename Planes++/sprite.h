//Defines
#ifndef __SPRITE_H__
#define __SPRITE_H__

//Include
#include <string>
#include <fstream>
#include <vector>
#include <windows.h>

//Color enum
enum eColor {
	COLOR_BLACK = 0,
	COLOR_RED = FOREGROUND_RED,
	COLOR_GREEN = FOREGROUND_GREEN,
	COLOR_BLUE = FOREGROUND_BLUE,
	COLOR_YELLOW = FOREGROUND_RED | FOREGROUND_GREEN,
	COLOR_PURPLE = FOREGROUND_RED | FOREGROUND_BLUE,
	COLOR_AQUA = FOREGROUND_GREEN | FOREGROUND_BLUE,
	COLOR_WHITE = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE,
	COLOR_GRAY = FOREGROUND_INTENSITY,
	COLOR_LTRED = FOREGROUND_RED | FOREGROUND_INTENSITY,
	COLOR_LTGREEN = FOREGROUND_GREEN | FOREGROUND_INTENSITY,
	COLOR_LTBLUE = FOREGROUND_BLUE | FOREGROUND_INTENSITY,
	COLOR_LTYELLOW = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY,
	COLOR_LTPURPLE = FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY,
	COLOR_LTAQUA = FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY,
	COLOR_LTWHITE = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY
};

//Sprite class
class Sprite {
public:
	Sprite(int = 1, int = 1);
	~Sprite();
	void createFromFile(std::string filename);
	void createFromCharData(std::vector<std::vector<char>> cd, eColor c1, eColor c2, eColor c3);
	void createFromString(std::string s, bool = false);
	void clear(char c);
	void setCol(eColor col);
	int width, height;
	std::vector<CHAR_INFO> buffer;
};

//Color class
class Color {
public:

};

#endif