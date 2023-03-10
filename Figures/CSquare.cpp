#include "CSquare.h"
#include <cmath>
#include <sstream>
CSquare::CSquare(Point P1, int len, GfxInfo FigureGfxInfo):CFigure(FigureGfxInfo)
{
	TopLeftCorner = P1;
	length = len;
}
	

void CSquare::DrawMe(GUI* pGUI) const
{
	//Call Output::DrawRect to draw a Square on the screen	
	pGUI->DrawSquare(TopLeftCorner, length, FigGfxInfo, Selected);
	
}
bool CSquare::InPoint(int x, int y) {

	//Checks if the x & y coordinates lie inside/on the rectangle
	if (x >= TopLeftCorner.x && x <= TopLeftCorner.x + length &&
		y >= TopLeftCorner.y && TopLeftCorner.y + length)
		return true;
	return false;
}
void CSquare::PrintMe(GUI* pGUI)
{
	stringstream properties;
	properties << "Points:" << " (" << TopLeftCorner.x << "," << TopLeftCorner.y << ") " << "Area: " << pow(length, 2) / 2;
	pGUI->PrintMessage(properties.str());
}