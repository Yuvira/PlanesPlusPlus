//Include
#include "plane.h"

//List constructor / deconstructor
PlaneList::PlaneList() {
	pList.push_back(Plane("res/planes/BEARCLAW-C.txt"));
	pList.push_back(Plane("res/planes/BEARCLAW-P.txt"));
}
PlaneList::~PlaneList() {}