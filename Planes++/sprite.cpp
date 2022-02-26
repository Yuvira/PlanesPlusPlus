//Include
#include "sprite.h"

//Sprite constructor / destructor
Sprite::Sprite(int sx, int sy) {
	pos.X = 0;
	pos.Y = 0;
	aniPos.X = 0;
	aniPos.Y = 0;
	spriteSize.X = sx;
	spriteSize.Y = sy;
	size = sx * sy;
	buffer = new CHAR_INFO[size];
	clear(' ');
}
Sprite::~Sprite() { }

//Clear sprite
void Sprite::clear(char c) {
	for (int a = 0; a < size; ++a) {
		buffer[a].Char.AsciiChar = c;
		buffer[a].Attributes = COLOR_LTWHITE;
	}
}

//Resize sprite
void Sprite::resize(int sx, int sy) {
	spriteSize.X = sx;
	spriteSize.Y = sy;
	size = sx * sy;
	buffer = new CHAR_INFO[size];
	clear(' ');
}

//Set color
void Sprite::setCol(eColor col) {
	for (int a = 0; a < size; ++a) {
		buffer[a].Attributes = col;
	}
}

//Generate sprite from text file
void Sprite::createFromFile(std::string filename) {
	std::ifstream file(filename);
	if (file.is_open()) {
		int sx = 0;
		int sy = 0;
		std::string in = "";
		for (std::string line; std::getline(file, line); ) {
			in += line; 
			sx = line.length();
			++sy;
		}
		spriteSize.X = sx;
		spriteSize.Y = sy;
		size = in.length();
		buffer = new CHAR_INFO[size];
		for (int a = 0; a < size; ++a) {
			buffer[a].Char.AsciiChar = in[a];
			buffer[a].Attributes = COLOR_LTWHITE;
		}
		file.close();
	}
}

//Generate sprite from dataset
void Sprite::createFromCharData(std::vector<std::vector<char>> cd, eColor c1, eColor c2, eColor c3) {
	if (cd.size() > 0 && cd[0].size() > 0) {
		spriteSize.Y = cd.size() / 2;
		spriteSize.X = cd[0].size();
		size = spriteSize.X * spriteSize.Y;
		buffer = new CHAR_INFO[size];
		for (int a = 0; a < cd.size(); a += 2) {
			for (int b = 0; b < cd[0].size(); ++b) {
				buffer[((a / 2) * spriteSize.X) + b].Char.AsciiChar = 'ß';
				int col = 0;
				if (cd[a][b] == '1') { col = COLOR_GRAY; }
				else if (cd[a][b] == '2') { col = c1; }
				else if (cd[a][b] == '3') { col = c2; }
				else if (cd[a][b] == '4') { col = c3; }
				if (cd[a + 1][b] == '1') { col += COLOR_GRAY << 4; }
				else if (cd[a + 1][b] == '2') { col += c1 << 4; }
				else if (cd[a + 1][b] == '3') { col += c2 << 4; }
				else if (cd[a + 1][b] == '4') { col += c3 << 4; }
				buffer[((a / 2) * spriteSize.X) + b].Attributes = col;
			}
		}
	}
	else { resize(1, 1); }
}

//Generate text sprite from string
void Sprite::createFromString(std::string s, bool vertical) {
	size = s.length();
	if (vertical) {
		spriteSize.X = 1;
		spriteSize.Y = size;
	}
	else {
		spriteSize.X = size;
		spriteSize.Y = 1;
	}
	buffer = new CHAR_INFO[size];
	for (int a = 0; a < size; ++a) {
		buffer[a].Char.AsciiChar = s[a];
		buffer[a].Attributes = COLOR_LTWHITE;
	}
}