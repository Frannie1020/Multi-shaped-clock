#pragma once
#include "clock.h"
#include"Shape.h"
class GLASS :
	public Clock, public CShape
{
public:
	GLASS(int x, int y, int width, int height);
	GLASS(int x, int y, int width, int height, int h, int m, int s);
	~GLASS(void);
	void Draw();
};

