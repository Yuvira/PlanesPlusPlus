//Include
#include "plane.h"

//List constructor / deconstructor
PlaneList::PlaneList() {
	pList.push_back(Plane("res/planes/BEARCLAW-P.txt"));
	pList.push_back(Plane("res/planes/BEARCLAW-C.txt"));
	pList.push_back(Plane("res/planes/GRIFFON-P.txt"));
	pList.push_back(Plane("res/planes/GRIFFON-C.txt"));
	pList.push_back(Plane("res/planes/SUPERGOPHER-P.txt"));
	pList.push_back(Plane("res/planes/SUPERGOPHER-C.txt"));
	pList.push_back(Plane("res/planes/NAVIGATOR-P.txt"));
	pList.push_back(Plane("res/planes/NAVIGATOR-C.txt"));
	pList.push_back(Plane("res/planes/NAVIGATOR-M.txt"));
	pList.push_back(Plane("res/planes/WALLABY-P.txt"));
	pList.push_back(Plane("res/planes/WALLABY-C.txt"));
	pList.push_back(Plane("res/planes/WALLABY-M.txt"));
	pList.push_back(Plane("res/planes/AIRVAN-P.txt"));
	pList.push_back(Plane("res/planes/AIRVAN-C.txt"));
	pList.push_back(Plane("res/planes/AIRVAN-M.txt"));
	pList.push_back(Plane("res/planes/ANAN-P.txt"));
	pList.push_back(Plane("res/planes/ANAN-C.txt"));
	pList.push_back(Plane("res/planes/ANAN-M.txt"));
	pList.push_back(Plane("res/planes/MOHAWK-P.txt"));
	pList.push_back(Plane("res/planes/MOHAWK-C.txt"));
	pList.push_back(Plane("res/planes/MOHAWK-M.txt"));
	pList.push_back(Plane("res/planes/KANGAROO-P.txt"));
	pList.push_back(Plane("res/planes/KANGAROO-C.txt"));
	pList.push_back(Plane("res/planes/KANGAROO-M.txt"));
	pList.push_back(Plane("res/planes/EQUINOX-P.txt"));
	pList.push_back(Plane("res/planes/EQUINOX-C.txt"));
	pList.push_back(Plane("res/planes/EQUINOX-M.txt"));
	pList.push_back(Plane("res/planes/BIRCHCRAFT-P.txt"));
	pList.push_back(Plane("res/planes/BIRCHCRAFT-C.txt"));
	pList.push_back(Plane("res/planes/BIRCHCRAFT-M.txt"));
	pList.push_back(Plane("res/planes/PEARJET-P.txt"));
	pList.push_back(Plane("res/planes/PEARJET-C.txt"));
	pList.push_back(Plane("res/planes/PEARJET-M.txt"));
	pList.push_back(Plane("res/planes/AEROEAGLE-P.txt"));
	pList.push_back(Plane("res/planes/AEROEAGLE-C.txt"));
	pList.push_back(Plane("res/planes/AEROEAGLE-M.txt"));
	pList.push_back(Plane("res/planes/FOGBUSTER-P.txt"));
	pList.push_back(Plane("res/planes/FOGBUSTER-C.txt"));
	pList.push_back(Plane("res/planes/FOGBUSTER-M.txt"));
	pList.push_back(Plane("res/planes/TETRA-P.txt"));
	pList.push_back(Plane("res/planes/TETRA-C.txt"));
	pList.push_back(Plane("res/planes/TETRA-M.txt"));
	pList.push_back(Plane("res/planes/SEQUOIA-P.txt"));
	pList.push_back(Plane("res/planes/SEQUOIA-C.txt"));
	pList.push_back(Plane("res/planes/SEQUOIA-M.txt"));
	pList.push_back(Plane("res/planes/CYCLONE-P.txt"));
	pList.push_back(Plane("res/planes/CYCLONE-C.txt"));
	pList.push_back(Plane("res/planes/CYCLONE-M.txt"));
	pList.push_back(Plane("res/planes/CLOUDLINER-P.txt"));
	pList.push_back(Plane("res/planes/CLOUDLINER-C.txt"));
	pList.push_back(Plane("res/planes/CLOUDLINER-M.txt"));
}
PlaneList::~PlaneList() {}