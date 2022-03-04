//Include
#include "sprite.h"

//Sprite constructor / destructor
Sprite::Sprite(int sx, int sy) {
	width = sx;
	height = sy;
	for (int a = 0; a < (width * height); ++a) { buffer.push_back(CHAR_INFO()); }
	clear(' ');
}
Sprite::~Sprite() { }

//Generate sprite from text file
void Sprite::createFromFile(std::string filename) {
	std::ifstream file(filename);
	if (file.is_open()) {
		width = 0;
		height = 0;
		std::string in = "";
		for (std::string line; std::getline(file, line); ) {
			in += line; 
			width = line.length();
			++height;
		}
		buffer.clear();
		for (int a = 0; a < (width * height); ++a) {
			buffer.push_back(CHAR_INFO());
			buffer[a].Char.AsciiChar = in[a];
			buffer[a].Attributes = COLOR_LTWHITE;
		}
		file.close();
	}
}

//Generate sprite from dataset
void Sprite::createFromCharData(std::vector<std::vector<char>> cd, eColor c1, eColor c2, eColor c3) {
	if (cd.size() > 0 && cd[0].size() > 0) {
		width = cd[0].size();
		height = cd.size() / 2;
		buffer.clear();
		for (int a = 0; a < (width * height); ++a) { buffer.push_back(CHAR_INFO()); }
		for (int a = 0; a < cd.size(); a += 2) {
			for (int b = 0; b < cd[0].size(); ++b) {
				buffer[((a / 2) * width) + b].Char.AsciiChar = 'ß';
				int col = 0;
				if (cd[a][b] == '1') { col = COLOR_GRAY; }
				else if (cd[a][b] == '2') { col = c1; }
				else if (cd[a][b] == '3') { col = c2; }
				else if (cd[a][b] == '4') { col = c3; }
				if (cd[a + 1][b] == '1') { col += COLOR_GRAY << 4; }
				else if (cd[a + 1][b] == '2') { col += c1 << 4; }
				else if (cd[a + 1][b] == '3') { col += c2 << 4; }
				else if (cd[a + 1][b] == '4') { col += c3 << 4; }
				buffer[((a / 2) * width) + b].Attributes = col;
			}
		}
	}
	else { 
		width = 1;
		height = 1;
		buffer.clear();
		buffer.push_back(CHAR_INFO());
		buffer[0].Char.AsciiChar = '!';
		buffer[0].Attributes = COLOR_LTWHITE;
	}
}

//Generate text sprite from string
void Sprite::createFromString(std::string s, bool vertical) {
	if (vertical) {
		width = 1;
		height = s.length();
	}
	else {
		width = s.length();
		height = 1;
	}
	buffer.clear();
	for (int a = 0; a < s.length(); ++a) {
		buffer.push_back(CHAR_INFO());
		buffer[a].Char.AsciiChar = s[a];
		buffer[a].Attributes = COLOR_LTWHITE;
	}
}

//Clear sprite
void Sprite::clear(char c) {
	for (int a = 0; a < buffer.size(); ++a) {
		buffer[a].Char.AsciiChar = c;
		buffer[a].Attributes = COLOR_LTWHITE;
	}
}

//Set color
void Sprite::setCol(eColor col) {
	for (int a = 0; a < buffer.size(); ++a) {
		buffer[a].Attributes = col;
	}
}