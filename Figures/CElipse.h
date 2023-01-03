#ifndef CELIPSE_H
#define CELIPSE_H

#include "CFigure.h"

class CElipse : public CFigure
{
private:
	Point firstPoint;
	Point secondPoint;
public:
	CElipse(Point, Point, GfxInfo FigureGfxInfo);
	virtual void DrawMe(GUI* pOut) const;
};

#endif