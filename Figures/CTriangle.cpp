#include "CTriangle.h"

CTriangle::CTriangle(Point P1, Point P2,Point P3, GfxInfo FigureGfxInfo) :CFigure(FigureGfxInfo)
{
	Top = P1;
	BotLeft = P2;
	BotRight = P3;
}


void CTriangle::DrawMe(GUI* pGUI) const
{
	//Call Output::DrawRect to draw a Square on the screen	
	pGUI->DrawTriangle(Top,BotLeft,BotRight,FigGfxInfo, Selected);


}
bool CTriangle::InPoint(int x, int y)
{

    float Sum = AreaTriangle(Top.x, Top.y, BotLeft.x, BotLeft.y, BotRight.x, BotRight.y); 


     float Area1 = AreaTriangle(x,y, Top.x, Top.y, BotLeft.x, BotLeft.y);

     float Area2 = AreaTriangle(x,y, Top.x, Top.y, BotRight.x, BotRight.y); 

     float Area3 = AreaTriangle(x,y, BotRight.x, BotRight.y, BotLeft.x, BotLeft.y);

	 float sumAreas = Area1 + Area2 + Area3;
	 if (sumAreas == Sum)
		 return true;
	 return false;
     
}

float CTriangle::AreaTriangle(float x1, float y1, float x2, float y2, float x3, float y3)
{
	return abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) * 0.5);
}