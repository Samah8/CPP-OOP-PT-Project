#ifndef CTRIANGLE_H
#define CTRIANGLE_H

#include "CFigure.h"

class CTriangle : public CFigure
{
private:
	Point Top,BotLeft,BotRight;
public:
	CTriangle(Point P1,Point P2,Point P3, GfxInfo FigureGfxInfo);
	virtual void DrawMe(GUI* pOut) const;
	virtual bool InPoint(int x, int y);
	float AreaTriangle(float, float, float, float, float, float);
};

#endif