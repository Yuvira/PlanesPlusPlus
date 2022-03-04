//Include
#include "plane.h"

//Contructor and destructor
Plane::Plane(std::string filename) {
	std::ifstream file(filename);
	if (file.is_open()) {
		for (std::string line; std::getline(file, line); ) {
			spriteData.push_back(std::vector<char>());
			for (int a = 0; a < line.length(); ++a) {
				spriteData[spriteData.size() - 1].push_back(line[a]);
			}
		}
		file.close();
	}
	else { MessageBox(NULL, ("File \"" + filename + "\" couldn't be opened!").c_str(), "File Error", MB_OK); }
}
Plane::~Plane() {}