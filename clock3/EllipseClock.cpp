#include "EllipseClock.h"
#include "acllib.h"
#include "math.h"
# define DIAL_RADIUS 90
# define PI 3.141592953
EllipseClock::EllipseClock(int x,int y,int width,int height):Clock(),CShape(x,y,width,height)
{
	
}
EllipseClock::EllipseClock(int x,int y,int width,int height,int h,int m,int s):Clock(h,m,s),CShape(x,y,width,height)
{
}

EllipseClock::~EllipseClock(void)
{
}
void EllipseClock::Draw()
{
	int h,m,s;
	int x,y,width,height;
	GetShapeData(x,y,width,height);
	int ox =x+ width/2;//150;
	int oy =y+ height/2;//150;

	int min=width<height?width:height;
	int hl = min/4-min/7;//46;
	int ml = min/3-min/6;//74;
	int sl = min/2-min/5;//120;
	int r_dial = DIAL_RADIUS;
	int r = (double)r_dial / 15, r2 = (double)r_dial / 25;
	
	int i;
	
	GetTime (h,m,s);

	// circle
	setPenWidth(2);
	setPenColor(RGB(231, 61, 105));
	setBrushColor(RGB(255,227,132));
	ellipse(x, y, x +0.5*width, y +0.5*height);
	setPenColor(RGB(231, 61, 105));
	setBrushColor(RGB(189,252,201));
	ellipse(x+150, y, x + 0.5*width, y + 0.5*height);
	setPenColor(RGB(231, 61, 105));
	setBrushColor(RGB(176,48,96));
	ellipse(x, y+150, x + 0.5*width, y + 0.5*height);
	setPenColor(RGB(231, 61, 105));
	setBrushColor(RGB(218,112,214));
	ellipse(x+150, y + 150, x + 0.5*width, y + 0.5*height);
    setPenColor(RGB(0, 138, 212));
	setBrushColor(RGB(252,230,201));
	ellipse(x, y, x + width, y + height);
	// label
	setBrushColor(RGB(231, 61, 105));
	setPenColor(RGB(231, 61, 105));
	for (int j = 0; j < 12; j++)
	{
		if (!(j % 3))
		{
			x = -r_dial * sin((double)j * 30 / 180 * PI) + ox;
			y = r_dial * cos((double)j * 30 / 180 * PI) + oy;
			ellipse(x - 0.5*r, y - 0.5*r, x + r, y + r);
		}
	}
	// Ð¡¿Ì¶È
	setBrushColor(RGB(111, 111, 222));
	setPenColor(RGB(111, 111, 222));
	for (int j = 0; j < 12; j++)
	{
		if (j % 3)
		{
			x = -r_dial * sin((double)j * 30 / 180 * PI) + ox;
			y = r_dial * cos((double)j * 30 / 180 * PI) + oy;
			ellipse(x - r2, y - r2, x + r2, y + r2);
		}
	}
	/*
	setPenWidth(1);
	setPenColor(BLACK);
	int len1=min/2-min/8,len2=len1+10;
	for(i=0;i<12;++i)
	{
		moveTo(ox+len1*sin(RAD(180-i*30)),oy+len1*cos(RAD(180-i*30)));
		lineTo(ox+len2*sin(RAD(180-i*30)),oy+len2*cos(RAD(180-i*30)));
	}
	*/
	// hour
	setPenWidth(8);
	setPenColor(RGB(138,54,15));
	moveTo(ox,oy);
	lineTo(ox+hl*sin(RAD(180-h*30)),oy+hl*cos(RAD(180-h*30)));

	// minute
	setPenWidth(4);
	setPenColor(RGB(255,125,64));
	moveTo(ox,oy);
	lineTo(ox+ml*sin(RAD(180-m*6)),oy+ml*cos(RAD(180-m*6)));

	// second
	setPenWidth(2);
	setPenColor(RGB(188,143,143));
	moveTo(ox,oy);
	lineTo(ox+sl*sin(RAD(180-s*6)),oy+sl*cos(RAD(180-s*6)));

//	endPaint();
}
