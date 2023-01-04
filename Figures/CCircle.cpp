#include "CCircle.h"
#include <cmath>
#include <sstream>
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
	//(x - center_x)² + (y - center_y)² < radius².
	double dx = pow(x - center.x, 2);
	double dy = pow(y - center.y, 2);

	if (dx + dy < pow(reduis,2))
	{
		return true;
	}
	return false;
	
}
void CCircle::PrintMe(GUI* pGUI)
{
	stringstream properties;
	properties << "Points Center: " << "(" << center.x << "," << center.y << ")" << " Radius: " << reduis << " Area: " << 3.14 * pow(reduis, 2);
	pGUI->PrintMessage(properties.str());
}
