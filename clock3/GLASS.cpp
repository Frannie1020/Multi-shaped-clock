#include "GLASS.h"
#include "acllib.h"
#include "math.h"

GLASS::GLASS(int x, int y, int width, int height) :Clock(), CShape(x, y, width, height)
{
}
GLASS::GLASS(int x, int y, int width, int height,int h, int m, int s) : Clock(h, m, s), CShape(x, y, width, height)
{
}

GLASS::~GLASS(void)
{
}

void GLASS::Draw()
{
	int h, m, s;
	int x, y, width, height;
	GetShapeData(x, y, width, height);
	int ox = x + width / 2;//150;
	int oy = y + height / 2;//150;

	int min = width < height ? width : height;
	int hl = min / 4 - min / 7;//46;
	int ml = min / 3 - min / 6;//74;
	int sl = min / 2 - min / 5;//120;
	int i;
	GetTime(h, m, s);
	// circle
	setPenWidth(2);
	setPenColor(BLACK);
	setBrushColor(WHITE);
	GLASS(x, y, x + 0.5*width, y + 0.5*height);
	// label
	setPenWidth(1);
	setPenColor(WHITE);
	int len1 = min / 2 - min / 8, len2 = len1 + 10;
	for (i = 0; i<12; ++i)
	{
		moveTo(ox + len1*sin(RAD(180 - i * 30)), oy + len1*cos(RAD(180 - i * 30)));
		lineTo(ox + len2*sin(RAD(180 - i * 30)), oy + len2*cos(RAD(180 - i * 30)));
	}
	
	// hour
	setPenWidth(8);
	setPenColor(WHITE);
	moveTo(ox, oy);
	lineTo(ox + hl*sin(RAD(180 - h * 30)), oy + hl*cos(RAD(180 - h * 30)));

	// minute
	setPenWidth(4);
	setPenColor(WHITE);
	moveTo(ox, oy);
	lineTo(ox + ml*sin(RAD(180 - m * 6)), oy + ml*cos(RAD(180 - m * 6)));

	// second
	setPenWidth(2);
	setPenColor(WHITE);
	moveTo(ox, oy);
	lineTo(ox + sl*sin(RAD(180 - s * 6)), oy + sl*cos(RAD(180 - s * 6)));

	//	endPaint();
}
