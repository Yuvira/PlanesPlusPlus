//Defines
#ifndef __PLANE_H__
#define __PLANE_H__

//Include
#include "renderer.h"

//Plane class
class Plane {
public:
	Plane(std::string filename);
	~Plane();
	std::vector<std::vector<char>> spriteData;
};

//PlaneList class
class PlaneList {
public:
	PlaneList();
	~PlaneList();
	std::vector<Plane> pList;
};

#endif