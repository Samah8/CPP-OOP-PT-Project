#include "CElipse.h"

CElipse::CElipse(Point P1, Point P2, GfxInfo FigureGfxInfo) :CFigure(FigureGfxInfo)
{
	firstPoint = P1;
	secondPoint = P2;

}


void CElipse::DrawMe(GUI* pGUI) const
{
	//Call Output::DrawRect to draw a Square on the screen	
	pGUI->DrawElipse(firstPoint, secondPoint, FigGfxInfo, Selected);


}
