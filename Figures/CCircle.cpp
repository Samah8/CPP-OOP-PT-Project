#include "CCircle.h"

CCircle::CCircle(Point _center, int _reduis, GfxInfo FigureGfxInfo) :CFigure(FigureGfxInfo)
{
	center = _center;
	reduis = _reduis;

}


void CCircle::DrawMe(GUI* pGUI) const
{
	//Call Output::DrawRect to draw a Square on the screen	
	pGUI->DrawCircle(center, reduis, FigGfxInfo, Selected);
}