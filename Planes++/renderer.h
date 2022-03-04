//Defines
#ifndef __RENDERER_H__
#define __RENDERER_H__

//Include
#include "sprite.h"

//Renderer class
class Renderer {
public:
	Renderer();
	~Renderer();
	void swapBuffer();
	void render(Sprite s, int x, int y);
	void cls();
private:
	HANDLE frameBuffer[2];
	bool currentBuffer;
	COORD startPos;
};

#endif