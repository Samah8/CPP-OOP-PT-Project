#include "CRectangle.h"

CRectangle::CRectangle(Point P1,Point P2, GfxInfo FigureGfxInfo):CFigure(FigureGfxInfo)
{
	TopLeftCorner = P1;
	BotRightCorner = P2;
}


void CRectangle::DrawMe(GUI* pGUI) const
{
	pGUI->DrawRectangle(TopLeftCorner, BotRightCorner, FigGfxInfo, Selected);
}

bool CRectangle::InPoint(int x, int y)  {

	//Checks if the x & y coordinates lie inside/on the rectangle
	if ((x >= TopLeftCorner.x && x <= BotRightCorner.x) || (x <= TopLeftCorner.x && x >= BotRightCorner.x))
		return true;
		if ((y >= TopLeftCorner.y && y <= BotRightCorner.y) || (y <= TopLeftCorner.y && y >= BotRightCorner.y))
			return true;
}