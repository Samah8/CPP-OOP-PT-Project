#include "CElipse.h"
#include <cmath>
#include <sstream>
CElipse::CElipse(Point P1, Point P2, GfxInfo FigureGfxInfo) :CFigure(FigureGfxInfo)
{
	firstPoint = P1;
	secondPoint = P2;

}


void CElipse::DrawMe(GUI* pGUI) const
{
	pGUI->DrawElipse(firstPoint, secondPoint, FigGfxInfo, Selected);
}

//(x - center.x)^2 / a^2 + (y - center.y)^2 / b^2
bool CElipse::InPoint(int x, int y) {
	Point center;
	center.x = 0.5 * (secondPoint.x + firstPoint.x);
	center.y = 0.5 * (secondPoint.y + firstPoint.y);
	float a = abs(secondPoint.x - firstPoint.x) / 2;
	float b = abs(secondPoint.y - firstPoint.y) / 2;
	float check = (pow(x - center.x, 2) / pow(a, 2)) + (pow(y - center.y, 2) / pow(b, 2));
	if (check <= 1)
	{
		return true;
	}
	return false;
}
void CElipse::PrintMe(GUI* pGUI)
{
	stringstream properties;
	properties << "Second Point: " << "(" << secondPoint.x << "," << secondPoint.y << ")" << "First Point: " << " (" << firstPoint.x << "," << firstPoint.y << ")" << "Area: " << 3.14 * a * b;
	pGUI->PrintMessage(properties.str());
}
