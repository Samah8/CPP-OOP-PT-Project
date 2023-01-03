#ifndef CRECTANGLE_H
#define CRECTANGLE_H

#include "CFigure.h"

class CRectangle : public CFigure
{
private:
	Point TopLeftCorner;
	Point BotRightCorner;
public:
	CRectangle(Point P1,Point P2, GfxInfo FigureGfxInfo);
	virtual void DrawMe(GUI* pOut) const;
	virtual bool InPoint(int x, int y);

};

#endif