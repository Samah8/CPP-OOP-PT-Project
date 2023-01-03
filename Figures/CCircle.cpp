#include "CCircle.h"

CCircle::CCircle(Point _center, int _reduis, GfxInfo FigureGfxInfo) :CFigure(FigureGfxInfo)
{
	center = _center;
	reduis = _reduis;

}


void CCircle::DrawMe(GUI* pGUI) const
{	
	pGUI->DrawCircle(center, reduis, FigGfxInfo, Selected);
}
bool CCircle::InPoint(int x, int y) {
	//(x - center_x)� + (y - center_y)� < radius�.
	double dx = pow(x - center.x, 2);
	double dy = pow(y - center.y, 2);

	if (dx + dy < pow(reduis,2))
	{
		return true;
	}
	return false;
	
}